int __fastcall sub_F7E78(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r1
  _DWORD *v7; // r3
  _DWORD *v8; // r2
  int v9; // r7
  int v10; // r6
  int v11; // r4
  int v12; // lr
  int v13; // r6
  int v14; // r4
  int v15; // lr
  int v16; // t1
  int v17; // lr
  int v18; // r12
  int v19; // r2
  int v20; // lr
  int v21; // r12
  int v22; // r2

  result = strncasecmp((const char *)(a3 + 66), (const char *)(a2 + 296), 0x20u);
  if ( result )
    return sub_F7DE8();
  v6 = *(_DWORD *)(a3 + 30);
  v7 = (_DWORD *)a3;
  *(_DWORD *)(a2 + 368) = *(_DWORD *)(a3 + 26);
  *(_DWORD *)(a2 + 372) = v6;
  v8 = (_DWORD *)(a3 + 98);
  v9 = *(_DWORD *)(a3 + 98);
  v10 = *(_DWORD *)(a3 + 102);
  v11 = *(_DWORD *)(a3 + 106);
  v12 = v8[3];
  *(_DWORD *)(a2 + 432) = v9;
  *(_DWORD *)(a2 + 436) = v10;
  *(_DWORD *)(a2 + 440) = v11;
  *(_DWORD *)(a2 + 444) = v12;
  v13 = v8[5];
  v14 = v8[6];
  v15 = v8[7];
  *(_DWORD *)(a2 + 448) = v8[4];
  *(_DWORD *)(a2 + 452) = v13;
  *(_DWORD *)(a2 + 456) = v14;
  *(_DWORD *)(a2 + 460) = v15;
  v16 = *(_DWORD *)((char *)v7 + 34);
  v7 = (_DWORD *)((char *)v7 + 34);
  v17 = v7[1];
  v18 = v7[2];
  v19 = v7[3];
  *(_DWORD *)(a2 + 400) = v16;
  *(_DWORD *)(a2 + 404) = v17;
  *(_DWORD *)(a2 + 408) = v18;
  *(_DWORD *)(a2 + 412) = v19;
  v20 = v7[5];
  v21 = v7[6];
  v22 = v7[7];
  *(_DWORD *)(a2 + 416) = v7[4];
  *(_DWORD *)(a2 + 420) = v20;
  *(_DWORD *)(a2 + 424) = v21;
  *(_DWORD *)(a2 + 428) = v22;
  return result;
}
