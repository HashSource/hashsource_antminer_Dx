int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v4; // r4
  unsigned int v5; // r8
  unsigned int v6; // r10
  unsigned int v7; // r9
  unsigned int v8; // r12
  unsigned int v9; // r5
  unsigned int *v10; // lr
  unsigned int v11; // r2
  int v12; // r3
  unsigned int v13; // r3
  int v14; // r4
  unsigned int *v15; // r5
  int v16; // r3
  int result; // r0
  int *v19; // [sp+14h] [bp-1010h]
  char v20[4100]; // [sp+20h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v20, 0x1000u, 0, " xxtea encode input data length <= 1");
    pthread_mutex_unlock(&stru_197BB8);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/common/general/xxtea.c",
             143,
             "xxtea_encode",
             12,
             24,
             100,
             v20);
  }
  else
  {
    v4 = a1[a2 - 1];
    v19 = (int *)&a1[a2 - 1];
    v5 = a2 - 1;
    v6 = 0;
    do
    {
      v6 -= 1640531527;
      v7 = v6 >> 2;
      if ( v5 <= 2 )
      {
        v8 = 0;
      }
      else
      {
        v8 = 0;
        v10 = a1 + 10;
        v9 = *a1;
        do
        {
          v11 = *(v10 - 9);
          v12 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 3));
          __pld(v10);
          v13 = (((v12 ^ v4) + (v6 ^ v11)) ^ (((4 * v11) ^ (v4 >> 5)) + ((16 * v4) ^ (v11 >> 3)))) + v9;
          v9 = *(v10 - 8);
          *(v10 - 10) = v13;
          v14 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)(v8 + 1) ^ (unsigned __int8)v7) & 3));
          v8 += 2;
          v4 = (((v13 ^ v14) + (v6 ^ v9)) ^ (((v9 >> 3) ^ (16 * v13)) + ((v13 >> 5) ^ (4 * v9)))) + v11;
          v10 += 2;
          *(v10 - 11) = v4;
        }
        while ( ((a2 - 4) & 0xFFFFFFFE) + 2 != v8 );
      }
      v15 = &a1[v8];
      do
      {
        v16 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)v8++) & 3));
        v4 = (((v16 ^ v4) + (v6 ^ v15[1])) ^ (((v15[1] >> 3) ^ (16 * v4)) + ((v4 >> 5) ^ (4 * v15[1])))) + *v15;
        *v15++ = v4;
      }
      while ( v5 > v8 );
      result = *v19;
      v4 = (((*(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)v5) & 3)) ^ v4) + (v6 ^ *a1))
          ^ (((4 * *a1) ^ (v4 >> 5)) + ((16 * v4) ^ (*a1 >> 3))))
         + *v19;
      *v19 = v4;
    }
    while ( v6 != -1253254570 - 1640531527 * (0x34 / a2) );
  }
  return result;
}
