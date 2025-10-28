bool __fastcall stratum_capabilities_vbk(int a1, int a2)
{
  int v2; // r0
  void *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _BOOL4 v6; // r5
  int v7; // r3
  int v8; // r1
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  char *v13; // r1
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r6
  size_t v17; // r0
  size_t v18; // r0
  int v19; // r11
  int v20; // r10
  int v21; // r9
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  int v30; // r1
  int v31; // r3
  int v32; // r1
  int v33; // r0
  int v34; // r3
  int v35; // r1
  int v36; // r3
  int v37; // r1
  int v38; // r3
  int v39; // r3
  int v40; // r1
  int v41; // [sp+4h] [bp-1118h]
  int v42; // [sp+10h] [bp-110Ch]
  int v43; // [sp+14h] [bp-1108h]
  _DWORD v44[23]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v45[160]; // [sp+78h] [bp-10A4h] BYREF
  char v46[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v3 = (void *)v2;
  if ( !v2 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v28) = 32136;
    HIWORD(v28) = (unsigned int)"nd_ckb/frontend_ckb.c" >> 16;
    logfmt_raw(v46, 0x1000u, 0, v28, "stratum_capabilities_vbk");
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v29) = 29096;
    HIWORD(v29) = (unsigned int)"}" >> 16;
    zlog(g_zc, v29, 157, "stratum_capabilities_vbk", 24, 86, 100, v46);
    return 0;
  }
  v4 = sub_C479C(v2, 0, (int)v44);
  v5 = v4;
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v46, 0x1000u, 0, 1525596, v44[0], v45);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v30) = 29096;
    HIWORD(v30) = (unsigned int)"}" >> 16;
    zlog(g_zc, v30, 157, "stratum_capabilities_vbk", 24, 92, 100, v46);
    free(v3);
    return 0;
  }
  if ( !get_command_type(v4) )
  {
    free(v3);
    LOWORD(v13) = 32752;
    HIWORD(v13) = (unsigned int)"mining.ping" >> 16;
    v14 = (_DWORD *)json_object_get(v5, v13);
    v15 = json_object_get(v14, "data");
    if ( !v15
      || *(_DWORD *)v15 != 2
      || (v16 = *(_DWORD *)(v15 + 8)) == 0
      || (v17 = strlen(*(const char **)(v15 + 8)), v17 <= 5) )
    {
      V_LOCK();
      LOWORD(v31) = 0x8000;
      HIWORD(v31) = (unsigned int)" ping" >> 16;
      logfmt_raw(v46, 0x1000u, 0, v31);
      V_UNLOCK();
      LOWORD(v32) = 29096;
      HIWORD(v32) = (unsigned int)"}" >> 16;
      v33 = g_zc;
      v41 = 106;
LABEL_26:
      v6 = 0;
      zlog(v33, v32, 157, "stratum_capabilities_vbk", 24, v41, 100, v46);
      goto LABEL_5;
    }
    v18 = v16 + v17;
    v19 = *(unsigned __int8 *)(v18 - 2);
    v20 = *(unsigned __int8 *)(v18 - 3);
    v21 = *(unsigned __int8 *)(v18 - 4);
    v6 = *(unsigned __int8 *)(v18 - 1) == 49;
    v43 = *(unsigned __int8 *)(v18 - 5);
    v42 = *(unsigned __int8 *)(v18 - 6);
    if ( *(_BYTE *)(v18 - 1) != 49 )
    {
      V_LOCK();
      LOWORD(v22) = -32712;
      HIWORD(v22) = (unsigned int)"set nonce %s with extranonce2 size=%d" >> 16;
      logfmt_raw(v46, 0x1000u, v6, v22, v16);
      V_UNLOCK();
      LOWORD(v23) = 29096;
      HIWORD(v23) = (unsigned int)"}" >> 16;
      zlog(g_zc, v23, 157, "stratum_capabilities_vbk", 24, 125, 100, v46);
    }
    if ( v19 != 49 )
    {
      V_LOCK();
      LOWORD(v24) = -32632;
      HIWORD(v24) = (unsigned int)"Server requested reconnection to %s" >> 16;
      logfmt_raw(v46, 0x1000u, 0, v24, v16);
      v6 = 0;
      V_UNLOCK();
      LOWORD(v25) = 29096;
      HIWORD(v25) = (unsigned int)"}" >> 16;
      zlog(g_zc, v25, 157, "stratum_capabilities_vbk", 24, 130, 100, v46);
    }
    if ( v20 == 49 )
    {
      if ( v21 == 49 )
      {
        if ( v43 == 49 )
        {
          if ( v42 == 49 )
          {
            if ( v6 )
            {
              V_LOCK();
              LOWORD(v39) = -32188;
              HIWORD(v39) = (unsigned int)"nvert block_version to block_version_bin in parse_notify" >> 16;
              logfmt_raw(v46, 0x1000u, 0, v39, v16);
              V_UNLOCK();
              LOWORD(v40) = 29096;
              HIWORD(v40) = (unsigned int)"}" >> 16;
              zlog(g_zc, v40, 157, "stratum_capabilities_vbk", 24, 155, 20, v46);
              goto LABEL_5;
            }
            goto LABEL_22;
          }
LABEL_31:
          V_LOCK();
          LOWORD(v38) = -32284;
          HIWORD(v38) = (unsigned int)"rse_notify" >> 16;
          logfmt_raw(v46, 0x1000u, 0, v38, v16);
          V_UNLOCK();
          LOWORD(v32) = 29096;
          v33 = g_zc;
          v41 = 150;
          HIWORD(v32) = (unsigned int)"}" >> 16;
          goto LABEL_26;
        }
LABEL_30:
        V_LOCK();
        LOWORD(v36) = -32372;
        HIWORD(v36) = (unsigned int)"lloc pool swork merkle_bin" >> 16;
        logfmt_raw(v46, 0x1000u, 0, v36, v16);
        V_UNLOCK();
        LOWORD(v37) = 29096;
        HIWORD(v37) = (unsigned int)"}" >> 16;
        zlog(g_zc, v37, 157, "stratum_capabilities_vbk", 24, 145, 100, v46);
        if ( v42 == 49 )
          goto LABEL_22;
        goto LABEL_31;
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v26) = -32544;
      HIWORD(v26) = (unsigned int)"nt.get_stats" >> 16;
      logfmt_raw(v46, 0x1000u, 0, v26, v16);
      V_UNLOCK();
      LOWORD(v27) = 29096;
      HIWORD(v27) = (unsigned int)"}" >> 16;
      zlog(g_zc, v27, 157, "stratum_capabilities_vbk", 24, 135, 100, v46);
      if ( v21 == 49 )
      {
        if ( v43 == 49 )
          goto LABEL_21;
        goto LABEL_30;
      }
    }
    V_LOCK();
    LOWORD(v34) = -32460;
    HIWORD(v34) = (unsigned int)"son id is null!" >> 16;
    logfmt_raw(v46, 0x1000u, 0, v34, v16);
    V_UNLOCK();
    LOWORD(v35) = 29096;
    HIWORD(v35) = (unsigned int)"}" >> 16;
    zlog(g_zc, v35, 157, "stratum_capabilities_vbk", 24, 140, 100, v46);
    if ( v43 == 49 )
    {
LABEL_21:
      if ( v42 == 49 )
      {
LABEL_22:
        v6 = 0;
        goto LABEL_5;
      }
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v6 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v7) = 32640;
  HIWORD(v7) = (unsigned int)"fy: invalid claim parameter" >> 16;
  logfmt_raw(v46, 0x1000u, 0, v7, v3);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v8) = 29096;
  HIWORD(v8) = (unsigned int)"}" >> 16;
  zlog(g_zc, v8, 157, "stratum_capabilities_vbk", 24, 98, 100, v46);
  free(v3);
LABEL_5:
  if ( v5[1] == -1 )
    return v6;
  v9 = v5 + 1;
  __dmb(0xBu);
  do
  {
    v10 = __ldrex(v9);
    v11 = v10 - 1;
  }
  while ( __strex(v11, v9) );
  if ( v11 )
    return v6;
  json_delete(v5);
  return v6;
}
