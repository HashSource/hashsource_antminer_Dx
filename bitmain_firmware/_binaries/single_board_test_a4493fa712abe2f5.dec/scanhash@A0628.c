int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  void *v5; // r8
  char *v6; // r9
  int v7; // r3
  unsigned int v9; // r10
  int v10; // r7
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r7
  _QWORD *v14; // r3
  __int64 v15; // kr08_8
  int v16; // r1
  int v17; // r7
  unsigned int v18; // r10
  char v19; // [sp+17h] [bp-100Dh] BYREF
  int v20; // [sp+18h] [bp-100Ch] BYREF
  int v21; // [sp+1Ch] [bp-1008h] BYREF
  char v22[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 120));
  pthread_mutex_lock(&stru_3B526C);
  v3 = syscall(224);
  logfmt_raw(v22, 0x1000u, 0, "%s on pid %ld", v2, v3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/backend/backend_base.c", 60, "scanhash", 8, 99, 60, v22);
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 628);
  v5 = calloc(1u, *(_DWORD *)(a1 + 608));
  v6 = (char *)calloc(1u, *(_DWORD *)(a1 + 612));
  while ( 1 )
  {
    memset(v22, 0, 0x200u);
    sub_D288C(v4, v22);
    if ( *(_BYTE *)(a1 + 656) )
      break;
LABEL_5:
    v7 = (unsigned __int8)v22[0];
    while ( 1 )
    {
      if ( v7 != 170 )
      {
        sub_D288C(v4, v22);
        if ( *(_BYTE *)(a1 + 656) )
          goto LABEL_10;
        goto LABEL_5;
      }
      sub_D288C(v4, &v22[1]);
      if ( *(_BYTE *)(a1 + 656) )
        goto LABEL_10;
      v7 = (unsigned __int8)v22[1];
      if ( v22[1] == 85 )
        break;
      v22[0] = v22[1];
    }
    sub_D288C(v4, &v22[2]);
    v9 = (*(int (__fastcall **)(_DWORD))(a1 + 108))((unsigned __int8)v22[2]);
    queue_dequeue(v4, &v22[3], v9);
    v10 = *(unsigned __int8 *)(a1 + 656);
    if ( *(_BYTE *)(a1 + 656) )
      break;
    memset(v5, *(unsigned __int8 *)(a1 + 656), *(_DWORD *)(a1 + 608));
    v20 = v10;
    v21 = v10;
    v19 = v10;
    v11 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 48))(
            a1,
            v22,
            v5,
            &v19,
            v6,
            &v20,
            &v21);
    if ( v11 == 1 )
    {
      v17 = *(_DWORD *)(a1 + 636);
      v18 = v9 + 3;
      pthread_mutex_lock((pthread_mutex_t *)(v17 + 16));
      _pipe_push(*(_DWORD **)(v17 + 4), v22, **(_DWORD **)(v17 + 4) * v18);
      *(_DWORD *)(v17 + 12) += v18;
      pthread_cond_signal((pthread_cond_t *)(v17 + 40));
      pthread_mutex_unlock((pthread_mutex_t *)(v17 + 16));
    }
    else if ( v11 )
    {
      if ( v11 == 2 )
        ++*(_QWORD *)(*(_DWORD *)(a1 + 248) + 40);
    }
    else if ( !*(_BYTE *)(v21 + a1 + 312) && v19 && platform_check_repeat_nonce((_DWORD *)a1, v20, v6) )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 248) + 48 * v20 + 32);
    }
    else
    {
      v12 = (*(int (__fastcall **)(int, void *))(a1 + 52))(a1, v5);
      if ( v12 <= 5 )
      {
        v13 = v20;
        v14 = (_QWORD *)(*(_DWORD *)(a1 + 248) + 8 * v12 + 48 * v20);
        ++*v14;
        if ( v12 <= 1 )
        {
          v15 = *(_QWORD *)(a1 + 240) + 1LL;
          ++*(_DWORD *)(*(_DWORD *)(a1 + 272) + 4 * v13);
          v16 = v21;
          *(_QWORD *)(a1 + 240) = v15;
          ++*(_QWORD *)(a1 + 8 * v16 + 344);
          if ( !v12 && !*(_BYTE *)(v16 + a1 + 312) )
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
