int __fastcall check_bist_tx_running(int a1, int a2, int a3, int a4)
{
  char *v4; // r7
  unsigned __int16 v5; // r4
  int *v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r5
  unsigned int v13; // r2
  int v15; // r0
  _QWORD *v16; // r4
  _QWORD *v17; // r8
  int v18; // r0
  int v19; // r12
  int v20; // r2
  int v21; // r2
  unsigned int v24; // [sp+18h] [bp-70h]
  int v25; // [sp+24h] [bp-64h]
  int v26; // [sp+28h] [bp-60h]
  int v29; // [sp+34h] [bp-54h]
  _DWORD v30[3]; // [sp+38h] [bp-50h] BYREF
  __int16 v31; // [sp+44h] [bp-44h]
  char v32[20]; // [sp+48h] [bp-40h] BYREF
  _QWORD v33[5]; // [sp+5Ch] [bp-2Ch] BYREF
  _BYTE v34[4100]; // [sp+88h] [bp+0h] BYREF

  v5 = a4;
  if ( a3 != 255 )
    a4 = 1;
  if ( a3 != 255 )
    v4 = v34;
  if ( a3 == 255 )
  {
    LOWORD(v6) = -15620;
    v4 = v34;
    HIWORD(v6) = (unsigned int)" = %d.\n" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v29 = 14;
    v30[0] = v7;
    v30[1] = v8;
    v30[2] = v9;
    v31 = v10;
  }
  else
  {
    v29 = a4;
  }
  pthread_mutex_lock(&stru_1A8A24);
  v24 = v5;
  logfmt_raw(v4, 0x1000u, 0, 1542560, 1542020, v29);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_tx_running",
    21,
    8896,
    60,
    v4);
  v26 = 0;
  do
  {
    v11 = a3;
    if ( a3 == 255 )
      v11 = *((unsigned __int8 *)v30 + v26);
    v25 = v11;
    if ( v24 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        if ( v13 > 3 || v25 != 3 )
        {
          v15 = sub_C20C4(a1, v25, (unsigned __int16)((_WORD)v13 << 12) | 0x4A, (int)v32);
          if ( v15 > 0 )
          {
            v16 = v33;
            v17 = &v33[v15];
            do
            {
              v21 = *((_DWORD *)v16 - 4);
              __pld(v16);
              if ( (v21 & 0x200) != 0 )
              {
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(v4, 0x1000u, 0, 1542580, v12, *((unsigned __int8 *)v16 - 20), *((unsigned __int8 *)v16 - 19));
                pthread_mutex_unlock(&stru_1A8A24);
                v18 = g_zc;
                v19 = 20;
                v20 = 8914;
              }
              else
              {
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(
                  v4,
                  0x1000u,
                  0,
                  1542640,
                  v12,
                  *((unsigned __int8 *)v16 - 20),
                  *((unsigned __int8 *)v16 - 19),
                  *((_DWORD *)v16 - 4));
                pthread_mutex_unlock(&stru_1A8A24);
                v18 = g_zc;
                v19 = 100;
                v20 = 8917;
              }
              ++v16;
              zlog(
                v18,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "check_bist_tx_running",
                21,
                v20,
                v19,
                v4);
            }
            while ( v17 != v16 );
          }
        }
        v13 = (unsigned __int16)++v12;
      }
      while ( v24 > (unsigned __int16)v12 );
    }
  }
  while ( v29 != ++v26 );
  return 0;
}
