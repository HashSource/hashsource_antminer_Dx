int __fastcall sub_94F4C(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r4
  char *v4; // r3
  int v5; // r5
  unsigned int v6; // r2
  int v8; // r0
  _QWORD *v9; // r4
  _QWORD *v10; // r8
  int v11; // r0
  int v12; // r12
  int v13; // r2
  int v14; // r2
  unsigned int v16; // [sp+18h] [bp-68h]
  int v17; // [sp+20h] [bp-60h]
  char *v18; // [sp+24h] [bp-5Ch]
  _DWORD v20[4]; // [sp+2Ch] [bp-54h] BYREF
  __int16 v21; // [sp+3Ch] [bp-44h] BYREF
  char v22[20]; // [sp+40h] [bp-40h] BYREF
  _QWORD v23[5]; // [sp+54h] [bp-2Ch] BYREF
  char v24[4100]; // [sp+80h] [bp+0h] BYREF

  v3 = a3;
  v16 = a3;
  v20[1] = 100991489;
  v20[2] = 235735561;
  v20[3] = 134677248;
  v21 = 3851;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v24, 0x1000u, 0, "%s phy_num %d...", "check_bist_tx_running", 14);
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
    v24);
  if ( v3 )
  {
    v4 = (char *)v20 + 3;
    v20[0] = (char *)&v21 + 1;
    do
    {
      v5 = 0;
      v6 = 0;
      v18 = v4 + 1;
      v17 = (unsigned __int8)v4[1];
      do
      {
        if ( v6 > 3 || v17 != 3 )
        {
          v8 = sub_C20C4(a1, v17, (unsigned __int16)((_WORD)v6 << 12) | 0x4A, (int)v22);
          if ( v8 > 0 )
          {
            v9 = v23;
            v10 = &v23[v8];
            do
            {
              v14 = *((_DWORD *)v9 - 4);
              __pld(v9);
              if ( (v14 & 0x200) != 0 )
              {
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(
                  v24,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x tx bist is running",
                  v5,
                  *((unsigned __int8 *)v9 - 20),
                  *((unsigned __int8 *)v9 - 19));
                pthread_mutex_unlock(&stru_1A8A24);
                v11 = g_zc;
                v12 = 20;
                v13 = 8914;
              }
              else
              {
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(
                  v24,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
                  v5,
                  *((unsigned __int8 *)v9 - 20),
                  *((unsigned __int8 *)v9 - 19),
                  *((_DWORD *)v9 - 4));
                pthread_mutex_unlock(&stru_1A8A24);
                v11 = g_zc;
                v12 = 100;
                v13 = 8917;
              }
              ++v9;
              zlog(
                v11,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "check_bist_tx_running",
                21,
                v13,
                v12,
                v24);
            }
            while ( v10 != v9 );
          }
        }
        v6 = (unsigned __int16)++v5;
      }
      while ( v16 > (unsigned __int16)v5 );
      v4 = v18;
    }
    while ( v18 != (char *)v20[0] );
  }
  return 0;
}
