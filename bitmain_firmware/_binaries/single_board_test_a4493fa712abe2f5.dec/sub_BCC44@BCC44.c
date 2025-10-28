int __fastcall sub_BCC44(int a1)
{
  unsigned __int8 *v2; // r7
  int v3; // r1
  int v4; // r0
  char *v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r2
  _WORD *v11; // [sp+14h] [bp-1030h]
  int v13; // [sp+1Ch] [bp-1028h]
  char *ptr; // [sp+20h] [bp-1024h]
  int v15; // [sp+28h] [bp-101Ch]
  _DWORD v16[4]; // [sp+2Ch] [bp-1018h] BYREF
  __int16 v17; // [sp+3Ch] [bp-1008h] BYREF
  _DWORD v18[1025]; // [sp+40h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v18, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_3B526C);
  v15 = 0;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_ref_clock_ready_ext",
    25,
    8792,
    60,
    v18);
  v18[2] = 7340033;
  v18[3] = 255;
  v18[1] = 0;
  v18[0] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16[0] = "%s round:%d";
  v16[1] = 100991489;
  v16[2] = 235735561;
  v16[3] = 134677248;
  v17 = 3851;
  do
  {
    v11 = (_WORD *)((char *)v16 + 3);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)v18, 0x1000u, 0, v16[0], "check_ref_clock_ready_ext", v15);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_ref_clock_ready_ext",
      25,
      8801,
      60,
      v18);
    ptr = (char *)malloc(0x600u);
    v2 = (unsigned __int8 *)malloc(0x600u);
    do
    {
      v3 = *((unsigned __int8 *)v11 + 1);
      v11 = (_WORD *)((char *)v11 + 1);
      v13 = v3;
      v4 = sub_73570((_DWORD *)a1, v3, 112, ptr);
      if ( v4 > 0 )
      {
        v5 = ptr + 16;
        v6 = (int)&ptr[12 * v4 + 16];
        do
        {
          while ( (*((_DWORD *)v5 - 4) & 0x9000000) != 0x9000000 )
          {
            __pld(v5);
            pthread_mutex_lock(&stru_3B526C);
            v7 = 100;
            logfmt_raw(
              (char *)v18,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              (unsigned __int8)*(v5 - 12),
              (unsigned __int8)*(v5 - 8),
              112,
              *((_DWORD *)v5 - 4));
            pthread_mutex_unlock(&stru_3B526C);
            v8 = g_zc;
            v9 = 8834;
LABEL_6:
            v5 += 12;
            zlog(
              v8,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready_ext",
              25,
              v9,
              v7,
              v18);
            if ( v5 == (char *)v6 )
              goto LABEL_11;
          }
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            (char *)v18,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn locked",
            (unsigned __int8)*(v5 - 12),
            (unsigned __int8)*(v5 - 8),
            112,
            *((_DWORD *)v5 - 4));
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready_ext",
            25,
            8816,
            60,
            v18);
          if ( !sub_74894(a1, *(v5 - 12), v13, 113, v2) || *(_DWORD *)v2 == -1 )
          {
            pthread_mutex_lock(&stru_3B526C);
            v7 = 20;
            logfmt_raw(
              (char *)v18,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              v2[4],
              v2[8],
              113,
              *(_DWORD *)v2);
            pthread_mutex_unlock(&stru_3B526C);
            v8 = g_zc;
            v9 = 8828;
            goto LABEL_6;
          }
          v5 += 12;
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            (char *)v18,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v2[4],
            v2[8],
            113,
            *(_DWORD *)v2);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready_ext",
            25,
            8823,
            100,
            v18);
        }
        while ( v5 != (char *)v6 );
      }
LABEL_11:
      ;
    }
    while ( (__int16 *)((char *)&v17 + 1) != v11 );
    ++v15;
    free(ptr);
    free(v2);
  }
  while ( v15 != 3 );
  return 0;
}
