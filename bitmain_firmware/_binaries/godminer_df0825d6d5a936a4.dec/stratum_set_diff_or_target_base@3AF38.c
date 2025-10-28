int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  _DWORD *v7; // r0
  void (__fastcall *v8)(int); // r3
  int v10; // r12
  _DWORD *v11; // r0
  const char *v12; // r0
  char *v13; // r4
  size_t v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  _DWORD v21[1025]; // [sp+10h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v11 = json_array_get(a3, 0);
    v12 = (const char *)json_string_value(v11);
    v13 = (char *)v12;
    if ( v12 && strlen(v12) == 64 )
    {
      V_LOCK();
      logfmt_raw((char *)v21, 0x1000u, 0, 1208076, "stratum_set_diff_or_target_base", v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/frontend/frontend_base.c",
        151,
        "stratum_set_diff_or_target_base",
        31,
        24,
        20,
        v21);
      v14 = strlen(v13);
      hex2bin((int)v21, (unsigned __int8 *)v13, v14 >> 1);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
      v15 = v21[1];
      v16 = v21[2];
      v17 = v21[3];
      *(_DWORD *)(a2 + 1480) = v21[0];
      *(_DWORD *)(a2 + 1484) = v15;
      *(_DWORD *)(a2 + 1488) = v16;
      *(_DWORD *)(a2 + 1492) = v17;
      v18 = v21[5];
      v19 = v21[6];
      v20 = v21[7];
      *(_DWORD *)(a2 + 1496) = v21[4];
      *(_DWORD *)(a2 + 1500) = v18;
      *(_DWORD *)(a2 + 1504) = v19;
      *(_DWORD *)(a2 + 1508) = v20;
      (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v21);
      *(double *)(a2 + 1512) = v3;
      *(double *)(a2 + 440) = v3;
      *(double *)(a2 + 1800) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1584));
      return 1;
    }
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    v10 = 20;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "stratum_set_diff_or_target_base",
      31,
      v10,
      100,
      v21);
    return 0;
  }
  v7 = json_array_get(a3, 0);
  json_number_value((int)v7);
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    v10 = 36;
    goto LABEL_7;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
  v8 = *(void (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1512) = v3;
  *(double *)(a2 + 440) = v3;
  *(double *)(a2 + 1800) = v3;
  v8(a2 + 1480);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1584));
  return 1;
}
