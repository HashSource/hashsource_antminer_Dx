int sub_67814()
{
  __int64 v0; // r6
  int v1; // r4
  int *v2; // r2
  float v3; // s0
  unsigned int v4; // r5
  int *v5; // r0
  float v6; // s16
  int v7; // t1
  int v8; // r3
  float *v9; // r3
  unsigned int v10; // r1
  int result; // r0
  _DWORD *v12; // r3
  int v13; // r7
  int v14; // r6
  __int64 v15; // r4
  int v16; // t1
  int v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r4
  int v21; // r8
  int v22; // r5
  __int64 *v23; // r9
  __int64 *v24; // r5
  __int64 v25; // t1
  int v26; // [sp+18h] [bp-2074h]
  int *v27; // [sp+1Ch] [bp-2070h]
  int v28; // [sp+20h] [bp-206Ch]
  int v29; // [sp+28h] [bp-2064h]
  int *v30; // [sp+34h] [bp-2058h]
  char v31[32]; // [sp+48h] [bp-2044h] BYREF
  char v32[32]; // [sp+68h] [bp-2024h] BYREF
  char v33[4088]; // [sp+88h] [bp-2004h] BYREF
  char v34[4100]; // [sp+1088h] [bp-1004h] BYREF

  v29 = dword_191C84;
  if ( !dword_191C84 )
  {
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      67,
      100,
      v34);
  }
  pthread_mutex_lock(&stru_190E30);
  v1 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  pthread_mutex_lock(&stru_190E30);
  HIDWORD(v0) = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  if ( v0 <= 0 )
  {
    LODWORD(v0) = 0;
    v4 = 0;
  }
  else
  {
    v2 = dword_190E4C;
    LODWORD(v0) = 0;
    v3 = 0.0;
    v4 = 0;
    v5 = &dword_190E4C[HIDWORD(v0)];
    v6 = 0.0;
    do
    {
      v7 = *v2++;
      v8 = 52 * *(_DWORD *)(v7 + 120);
      HIDWORD(v0) = (char *)&unk_1913A0 + v8 * 4;
      v9 = (float *)&dword_191398[v8];
      v10 = *(_DWORD *)(HIDWORD(v0) + 64);
      HIDWORD(v0) = *(_DWORD *)(HIDWORD(v0) + 68);
      v4 = (v0 + __PAIR64__(v4, v10)) >> 32;
      LODWORD(v0) = v0 + v10;
      v6 = v6 + v9[9];
      v3 = v3 + v9[10];
    }
    while ( v5 != v2 );
  }
  format_hashrate_string(*(const char **)(v29 + 84), v32);
  format_hashrate_string(*(const char **)(v29 + 84), v31);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v34, 0x1000u, 0, "total avg hashrate %s 2min avg hashrate %s hw %llu", v32, v31, (_DWORD)v0, v4);
  pthread_mutex_unlock(&stru_197BB8);
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/miner_util/miner_monitor/miner_monitor.c",
             161,
             "task_applog_printer",
             19,
             115,
             40,
             v34);
  if ( v1 > 0 )
  {
    v27 = dword_190E4C;
    v30 = &dword_190E4C[v1];
    do
    {
      v12 = &dword_191398[52 * *(_DWORD *)(*v27 + 120)];
      v13 = v12[14];
      v14 = v12[15];
      v15 = *((_QWORD *)v12 + 9);
      format_hashrate_string(*(const char **)(v29 + 84), v32);
      format_hashrate_string(*(const char **)(v29 + 84), v31);
      v16 = *v27++;
      v17 = ((int (__fastcall *)(int))off_18F4E8[0])(*(_DWORD *)(v16 + 120));
      LODWORD(v15) = snprintf(
                       v33,
                       0x1000u,
                       "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
                       v17,
                       *(_DWORD *)(*(v27 - 1) + 120),
                       v13,
                       v32,
                       v31,
                       v15);
      v18 = snprintf(
              &v33[v15],
              4096 - v15,
              "wc %llu nc %llu chip status str %s detail:\n",
              *(v27 - 1),
              *(_DWORD *)(*(v27 - 1) + 232),
              *(_DWORD *)(*(v27 - 1) + 236),
              *(_DWORD *)(*(v27 - 1) + 240),
              *(_DWORD *)(*(v27 - 1) + 244),
              v14);
      v19 = *(v27 - 1);
      v20 = v15 + v18;
      v28 = *(_DWORD *)(v19 + 180);
      if ( v28 > 0 )
      {
        v21 = 0;
        v26 = 0;
        while ( 1 )
        {
          v22 = *(_DWORD *)(v19 + 248);
          v23 = (__int64 *)(v22 + v21);
          v21 += 48;
          v24 = (__int64 *)(v22 + v21);
          do
          {
            v25 = *v23++;
            v20 += snprintf(&v33[v20], 4096 - v20, " %llu", v25);
          }
          while ( v24 != v23 );
          ++v26;
          v20 += snprintf(&v33[v20], 4096 - v20, " /");
          if ( v28 == v26 )
            break;
          v19 = *(v27 - 1);
        }
      }
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v34, 0x1000u, 0, "%s", v33);
      pthread_mutex_unlock(&stru_197BB8);
      result = zlog(
                 g_hash_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/miner_util/miner_monitor/miner_monitor.c",
                 161,
                 "task_applog_printer",
                 19,
                 136,
                 40,
                 v34);
    }
    while ( v30 != v27 );
  }
  return result;
}
