int __fastcall sub_5954C(int a1, int *a2, int a3)
{
  int v5; // r5
  size_t v6; // r2
  int v8; // lr
  int v9; // r12
  int v10; // r1
  int v11; // lr
  int v12; // r12
  int v13; // r1
  unsigned int v14; // r5
  size_t v15; // r8
  unsigned int v16; // r5
  size_t v17; // r2
  int v18; // r0
  __int64 v19; // [sp+0h] [bp-14h] BYREF
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  v5 = *(_DWORD *)(a1 + 388);
  if ( a3 && *((_BYTE *)a2 + 424) )
  {
    dword_1A4000 = 0;
    gettimeofday(&tv, 0);
    v19 = tv.tv_usec + (int)&loc_F4240 * tv.tv_sec;
    v18 = rand_r((unsigned int *)&v19);
    v6 = *(_DWORD *)(a1 + 388);
    dword_1A4004 = v18;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 388);
  }
  memset(*(void **)(a1 + 392), 0, v6);
  if ( v5 != 6 )
  {
    v14 = v5 - 6;
    v15 = v14 >= 4 ? 4 : v14;
    memcpy(*(void **)(a1 + 392), &dword_1A4000, v15);
    ++dword_1A4000;
    if ( v14 > 4 )
    {
      v16 = v14 - v15;
      if ( v16 >= 4 )
        v17 = 4;
      else
        v17 = v16;
      memcpy((void *)(*(_DWORD *)(a1 + 392) + v15), &dword_1A4004, v17);
      ++dword_1A4004;
    }
  }
  memcpy((void *)(a1 + 40), (const void *)a2[19], a2[18]);
  memcpy((void *)(a1 + a2[18] + 40), *(const void **)(a1 + 392), *(_DWORD *)(a1 + 388));
  v8 = a2[177];
  v9 = a2[178];
  v10 = a2[179];
  *(_DWORD *)(a1 + 264) = a2[176];
  *(_DWORD *)(a1 + 268) = v8;
  *(_DWORD *)(a1 + 272) = v9;
  *(_DWORD *)(a1 + 276) = v10;
  v11 = a2[181];
  v12 = a2[182];
  v13 = a2[183];
  *(_DWORD *)(a1 + 280) = a2[180];
  *(_DWORD *)(a1 + 284) = v11;
  *(_DWORD *)(a1 + 288) = v12;
  *(_DWORD *)(a1 + 292) = v13;
  *(_QWORD *)a1 = *a2;
  return 0;
}
