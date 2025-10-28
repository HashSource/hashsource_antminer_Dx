int __fastcall sub_C3130(int a1, int *a2, int a3)
{
  int v4; // r7
  size_t v6; // r6
  size_t v7; // r8
  size_t v8; // r2
  size_t v9; // r2
  int v11; // lr
  int v12; // r12
  int v13; // r1
  int v14; // lr
  int v15; // r12
  int v16; // r1
  int v17; // r0
  __int64 v18; // [sp+0h] [bp-14h] BYREF
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  v4 = *(_DWORD *)(a1 + 388);
  v6 = v4 - 5;
  if ( (unsigned int)(v4 - 5) >= 4 )
    v6 = 4;
  v7 = v4 - v6;
  if ( a3 && *((_BYTE *)a2 + 424) )
  {
    dword_195D40 = 0;
    gettimeofday(&tv, 0);
    v18 = tv.tv_usec + (int)&loc_F4240 * tv.tv_sec;
    v17 = rand_r((unsigned int *)&v18);
    v8 = *(_DWORD *)(a1 + 388);
    dword_195D44 = v17;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 388);
  }
  memset(*(void **)(a1 + 392), 0, v8);
  if ( v4 != 5 )
  {
    memcpy(*(void **)(a1 + 392), &dword_195D40, v6);
    ++dword_195D40;
  }
  if ( v7 != 5 )
  {
    v9 = v7 - 5;
    if ( v7 - 5 >= 4 )
      v9 = 4;
    memcpy((void *)(*(_DWORD *)(a1 + 392) + v6), &dword_195D44, v9);
    ++dword_195D44;
  }
  memcpy((void *)(a1 + 40), (const void *)a2[19], a2[18]);
  memcpy((void *)(a1 + a2[18] + 40), *(const void **)(a1 + 392), *(_DWORD *)(a1 + 388));
  v11 = a2[177];
  v12 = a2[178];
  v13 = a2[179];
  *(_DWORD *)(a1 + 264) = a2[176];
  *(_DWORD *)(a1 + 268) = v11;
  *(_DWORD *)(a1 + 272) = v12;
  *(_DWORD *)(a1 + 276) = v13;
  v14 = a2[181];
  v15 = a2[182];
  v16 = a2[183];
  *(_DWORD *)(a1 + 280) = a2[180];
  *(_DWORD *)(a1 + 284) = v14;
  *(_DWORD *)(a1 + 288) = v15;
  *(_DWORD *)(a1 + 292) = v16;
  *(_QWORD *)a1 = *a2;
  return 0;
}
