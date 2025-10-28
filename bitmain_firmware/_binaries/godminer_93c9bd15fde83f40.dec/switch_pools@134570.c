int switch_pools()
{
  int v0; // r7
  _DWORD *v1; // r5
  int v2; // r12
  _DWORD *v3; // r8
  int v4; // r2
  int v5; // r4
  int v6; // r3
  int v7; // r2
  int *v8; // r11
  int *v9; // t1
  int v10; // r9
  _DWORD *v11; // r4
  int result; // r0
  int v13; // [sp+14h] [bp-1018h]
  char v14[4100]; // [sp+28h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1AA810);
  v0 = dword_1AA828;
  v1 = (_DWORD *)(unsigned __int16)&pools;
  v2 = total_pools;
  v3 = (_DWORD *)(unsigned __int16)&g_zc;
  if ( total_pools <= 0 )
  {
    HIWORD(v1) = (unsigned int)&pools >> 16;
    HIWORD(v3) = (unsigned int)&g_zc >> 16;
  }
  v13 = *(_DWORD *)dword_1AA828;
  if ( total_pools > 0 )
  {
    HIWORD(v1) = 26;
    HIWORD(v3) = 26;
    v5 = 0;
    do
    {
      v6 = 0;
      v7 = *v1 - 4;
      while ( 1 )
      {
        v9 = *(int **)(v7 + 4);
        v7 += 4;
        v8 = v9;
        ++v6;
        if ( v9[1] == v5 )
          break;
        if ( v2 <= v6 )
        {
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v14, 0x1000u, 0, "WTF No pool %d found!", v5);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            *v3,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/pool.c",
            127,
            "priority_pool",
            13,
            249,
            100,
            v14);
          v8 = *(int **)(*v1 + 4 * v5);
          break;
        }
      }
      pthread_mutex_lock((pthread_mutex_t *)(v8 + 298));
      v10 = *((unsigned __int8 *)v8 + 1272);
      pthread_mutex_unlock((pthread_mutex_t *)(v8 + 298));
      if ( !v10 )
      {
        v4 = *v8;
        goto LABEL_12;
      }
      ++v5;
      v2 = total_pools;
    }
    while ( total_pools > v5 );
    v4 = v13;
  }
  else
  {
    v4 = *(_DWORD *)dword_1AA828;
  }
LABEL_12:
  v11 = *(_DWORD **)(*v1 + 4 * v4);
  pthread_mutex_unlock(&stru_1AA810);
  pthread_mutex_lock(&stru_1AA810);
  dword_1AA828 = (int)v11;
  pthread_cond_broadcast(&cond);
  pthread_mutex_unlock(&stru_1AA810);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v14, 0x1000u, 0, "Switching pool %d to pool %d", *(_DWORD *)v0, *v11);
  pthread_mutex_unlock(&stru_1A8A24);
  result = zlog(
             *v3,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/pool.c",
             127,
             "switch_pools",
             12,
             361,
             60,
             v14);
  if ( (_DWORD *)v0 != v11 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v0 + 1192));
    pthread_cond_broadcast((pthread_cond_t *)(v0 + 1224));
    return pthread_mutex_unlock((pthread_mutex_t *)(v0 + 1192));
  }
  return result;
}
