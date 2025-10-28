int __fastcall workio_submit_work(int a1, int *a2)
{
  int v3; // r7
  int v4; // r5
  int v5; // r3
  _DWORD *v6; // r6
  int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r12
  int v10; // r2
  int v11; // r0
  int v12; // r1
  unsigned __int64 v13; // kr10_8
  unsigned int v14; // lr
  unsigned __int64 v15; // kr18_8
  _QWORD *v16; // r9
  int v17; // r2
  _QWORD *v18; // r0
  unsigned __int64 v19; // kr20_8
  int v20; // r2
  int *v21; // r0
  int v22; // t1
  unsigned __int64 v23; // kr28_8
  __int64 v24; // kr30_8
  int v25; // r8
  void (__fastcall *kind)(int, int *, _DWORD *); // r4
  unsigned int v27; // r5
  int v28; // lr
  bool v29; // cf
  unsigned int v30; // r5
  int v31; // r3
  unsigned int v32; // lr
  __int64 v33; // kr38_8
  int v34; // r5
  int v35; // r3
  int v36; // r10
  int v37; // r4
  int v39; // r6
  int v40; // r3
  int v41; // [sp+28h] [bp-143Ch]
  pthread_mutex_t *mutex; // [sp+30h] [bp-1434h]
  int v44; // [sp+38h] [bp-142Ch]
  int v45; // [sp+3Ch] [bp-1428h]
  int v46; // [sp+4Ch] [bp-1418h]
  __int64 v47; // [sp+50h] [bp-1414h]
  int v48; // [sp+5Ch] [bp-1408h]
  _DWORD v49[4]; // [sp+60h] [bp-1404h] BYREF
  __int64 v50; // [sp+70h] [bp-13F4h]
  int v51; // [sp+78h] [bp-13ECh]
  int v52; // [sp+7Ch] [bp-13E8h]
  char v53[4100]; // [sp+460h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)dword_1A4988;
  if ( !dword_1A4988 )
  {
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "frontend runtime type not set");
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
      v53);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 298));
  v3 = *((unsigned __int8 *)a2 + 1272);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 298));
  if ( v3 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v39 = *a2;
    v49[0] = "poolno";
    v49[1] = 6;
    v49[2] = 3;
    v50 = v39;
    v51 = 0;
    ++dword_1A8A20[0];
    logfmt_raw(v53, 0x1000u, 0, v52, "poolno", 6, 3, v49[3], (__int64)v39, 0, v52, "submit idle pool's nonce.");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "workio_submit_work",
      18,
      161,
      20,
      v53);
    return 0;
  }
  else
  {
    pthread_mutex_lock(&stru_1A9B48);
    v4 = dword_1A9B60;
    pthread_mutex_unlock(&stru_1A9B48);
    if ( v4 <= 0 )
    {
      v44 = *a2;
      v8 = 0;
      v9 = 0;
    }
    else
    {
      v5 = *a2;
      v44 = *a2;
      if ( v4 <= 8 )
      {
        v8 = 0;
        v20 = *a2 + 46;
        v9 = 0;
      }
      else
      {
        v6 = &unk_1A9BC0;
        v45 = v5 + 46;
        v7 = 8 * (v5 + 46);
        v8 = 0;
        v9 = 0;
        do
        {
          v3 += 8;
          v10 = *(v6 - 21);
          v11 = *(v6 - 20);
          v12 = *(v6 - 19);
          v13 = __PAIR64__(v9, v8) + *(_QWORD *)(*(v6 - 23) + v7) + *(_QWORD *)(*(v6 - 22) + v7);
          v14 = *(_DWORD *)(v10 + v7);
          __pld(v6);
          v15 = v13 + __PAIR64__(*(_DWORD *)(v10 + v7 + 4), v14) + *(_QWORD *)(v11 + v7);
          v16 = (_QWORD *)(*(v6 - 18) + v7);
          v17 = *(v6 - 16);
          v18 = (_QWORD *)(*(v6 - 17) + v7);
          v6 += 8;
          v19 = v15 + *(_QWORD *)(v12 + v7) + *v16 + *v18 + *(_QWORD *)(v17 + v7);
          v9 = HIDWORD(v19);
          v8 = v19;
        }
        while ( v3 != ((v4 - 9) & 0xFFFFFFF8) + 8 );
        v20 = v45;
      }
      v21 = &dword_1A9B64[v3];
      do
      {
        v22 = *v21++;
        ++v3;
        v23 = __PAIR64__(v9, v8) + *(_QWORD *)(v22 + 8 * v20);
        v9 = HIDWORD(v23);
        v8 = v23;
      }
      while ( v3 < v4 );
    }
    v24 = total_diff1;
    v25 = 2 * v44;
    kind = (void (__fastcall *)(int, int *, _DWORD *))mutex[1].__kind;
    v27 = dword_1AA710[2 * v44];
    v28 = dword_1AA710[2 * v44 + 1];
    dword_1AA710[v25] = v8;
    v29 = v8 >= v27;
    v30 = v8 - v27;
    v31 = a2[340];
    v32 = v9 - (v28 + !v29);
    dword_1AA710[v25 + 1] = v9;
    v33 = v24 + __PAIR64__(v32, v30);
    v29 = __CFADD__(v31, v30);
    v34 = v31 + v30;
    v35 = a2[341];
    a2[340] = v34;
    total_diff1 = v33;
    a2[341] = v32 + v29 + v35;
    v36 = 0;
    kind(a1, a2, v49);
    do
    {
      v37 = ((int (__fastcall *)(int *, _DWORD *))mutex->__nusers)(a2, v49);
      if ( v37 )
        break;
      v40 = total_ro;
      ++a2[330];
      total_ro = v40 + 1;
      pthread_mutex_lock(&stru_1A8A24);
      v41 = v36++;
      v47 = *a2;
      ++dword_1A8A20[0];
      logfmt_raw(
        v53,
        0x1000u,
        0,
        v48,
        "poolno",
        6,
        3,
        v46,
        v47,
        0,
        v48,
        "submit_upstream_work stratum_send_line failed %d count %d",
        0,
        v41);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "workio_submit_work",
        18,
        174,
        100,
        v53);
    }
    while ( v36 != 4 );
    return v37;
  }
}
