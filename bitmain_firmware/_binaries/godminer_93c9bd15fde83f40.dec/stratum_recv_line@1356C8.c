char *__fastcall stratum_recv_line(int a1)
{
  pthread_mutex_t *v1; // r10
  char *v3; // r7
  size_t v4; // r0
  const char *v5; // r1
  signed int v6; // r5
  char *v7; // r0
  char *v8; // r6
  size_t v9; // r0
  _BYTE *v10; // r3
  char *v12; // r11
  size_t v13; // r7
  size_t v14; // r0
  size_t v15; // r1
  ssize_t v16; // r0
  int *v17; // r11
  int v18; // r0
  int v19; // r2
  int v20; // r8
  int v21; // r8
  ssize_t v22; // [sp+2Ch] [bp-5030h]
  time_t v23; // [sp+34h] [bp-5028h] BYREF
  char *v24; // [sp+38h] [bp-5024h]
  int v25; // [sp+3Ch] [bp-5020h]
  int v26; // [sp+40h] [bp-501Ch]
  int v27; // [sp+44h] [bp-5018h]
  __int64 v28; // [sp+48h] [bp-5014h]
  int v29; // [sp+50h] [bp-500Ch]
  int v30; // [sp+54h] [bp-5008h]
  _DWORD v31[7]; // [sp+58h] [bp-5004h] BYREF
  int v32; // [sp+74h] [bp-4FE8h]
  char v33[16388]; // [sp+1058h] [bp-4004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(char **)(a1 + 40);
  if ( !strchr(v3, 10) && *(_DWORD *)(a1 + 32) != -1 )
  {
    time(&v23);
    while ( 1 )
    {
      memset(v33, 0, 0x4000u);
      v16 = recv(*(_DWORD *)(a1 + 32), v33, 0x3FFCu, 0);
      if ( !v16 )
      {
        V_LOCK();
        logfmt_raw((char *)v31, 0x1000u, 0, 1619072);
        V_UNLOCK();
        v18 = g_zc;
        v19 = 52;
        goto LABEL_22;
      }
      if ( v16 >= 0 )
      {
        v12 = *(char **)(a1 + 40);
        v13 = strlen(v12);
        v14 = v13 + strlen(v33) + 1;
        if ( v14 >= *(_DWORD *)(a1 + 36) )
        {
          v15 = (v14 & 0xFFFFC000) + 0x4000;
          *(_DWORD *)(a1 + 36) = v15;
          v12 = (char *)realloc(v12, v15);
          *(_DWORD *)(a1 + 40) = v12;
        }
        strcpy(&v12[v13], v33);
      }
      else
      {
        v22 = v16;
        pthread_mutex_lock(&stru_1A8A24);
        v17 = _errno_location();
        logfmt_raw((char *)v31, 0x1000u, 0, "stratum_recv_line recv failed err %zd %d", v22, *v17);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_recv_line",
          17,
          57,
          20,
          v31);
        if ( *v17 != 11 || !socket_full(*(_DWORD *)(a1 + 32), 1) )
        {
          V_LOCK();
          logfmt_raw((char *)v31, 0x1000u, 0, 1619148, *v17);
          V_UNLOCK();
          v18 = g_zc;
          v19 = 59;
LABEL_22:
          zlog(
            v18,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_recv_line",
            17,
            v19,
            20,
            v31);
          V_LOCK();
          v21 = *(_DWORD *)a1;
          v24 = "poolno";
          v25 = 6;
          v26 = 3;
          v28 = v21;
          v29 = 0;
          ++dword_1A8A20[0];
          logfmt_raw(v33, 0x1000u, 0, v30, 1506612, 6, 3, v27, (__int64)v21, 0, v30, 1619196);
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
            v33);
          goto LABEL_23;
        }
      }
      if ( time(0) - v23 > 59 )
        break;
      v3 = *(char **)(a1 + 40);
      if ( strchr(v3, 10) )
        goto LABEL_2;
    }
    v3 = *(char **)(a1 + 40);
  }
LABEL_2:
  v4 = strlen(v3);
  LOWORD(v5) = 18164;
  v6 = v4;
  HIWORD(v5) = (unsigned int)"%s" >> 16;
  v7 = strtok(v3, v5);
  if ( v7 )
  {
    v8 = _strdup(v7);
    v9 = strlen(v8);
    v10 = *(_BYTE **)(a1 + 40);
    if ( (int)(v9 + 1) < v6 )
      memmove(*(void **)(a1 + 40), &v10[v9 + 1], v6 - v9 + 1);
    else
      *v10 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      pthread_mutex_lock(&stru_1A8A24);
      v20 = *(_DWORD *)a1;
      v31[0] = "poolno";
      v31[1] = 6;
      v31[2] = 3;
      v31[4] = v20;
      v31[5] = v20 >> 31;
      v31[6] = 0;
      ++dword_1A8A20[0];
      logfmt_raw(v33, 0x1000u, 0, v32, "poolno", 6, 3, v31[3], (__int64)v20, 0, v32, 1619288, v8);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/stratum_handler.c",
        138,
        "stratum_recv_line",
        17,
        90,
        60,
        v33);
    }
    return v8;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, 1619224);
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
      v33);
LABEL_23:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
