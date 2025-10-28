int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  __int64 v3; // d0
  _DWORD **v5; // r1
  _DWORD *v7; // r3
  int v8; // r2
  int v10; // r1
  double v11; // d8
  void (__fastcall *v12)(int); // r3
  _DWORD *v13; // r0
  char *v14; // r6
  size_t v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // [sp+4h] [bp-1028h]
  _DWORD v23[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( !a3 || *a3 != 1 || !a3[3] )
    goto LABEL_9;
  v5 = (_DWORD **)a3[4];
  if ( !*v5 || **v5 != 2 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      if ( *v7 == 3 )
      {
        LODWORD(v11) = sub_16E7EC(*((_QWORD *)v7 + 1));
        HIDWORD(v11) = v10;
      }
      else
      {
        if ( *v7 != 4 )
          goto LABEL_9;
        v11 = *((double *)v7 + 1);
      }
      if ( v11 != 0.0 )
      {
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
        v12 = *(void (__fastcall **)(int))(a1 + 76);
        *(double *)(a2 + 800) = v11;
        *(double *)(a2 + 432) = v11;
        *(double *)(a2 + 1176) = v11;
        v12(a2 + 704);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v23, 0x1000u, 0, 1527412, "stratum_set_diff_or_target_base", v22, v11);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_base.c",
          145,
          "stratum_set_diff_or_target_base",
          31,
          39,
          20,
          v23);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          (char *)v23,
          0x1000u,
          0,
          1527436,
          "stratum_set_diff_or_target_base",
          *(_DWORD *)(a2 + 704),
          *(_DWORD *)(a2 + 708),
          *(_DWORD *)(a2 + 712),
          *(_DWORD *)(a2 + 716),
          *(_DWORD *)(a2 + 720),
          *(_DWORD *)(a2 + 724),
          *(_DWORD *)(a2 + 728),
          *(_DWORD *)(a2 + 732));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_base.c",
          145,
          "stratum_set_diff_or_target_base",
          31,
          40,
          20,
          v23);
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
        return 1;
      }
    }
LABEL_9:
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)v23, 0x1000u, 0, 1527348);
    pthread_mutex_unlock(&stru_1A8A24);
    v8 = 32;
    goto LABEL_10;
  }
  v13 = json_array_get(a3, 0);
  if ( v13 )
  {
    if ( *v13 == 2 )
    {
      v14 = (char *)v13[2];
      if ( v14 )
      {
        if ( strlen((const char *)v13[2]) == 64 )
        {
          V_LOCK();
          logfmt_raw((char *)v23, 0x1000u, 0, 1527388, "stratum_set_diff_or_target_base", v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_base.c",
            145,
            "stratum_set_diff_or_target_base",
            31,
            20,
            20,
            v23);
          v15 = strlen(v14);
          hex2bin((int)v23, (unsigned __int8 *)v14, v15 >> 1);
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
          v16 = v23[1];
          v17 = v23[2];
          v18 = v23[3];
          *(_DWORD *)(a2 + 704) = v23[0];
          *(_DWORD *)(a2 + 708) = v16;
          *(_DWORD *)(a2 + 712) = v17;
          *(_DWORD *)(a2 + 716) = v18;
          v19 = v23[5];
          v20 = v23[6];
          v21 = v23[7];
          *(_DWORD *)(a2 + 720) = v23[4];
          *(_DWORD *)(a2 + 724) = v19;
          *(_DWORD *)(a2 + 728) = v20;
          *(_DWORD *)(a2 + 732) = v21;
          (*(void (__fastcall **)(_DWORD *))(a1 + 80))(v23);
          *(_QWORD *)(a2 + 800) = v3;
          *(_QWORD *)(a2 + 432) = v3;
          *(_QWORD *)(a2 + 1176) = v3;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
          return 1;
        }
      }
    }
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v23, 0x1000u, 0, 1527348);
  pthread_mutex_unlock(&stru_1A8A24);
  v8 = 16;
LABEL_10:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_base.c",
    145,
    "stratum_set_diff_or_target_base",
    31,
    v8,
    100,
    v23);
  return 0;
}
