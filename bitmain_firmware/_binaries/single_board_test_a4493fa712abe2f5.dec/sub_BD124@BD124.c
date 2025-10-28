int __fastcall sub_BD124(_DWORD *a1, int a2, unsigned __int16 a3)
{
  int v5; // r5
  unsigned int v6; // r2
  int v8; // r0
  unsigned __int8 *v9; // r7
  unsigned __int8 *v10; // r4
  int v11; // r3
  __int16 v13; // [sp+10h] [bp-1074h]
  unsigned int v14; // [sp+20h] [bp-1064h]
  int v15; // [sp+24h] [bp-1060h]
  char *v16; // [sp+28h] [bp-105Ch]
  _DWORD v17[4]; // [sp+2Ch] [bp-1058h] BYREF
  __int16 v18; // [sp+3Ch] [bp-1048h] BYREF
  _QWORD v19[8]; // [sp+40h] [bp-1044h] BYREF
  char v20[4100]; // [sp+80h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v20, 0x1000u, 0, "%s...", "check_bist_done");
  pthread_mutex_unlock(&stru_3B526C);
  v14 = a3;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
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
    v16 = (char *)v17 + 3;
    v17[0] = (char *)&v18 + 1;
    do
    {
      v5 = 0;
      v15 = (unsigned __int8)*++v16;
      v6 = 0;
      do
      {
        while ( 1 )
        {
          if ( v6 > 3 || v15 != 3 )
          {
            v8 = sub_D47F8(a1, v15, (unsigned __int16)((_WORD)v6 << 12) | 0x11, (int)v19);
            if ( v8 > 0 )
              break;
          }
          v6 = (unsigned __int16)++v5;
          if ( (unsigned __int16)v5 >= v14 )
            goto LABEL_16;
        }
        v13 = v5;
        v9 = (unsigned __int8 *)&v19[v8];
        v10 = (unsigned __int8 *)v19;
        do
        {
          v11 = *((_DWORD *)v10 + 1);
          if ( (v11 & 0x20000) != 0 || (v11 & 0x400) == 0 )
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v20,
              0x1000u,
              0,
              "chain %d channel %1x, chip_id %02x core_id %02x bist error",
              a1[30],
              v5,
              *v10,
              v10[1]);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_bist_done",
              15,
              9014,
              100,
              v20);
          }
          v10 += 8;
        }
        while ( v9 != v10 );
        ++v5;
        v6 = (unsigned __int16)(v13 + 1);
      }
      while ( v6 < v14 );
LABEL_16:
      ;
    }
    while ( v16 != (char *)v17[0] );
  }
  return 0;
}
