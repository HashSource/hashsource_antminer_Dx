int __fastcall membist0(int a1)
{
  int v1; // r4
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r3
  int v6; // r12
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r4
  int v10; // r6
  int v11; // r3
  unsigned int v12; // r1
  int v13; // r12
  int v14; // r0
  int v15; // r2
  int v16; // r0
  _DWORD *v17; // r4
  int v18; // r6
  int v19; // r3
  unsigned int v20; // r1
  int v21; // r12
  int v22; // r0
  int v23; // r2
  unsigned int *v24; // r4
  int *v25; // r10
  unsigned int v26; // r6
  unsigned int v27; // t1
  int v28; // r2
  int v29; // t1
  unsigned __int64 v30; // kr08_8
  char *v31; // r3
  size_t v32; // r0
  int v34; // r2
  int v36; // [sp+18h] [bp-127Ch]
  int v37; // [sp+1Ch] [bp-1278h]
  char *ptr; // [sp+20h] [bp-1274h]
  int *v39; // [sp+30h] [bp-1264h]
  _DWORD v40[5]; // [sp+3Ch] [bp-1258h] BYREF
  char src[64]; // [sp+50h] [bp-1244h] BYREF
  _DWORD s[128]; // [sp+90h] [bp-1204h] BYREF
  int v43; // [sp+290h] [bp-1004h] BYREF
  int v44; // [sp+294h] [bp-1000h]
  int v45; // [sp+298h] [bp-FFCh]
  int v46; // [sp+29Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v43, 0x1000u, 0, "%s...", "membist0");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "membist0",
    8,
    11542,
    60,
    &v43);
  v36 = 0;
  v40[0] = -2023406815;
  v40[1] = 1266163410;
  v40[2] = 2015285835;
  v40[3] = 517098360;
  v39 = v40;
  v40[4] = -766805986;
  memset(s, 0, sizeof(s));
  ptr = (char *)malloc(0x600u);
  do
  {
    v37 = 0;
    pthread_mutex_lock(&stru_3B526C);
    v1 = *v39++;
    logfmt_raw((char *)&v43, 0x1000u, 0, "membist final pattern %08x", v1);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "membist0",
      8,
      11550,
      60,
      &v43);
    v43 = v1;
    v46 = 255;
    v44 = 0;
    v45 = 10747905;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v43);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    do
    {
      v45 = 786433;
      v44 = 0;
      v46 = (unsigned __int8)v37;
      v43 = 1;
      (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v43);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v45 = 10485761;
      v44 = 0;
      v46 = (unsigned __int8)v37;
      v43 = 3;
      (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v43);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v2 = sub_73570((_DWORD *)a1, (unsigned __int16)v37, 161, ptr);
      if ( v2 > 0 )
      {
        v3 = ptr + 28;
        v4 = (int)&ptr[12 * v2 + 28];
        do
        {
          while ( 1 )
          {
            v5 = *(v3 - 7);
            if ( (v5 & 0x80) != 0 )
              break;
            __pld(v3);
            pthread_mutex_lock(&stru_3B526C);
            v6 = *((unsigned __int8 *)v3 - 24);
            v7 = *((unsigned __int8 *)v3 - 20);
            v3 += 3;
            logfmt_raw((char *)&v43, 0x1000u, 0, "chip %02x core %02x membist not done!", v6, v7);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "membist0",
              8,
              11566,
              100,
              &v43);
            if ( (_DWORD *)v4 == v3 )
              goto LABEL_10;
          }
          if ( (v5 & 0xFFFFFF00) != 0 )
          {
            __pld(v3 - 1);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              (char *)&v43,
              0x1000u,
              0,
              "chip %02x core %02x membist err cnt: %08x",
              *((unsigned __int8 *)v3 - 24),
              *((unsigned __int8 *)v3 - 20),
              bswap32(*(v3 - 7)));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "membist0",
              8,
              11562,
              100,
              &v43);
            v34 = v36 + 16 * *((unsigned __int8 *)v3 - 24);
            s[v34] += bswap32(*(v3 - 7)) & 0x7FFFFF;
          }
          v3 += 3;
        }
        while ( (_DWORD *)v4 != v3 );
      }
