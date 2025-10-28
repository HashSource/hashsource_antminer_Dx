int __fastcall sub_49E5C(int a1, int a2, unsigned __int16 a3)
{
  char *v5; // r3
  int v6; // r5
  unsigned int v7; // r2
  int v9; // r0
  unsigned __int8 *v10; // r7
  unsigned __int8 *v11; // r4
  int v12; // r3
  unsigned int v14; // [sp+20h] [bp-1064h]
  int v15; // [sp+24h] [bp-1060h]
  char *v16; // [sp+28h] [bp-105Ch]
  _DWORD v17[4]; // [sp+2Ch] [bp-1058h] BYREF
  __int16 v18; // [sp+3Ch] [bp-1048h] BYREF
  _QWORD v19[8]; // [sp+40h] [bp-1044h] BYREF
  char v20[4100]; // [sp+80h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v20, 0x1000u, 0, "%s...", "check_bist_done");
  pthread_mutex_unlock(&stru_197BB8);
  v14 = a3;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_done",
    15,
    8992,
    60,
    v20);
  v17[1] = 100991489;
  v17[2] = 235735561;
  v17[3] = 134677248;
  v18 = 3851;
  if ( a3 )
  {
    v5 = (char *)v17 + 3;
    v17[0] = (char *)&v18 + 1;
    do
    {
      v6 = 0;
      v7 = 0;
      v16 = v5 + 1;
      v15 = (unsigned __int8)v5[1];
      do
      {
        if ( v7 > 3 || v15 != 3 )
        {
          v9 = sub_13415C(a1, v15, (unsigned __int16)((_WORD)v7 << 12) | 0x11, (int)v19);
          if ( v9 > 0 )
          {
            v10 = (unsigned __int8 *)&v19[v9];
            v11 = (unsigned __int8 *)v19;
            do
            {
              v12 = *((_DWORD *)v11 + 1);
              if ( (v12 & 0x20000) != 0 || (v12 & 0x400) == 0 )
              {
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw(
                  v20,
                  0x1000u,
                  0,
                  "chain %d channel %1x, chip_id %02x core_id %02x bist error",
                  *(_DWORD *)(a1 + 120),
                  v6,
                  *v11,
                  v11[1]);
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_bist_done",
                  15,
                  9014,
                  100,
                  v20);
              }
              v11 += 8;
            }
            while ( v10 != v11 );
          }
        }
        v7 = (unsigned __int16)++v6;
      }
      while ( (unsigned __int16)v6 < v14 );
      v5 = v16;
    }
    while ( v16 != (char *)v17[0] );
  }
  return 0;
}
