int __fastcall membist1(_DWORD *a1)
{
  void (__fastcall *v2)(_DWORD *, int *); // r3
  void (__fastcall *v3)(_DWORD *, int *); // r3
  int v4; // r0
  _DWORD *v5; // r4
  int v6; // r6
  int v7; // r3
  int v8; // r12
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r4
  int v12; // r6
  int v13; // r3
  int v14; // r12
  int v15; // r0
  unsigned int v16; // r1
  char *v17; // r2
  unsigned __int64 v18; // r10
  bool v19; // cf
  char *v20; // r3
  size_t v21; // r0
  int i; // [sp+10h] [bp-107Ch]
  char *ptr; // [sp+18h] [bp-1074h]
  _DWORD v25[8]; // [sp+28h] [bp-1064h] BYREF
  char s[64]; // [sp+48h] [bp-1044h] BYREF
  int v27; // [sp+88h] [bp-1004h] BYREF
  int v28; // [sp+8Ch] [bp-1000h]
  int v29; // [sp+90h] [bp-FFCh]
  int v30; // [sp+94h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v27, 0x1000u, 0, "%s...", "membist1");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "membist1",
    8,
    11607,
    60,
    &v27);
  memset(v25, 0, sizeof(v25));
  ptr = (char *)malloc(0x600u);
  for ( i = 0; i != 8; ++i )
  {
    v29 = 786432;
    v28 = 0;
    v30 = (unsigned __int8)i;
    v2 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v29) = 1;
    v27 = 1;
    v2(a1, &v27);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep(0x2710u);
    v29 = 10485761;
    v28 = 0;
    v30 = (unsigned __int8)i;
    v3 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v27 = -2147483647;
    v3(a1, &v27);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v4 = sub_73570(a1, (unsigned __int16)i, 161, ptr);
    if ( v4 > 0 )
    {
      v5 = ptr + 28;
      v6 = (int)&ptr[12 * v4 + 28];
      do
      {
        while ( 1 )
        {
          v7 = *(v5 - 7);
          if ( (v7 & 0x80) != 0 )
            break;
          __pld(v5);
          pthread_mutex_lock(&stru_3B526C);
          v8 = *((unsigned __int8 *)v5 - 24);
          v9 = *((unsigned __int8 *)v5 - 20);
          v5 += 3;
          logfmt_raw((char *)&v27, 0x1000u, 0, "chip %02x core %02x membist not done!", v8, v9);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "membist1",
            8,
            11629,
            100,
            &v27);
          if ( v5 == (_DWORD *)v6 )
            goto LABEL_9;
        }
        if ( (v7 & 0xFFFFFF00) != 0 )
        {
          __pld(v5 - 1);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            (char *)&v27,
            0x1000u,
            0,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v5 - 24),
            *((unsigned __int8 *)v5 - 20),
            bswap32(*(v5 - 7)));
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "membist1",
            8,
            11625,
            100,
            &v27);
          v25[*((unsigned __int8 *)v5 - 24)] += bswap32(*(v5 - 7)) & 0x7FFFFF;
        }
        v5 += 3;
      }
      while ( v5 != (_DWORD *)v6 );
    }
LABEL_9:
    v10 = sub_73570(a1, (unsigned __int16)i, 162, ptr);
    if ( v10 > 0 )
    {
      v11 = ptr + 28;
      v12 = (int)&ptr[12 * v10 + 28];
      do
      {
        while ( 1 )
        {
          v13 = *(v11 - 7);
          if ( (v13 & 0xFFFFFF00) != 0 && (v13 & 0x80) != 0 )
            break;
          v11 += 3;
          if ( (_DWORD *)v12 == v11 )
            goto LABEL_15;
        }
        __pld(v11);
        pthread_mutex_lock(&stru_3B526C);
        v14 = *((unsigned __int8 *)v11 - 24);
        v15 = *((unsigned __int8 *)v11 - 20);
        v16 = bswap32(*(v11 - 7));
        __pld(v11 - 1);
        v11 += 3;
        logfmt_raw((char *)&v27, 0x1000u, 0, "chip %02x core %02x membist lost cnt: %08x", v14, v15, v16);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "membist1",
          8,
          11637,
          100,
          &v27);
        v25[*((unsigned __int8 *)v11 - 36)] += bswap32(*(v11 - 10)) & 0x7FFFFF;
      }
      while ( (_DWORD *)v12 != v11 );
    }
LABEL_15:
    ;
  }
  free(ptr);
  memset(s, 0, sizeof(s));
  v17 = "failed";
  v18 = v25[1] + (unsigned __int64)v25[0] + v25[2] + v25[3] + v25[4] + v25[5] + v25[6] + v25[7];
  v19 = HIDWORD(v18) == 0;
  LOWORD(v20) = (unsigned __int16)"ok";
  if ( !HIDWORD(v18) )
    v19 = (unsigned int)v18 <= 0x800;
  HIWORD(v20) = (unsigned int)"ok" >> 16;
  if ( v19 )
    v17 = v20;
  sprintf(s, "<mbist1> test %s(%llu)", v17, v20, v18);
  v21 = strlen(s);
  if ( v21 <= 0x3F && dword_12A4C8[0] <= 63 )
  {
    strncpy((char *)&dword_12A4C8[16 * dword_12A4C8[0] + 1], s, v21);
    ++dword_12A4C8[0];
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v27, 0x1000u, 0, "slt_result is full!");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "set_test_result",
      15,
      141,
      100,
      &v27);
  }
  off_129480(a1[30]);
  return 0;
}
