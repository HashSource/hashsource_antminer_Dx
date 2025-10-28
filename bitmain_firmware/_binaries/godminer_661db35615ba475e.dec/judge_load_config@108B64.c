int __fastcall judge_load_config(const char *a1)
{
  unsigned int *file; // r6
  pthread_mutex_t *v3; // r0
  unsigned int v4; // r8
  int v5; // r8
  int v6; // r0
  int v7; // r12
  int v8; // r2
  _DWORD *v10; // r0
  _DWORD *v11; // r7
  int v12; // r7
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  const char *v18; // r0
  int v19; // r0
  char *v20; // r10
  _DWORD *v21; // r0
  _DWORD *v22; // r9
  _BOOL4 v23; // r6
  _DWORD *v24; // r0
  const char *v25; // r0
  _DWORD *v26; // r0
  const char *v27; // r0
  _DWORD *v28; // r0
  const char *v29; // r0
  int v30; // r10
  char *v31; // r7
  int v32; // r9
  int v33; // r11
  int v34; // r0
  const char *v35; // r1
  int v36; // r8
  int v37; // t1
  unsigned int *v38; // [sp+1Ch] [bp-1110h]
  _BYTE v39[92]; // [sp+2Ch] [bp-1100h] BYREF
  _BYTE v40[160]; // [sp+88h] [bp-10A4h] BYREF
  char v41[4100]; // [sp+128h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v41, 0x1000u, 0, "start %s", "judge_load_config");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "judge_load_config",
    17,
    534,
    20,
    v41);
  if ( a1 )
  {
    file = json_load_file(a1, 0, (int)v39);
    LOWORD(v3) = (unsigned __int16)&stru_197BB8;
    if ( !file || (v4 = *file) != 0 )
    {
      HIWORD(v3) = (unsigned int)&stru_197BB8 >> 16;
      v5 = 0;
      pthread_mutex_lock(v3);
      logfmt_raw(v41, 0x1000u, 0, "%s: JSON decode of file '%s' failed %s", "judge_load_config", a1, v40);
      pthread_mutex_unlock(&stru_197BB8);
      v6 = g_zc;
      v7 = 100;
      v8 = 549;
LABEL_5:
      zlog(
        v6,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "judge_load_config",
        17,
        v8,
        v7,
        v41);
      return v5;
    }
    HIWORD(v3) = (unsigned int)&stru_197BB8 >> 16;
    pthread_mutex_lock(v3);
    logfmt_raw(v41, 0x1000u, 0, "%s: after json_load_file", "judge_load_config");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "judge_load_config",
      17,
      552,
      20,
      v41);
    v10 = (_DWORD *)json_object_get(file, "pools");
    v11 = v10;
    if ( !v10 || *v10 != 1 )
      goto LABEL_8;
    dword_19626C = v10[3];
    if ( dword_19626C )
    {
      v20 = s2;
      v38 = file;
      do
      {
        v21 = json_array_get(v11, v4);
        v22 = v21;
        if ( !v21 )
          break;
        v23 = v4 == 3;
        if ( *v21 )
          v23 = 1;
        if ( v23 )
          break;
        v24 = (_DWORD *)json_object_get(v21, "url");
        if ( !v24 )
          break;
        if ( *v24 != 2 )
          break;
        v25 = (const char *)json_string_value(v24);
        snprintf(v20, 0x100u, "%s", v25);
        v26 = (_DWORD *)json_object_get(v22, "user");
        if ( !v26 )
          break;
        if ( *v26 != 2 )
          break;
        v27 = (const char *)json_string_value(v26);
        snprintf(v20 + 256, 0x100u, "%s", v27);
        v28 = (_DWORD *)json_object_get(v22, "pass");
        if ( !v28 )
          break;
        if ( *v28 != 2 )
          break;
        v29 = (const char *)json_string_value(v28);
        snprintf(v20 + 512, 0x100u, "%s", v29);
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "%s\n%s\n%s", v20, v20 + 256, v20 + 512);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/pool.c",
          127,
          "judge_load_config",
          17,
          576,
          20,
          v41);
        if ( *v11 != 1 )
          break;
        ++v4;
        v20 += 768;
      }
      while ( v4 < v11[3] );
      file = v38;
      v30 = total_pools;
      if ( total_pools != dword_19626C )
      {
LABEL_39:
        v12 = 5;
        v5 = 1;
        goto LABEL_9;
      }
      if ( total_pools > 0 )
      {
        v31 = s2;
        v32 = 0;
        v33 = pools - 4;
        do
        {
          v37 = *(_DWORD *)(v33 + 4);
          v33 += 4;
          v36 = v37;
          ++v32;
          if ( strcmp(*(const char **)(v37 + 8), v31) )
            goto LABEL_39;
          v34 = strcmp(*(const char **)(v36 + 12), v31 + 256);
          v35 = v31 + 512;
          v31 += 768;
          if ( v34 || strcmp(*(const char **)(v36 + 16), v35) )
            goto LABEL_39;
        }
        while ( v30 != v32 );
      }
    }
    else if ( total_pools )
    {
      v5 = 1;
      v12 = 5;
LABEL_9:
      json_object_get(file, "bitmain-freq-level");
      v13 = (_DWORD *)json_object_get(file, "bitmain-fan-ctrl");
      if ( v13 && (unsigned int)(*v13 - 5) <= 1 && fan_pwm_fixed != (*v13 == 5) )
      {
        v5 = v12;
        fan_pwm_fixed = *v13 == 5;
      }
      v14 = (_DWORD *)json_object_get(file, "bitmain-fan-pwm");
      if ( v14 )
      {
        if ( *v14 == 2 )
        {
          v18 = (const char *)json_string_value(v14);
          v19 = strtol(v18, 0, 10);
          if ( fan_pwm != v19 )
          {
            v5 |= 8u;
            fan_pwm = v19;
          }
        }
      }
      if ( file[1] != -1 )
      {
        v15 = file + 1;
        __dmb(0xBu);
        do
        {
          v16 = __ldrex(v15);
          v17 = v16 - 1;
        }
        while ( __strex(v17, v15) );
        if ( !v17 )
          json_delete(file);
      }
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v41, 0x1000u, 0, "ret = 0x%x", v5);
      pthread_mutex_unlock(&stru_197BB8);
      v6 = g_zc;
      v7 = 20;
      v8 = 635;
      goto LABEL_5;
    }
LABEL_8:
    v12 = 4;
    v5 = 0;
    goto LABEL_9;
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v41, 0x1000u, 0, "%s: bad param", "judge_load_config");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "judge_load_config",
    17,
    543,
    100,
    v41);
  return 0;
}
