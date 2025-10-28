int __fastcall pre_push_work_vbk(int a1, int *a2, int a3)
{
  time_t v6; // r0
  int v7; // r3
  bool v8; // zf
  int v9; // r5
  void *v10; // r8
  const char *v11; // r1
  char *v12; // r0
  int v13; // r3
  int v15; // r12
  int v16; // r1
  int v17; // r5
  int v18; // lr
  int v19; // r1

  v6 = time(0);
  v8 = a3 == 0;
  if ( a3 )
    v7 = a2[228];
  v9 = v6;
  if ( !a3 )
    v7 = dword_1A44C4;
  v10 = *(void **)(a1 + 384);
  if ( !v8 )
    --v7;
  dword_1A44C0 = v6;
  if ( !v8 )
    dword_1A44C4 = v7;
  if ( v6 <= v7 )
    v9 = v7 + 1;
  v11 = (const char *)a2[206];
  if ( v6 <= v7 )
    dword_1A44C0 = v9;
  if ( strcmp((const char *)v10, v11) )
  {
    free(v10);
    v12 = _strdup((const char *)a2[206]);
    v13 = a2[227];
    *(_DWORD *)(a1 + 384) = v12;
    *(_DWORD *)(a1 + 468) = v13;
  }
  *(_BYTE *)(a1 + 63) = v9;
  *(_BYTE *)(a1 + 61) = BYTE2(v9);
  *(_BYTE *)(a1 + 62) = BYTE1(v9);
  *(_BYTE *)(a1 + 60) = HIBYTE(v9);
  *(_DWORD *)(a1 + 472) = v9;
  v15 = a2[176];
  dword_1A44C4 = v9;
  v16 = a2[177];
  v17 = a2[178];
  v18 = a2[179];
  *(_DWORD *)(a1 + 264) = v15;
  *(_DWORD *)(a1 + 268) = v16;
  *(_DWORD *)(a1 + 272) = v17;
  *(_DWORD *)(a1 + 276) = v18;
  v19 = a2[181];
  *(_DWORD *)(a1 + 280) = a2[180];
  *(_DWORD *)(a1 + 284) = v19;
  *(_QWORD *)a1 = *a2;
  return 0;
}
