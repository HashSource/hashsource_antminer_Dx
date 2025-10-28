int __fastcall sub_447F8(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  const char *v6; // r0
  unsigned __int8 *v7; // r7
  int v8; // r12
  void *count; // r0
  void *v11; // r0
  struct __pthread_internal_slist *next; // r0
  void *v13; // r5
  char v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (const char *)json_string_value(v5);
  v7 = (unsigned __int8 *)v6;
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v8 = 96;
    goto LABEL_4;
  }
  if ( strlen(v6) != 8 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "extranonce1 len is not 8");
    V_UNLOCK();
    v8 = 102;
LABEL_4:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_parse_extranonce_zec",
      28,
      v8,
      100,
      v14);
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
  pthread_mutex_lock(a2 + 66);
  count = (void *)a2[3].__count;
  if ( count )
    free(count);
  a2[3].__lock = 4;
  v11 = malloc(4u);
  a2[3].__count = (unsigned int)v11;
  if ( !v11 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Failed to mlloc xnonce1");
    V_UNLOCK();
    v8 = 112;
    goto LABEL_4;
  }
  hex2bin((int)v11, v7, 4);
  next = a2[65].__list.__next;
  a2[3].__owner = 2;
  if ( next )
    free(next);
  v13 = calloc(1u, 0xB28u);
  a2[65].__spins = (int)v13;
  if ( v13 )
  {
    pthread_mutex_unlock(a2 + 66);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v7, a2[3].__owner);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_parse_extranonce_zec",
      28,
      125,
      20,
      v14);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
