int __fastcall stratum_notify_ae(int a1, pthread_mutex_t *a2, int *a3)
{
  int v3; // r3
  unsigned int v5; // r1
  int *v6; // r0
  int v7; // r7
  _DWORD *v8; // r2
  char *v9; // r5
  _DWORD *v10; // r8
  _DWORD *v11; // r2
  char *v12; // r9
  int v13; // r4
  _DWORD *v14; // r3
  bool v15; // r10
  void *nusers; // r0
  char *owner; // r5
  __int64 v19; // r2
  int lock; // r12
  unsigned int count; // r1
  unsigned int v22; // r2
  int kind; // lr
  unsigned int v24; // r12
  unsigned int spins; // r1
  int v26; // r4
  unsigned int v27; // r2
  size_t v28; // r0
  char v29[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a3 )
    goto LABEL_30;
  v3 = *a3;
  if ( *a3 != 1 )
    goto LABEL_30;
  v5 = a3[3];
  if ( !v5 )
    goto LABEL_30;
  v6 = (int *)a3[4];
  v7 = *v6;
  if ( *v6 )
  {
    if ( *(_DWORD *)v7 == 2 )
    {
      v7 = *(_DWORD *)(v7 + 8);
      v3 = v7 == 0;
    }
    else
    {
      v7 = 0;
    }
  }
  if ( v5 <= 1 )
    goto LABEL_39;
  v8 = (_DWORD *)v6[1];
  if ( !v8 )
  {
    v9 = 0;
    v3 = 1;
    goto LABEL_13;
  }
  if ( *v8 == 2 )
  {
    v9 = (char *)v8[2];
    if ( !v9 )
      v3 = 1;
  }
  else
  {
LABEL_39:
    v3 = 1;
    v9 = 0;
  }
LABEL_13:
  if ( v5 <= 2 )
    goto LABEL_30;
  v10 = (_DWORD *)v6[2];
  if ( v10 )
  {
    if ( *v10 == 3 )
      v10 = (_DWORD *)v10[2];
    else
      v10 = 0;
  }
  if ( v5 <= 3 )
    goto LABEL_30;
  v11 = (_DWORD *)v6[3];
  if ( v11 && *v11 == 2 )
  {
    v12 = (char *)v11[2];
    if ( v12 )
      v13 = v3;
    else
      v13 = v3 | 1;
    if ( v5 == 4 )
    {
      v15 = 0;
      goto LABEL_28;
    }
  }
  else
  {
    if ( v5 <= 4 )
    {
LABEL_30:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v29, 0x1000u, 0, "Stratum notify: invalid parameters");
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ae/frontend_ae.c",
        155,
        "stratum_notify_ae",
        17,
        137,
        100,
        v29);
      return 0;
    }
    v13 = 1;
    v12 = 0;
  }
  v14 = (_DWORD *)v6[4];
  if ( v14 )
    v15 = *v14 == 5;
  else
    v15 = 0;
LABEL_28:
  if ( v13 || strlen(v9) != 64 || strlen(v12) != 8 )
    goto LABEL_30;
  pthread_mutex_lock(a2 + 40);
  nusers = (void *)a2[3].__nusers;
  if ( nusers )
  {
    free(nusers);
    a2[3].__nusers = 0;
  }
  a2[3].__nusers = (unsigned int)_strdup((const char *)v7);
  hex2bin((int)&a2[3].__spins, (unsigned __int8 *)v9, 32);
  a2[42].__count = (unsigned int)v10;
  hex2bin((int)&a2[14], (unsigned __int8 *)v12, 4);
  owner = (char *)a2[34].__owner;
  v19 = *(_QWORD *)&a2[49].__lock;
  a2[17].__size[16] = v15;
  *(_QWORD *)&a2[18].__lock = v19;
  if ( !owner )
  {
    if ( strlen((const char *)v7) <= 0x1F )
      goto LABEL_38;
    goto LABEL_44;
  }
  if ( !strcmp(owner, (const char *)v7) )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[34].__owner, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      152,
      20,
      v29);
    if ( strlen((const char *)v7) <= 0x1F )
    {
LABEL_45:
      owner = (char *)a2[34].__owner;
      if ( !owner )
        goto LABEL_38;
      goto LABEL_37;
    }
LABEL_44:
    V_LOCK();
    v28 = strlen((const char *)v7);
    logfmt_raw(v29, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v7, v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      155,
      100,
      v29);
    goto LABEL_45;
  }
  if ( strlen((const char *)v7) > 0x1F )
    goto LABEL_44;
LABEL_37:
  free(owner);
  a2[34].__owner = 0;
LABEL_38:
  a2[34].__owner = (int)_strdup((const char *)v7);
  lock = a2[4].__lock;
  count = a2[4].__count;
  v22 = a2[4].__owner;
  a2[18].__nusers = a2[3].__spins;
  a2[18].__spins = lock;
  a2[19].__lock = count;
  a2[19].__count = v22;
  kind = a2[4].__kind;
  v24 = a2[4].__nusers;
  spins = a2[4].__spins;
  v26 = a2->__lock;
  a2[19].__spins = a2[5].__lock;
  v27 = a2[42].__count;
  a2[19].__owner = kind;
  a2[19].__kind = v24;
  a2[19].__nusers = spins;
  a2[34].__count = v27;
  *((_QWORD *)&a2[18].__align + 1) = v26;
  pthread_mutex_unlock(a2 + 40);
  return 1;
}
