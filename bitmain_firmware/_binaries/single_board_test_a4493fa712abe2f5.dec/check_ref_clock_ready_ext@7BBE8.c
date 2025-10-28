int __fastcall check_ref_clock_ready_ext(_DWORD *a1, int a2, _BYTE *a3, int a4, _BYTE *a5)
{
  int v7; // r4
  int v8; // r5
  void (__fastcall *v9)(_DWORD *, _DWORD *); // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  __int16 v13; // r3
  unsigned __int8 *v14; // r7
  int v15; // r3
  _BYTE *v16; // r2
  int v17; // r0
  char *v18; // r4
  int v19; // r10
  int v20; // r0
  int v21; // r12
  int v22; // r2
  _BYTE *v23; // r3
  int result; // r0
  int v26; // [sp+1Ch] [bp-1030h]
  unsigned __int8 j; // [sp+20h] [bp-102Ch]
  char *ptr; // [sp+28h] [bp-1024h]
  int v30; // [sp+2Ch] [bp-1020h]
  int i; // [sp+30h] [bp-101Ch]
  _BYTE v32[16]; // [sp+38h] [bp-1014h] BYREF
  _DWORD v33[2]; // [sp+48h] [bp-1004h] BYREF
  int v34; // [sp+50h] [bp-FFCh]
  int v35; // [sp+54h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v33, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_3B526C);
  v7 = 1;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_ref_clock_ready_ext",
    25,
    8792,
    60,
    v33);
  v8 = 112;
  v34 = 1;
  v35 = 255;
  v33[1] = 0;
  v33[0] = 0;
  v9 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[36];
  HIWORD(v34) = 112;
  v9(a1, v33);
  v10 = usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v13 = (__int16)a3;
  if ( a3 == (_BYTE *)255 )
  {
    v30 = 14;
    v10 = 100991489;
    v11 = 235735561;
    v12 = 134677248;
    v13 = 3851;
    v7 = (int)v32;
  }
  else
  {
    v30 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    *(_DWORD *)v7 = v10;
    *(_DWORD *)(v7 + 4) = v11;
    *(_DWORD *)(v7 + 8) = v12;
    *(_WORD *)(v7 + 12) = v13;
  }
  for ( i = 0; i != 3; ++i )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)v33, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready_ext", i);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_ref_clock_ready_ext",
      25,
      8801,
      60,
      v33);
    ptr = (char *)malloc(0x600u);
    v14 = (unsigned __int8 *)malloc(0x600u);
    v15 = 0;
    for ( j = 0; j < v30; v15 = ++j )
    {
      v16 = a3;
      if ( a3 == (_BYTE *)255 )
        v16 = v32;
      else
        v8 = (int)a3;
      if ( a3 == (_BYTE *)255 )
        v8 = (unsigned __int8)v16[v15];
      v26 = (unsigned __int16)v8;
      v17 = sub_73570(a1, (unsigned __int16)v8, 112, ptr);
      if ( v17 > 0 )
      {
        v18 = ptr + 16;
        v19 = (int)&ptr[12 * v17 + 16];
        v8 += (int)(a5 + 16);
        do
        {
          if ( (*((_DWORD *)v18 - 4) & 0x9000000) != 0x9000000 )
          {
            if ( a5 )
            {
              __pld((void *)v8);
              *(_BYTE *)(v8 - 16) = 1;
            }
            __pld(v18);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              (char *)v33,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              (unsigned __int8)*(v18 - 12),
              (unsigned __int8)*(v18 - 8),
              112,
              *((_DWORD *)v18 - 4));
            pthread_mutex_unlock(&stru_3B526C);
            v20 = g_zc;
            v21 = 100;
            v22 = 8834;
            goto LABEL_18;
          }
          if ( a5 )
          {
            *(_BYTE *)(v8 - 16) = 0;
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              (char *)v33,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              (unsigned __int8)*(v18 - 12),
              (unsigned __int8)*(v18 - 8),
              112,
              *((_DWORD *)v18 - 4));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready_ext",
              25,
              8816,
              60,
              v33);
            if ( !sub_74894((int)a1, *(v18 - 12), v26, 113, v14) || *(_DWORD *)v14 == -1 )
            {
              *(_BYTE *)(v8 - 16) = 0;
LABEL_48:
              pthread_mutex_lock(&stru_3B526C);
              logfmt_raw(
                (char *)v33,
                0x1000u,
                0,
                "chip %02x core %02x addr %04x, %08x, tx/rx locked",
                v14[4],
                v14[8],
                113,
                *(_DWORD *)v14);
              pthread_mutex_unlock(&stru_3B526C);
              v20 = g_zc;
              v21 = 20;
              v22 = 8828;
              goto LABEL_18;
            }
            *(_BYTE *)(v8 - 16) = 1;
          }
          else
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              (char *)v33,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              (unsigned __int8)*(v18 - 12),
              (unsigned __int8)*(v18 - 8),
              112,
              *((_DWORD *)v18 - 4));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready_ext",
              25,
              8816,
              60,
              v33);
            if ( !sub_74894((int)a1, *(v18 - 12), v26, 113, v14) || *(_DWORD *)v14 == -1 )
              goto LABEL_48;
          }
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            (char *)v33,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v14[4],
            v14[8],
            113,
            *(_DWORD *)v14);
          pthread_mutex_unlock(&stru_3B526C);
          v20 = g_zc;
          v21 = 100;
          v22 = 8823;
LABEL_18:
          v18 += 12;
          v8 += 16;
          zlog(
            v20,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready_ext",
            25,
            v22,
            v21,
            v33);
        }
        while ( (char *)v19 != v18 );
      }
    }
    free(ptr);
    free(v14);
  }
  if ( !a5 )
    return 0;
  v23 = a5;
  while ( !*v23 )
  {
    if ( v23[1] )
      break;
    if ( v23[2] )
      break;
    if ( v23[3] )
      break;
    if ( v23[5] )
      break;
    if ( v23[6] )
      break;
    if ( v23[7] )
      break;
    if ( v23[8] )
      break;
    if ( v23[9] )
      break;
    if ( v23[10] )
      break;
    if ( v23[11] )
      break;
    if ( v23[13] )
      break;
    if ( v23[14] )
      break;
    result = (unsigned __int8)v23[15];
    if ( v23[15] )
      break;
    v23 += 16;
    if ( a5 + 128 == v23 )
      return result;
  }
  return -1;
}
