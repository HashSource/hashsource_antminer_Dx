int __fastcall sub_4224C(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  int v10; // lr
  int v11; // r12
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  size_t v16; // r5
  void *count; // r0
  size_t v18; // r9
  void *v19; // r0
  struct __pthread_internal_slist *next; // r0
  _DWORD *v21; // r0
  char v22[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v10 = 100;
    v11 = 142;
    v12 = g_zc;
    LOWORD(v13) = (unsigned __int16)"stratum_parse_extranonce_ltc";
LABEL_4:
    HIWORD(v13) = (unsigned int)"stratum_parse_extranonce_ltc" >> 16;
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      162,
      v13,
      28,
      v11,
      v10,
      v22);
    return 0;
  }
  v15 = json_array_get(a3, a4 + 1);
  v16 = json_integer_value((int)v15);
  if ( v16 - 2 > 0xE )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v16);
    V_UNLOCK();
    v10 = 60;
    v11 = 147;
    v12 = g_zc;
    LOWORD(v13) = -32040;
    goto LABEL_4;
  }
  pthread_mutex_lock(a2 + 66);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v18 = strlen(v9) >> 1;
  a2[3].__lock = v18;
  v19 = calloc(1u, v18);
  a2[3].__count = (unsigned int)v19;
  if ( v19 )
  {
    hex2bin((int)v19, (unsigned __int8 *)v9, v18);
    next = a2[65].__list.__next;
    a2[3].__owner = v16;
    if ( next )
      free(next);
    v21 = calloc(1u, 0x14u);
    a2[65].__spins = (int)v21;
    if ( v21 )
    {
      *v21 = v16;
      memset(v21 + 1, 0, v16);
      pthread_mutex_unlock(a2 + 66);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        162,
        "stratum_parse_extranonce_ltc",
        28,
        182,
        20,
        v22);
      return 1;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      162,
      "stratum_parse_extranonce_ltc",
      28,
      156,
      100,
      v22);
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
}
