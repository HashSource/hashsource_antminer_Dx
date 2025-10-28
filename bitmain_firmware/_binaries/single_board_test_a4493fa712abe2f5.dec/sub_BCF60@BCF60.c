int __fastcall sub_BCF60(_DWORD *a1, int a2, unsigned __int16 a3)
{
  int v4; // r5
  unsigned int v5; // r2
  int v7; // r0
  _QWORD *v8; // r4
  _QWORD *v9; // r8
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r2
  unsigned int v15; // [sp+18h] [bp-68h]
  int v16; // [sp+20h] [bp-60h]
  char *v17; // [sp+24h] [bp-5Ch]
  _DWORD v19[4]; // [sp+2Ch] [bp-54h] BYREF
  __int16 v20; // [sp+3Ch] [bp-44h] BYREF
  _BYTE v21[20]; // [sp+40h] [bp-40h] BYREF
  _QWORD v22[5]; // [sp+54h] [bp-2Ch] BYREF
  char v23[4100]; // [sp+80h] [bp+0h] BYREF

  v15 = a3;
  v19[1] = 100991489;
  v19[2] = 235735561;
  v19[3] = 134677248;
  v20 = 3851;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v23, 0x1000u, 0, "%s phy_num %d...", "check_bist_tx_running", 14);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_bist_tx_running",
    21,
    8896,
    60,
    v23);
  if ( a3 )
  {
    v17 = (char *)v19 + 3;
    v19[0] = (char *)&v20 + 1;
    do
    {
      v4 = 0;
      v16 = (unsigned __int8)*++v17;
      v5 = 0;
      do
      {
        if ( v5 > 3 || v16 != 3 )
        {
          v7 = sub_D47F8(a1, v16, (unsigned __int16)((_WORD)v5 << 12) | 0x4A, (int)v21);
          if ( v7 > 0 )
          {
            v8 = v22;
            v9 = &v22[v7];
            do
            {
              v13 = *((_DWORD *)v8 - 4);
              __pld(v8);
              if ( (v13 & 0x200) != 0 )
              {
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(
                  v23,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x tx bist is running",
                  v4,
                  *((unsigned __int8 *)v8 - 20),
                  *((unsigned __int8 *)v8 - 19));
                pthread_mutex_unlock(&stru_3B526C);
                v10 = g_zc;
                v11 = 20;
                v12 = 8914;
              }
              else
              {
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(
                  v23,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
                  v4,
                  *((unsigned __int8 *)v8 - 20),
                  *((unsigned __int8 *)v8 - 19),
                  *((_DWORD *)v8 - 4));
                pthread_mutex_unlock(&stru_3B526C);
                v10 = g_zc;
                v11 = 100;
                v12 = 8917;
              }
              ++v8;
              zlog(
                v10,
                "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
                71,
                "check_bist_tx_running",
                21,
                v12,
                v11,
                v23);
            }
            while ( v9 != v8 );
          }
        }
        v5 = (unsigned __int16)++v4;
      }
      while ( v15 > (unsigned __int16)v4 );
    }
    while ( v17 != (char *)v19[0] );
  }
  return 0;
}
