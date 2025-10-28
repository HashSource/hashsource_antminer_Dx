int __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r6
  const char *v3; // r4
  const char *v4; // r4
  char *v5; // r0
  int v6; // r10
  const char *v7; // r9
  sa_family_t sa_family; // r9
  _BYTE *v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r7
  const char *v13; // r7
  int v15; // r0
  int *v16; // r0
  char *v17; // r0
  struct hostent *v18; // r0
  char *v19; // r3
  int optval; // [sp+28h] [bp-112Ch] BYREF
  int v21; // [sp+2Ch] [bp-1128h] BYREF
  _DWORD v22[6]; // [sp+30h] [bp-1124h] BYREF
  size_t v23; // [sp+48h] [bp-110Ch]
  int v24; // [sp+4Ch] [bp-1108h]
  char dest[256]; // [sp+50h] [bp-1104h] BYREF
  struct sockaddr v26[256]; // [sp+150h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(const char **)(a1 + 28);
  if ( !strncasecmp(v3, "stratum+tcp://", 0xEu)
    && (v4 = v3 + 14) != 0
    && (v5 = strchr(v4, 58)) != 0
    && v4 != v5
    && (v6 = v5 - v4, v7 = v5 + 1, strncpy(dest, v4, v5 - v4), dest[v6] = 0, v7 - v4 < strlen(v4)) )
  {
    sub_132694(v7, (int *)v26);
    sa_family = v26[0].sa_family;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v26, 0x1000u, 0, "url: %s, server: %s, port: %d", *(_DWORD *)(a1 + 28), dest, sa_family);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_connect",
      15,
      112,
      20,
      v26);
    v9 = *(_BYTE **)(a1 + 40);
    if ( !v9 )
    {
      v9 = calloc(0x4000u, 1u);
      *(_DWORD *)(a1 + 40) = v9;
      *(_DWORD *)(a1 + 36) = 0x4000;
    }
    v10 = 0;
    *v9 = 0;
    if ( *(_DWORD *)(a1 + 32) == -1 )
    {
      v15 = socket(2, 1, 6);
      *(_DWORD *)(a1 + 32) = v15;
      if ( v15 == -1 )
        goto LABEL_14;
      v22[0] = 1;
      if ( setsockopt(v15, 1, 2, v22, 4u) )
      {
        V_LOCK();
        v16 = _errno_location();
        v17 = strerror(*v16);
        logfmt_raw((char *)v26, 0x1000u, 0, "API setsockopt SO_REUSEADDR failed (ignored): %s", v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_connect",
          15,
          136,
          100,
          v26);
      }
    }
    if ( inet_addr(dest) == -1 )
    {
      v18 = gethostbyname(dest);
      v10 = (int)v18;
      if ( !v18 )
      {
        close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        goto LABEL_14;
      }
      v19 = *v18->h_addr_list;
      if ( v19 )
        *(_DWORD *)&v26[0].sa_data[2] = *(_DWORD *)v19;
    }
    else
    {
      *(_DWORD *)&v26[0].sa_data[2] = inet_addr(dest);
    }
    v11 = *(_DWORD *)(a1 + 32);
    *(_WORD *)v26[0].sa_data = __rev16(sa_family);
    v26[0].sa_family = 2;
    if ( connect(v11, v26, 0x10u) < 0 )
    {
      v10 = 0;
      close(*(_DWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 32) = -1;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 32);
      v21 = 45;
      v22[0] = 30;
      optval = 1;
      v10 = 1;
      setsockopt(v12, 1, 9, &optval, 4u);
      fcntl(v12, 2, 1);
      setsockopt(v12, 6, 1, &optval, 4u);
      setsockopt(v12, 6, 6, &optval, 4u);
      setsockopt(v12, 6, 4, &v21, 4u);
      setsockopt(v12, 6, 5, v22, 4u);
    }
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    v13 = *(const char **)(a1 + 28);
    v10 = 0;
    ++dword_197BD4;
    v23 = strlen(v13);
    v22[3] = 0;
    v22[5] = 0;
    v24 = 0;
    v22[2] = 0;
    v22[0] = "pool";
    v22[1] = 4;
    v22[4] = v13;
    logfmt_raw((char *)v26, 0x1000u, 0, 0, "pool", 4, 0, 0, v13, 0, v23, 0, "prase url err!");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_connect",
      15,
      109,
      100,
      v26);
  }
LABEL_14:
  pthread_mutex_unlock(v1);
  return v10;
}
