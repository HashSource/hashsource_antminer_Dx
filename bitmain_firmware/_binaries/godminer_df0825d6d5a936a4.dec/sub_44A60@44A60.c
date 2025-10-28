bool __fastcall sub_44A60(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r10
  _DWORD *v7; // r0
  const char *v8; // r9
  _DWORD *v9; // r0
  const char *v10; // r8
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  const char *v14; // r7
  _DWORD *v15; // r0
  _DWORD *v16; // r6
  size_t v17; // r4
  size_t v18; // r11
  _BOOL4 v19; // r4
  const char *kind; // r0
  void *v22; // r0
  char *v23; // r3
  int v24; // r4
  int v25; // r0
  int v26; // lr
  char *v27; // r2
  char *src; // [sp+1Ch] [bp-1128h]
  char *v29; // [sp+20h] [bp-1124h]
  char *s; // [sp+24h] [bp-1120h]
  size_t v31; // [sp+28h] [bp-111Ch]
  size_t v32; // [sp+2Ch] [bp-1118h]
  int v33; // [sp+2Ch] [bp-1118h]
  size_t v34; // [sp+30h] [bp-1114h]
  _DWORD *v35; // [sp+34h] [bp-1110h]
  char v36[260]; // [sp+3Ch] [bp-1108h] BYREF
  char v37[4100]; // [sp+140h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v11);
  v12 = json_array_get(a3, 4u);
  v29 = (char *)json_string_value(v12);
  v13 = json_array_get(a3, 5u);
  v14 = (const char *)json_string_value(v13);
  v15 = json_array_get(a3, 6u);
  src = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 7u);
  if ( v16 )
  {
    v16 = (_DWORD *)(*json_array_get(a3, 7u) == 5);
    v35 = v16;
  }
  else
  {
    v35 = 0;
  }
  v17 = strlen(v8);
  v34 = strlen(v10);
  v32 = strlen(s);
  v31 = strlen(v29);
  v18 = strlen(v14);
  v19 = v17 + v34 + v32 + v31 + v18 + strlen(src) != 216 || v6 == 0;
  if ( v19 )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    v19 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_notify_zec",
      18,
      34,
      100,
      v37);
    return v19;
  }
  if ( a2 == (pthread_mutex_t *)-448 )
    return v19;
  kind = (const char *)a2[65].__kind;
  if ( kind && !strcmp(kind, v6) )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change(%s)", a2[65].__kind);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_notify_zec",
      18,
      41,
      20,
      v37);
  }
  pthread_mutex_lock(a2 + 66);
  v22 = (void *)a2[65].__kind;
  if ( v22 )
  {
    free(v22);
    a2[65].__kind = 0;
  }
  a2[65].__kind = (int)_strdup(v6);
  strncpy(&a2[13].__size[12], v8, 0xCu);
  strncpy(&a2[3].__size[20], v10, 0x44u);
  v23 = strncpy(&a2[14].__size[12], v14, 0x18u);
  v24 = *(_DWORD *)v23;
  v25 = *((_DWORD *)v23 + 2);
  v33 = *((_DWORD *)v23 + 3);
  a2[64].__nusers = *((_DWORD *)v23 + 1);
  a2[64].__spins = v25;
  a2[64].__kind = v24;
  a2[65].__lock = v33;
  v26 = *((_DWORD *)v23 + 5);
  a2[65].__count = *((_DWORD *)v23 + 4);
  a2[65].__owner = v26;
  strncpy((char *)&a2[14], src, 0xCu);
  a2[18].__size[4] = (char)v16;
  if ( v16 )
    *((_QWORD *)&a2[12].__align + 2) = 0;
  snprintf(v36, 0x104u, "%s%s%s%s%s%s%s", v8, v10, s, v29, v14, src, "0000000000000000000000000000000000000000");
  v19 = hex2bin((int)&a2[6].__nusers, (unsigned __int8 *)v36, 128);
  if ( v19 )
  {
    *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "%s: Failed to convert header to header_bin, got %s", "stratum_notify_zec", v36);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_notify_zec",
      18,
      59,
      100,
      v37);
  }
  pthread_mutex_unlock(a2 + 66);
  if ( !opt_protocol )
    return v19;
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "job_id: %s", v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    68,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "version: %s", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    69,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "prevhash: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    70,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "merkle: %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    71,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "reserved: %s", v29);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    72,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "ntime: %s", v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    73,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "nbits: %s", src);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    74,
    20,
    v37);
  V_LOCK();
  v27 = "yes";
  if ( !v35 )
    v27 = "no";
  logfmt_raw(v37, 0x1000u, 0, "clean: %s", v27);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    75,
    20,
    v37);
  return v19;
}
