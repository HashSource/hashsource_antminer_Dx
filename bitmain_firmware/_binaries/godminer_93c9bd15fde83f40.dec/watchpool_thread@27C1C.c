void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r4
  int v2; // r0
  int v3; // r4
  int *v4; // r10
  int v5; // r5
  int v6; // r11
  int v7; // r0
  const char *v8; // r10
  int v9; // lr
  _DWORD *v10; // lr
  int v11; // r1
  size_t v12; // r2
  int v13; // r3
  int v14; // r4
  pthread_mutex_t *v15; // r5
  int v16; // r4
  char v17; // [sp+20h] [bp-109Ch] BYREF
  const char *v18; // [sp+40h] [bp-107Ch]
  int v19; // [sp+44h] [bp-1078h]
  int v20; // [sp+4Ch] [bp-1070h]
  int *v21; // [sp+50h] [bp-106Ch]
  pthread_mutex_t *mutex; // [sp+54h] [bp-1068h]
  char **v23; // [sp+58h] [bp-1064h]
  int *v24; // [sp+5Ch] [bp-1060h]
  char *v25; // [sp+60h] [bp-105Ch]
  const char *v26; // [sp+64h] [bp-1058h]
  const char *v27; // [sp+68h] [bp-1054h]
  int *v28; // [sp+6Ch] [bp-1050h]
  struct timeval tv; // [sp+70h] [bp-104Ch] BYREF
  const char *v30; // [sp+78h] [bp-1044h]
  int v31; // [sp+7Ch] [bp-1040h]
  int v32; // [sp+80h] [bp-103Ch]
  int v33; // [sp+84h] [bp-1038h]
  __int64 v34; // [sp+88h] [bp-1034h]
  int v35; // [sp+90h] [bp-102Ch]
  int v36; // [sp+94h] [bp-1028h]
  char *v37; // [sp+98h] [bp-1024h]
  int v38; // [sp+9Ch] [bp-1020h]
  int v39; // [sp+A0h] [bp-101Ch]
  int v40; // [sp+A4h] [bp-1018h]
  const char *v41; // [sp+A8h] [bp-1014h]
  int v42; // [sp+ACh] [bp-1010h]
  size_t v43; // [sp+B0h] [bp-100Ch]
  int v44; // [sp+B4h] [bp-1008h]
  char v45[4100]; // [sp+B8h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  if ( !nice(10) )
    sub_24314();
  v1 = (char *)calloc(1u, 0x40u);
  snprintf(v1, 0x40u, "%.10s_%d", "watchpool_thread", 0);
  V_LOCK();
  v2 = syscall(224);
  v28 = &g_zc;
  logfmt_raw(v45, 0x1000u, 0, "%s on pid %ld", v1, v2);
  V_UNLOCK();
  v26 = "stable for >%d seconds";
  v21 = &dword_1AA828;
  v24 = dword_1A8A20;
  v27 = "poolno";
  v25 = "pool";
  mutex = &stru_1A8A24;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "watchpool_thread",
    16,
    368,
    60,
    v45);
  v23 = (char **)&v17;
  prctl(15, v1);
  while ( 1 )
  {
    gettimeofday(&tv, 0);
    if ( total_pools > 0 )
    {
      v3 = 0;
      do
      {
        while ( 1 )
        {
          v4 = *(int **)(pools + 4 * v3++);
          pthread_mutex_lock((pthread_mutex_t *)(v4 + 298));
          v5 = *((unsigned __int8 *)v4 + 1272);
          pthread_mutex_unlock((pthread_mutex_t *)(v4 + 298));
          if ( !v5 )
          {
            v6 = v4[1];
            pthread_mutex_lock(&stru_1AA810);
            v20 = *v21;
            pthread_mutex_unlock(&stru_1AA810);
            if ( v6 < *(_DWORD *)(v20 + 4) && tv.tv_sec - v4[319] > 120 )
              break;
          }
          if ( total_pools <= v3 )
            goto LABEL_11;
        }
        pthread_mutex_lock(mutex);
        v7 = *v4;
        v8 = (const char *)v4[2];
        v31 = 6;
        v9 = *v24;
        v32 = 3;
        v34 = v7;
        v35 = 0;
        v30 = v27;
        *v24 = v9 + 2;
        v43 = strlen(v8);
        v39 = 0;
        v40 = 0;
        v42 = 0;
        v44 = 0;
        v37 = v25;
        v38 = 4;
        v41 = v8;
        v10 = v23;
        v19 = 120;
        v18 = v26;
        *v23 = v25;
        v10[1] = 4;
        v10[2] = 0;
        v10[3] = 0;
        v10 += 4;
        v11 = v42;
        v12 = v43;
        v13 = v44;
        *v10 = v41;
        v10[1] = v11;
        v10[2] = v12;
        v10[3] = v13;
        logfmt_raw(v45, 0x1000u, 0, v36, v30, v31, v32, v33, v34, v35, v36);
        pthread_mutex_unlock(mutex);
        zlog(
          *v28,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "watchpool_thread",
          16,
          387,
          80,
          v45);
        switch_pools();
      }
      while ( total_pools > v3 );
    }
LABEL_11:
    pthread_mutex_lock(&stru_1AA810);
    v14 = *v21;
    pthread_mutex_unlock(&stru_1AA810);
    v15 = (pthread_mutex_t *)(v14 + 1192);
    pthread_mutex_lock((pthread_mutex_t *)(v14 + 1192));
    v16 = *(unsigned __int8 *)(v14 + 1272);
    pthread_mutex_unlock(v15);
    if ( v16 )
      switch_pools();
    sleep(0x1Eu);
  }
}
