int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  void *v5; // r8
  char *v6; // r9
  int v7; // r3
  unsigned int v9; // r11
  int v10; // r10
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  _QWORD *v14; // r10
  unsigned int v15; // kr04_4
  unsigned int v16; // r3
  int v17; // r1
  int v18; // r10
  unsigned int v19; // r11
  char v20; // [sp+1Fh] [bp-100Dh] BYREF
  int v21; // [sp+20h] [bp-100Ch] BYREF
  int v22; // [sp+24h] [bp-1008h] BYREF
  char v23[4100]; // [sp+28h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 120));
  pthread_mutex_lock(&stru_197BB8);
  v3 = syscall(224);
  logfmt_raw(v23, 0x1000u, 0, "%s on pid %ld", v2, v3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "scanhash",
    8,
    99,
    60,
    v23);
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 628);
  v5 = calloc(1u, *(_DWORD *)(a1 + 608));
  v6 = (char *)calloc(1u, *(_DWORD *)(a1 + 612));
  while ( 1 )
  {
    memset(v23, 0, 0x200u);
    sub_4B788(v4, v23);
    if ( *(_BYTE *)(a1 + 656) )
      break;
LABEL_5:
    v7 = (unsigned __int8)v23[0];
    while ( 1 )
    {
      if ( v7 != 170 )
      {
        sub_4B788(v4, v23);
        if ( *(_BYTE *)(a1 + 656) )
          goto LABEL_10;
        goto LABEL_5;
      }
      sub_4B788(v4, &v23[1]);
      if ( *(_BYTE *)(a1 + 656) )
        goto LABEL_10;
      v7 = (unsigned __int8)v23[1];
      if ( v23[1] == 85 )
        break;
      v23[0] = v23[1];
    }
    sub_4B788(v4, &v23[2]);
    v9 = (*(int (__fastcall **)(_DWORD))(a1 + 108))((unsigned __int8)v23[2]);
    queue_dequeue(v4, &v23[3], v9);
    v10 = *(unsigned __int8 *)(a1 + 656);
    if ( *(_BYTE *)(a1 + 656) )
      break;
    memset(v5, *(unsigned __int8 *)(a1 + 656), *(_DWORD *)(a1 + 608));
    v21 = v10;
    v22 = v10;
    v20 = v10;
    v11 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 48))(
            a1,
            v23,
            v5,
            &v20,
            v6,
            &v21,
            &v22);
    if ( v11 == 1 )
    {
      v18 = *(_DWORD *)(a1 + 636);
      v19 = v9 + 3;
      pthread_mutex_lock((pthread_mutex_t *)(v18 + 16));
      _pipe_push(*(_DWORD **)(v18 + 4), v23, **(_DWORD **)(v18 + 4) * v19);
      *(_DWORD *)(v18 + 12) += v19;
      pthread_cond_signal((pthread_cond_t *)(v18 + 40));
      pthread_mutex_unlock((pthread_mutex_t *)(v18 + 16));
    }
    else if ( v11 )
    {
      if ( v11 == 2 )
        ++*(_QWORD *)(*(_DWORD *)(a1 + 248) + 40);
    }
    else if ( !*(_BYTE *)(a1 + v22 + 312) && v20 && platform_check_repeat_nonce((int *)a1, v21, v6) )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 248) + 48 * v21 + 32);
    }
    else
    {
      v12 = (*(int (__fastcall **)(int, void *))(a1 + 52))(a1, v5);
      if ( v12 <= 5 )
      {
        v13 = v21;
        v14 = (_QWORD *)(*(_DWORD *)(a1 + 248) + 8 * v12 + 48 * v21);
        ++*v14;
        if ( v12 <= 1 )
        {
          v15 = *(_DWORD *)(a1 + 240);
          v16 = *(_DWORD *)(a1 + 244);
          ++*(_DWORD *)(*(_DWORD *)(a1 + 272) + 4 * v13);
          v17 = v22;
          *(_QWORD *)(a1 + 240) = __PAIR64__(v16, v15) + 1;
          ++*(_QWORD *)(a1 + 8 * v17 + 344);
          if ( !v12 && !*(_BYTE *)(a1 + v17 + 312) )
            queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 640) + 632), (char *)v5, 1);
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 656) = 0;
  free(v5);
  free(v6);
  return 0;
}
