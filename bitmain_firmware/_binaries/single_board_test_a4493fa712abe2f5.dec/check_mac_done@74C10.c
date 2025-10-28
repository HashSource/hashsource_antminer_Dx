int __fastcall check_mac_done(_DWORD *a1, int a2, char *a3, int a4)
{
  char *v5; // r4
  unsigned __int8 v6; // r8
  int v8; // r0
  int v9; // r1
  int v10; // r2
  unsigned __int8 *v11; // r5
  __int16 v12; // r3
  char *v13; // r3
  int v14; // r8
  int v15; // r0
  _DWORD *v16; // r4
  int v17; // r0
  int v18; // r2
  bool v19; // zf
  bool v20; // zf
  int v21; // r3
  int v22; // r7
  int v23; // r7
  int v24; // r0
  int v25; // r2
  _BOOL4 v27; // r3
  int v28; // [sp+4h] [bp-1040h]
  char *v29; // [sp+10h] [bp-1034h]
  int v30; // [sp+14h] [bp-1030h]
  int v31; // [sp+20h] [bp-1024h]
  int v33; // [sp+28h] [bp-101Ch]
  _DWORD v34[4]; // [sp+30h] [bp-1014h] BYREF
  char v35[4100]; // [sp+40h] [bp-1004h] BYREF

  v5 = "check_mac_done";
  v6 = (unsigned __int8)a3;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v35, 0x1000u, 0, "%s...", "check_mac_done");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_mac_done",
    14,
    427,
    60,
    v35);
  sub_70324((int)a1, v6, 149, 0);
  sub_70324((int)a1, v6, 151, 0);
  sub_70324((int)a1, v6, 153, 0);
  sub_70324((int)a1, v6, 87, 255);
  sub_70324((int)a1, v6, 159, 0);
  sub_70324((int)a1, v6, 133, 805306367);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v5 = a3;
      sub_70324((int)a1, (unsigned __int8)a3, 134, 0xFFFFFFF);
      sub_70324((int)a1, (unsigned __int8)a3, 132, -2147483647);
    }
  }
  else
  {
    v5 = a3;
    sub_70324((int)a1, (unsigned __int8)a3, 134, 0xFFFFFFF);
    sub_70324((int)a1, (unsigned __int8)a3, 132, 17);
  }
  sleep(8u);
  v8 = (int)malloc(0x600u);
  v11 = (unsigned __int8 *)v8;
  memset(v34, 0, sizeof(v34));
  if ( a3 == (char *)255 )
  {
    v33 = 14;
    v8 = 100991489;
    v9 = 235735561;
    v10 = 134677248;
    v12 = 3851;
    v5 = (char *)v34;
  }
  else
  {
    v12 = 1;
    v33 = 1;
  }
  if ( a3 == (char *)255 )
  {
    *(_DWORD *)v5 = v8;
    *((_DWORD *)v5 + 1) = v9;
    *((_DWORD *)v5 + 2) = v10;
    *((_WORD *)v5 + 6) = v12;
  }
  v31 = 0;
  do
  {
    v13 = a3;
    if ( a3 == (char *)255 )
      v13 = (char *)*((unsigned __int8 *)v34 + v31);
    v29 = v13;
    v14 = (unsigned __int16)v13;
    off_129480(a1[30]);
    v15 = sub_73570(a1, v14, 139, v11);
    if ( v15 > 0 )
    {
      v16 = v11 + 16;
      v30 = (int)&v11[12 * v15 + 16];
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = *(v16 - 4);
          __pld(v16);
          v22 = *((unsigned __int8 *)v16 - 12);
          if ( (v21 & 0xFF000000) == 0xFF000000 )
            break;
          __pld(v16 - 1);
          pthread_mutex_lock(&stru_3B526C);
          v28 = v22;
          v23 = 60;
          logfmt_raw(
            v35,
            0x1000u,
            0,
            "chain %d xxxxxxxxxx chip %02x core %02x mac bist not done(%08x) xxxxxxxxxxx",
            a1[30],
            v28,
            *((unsigned __int8 *)v16 - 8),
            bswap32(*(v16 - 4)));
          pthread_mutex_unlock(&stru_3B526C);
          v24 = g_zc;
          v25 = 532;
LABEL_36:
          v16 += 3;
          zlog(
            v24,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_mac_done",
            14,
            v25,
            v23,
            v35);
          if ( (_DWORD *)v30 == v16 )
            goto LABEL_37;
        }
        if ( (unsigned __int8)v21 == 255 )
          break;
        if ( v29 == (char *)3 )
        {
          if ( (*(v16 - 4) & 0xF0) == 0xF0 )
          {
            sub_74894((int)a1, v22, 3, 135, v11);
            goto LABEL_23;
          }
LABEL_43:
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v35,
            0x1000u,
            0,
            "chain %d chip %02x core %02x mac bist status %02x",
            a1[30],
            *((unsigned __int8 *)v16 - 12),
            *((unsigned __int8 *)v16 - 8),
            *(v16 - 4) & 0xF0);
          pthread_mutex_unlock(&stru_3B526C);
          v17 = g_zc;
          v18 = 491;
          goto LABEL_17;
        }
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v35,
          0x1000u,
          0,
          "chain %d chip %02x core %02x mac bist status %02x",
          a1[30],
          *((unsigned __int8 *)v16 - 12),
          *((unsigned __int8 *)v16 - 8),
          *((unsigned __int8 *)v16 - 16));
        pthread_mutex_unlock(&stru_3B526C);
        v17 = g_zc;
        v18 = 488;
