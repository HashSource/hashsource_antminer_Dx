unsigned int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v4; // r9
  unsigned int v5; // r4
  unsigned int v6; // r10
  unsigned int v7; // lr
  unsigned int v8; // r5
  unsigned int *v9; // r6
  unsigned int v10; // r7
  unsigned int v11; // r2
  int v12; // r3
  unsigned int v13; // r3
  int v14; // r4
  unsigned int *v15; // r6
  int v16; // r3
  unsigned int result; // r0
  unsigned int *v19; // [sp+14h] [bp-1010h]
  char v20[4100]; // [sp+20h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v20, 0x1000u, 0, " xxtea encode input data length <= 1");
    pthread_mutex_unlock(&stru_3B526C);
    return zlog(
             g_zc,
             "/home/xingfei.wang/work/1764/godminer/common/general/xxtea.c",
             60,
             "xxtea_encode",
             12,
             24,
             100,
             v20);
  }
  else
  {
    v19 = &a1[a2 - 1];
    v4 = a2 - 1;
    v5 = *v19;
    v6 = 0;
    do
    {
      v6 -= 1640531527;
      v7 = v6 >> 2;
      if ( v4 <= 2 )
      {
        v8 = 0;
      }
      else
      {
        v8 = 0;
        v9 = a1 + 10;
        v10 = *a1;
        do
        {
          v11 = *(v9 - 9);
          v12 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 3));
          __pld(v9);
          v13 = (((v12 ^ v5) + (v6 ^ v11)) ^ (((16 * v5) ^ (v11 >> 3)) + ((4 * v11) ^ (v5 >> 5)))) + v10;
          v10 = *(v9 - 8);
          *(v9 - 10) = v13;
          v14 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)(v8 + 1)) & 3));
          v8 += 2;
          v5 = (((v13 ^ v14) + (v6 ^ v10)) ^ (((v10 >> 3) ^ (16 * v13)) + ((v13 >> 5) ^ (4 * v10)))) + v11;
          v9 += 2;
          *(v9 - 11) = v5;
        }
        while ( ((a2 - 4) & 0xFFFFFFFE) + 2 != v8 );
      }
      v15 = &a1[v8];
      do
      {
        v16 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)v8++) & 3));
        v5 = *v15 + (((v16 ^ v5) + (v6 ^ v15[1])) ^ (((v15[1] >> 3) ^ (16 * v5)) + ((v5 >> 5) ^ (4 * v15[1]))));
        *v15++ = v5;
      }
      while ( v4 > v8 );
      result = v6 ^ *a1;
      v5 = (((v5 ^ *(_DWORD *)(a3 + 4 * (((unsigned __int8)v7 ^ (unsigned __int8)v4) & 3))) + result)
          ^ (((4 * *a1) ^ (v5 >> 5)) + ((16 * v5) ^ (*a1 >> 3))))
         + *v19;
      *v19 = v5;
    }
    while ( v6 != -1253254570 - 1640531527 * (0x34 / a2) );
  }
  return result;
}
