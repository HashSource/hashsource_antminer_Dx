int sub_813E4()
{
  int v0; // r4
  int v1; // r5
  float v2; // s0
  int *v3; // r2
  float v4; // s16
  __int64 v5; // kr00_8
  int v6; // t1
  int v7; // r3
  char *v8; // r8
  float *v9; // r3
  int result; // r0
  _DWORD *v11; // r3
  __int64 v12; // r6
  __int64 v13; // r4
  int v14; // t1
  int v15; // r0
  int v16; // r0
  int v17; // r3
  int v18; // r6
  int v19; // r9
  int v20; // r5
  __int64 *v21; // r4
  __int64 *v22; // r5
  int v23; // r10
  __int64 v24; // t1
  int v25; // [sp+18h] [bp-2074h]
  int *v26; // [sp+1Ch] [bp-2070h]
  int v27; // [sp+20h] [bp-206Ch]
  int v28; // [sp+2Ch] [bp-2060h]
  int *v29; // [sp+38h] [bp-2054h]
  char v30[32]; // [sp+48h] [bp-2044h] BYREF
  char v31[32]; // [sp+68h] [bp-2024h] BYREF
  char v32[4088]; // [sp+88h] [bp-2004h] BYREF
  char v33[4100]; // [sp+1088h] [bp-1004h] BYREF

  v28 = dword_1A4988;
  if ( !dword_1A4988 )
  {
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      72,
      100,
      v33);
  }
  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  pthread_mutex_lock(&stru_1A9B48);
  v1 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v1 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v2 = 0.0;
    v3 = dword_1A9B64;
    v4 = 0.0;
    v5 = 0;
    do
    {
      v6 = *v3++;
      v7 = 26 * *(_DWORD *)(v6 + 132);
      v8 = (char *)&unk_1A4180 + v7 * 8;
      v9 = (float *)&qword_1A4030[v7];
      v5 += *((_QWORD *)v8 + 8);
      v4 = v4 + v9[91];
      v2 = v2 + v9[92];
    }
    while ( &dword_1A9B64[v1] != v3 );
  }
  format_hashrate_string(*(_DWORD *)(v28 + 84), v31);
  format_hashrate_string(*(_DWORD *)(v28 + 84), v30);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v33, 0x1000u, 0, "total avg hashrate %s 2min avg hashrate %s hw %llu", v31, v30, v5);
  pthread_mutex_unlock(&stru_1A8A24);
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/miner_util/miner_monitor/miner_monitor.c",
             161,
             "task_applog_printer",
             19,
             115,
             40,
             v33);
  if ( v0 > 0 )
  {
    v26 = dword_1A9B64;
    v29 = &dword_1A9B64[v0];
    do
    {
      v11 = &dword_1A4178[52 * *(_DWORD *)(*v26 + 132)];
      v12 = *((_QWORD *)v11 + 7);
      v13 = *((_QWORD *)v11 + 9);
      format_hashrate_string(*(_DWORD *)(v28 + 84), v31);
      format_hashrate_string(*(_DWORD *)(v28 + 84), v30);
      v14 = *v26++;
      v15 = ((int (__fastcall *)(int))off_1A2B94[0])(*(_DWORD *)(v14 + 132));
      LODWORD(v12) = snprintf(
                       v32,
                       0x1000u,
                       "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
                       v15,
                       *(_DWORD *)(*(v26 - 1) + 132),
                       (_DWORD)v12,
                       v31,
                       v30,
                       v13);
      v16 = snprintf(
              &v32[v12],
              4096 - v12,
              "wc %llu nc %llu chip status str %s detail:\n",
              *(v26 - 1),
              *(_DWORD *)(*(v26 - 1) + 248),
              *(_DWORD *)(*(v26 - 1) + 252),
              *(_DWORD *)(*(v26 - 1) + 256),
              *(_DWORD *)(*(v26 - 1) + 260),
              HIDWORD(v12));
      v17 = *(v26 - 1);
      v18 = v12 + v16;
      v27 = *(_DWORD *)(v17 + 192);
      if ( v27 > 0 )
      {
        v19 = 0;
        v25 = 0;
        while ( 1 )
        {
          v20 = *(_DWORD *)(v17 + 264);
          v21 = (__int64 *)(v20 + v19);
          v19 += 48;
          v22 = (__int64 *)(v20 + v19);
          ++v25;
          v23 = snprintf(&v32[v18], 4096 - v18, "%d:") + v18;
          do
          {
            v24 = *v21++;
            v23 += snprintf(&v32[v23], 4096 - v23, " %llu", v24);
          }
          while ( v22 != v21 );
          v18 = snprintf(&v32[v23], 4096 - v23, " /") + v23;
          if ( v25 == v27 )
            break;
          v17 = *(v26 - 1);
        }
      }
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v33, 0x1000u, 0, "%s", v32);
      pthread_mutex_unlock(&stru_1A8A24);
      result = zlog(
                 g_hash_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/miner_util/miner_monitor/miner_monitor.c",
                 161,
                 "task_applog_printer",
                 19,
                 137,
                 40,
                 v33);
    }
    while ( v29 != v26 );
  }
  return result;
}
