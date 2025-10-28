int __fastcall check_bist_tx_running(int a1, int a2, int a3, int a4)
{
  char *v4; // r7
  unsigned __int16 v5; // r4
  int v6; // r3
  int v7; // r5
  unsigned int v8; // r2
  int v10; // r0
  _QWORD *v11; // r4
  _QWORD *v12; // r8
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v16; // r2
  unsigned int v19; // [sp+18h] [bp-70h]
  int v20; // [sp+24h] [bp-64h]
  int v21; // [sp+28h] [bp-60h]
  int v24; // [sp+34h] [bp-54h]
  _DWORD v25[3]; // [sp+38h] [bp-50h] BYREF
  __int16 v26; // [sp+44h] [bp-44h]
  char v27[20]; // [sp+48h] [bp-40h] BYREF
  _QWORD v28[5]; // [sp+5Ch] [bp-2Ch] BYREF
  _BYTE v29[4100]; // [sp+88h] [bp+0h] BYREF

  v5 = a4;
  if ( a3 != 255 )
    a4 = 1;
  if ( a3 != 255 )
    v4 = v29;
  if ( a3 == 255 )
  {
    v4 = v29;
    v24 = 14;
    v25[0] = 100991489;
    v25[1] = 235735561;
    v25[2] = 134677248;
    v26 = 3851;
  }
  else
  {
    v24 = a4;
  }
  pthread_mutex_lock(&stru_197BB8);
  v19 = v5;
  logfmt_raw(v4, 0x1000u, 0, "%s phy_num %d...", "check_bist_tx_running", v24);
  pthread_mutex_unlock(&stru_197BB8);
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
  v21 = 0;
  do
  {
    v6 = a3;
    if ( a3 == 255 )
      v6 = *((unsigned __int8 *)v25 + v21);
    v20 = v6;
    if ( v19 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( v8 > 3 || v20 != 3 )
        {
          v10 = sub_13415C(a1, v20, (unsigned __int16)((_WORD)v8 << 12) | 0x4A, (int)v27);
          if ( v10 > 0 )
          {
            v11 = v28;
            v12 = &v28[v10];
            do
            {
              v16 = *((_DWORD *)v11 - 4);
              __pld(v11);
              if ( (v16 & 0x200) != 0 )
              {
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw(
                  v4,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x tx bist is running",
                  v7,
                  *((unsigned __int8 *)v11 - 20),
                  *((unsigned __int8 *)v11 - 19));
                pthread_mutex_unlock(&stru_197BB8);
                v13 = g_zc;
                v14 = 20;
                v15 = 8914;
              }
              else
              {
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw(
                  v4,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
                  v7,
                  *((unsigned __int8 *)v11 - 20),
                  *((unsigned __int8 *)v11 - 19),
                  *((_DWORD *)v11 - 4));
                pthread_mutex_unlock(&stru_197BB8);
                v13 = g_zc;
                v14 = 100;
                v15 = 8917;
              }
              ++v11;
              zlog(
                v13,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "check_bist_tx_running",
                21,
                v15,
                v14,
                v4);
            }
            while ( v12 != v11 );
          }
        }
        v8 = (unsigned __int16)++v7;
      }
      while ( v19 > (unsigned __int16)v7 );
    }
  }
  while ( v24 != ++v21 );
  return 0;
}
