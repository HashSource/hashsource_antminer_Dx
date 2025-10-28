char *__fastcall stratum_recv_line(int a1)
{
  pthread_mutex_t *v1; // r10
  char *v3; // r7
  signed int v4; // r5
  char *v5; // r0
  char *v6; // r6
  size_t v7; // r0
  _BYTE *v8; // r3
  char *v10; // r11
  size_t v11; // r7
  size_t v12; // r0
  size_t v13; // r1
  ssize_t v14; // r0
  int *v15; // r11
  int v16; // r0
  int v17; // r2
  int v18; // r8
  int v19; // r8
  ssize_t v20; // [sp+2Ch] [bp-5030h]
  time_t v21; // [sp+34h] [bp-5028h] BYREF
  const char *v22; // [sp+38h] [bp-5024h]
  int v23; // [sp+3Ch] [bp-5020h]
  int v24; // [sp+40h] [bp-501Ch]
  int v25; // [sp+44h] [bp-5018h]
  __int64 v26; // [sp+48h] [bp-5014h]
  int v27; // [sp+50h] [bp-500Ch]
  int v28; // [sp+54h] [bp-5008h]
  _DWORD v29[7]; // [sp+58h] [bp-5004h] BYREF
  int v30; // [sp+74h] [bp-4FE8h]
  char v31[16388]; // [sp+1058h] [bp-4004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(char **)(a1 + 40);
  if ( !strchr(v3, 10) && *(_DWORD *)(a1 + 32) != -1 )
  {
    time(&v21);
    while ( 1 )
    {
      memset(v31, 0, 0x4000u);
      v14 = recv(*(_DWORD *)(a1 + 32), v31, 0x3FFCu, 0);
      if ( !v14 )
      {
        V_LOCK();
        logfmt_raw((char *)v29, 0x1000u, 0, "stratum_recv_line read 0 bytes");
        V_UNLOCK();
        v16 = g_zc;
        v17 = 52;
        goto LABEL_22;
      }
      if ( v14 >= 0 )
      {
        v10 = *(char **)(a1 + 40);
        v11 = strlen(v10);
        v12 = v11 + strlen(v31) + 1;
        if ( v12 >= *(_DWORD *)(a1 + 36) )
        {
          v13 = (v12 & 0xFFFFC000) + 0x4000;
          *(_DWORD *)(a1 + 36) = v13;
          v10 = (char *)realloc(v10, v13);
          *(_DWORD *)(a1 + 40) = v10;
        }
        strcpy(&v10[v11], v31);
      }
      else
      {
        v20 = v14;
        pthread_mutex_lock(&stru_197BB8);
        v15 = _errno_location();
        logfmt_raw((char *)v29, 0x1000u, 0, "stratum_recv_line recv failed err %zd %d", v20, *v15);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_recv_line",
          17,
          57,
          20,
          v29);
        if ( *v15 != 11 || !socket_full(*(_DWORD *)(a1 + 32), 1) )
        {
          V_LOCK();
          logfmt_raw((char *)v29, 0x1000u, 0, "stratum_recv_line recv failed detailed error %d", *v15);
          V_UNLOCK();
          v16 = g_zc;
          v17 = 59;
LABEL_22:
          zlog(
            v16,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_recv_line",
            17,
            v17,
            20,
            v29);
          V_LOCK();
          v19 = *(_DWORD *)a1;
          v22 = "poolno";
          v23 = 6;
          v24 = 3;
          v26 = v19;
          v27 = 0;
          ++dword_197BD4;
          logfmt_raw(v31, 0x1000u, 0, v28, "poolno", 6, 3, v25, (__int64)v19, 0, v28, "stratum_recv_line failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_recv_line",
            17,
            68,
            20,
            v31);
          goto LABEL_23;
        }
      }
      if ( time(0) - v21 > 59 )
        break;
      v3 = *(char **)(a1 + 40);
      if ( strchr(v3, 10) )
        goto LABEL_2;
    }
    v3 = *(char **)(a1 + 40);
  }
LABEL_2:
  v4 = strlen(v3);
  v5 = strtok(v3, "\n");
  if ( v5 )
  {
    v6 = _strdup(v5);
    v7 = strlen(v6);
    v8 = *(_BYTE **)(a1 + 40);
    if ( (int)(v7 + 1) < v4 )
      memmove(*(void **)(a1 + 40), &v8[v7 + 1], v4 - v7 + 1);
    else
      *v8 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      pthread_mutex_lock(&stru_197BB8);
      v18 = *(_DWORD *)a1;
      v29[0] = "poolno";
      v29[1] = 6;
      v29[2] = 3;
      v29[4] = v18;
      v29[5] = v18 >> 31;
      v29[6] = 0;
      ++dword_197BD4;
      logfmt_raw(v31, 0x1000u, 0, v30, "poolno", 6, 3, v29[3], (__int64)v18, 0, v30, "< %s", v6);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/stratum_handler.c",
        138,
        "stratum_recv_line",
        17,
        90,
        60,
        v31);
    }
    return v6;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "stratum_recv_line failed to parse a newline-terminated string");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_recv_line",
      17,
      76,
      100,
      v31);
LABEL_23:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
