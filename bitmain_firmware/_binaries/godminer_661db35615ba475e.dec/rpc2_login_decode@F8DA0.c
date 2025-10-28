int __fastcall rpc2_login_decode(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  _BYTE *v5; // r7
  _DWORD *v6; // r0
  int v7; // r5
  int *v8; // r3
  int v9; // r1
  int v10; // r4
  int v11; // lr
  int v12; // r12
  int v13; // r0
  int v15; // r0
  int v16; // r2
  char v17[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_object_get(a1, "result");
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "JSON invalid result");
    pthread_mutex_unlock(&stru_197BB8);
    v15 = g_zc;
    v16 = 96;
    goto LABEL_14;
  }
  if ( *v4 == 2 )
  {
    v5 = (_BYTE *)v4[2];
    if ( v5 )
    {
      if ( *v5 == 111 && v5[1] == 107 && !v5[2] )
        goto LABEL_7;
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v17, 0x1000u, 0, "JSON returned status \"%s\"", v5);
      pthread_mutex_unlock(&stru_197BB8);
      v15 = g_zc;
      v16 = 107;
LABEL_14:
      zlog(
        v15,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin29/frontend_grin29.c",
        163,
        "rpc2_login_decode",
        17,
        v16,
        100,
        v17);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v17, 0x1000u, 0, "%s: fail", "rpc2_login_decode");
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin29/frontend_grin29.c",
        163,
        "rpc2_login_decode",
        17,
        148,
        80,
        v17);
      return 0;
    }
  }
  if ( v4 != dword_190774 )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "JSON returned status false");
    V_UNLOCK();
    v15 = g_zc;
    v16 = 102;
    goto LABEL_14;
  }
LABEL_7:
  v6 = (_DWORD *)json_object_get(a1, "id");
  if ( !v6 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "JSON inval id");
    pthread_mutex_unlock(&stru_197BB8);
    v15 = g_zc;
    v16 = 115;
    goto LABEL_14;
  }
  if ( *v6 != 2 || (v7 = v6[2]) == 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "JSON id is not a string");
    pthread_mutex_unlock(&stru_197BB8);
    v15 = g_zc;
    v16 = 120;
    goto LABEL_14;
  }
  v8 = (int *)v6[2];
  v9 = a2 + 1052;
  do
  {
    v10 = *v8;
    v8 += 4;
    v11 = *(v8 - 3);
    v9 += 16;
    v12 = *(v8 - 2);
    v13 = *(v8 - 1);
    *(_DWORD *)(v9 - 16) = v10;
    *(_DWORD *)(v9 - 12) = v11;
    *(_DWORD *)(v9 - 8) = v12;
    *(_DWORD *)(v9 - 4) = v13;
  }
  while ( v8 != (int *)(v7 + 64) );
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v17, 0x1000u, 0, "Auth id: %s", v7);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin29/frontend_grin29.c",
    163,
    "rpc2_login_decode",
    17,
    126,
    20,
    v17);
  return 1;
}