LABEL_17:
        zlog(
          v17,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "check_mac_done",
          14,
          v18,
          100,
          v35);
LABEL_18:
        if ( sub_74894((int)a1, v22, v14, 135, v11) )
        {
          v19 = *(_DWORD *)v11 == 0;
          if ( *(_DWORD *)v11 )
            v19 = v29 == (char *)3;
          if ( !v19 )
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v35,
              0x1000u,
              0,
              "chain %d channel[0~3] chip %02x core %02x reg 0x87 mac bist err cnt %08x",
              a1[30],
              v11[4],
              v11[8],
              bswap32(*(_DWORD *)v11));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_mac_done",
              14,
              497,
              100,
              v35);
          }
        }
LABEL_23:
        if ( sub_74894((int)a1, v22, v14, 136, v11) && *(_DWORD *)v11 )
        {
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v35,
            0x1000u,
            0,
            "chain %d channel[4~7] chip %02x core %02x reg 0x88 mac bist err cnt %08x",
            a1[30],
            v11[4],
            v11[8],
            bswap32(*(_DWORD *)v11));
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_mac_done",
            14,
            506,
            100,
            v35);
        }
        if ( sub_74894((int)a1, v22, v14, 137, v11) )
        {
          v20 = *(_DWORD *)v11 == 0;
          if ( *(_DWORD *)v11 )
            v20 = v29 == (char *)3;
          if ( !v20 )
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v35,
              0x1000u,
              0,
              "chain %d channel[0~3] chip %02x core %02x reg 0x89 mac bist lost cnt %08x",
              a1[30],
              v11[4],
              v11[8],
              bswap32(*(_DWORD *)v11));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_mac_done",
              14,
              515,
              100,
              v35);
          }
        }
        if ( sub_74894((int)a1, v22, v14, 138, v11) && *(_DWORD *)v11 )
        {
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v35,
            0x1000u,
            0,
            "chain %d channel[4~7] chip %02x core %02x reg 0x8a mac bist lost cnt %08x",
            a1[30],
            v11[4],
            v11[8],
            bswap32(*(_DWORD *)v11));
          v23 = 100;
          pthread_mutex_unlock(&stru_3B526C);
          v24 = g_zc;
          v25 = 524;
          goto LABEL_36;
        }
        v16 += 3;
        if ( (_DWORD *)v30 == v16 )
          goto LABEL_37;
      }
      v27 = (*(v16 - 4) & 0xF0) != 240;
      if ( v29 != (char *)3 )
        v27 = 0;
      if ( !v27 )
        goto LABEL_18;
      goto LABEL_43;
    }
LABEL_37:
    v19 = v33 == ++v31;
  }
  while ( !v19 );
  free(v11);
  return 0;
}
