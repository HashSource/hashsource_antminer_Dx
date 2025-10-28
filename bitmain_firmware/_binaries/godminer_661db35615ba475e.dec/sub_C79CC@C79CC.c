int __fastcall sub_C79CC(int a1, pthread_mutex_t *a2, int *a3)
{
  int v3; // r4
  unsigned int v4; // r8
  int *v6; // r7
  int v7; // r6
  int v8; // r5
  _DWORD *v9; // r11
  char *v10; // r9
  unsigned int v11; // r1
  bool v12; // r7
  _DWORD *v14; // r0
  size_t v15; // r0
  const char *owner; // r0
  void *v17; // r5
  int v18; // r1
  int v19; // r2
  unsigned int v20; // r3
  int v21; // r1
  unsigned int v22; // r2
  int v23; // r3
  int v24; // r1
  unsigned int v25; // r2
  int v26; // r3
  unsigned int v27; // r1
  int v28; // r2
  int v29; // r3
  int lock; // r2
  size_t v31; // r0
  _DWORD v32[8]; // [sp+10h] [bp-1044h] BYREF
  _DWORD v33[8]; // [sp+30h] [bp-1024h] BYREF
  char v34[4100]; // [sp+50h] [bp-1004h] BYREF

  if ( !a3 )
    goto LABEL_27;
  v3 = *a3;
  if ( *a3 != 1 )
    goto LABEL_27;
  v4 = a3[3];
  if ( !v4 )
  {
    v8 = 0;
    v7 = 0;
    goto LABEL_51;
  }
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
  if ( v4 <= 1 )
    goto LABEL_35;
  v8 = v6[1];
  if ( !v8 )
  {
    v3 = 1;
    goto LABEL_13;
  }
  if ( *(_DWORD *)v8 != 2 )
  {
LABEL_35:
    v3 = 1;
    v8 = 0;
    goto LABEL_13;
  }
  v8 = *(_DWORD *)(v8 + 8);
  if ( !v8 )
    v3 = 1;
LABEL_13:
  if ( v4 <= 2 )
  {
LABEL_51:
    v9 = 0;
    v10 = 0;
    v12 = 0;
    goto LABEL_25;
  }
  v9 = (_DWORD *)v6[2];
  if ( v9 )
  {
    if ( *v9 == 3 )
      v9 = (_DWORD *)v9[2];
    else
      v9 = 0;
  }
  if ( v4 <= 3 )
  {
    v10 = 0;
    v12 = 0;
    goto LABEL_25;
  }
  v10 = (char *)v6[3];
  if ( v10 )
  {
    v11 = 3;
    if ( *(_DWORD *)v10 == 2 )
    {
      v14 = json_array_get(a3, 3u);
      if ( v14 && *v14 == 2 )
        v10 = (char *)v14[2];
      else
        v10 = 0;
      if ( v4 != 4 )
      {
        v11 = 4;
        if ( v6[4] )
          goto LABEL_24;
      }
LABEL_34:
      v12 = 0;
      goto LABEL_25;
    }
    v10 = 0;
  }
  else
  {
    v11 = 3;
  }
  if ( !v6[3] )
    goto LABEL_34;
LABEL_24:
  v12 = *json_array_get(a3, v11) == 5;
LABEL_25:
  if ( v3 || strlen((const char *)v8) != 64 )
  {
LABEL_27:
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v34, 0x1000u, 0, "Stratum notify: invalid parameters");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      "stratum_notify_ckb",
      18,
      33,
      100,
      v34);
    return 0;
  }
  hex2bin((int)v33, (unsigned __int8 *)v8, 32);
  if ( v10 )
  {
    v15 = strlen(v10);
    hex2bin((int)v32, (unsigned __int8 *)v10, v15 >> 1);
  }
  if ( a2 == (pthread_mutex_t *)-440 )
    return 0;
  owner = (const char *)a2[34].__owner;
  if ( owner && !strcmp(owner, (const char *)v7) )
  {
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[34].__owner, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      "stratum_notify_ckb",
      18,
      44,
      80,
      v34);
  }
  if ( strlen((const char *)v7) > 0x1F )
  {
    V_LOCK();
    v31 = strlen((const char *)v7);
    logfmt_raw(v34, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v7, v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      "stratum_notify_ckb",
      18,
      47,
      80,
      v34);
  }
  pthread_mutex_lock(a2 + 40);
  v17 = (void *)a2[34].__owner;
  a2[34].__owner = (int)_strdup((const char *)v7);
  if ( v17 )
    free(v17);
  v18 = v33[1];
  v19 = v33[2];
  v20 = v33[3];
  a2[18].__nusers = v33[0];
  a2[18].__spins = v18;
  a2[19].__lock = v19;
  a2[19].__count = v20;
  v21 = v33[5];
  v22 = v33[6];
  v23 = v33[7];
  a2[19].__owner = v33[4];
  a2[19].__kind = v21;
  a2[19].__nusers = v22;
  a2[19].__spins = v23;
  a2[34].__count = (unsigned int)v9;
  a2[42].__count = (unsigned int)v9;
  if ( v10 )
  {
    v24 = v32[1];
    v25 = v32[2];
    v26 = v32[3];
    a2[3].__spins = v32[0];
    a2[4].__lock = v24;
    a2[4].__count = v25;
    a2[4].__owner = v26;
    v27 = v32[5];
    v28 = v32[6];
    v29 = v32[7];
    a2[4].__kind = v32[4];
    a2[4].__nusers = v27;
    a2[4].__spins = v28;
    a2[5].__lock = v29;
  }
  lock = a2->__lock;
  a2[17].__size[16] = v12;
  *((_QWORD *)&a2[18].__align + 1) = lock;
  pthread_mutex_unlock(a2 + 40);
  return 1;
}
