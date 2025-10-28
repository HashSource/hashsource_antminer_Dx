int read_version_file()
{
  FILE *v0; // r6
  signed int v1; // r6
  char *v2; // r0
  char *v3; // r7
  char *v4; // r0
  size_t v5; // r0
  int v6; // r3
  size_t v7; // r0
  int v8; // r3
  int *v9; // r5
  int v11; // r0
  int v12; // r2
  char v13[256]; // [sp+10h] [bp-1104h] BYREF
  char v14[4100]; // [sp+110h] [bp-1004h] BYREF

  v0 = (FILE *)fopen64(opt_version_path, "rb");
  memset(v13, 0, sizeof(v13));
  if ( !v0 )
  {
    v9 = &g_zc;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v14, 0x1000u, 0, "Open miner version file %s error", opt_version_path);
    pthread_mutex_unlock(&stru_197BB8);
    v11 = g_zc;
    v12 = 702;
LABEL_16:
    zlog(
      v11,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "read_version_file",
      17,
      v12,
      100,
      v14);
    goto LABEL_14;
  }
  v1 = fread(v13, 1u, 0x100u, v0);
  if ( v1 <= 0 )
  {
    v9 = &g_zc;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v14, 0x1000u, 0, "Read miner version file %s error %d", opt_version_path, v1);
    pthread_mutex_unlock(&stru_197BB8);
    v11 = g_zc;
    v12 = 707;
    goto LABEL_16;
  }
  v2 = strchr(v13, 10);
  v3 = v2;
  if ( v2 )
  {
    memcpy(g_miner_compiletime, v13, v2 - v13);
    strcpy(v13, v3 + 1);
    v4 = strchr(v13, 10);
    if ( v4 )
      memcpy(g_miner_type, v13, v4 - v13);
    else
      strcpy(g_miner_type, v13);
  }
  else
  {
    strcpy(g_miner_compiletime, v13);
  }
  v5 = strlen(g_miner_compiletime) - 1;
  v6 = (unsigned __int8)byte_190870[v5 + 4];
  if ( v6 == 10 )
  {
    byte_190870[v5 + 4] = 0;
    v5 = strlen(g_miner_compiletime) - 1;
    v6 = (unsigned __int8)byte_190870[v5 + 4];
  }
  if ( v6 == 13 )
    byte_190870[v5 + 4] = 0;
  v7 = strlen(g_miner_type) - 1;
  v8 = (unsigned __int8)byte_190870[v7 + 260];
  if ( v8 == 10 )
  {
    byte_190870[v7 + 260] = 0;
    v7 = strlen(g_miner_type) - 1;
    v8 = (unsigned __int8)byte_190870[v7 + 260];
  }
  v9 = &g_zc;
  if ( v8 == 13 )
    byte_190870[v7 + 260] = 0;
LABEL_14:
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v14, 0x1000u, 0, "Miner compile time: %s type: %s", g_miner_compiletime, g_miner_type);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           *v9,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "read_version_file",
           17,
           742,
           60,
           v14);
}
