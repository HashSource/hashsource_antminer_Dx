int __fastcall get_response(int a1)
{
  char *v2; // r4
  int v3; // r0
  unsigned int v4; // r9
  int v5; // r0
  int v6; // r8
  size_t v7; // r4
  int v8; // r5
  __useconds_t v9; // r0
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 120));
  pthread_mutex_lock(&stru_197BB8);
  v3 = syscall(224);
  v4 = 64;
  logfmt_raw(v11, 0x1000u, 0, "%s on pid %ld", v2, v3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "get_response",
    12,
    186,
    60,
    v11);
  prctl(15, v2);
  memset(v11, 0, 0x100u);
  while ( 1 )
  {
    v5 = ((unsigned int (__fastcall *)(int, int, unsigned int))off_18F4F4[0])(*(_DWORD *)(a1 + 120), (int)v11, 0x100u);
    v6 = *(unsigned __int8 *)(a1 + 657);
    v7 = v5;
    if ( *(_BYTE *)(a1 + 657) )
      break;
    if ( v5 <= 0 )
    {
      v9 = v4;
      v4 *= 2;
      usleep(v9);
      if ( v4 >= 0x3E8 )
        v4 = 1000;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 628);
      v4 = 64;
      pthread_mutex_lock((pthread_mutex_t *)(v8 + 16));
      _pipe_push(*(_DWORD **)(v8 + 4), v11, **(_DWORD **)(v8 + 4) * v7);
      *(_DWORD *)(v8 + 12) += v7;
      pthread_cond_signal((pthread_cond_t *)(v8 + 40));
      pthread_mutex_unlock((pthread_mutex_t *)(v8 + 16));
      memset(v11, v6, v7);
    }
  }
  *(_BYTE *)(a1 + 657) = 0;
  return 0;
}
