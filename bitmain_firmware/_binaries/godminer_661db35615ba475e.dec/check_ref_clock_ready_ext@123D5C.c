int __fastcall check_ref_clock_ready_ext(int a1, int a2, _DWORD *a3, int a4, _BYTE *a5)
{
  int v5; // r5
  void (__fastcall *v7)(int, _DWORD *); // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  __int16 v11; // r3
  int *v12; // r12
  unsigned __int8 *v13; // r7
  int v14; // r3
  int v15; // r0
  char *v16; // r4
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int result; // r0
  _BYTE *v21; // r3
  int v22; // [sp+14h] [bp-1040h]
  int v24; // [sp+20h] [bp-1034h]
  unsigned __int8 j; // [sp+24h] [bp-1030h]
  char *ptr; // [sp+2Ch] [bp-1028h]
  int v28; // [sp+34h] [bp-1020h]
  int i; // [sp+38h] [bp-101Ch]
  int v30; // [sp+40h] [bp-1014h] BYREF
  _DWORD v31[2]; // [sp+50h] [bp-1004h] BYREF
  int v32; // [sp+58h] [bp-FFCh]
  int v33; // [sp+5Ch] [bp-FF8h]

  v5 = a1;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v31, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready_ext",
    25,
    8792,
    60,
    v31);
  v32 = 0;
  v33 = 255;
  v31[1] = 0;
  v31[0] = 0;
  v7 = *(void (__fastcall **)(int, _DWORD *))(v5 + 144);
  HIWORD(v32) = 112;
  LOBYTE(v32) = 1;
  v7(v5, v31);
  v8 = usleep((__useconds_t)"ead_unregister_cancel");
  if ( a3 == (_DWORD *)255 )
  {
    v28 = 14;
    v8 = 100991489;
    v9 = 235735561;
    v10 = 134677248;
    v11 = 3851;
    v12 = &v30;
  }
  else
  {
    v28 = 1;
  }
  if ( a3 == (_DWORD *)255 )
  {
    *v12 = v8;
    v12[1] = v9;
    v12[2] = v10;
    *((_WORD *)v12 + 6) = v11;
  }
  for ( i = 0; i != 3; ++i )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v31, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready_ext", i);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready_ext",
      25,
      8801,
      60,
      v31);
    ptr = (char *)malloc(0x600u);
    v13 = (unsigned __int8 *)malloc(0x600u);
    v14 = 0;
    for ( j = 0; j < v28; v14 = ++j )
    {
      if ( a3 == (_DWORD *)255 )
        v14 += (int)v31;
      else
        v5 = (int)a3;
      if ( a3 == (_DWORD *)255 )
        v5 = *(unsigned __int8 *)(v14 - 16);
      v24 = (unsigned __int16)v5;
      v15 = sub_93DE0(a1, (unsigned __int16)v5, 112, ptr);
      if ( v15 > 0 )
      {
        v16 = ptr + 16;
        v5 += (int)(a5 + 16);
        v22 = (int)&ptr[12 * v15 + 16];
        do
        {
          if ( (*((_DWORD *)v16 - 4) & 0x9000000) != 0x9000000 )
          {
            if ( a5 )
            {
              __pld((void *)v5);
              *(_BYTE *)(v5 - 16) = 1;
            }
            __pld(v16);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v31,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              (unsigned __int8)*(v16 - 12),
              (unsigned __int8)*(v16 - 8),
              112,
              *((_DWORD *)v16 - 4));
            pthread_mutex_unlock(&stru_197BB8);
            v17 = g_zc;
            v18 = 100;
            v19 = 8834;
            goto LABEL_18;
          }
          if ( a5 )
          {
            *(_BYTE *)(v5 - 16) = 0;
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v31,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              (unsigned __int8)*(v16 - 12),
              (unsigned __int8)*(v16 - 8),
              112,
              *((_DWORD *)v16 - 4));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              8816,
              60,
              v31);
            if ( !sub_9577C(a1, *(v16 - 12), v24, 113, v13) || *(_DWORD *)v13 == -1 )
            {
              *(_BYTE *)(v5 - 16) = 0;
LABEL_49:
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw(
                (char *)v31,
                0x1000u,
                0,
                "chip %02x core %02x addr %04x, %08x, tx/rx locked",
                v13[4],
                v13[8],
                113,
                *(_DWORD *)v13);
              pthread_mutex_unlock(&stru_197BB8);
              v17 = g_zc;
              v18 = 20;
              v19 = 8828;
              goto LABEL_18;
            }
            *(_BYTE *)(v5 - 16) = 1;
          }
          else
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v31,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              (unsigned __int8)*(v16 - 12),
              (unsigned __int8)*(v16 - 8),
              112,
              *((_DWORD *)v16 - 4));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              8816,
              60,
              v31);
            if ( !sub_9577C(a1, *(v16 - 12), v24, 113, v13) || *(_DWORD *)v13 == -1 )
              goto LABEL_49;
          }
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            (char *)v31,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v13[4],
            v13[8],
            113,
            *(_DWORD *)v13);
          pthread_mutex_unlock(&stru_197BB8);
          v17 = g_zc;
          v18 = 100;
          v19 = 8823;
LABEL_18:
          zlog(
            v17,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready_ext",
            25,
            v19,
            v18,
            v31);
          v16 += 12;
          v5 += 16;
        }
        while ( (char *)v22 != v16 );
      }
    }
    free(ptr);
    free(v13);
  }
  if ( !a5 )
    return 0;
  v21 = a5;
  while ( !*v21 )
  {
    if ( v21[1] )
      break;
    if ( v21[2] )
      break;
    if ( v21[3] )
      break;
    if ( v21[5] )
      break;
    if ( v21[6] )
      break;
    if ( v21[7] )
      break;
    if ( v21[8] )
      break;
    if ( v21[9] )
      break;
    if ( v21[10] )
      break;
    if ( v21[11] )
      break;
    if ( v21[13] )
      break;
    if ( v21[14] )
      break;
    result = (unsigned __int8)v21[15];
    if ( v21[15] )
      break;
    v21 += 16;
    if ( a5 + 128 == v21 )
      return result;
  }
  return -1;
}
