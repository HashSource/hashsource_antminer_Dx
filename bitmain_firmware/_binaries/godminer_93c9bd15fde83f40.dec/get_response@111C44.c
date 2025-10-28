int __fastcall get_response(int a1)
{
  char *v2; // r4
  unsigned int v3; // r9
  int v4; // r0
  int v5; // r0
  int v6; // r8
  size_t v7; // r4
  int v8; // r5
  __useconds_t v9; // r0
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 132));
  pthread_mutex_lock(&stru_1A8A24);
  v3 = 64;
  v4 = syscall(224);
  logfmt_raw(v11, 0x1000u, 0, "%s on pid %ld", v2, v4);
  pthread_mutex_unlock(&stru_1A8A24);
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
    v5 = ((unsigned int (__fastcall *)(int, int, unsigned int))off_1A2BA0[0])(*(_DWORD *)(a1 + 132), (int)v11, 0x100u);
    v6 = *(unsigned __int8 *)(a1 + 685);
    v7 = v5;
    if ( *(_BYTE *)(a1 + 685) )
      break;
    if ( v5 <= 0 )
    {
      v9 = v3;
      v3 *= 2;
      usleep(v9);
      if ( v3 >= 0x3E8 )
        v3 = 1000;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 656);
      v3 = 64;
      pthread_mutex_lock((pthread_mutex_t *)(v8 + 16));
      _pipe_push(*(_DWORD **)(v8 + 4), v11, **(_DWORD **)(v8 + 4) * v7);
      *(_DWORD *)(v8 + 12) += v7;
      pthread_cond_signal((pthread_cond_t *)(v8 + 40));
      pthread_mutex_unlock((pthread_mutex_t *)(v8 + 16));
      memset(v11, v6, v7);
    }
  }
  *(_BYTE *)(a1 + 685) = 0;
  return 0;
}