LABEL_10:
      v8 = sub_73570((_DWORD *)a1, (unsigned __int16)v37, 162, ptr);
      if ( v8 > 0 )
      {
        v9 = ptr + 40;
        v10 = (int)&ptr[12 * v8 + 40];
        do
        {
          while ( 1 )
          {
            v11 = *(v9 - 10);
            if ( (v11 & 0xFFFFFF00) != 0 && (v11 & 0x80) != 0 )
              break;
            v9 += 3;
            if ( v9 == (_DWORD *)v10 )
              goto LABEL_16;
          }
          __pld(v9);
          pthread_mutex_lock(&stru_3B526C);
          v12 = *(v9 - 10);
          v13 = *((unsigned __int8 *)v9 - 36);
          v14 = *((unsigned __int8 *)v9 - 32);
          v9 += 3;
          logfmt_raw((char *)&v43, 0x1000u, 0, "chip %02x core %02x membist lost cnt: %08x", v13, v14, bswap32(v12));
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "membist0",
            8,
            11573,
            100,
            &v43);
          v15 = v36 + 16 * *((unsigned __int8 *)v9 - 48);
          s[v15] += bswap32(*(v9 - 13)) & 0x7FFFFF;
        }
        while ( v9 != (_DWORD *)v10 );
      }
LABEL_16:
      v16 = sub_73570((_DWORD *)a1, (unsigned __int16)v37, 163, ptr);
      if ( v16 > 0 )
      {
        v17 = ptr + 40;
        v18 = (int)&ptr[12 * v16 + 40];
        do
        {
          while ( 1 )
          {
            v19 = *(v17 - 10);
            if ( (v19 & 0xFFFF00) != 0 && (v19 & 0xC0) != 0 )
              break;
            v17 += 3;
            if ( (_DWORD *)v18 == v17 )
              goto LABEL_22;
          }
          __pld(v17);
          pthread_mutex_lock(&stru_3B526C);
          v20 = *(v17 - 10);
          v21 = *((unsigned __int8 *)v17 - 36);
          v22 = *((unsigned __int8 *)v17 - 32);
          v17 += 3;
          logfmt_raw((char *)&v43, 0x1000u, 0, "chip %02x core %02x ethbist err cnt: %08x", v21, v22, bswap32(v20));
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "membist0",
            8,
            11581,
            100,
            &v43);
          v23 = v36 + 16 * *((unsigned __int8 *)v17 - 48);
          s[v23] += bswap32(*(v17 - 13)) & 0x7FFF;
        }
        while ( (_DWORD *)v18 != v17 );
      }
LABEL_22:
      ++v37;
    }
    while ( v37 != 8 );
    ++v36;
  }
  while ( v36 != 5 );
  free(ptr);
  v24 = s;
  memset(src, 0, sizeof(src));
  v25 = v40;
  do
  {
    while ( 1 )
    {
      v27 = *v24++;
      v26 = v27;
      v29 = *v25++;
      v28 = v29;
      v30 = v24[15] + (unsigned __int64)v24[31] + v26 + v24[47] + v24[63] + v24[79] + v24[95] + v24[111];
      v31 = "failed";
      if ( v30 <= 0x800 )
        v31 = "ok";
      sprintf(src, "<mbist0 %08x> test %s(%llu)", v28, v31, v30);
      v32 = strlen(src);
      if ( v32 <= 0x3F && dword_12A4C8[0] <= 63 )
        break;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v43, 0x1000u, 0, "slt_result is full!");
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "set_test_result",
        15,
        141,
        100,
        &v43);
      if ( &s[5] == v24 )
        goto LABEL_31;
    }
    strncpy((char *)&dword_12A4C8[16 * dword_12A4C8[0] + 1], src, v32);
    ++dword_12A4C8[0];
  }
  while ( &s[5] != v24 );
LABEL_31:
  off_129480(*(_DWORD *)(a1 + 120));
  return 0;
}
