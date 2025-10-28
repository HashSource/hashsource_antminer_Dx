int __fastcall pcba_set_address(int a1)
{
  int v2; // r10
  _BYTE *v3; // r9
  int v4; // r0
  char v5; // r1
  int v6; // r5
  _BYTE *v7; // r3
  char v8; // r2
  char v9; // r1
  char v10; // r2
  char v11; // r1
  char v12; // r2
  char v13; // r1
  char v14; // r2
  char v15; // r1
  char v16; // r2
  char v17; // r1
  char v18; // r2
  char v19; // r1
  char v20; // r2
  char v21; // r1
  char v22; // r2
  char v23; // r1
  char v24; // r2
  char v25; // r1
  char v26; // r2
  char v27; // r1
  char v28; // r2
  char v29; // r1
  char v30; // r2
  char v31; // r1
  char v32; // r2
  char v33; // r1
  char v34; // r2
  char v35; // r2
  _BYTE *v36; // r9
  char v37; // r3

  v2 = *(_DWORD *)(a1 + 180);
  v3 = *(_BYTE **)(a1 + 280);
  v4 = sub_F7148(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    if ( (unsigned __int8)v2 <= 0x20u )
    {
      v6 = 0;
    }
    else
    {
      v5 = 0;
      v6 = 0;
      v7 = v3;
      do
      {
        *v7 = v5;
        v6 += 32;
        __pld(v7 + 34);
        v8 = v4 + v4 + v5;
        v7[1] = v4 + v5;
        v7 += 32;
        v9 = v4 + v8;
        *(v7 - 30) = v8;
        v10 = v4 + v4 + v8;
        *(v7 - 29) = v9;
        v11 = v4 + v10;
        *(v7 - 28) = v10;
        v12 = v4 + v4 + v10;
        *(v7 - 27) = v11;
        v13 = v4 + v12;
        *(v7 - 26) = v12;
        v14 = v4 + v4 + v12;
        *(v7 - 25) = v13;
        v15 = v4 + v14;
        *(v7 - 24) = v14;
        v16 = v4 + v4 + v14;
        *(v7 - 23) = v15;
        v17 = v4 + v16;
        *(v7 - 22) = v16;
        v18 = v4 + v4 + v16;
        *(v7 - 21) = v17;
        v19 = v4 + v18;
        *(v7 - 20) = v18;
        v20 = v4 + v4 + v18;
        *(v7 - 19) = v19;
        v21 = v4 + v20;
        *(v7 - 18) = v20;
        v22 = v4 + v4 + v20;
        *(v7 - 17) = v21;
        v23 = v4 + v22;
        *(v7 - 16) = v22;
        v24 = v4 + v4 + v22;
        *(v7 - 15) = v23;
        v25 = v4 + v24;
        *(v7 - 14) = v24;
        v26 = v4 + v4 + v24;
        *(v7 - 13) = v25;
        v27 = v4 + v26;
        *(v7 - 12) = v26;
        v28 = v4 + v4 + v26;
        *(v7 - 11) = v27;
        v29 = v4 + v28;
        *(v7 - 10) = v28;
        v30 = v4 + v4 + v28;
        *(v7 - 9) = v29;
        v31 = v4 + v30;
        *(v7 - 8) = v30;
        v32 = v4 + v4 + v30;
        *(v7 - 7) = v31;
        v33 = v4 + v32;
        *(v7 - 6) = v32;
        v34 = v4 + v4 + v32;
        *(v7 - 5) = v33;
        *(v7 - 4) = v34;
        *(v7 - 3) = v4 + v34;
        v35 = v4 + v4 + v34;
        *(v7 - 2) = v35;
        *(v7 - 1) = v4 + v35;
        v5 = v4 + v4 + v35;
      }
      while ( v6 != (((unsigned __int8)v2 - 33) & 0xFFFFFFE0) + 32 );
    }
    v36 = &v3[v6 - 1];
    v37 = v6 * v4;
    do
    {
      ++v6;
      *++v36 = v37;
      v37 += v4;
    }
    while ( (unsigned __int8)v2 > v6 );
    v3 = *(_BYTE **)(a1 + 280);
  }
  *(_DWORD *)(a1 + 224) = v4;
  return (*(int (__fastcall **)(int, _BYTE *, int))(a1 + 132))(a1, v3, v2);
}
