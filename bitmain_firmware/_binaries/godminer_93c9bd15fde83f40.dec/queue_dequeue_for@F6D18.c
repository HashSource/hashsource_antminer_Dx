int __fastcall queue_dequeue_for(int a1, char *a2, unsigned int a3, int *a4)
{
  pthread_mutex_t *v4; // r7
  int v9; // r12
  int v10; // r1
  int v11; // r4
  int v13; // r4
  struct timespec tp; // [sp+10h] [bp-100Ch] BYREF
  char v15[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  clock_gettime(1, &tp);
  v9 = *a4;
  v10 = a4[1] + tp.tv_nsec;
  v11 = 0;
  tp.tv_sec += v10 / 1000000000 + v9;
  tp.tv_nsec = v10 % 1000000000;
  while ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v11 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), v4, &tp);
    if ( v11 == 110 )
      goto LABEL_6;
  }
  if ( pipe_pop(*(int **)(a1 + 8), a2, a3) != a3 )
  {
    LOWORD(v13) = -15456;
    V_LOCK();
    HIWORD(v13) = (unsigned int)"ease/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    logfmt_raw(v15, 0x1000u, 0, "%s, unkown error", v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/thread_safe_queue.c",
      155,
      v13,
      17,
      106,
      100,
      v15);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_6:
  pthread_mutex_unlock(v4);
  return v11;
}
