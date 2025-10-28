unsigned int __fastcall xxtea_decode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v5; // r10
  int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r9
  unsigned int v9; // r11
  unsigned int *v10; // r4
  int v11; // lr
  unsigned int v12; // r5
  unsigned int v13; // r2
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r3
  unsigned int *v17; // r5
  int v18; // r4
  int v19; // r12
  unsigned int result; // r0
  unsigned int *v21; // [sp+14h] [bp-1020h]
  unsigned int v22; // [sp+18h] [bp-101Ch]
  unsigned int *v23; // [sp+28h] [bp-100Ch]
  unsigned int *v24; // [sp+2Ch] [bp-1008h]
  char v25[4100]; // [sp+30h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v25, 0x1000u, 0, 1606928);
    pthread_mutex_unlock(&stru_1A8A24);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/common/general/xxtea.c",
             143,
             "xxtea_decode",
             12,
             53,
             100,
             v25);
  }
  else
  {
    v5 = -1640531527 * (0x34 / a2 + 6);
    v6 = a2 + 0x3FFFFFFF;
    v7 = *a1;
    v21 = &a1[v6];
    v22 = v5 + 1640531527 * (0x34 / a2) + 1253254570;
    v24 = &a1[v6 + 1];
    v23 = &a1[v6 - 9];
    do
    {
      v8 = a2 - 2;
      v9 = v5 >> 2;
      if ( a2 - 2 <= 1 )
      {
        v11 = a2 - 1;
      }
      else
      {
        v10 = v23;
        v11 = a2 - 1;
        v12 = *(v24 - 1);
        do
        {
          v13 = v10[8];
          v14 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v9 ^ (unsigned __int8)v11) & 3));
          __pld(v10);
          v11 -= 2;
          v15 = v12 - (((v14 ^ v13) + (v5 ^ v7)) ^ (((4 * v7) ^ (v13 >> 5)) + ((16 * v13) ^ (v7 >> 3))));
          v12 = v10[7];
          v10[9] = v15;
          v16 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 3));
          v8 -= 2;
          v10 -= 2;
          v7 = v13 - (((v16 ^ v12) + (v5 ^ v15)) ^ (((v15 >> 3) ^ (16 * v12)) + ((v12 >> 5) ^ (4 * v15))));
          v10[10] = v7;
        }
        while ( v8 > 1 );
      }
      v17 = &a1[v11];
      do
      {
        v18 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v9 ^ (unsigned __int8)v11--) & 3));
        v7 = *v17
           - (((*(v17 - 1) ^ v18) + (v5 ^ v7)) ^ (((v7 >> 3) ^ (16 * *(v17 - 1))) + ((*(v17 - 1) >> 5) ^ (4 * v7))));
        *v17-- = v7;
      }
      while ( v11 );
      v19 = v5 ^ v7;
      v5 += 1640531527;
      result = 16 * *v21;
      v7 = *a1 - (((*v21 ^ *(_DWORD *)(a3 + 4 * (v9 & 3))) + v19) ^ (((4 * v7) ^ (*v21 >> 5)) + (result ^ (v7 >> 3))));
      *a1 = v7;
    }
    while ( v5 != v22 );
  }
  return result;
}
