int __fastcall makeup_chip_addr_dcr(_BYTE *a1, signed int a2)
{
  int v4; // r0
  int v5; // r6
  char v6; // r2
  char v7; // r0
  signed int v8; // r1
  _BYTE *v9; // r3
  char v10; // r12
  char v11; // r0
  char v12; // r12
  char v13; // r0
  char v14; // r12
  char v15; // r0
  char v16; // r12
  char v17; // r0
  char v18; // r12
  char v19; // r0
  char v20; // r12
  char v21; // r0
  char v22; // r12
  char v23; // r0
  char v24; // r12
  char v25; // r0
  char v26; // r12
  char v27; // r0
  char v28; // r12
  char v29; // r0
  char v30; // r12
  char v31; // r0
  char v32; // r12
  char v33; // r0
  char v34; // r12
  char v35; // r0
  char v36; // r12
  char v37; // r12
  _BYTE *v38; // r0
  char v39; // r3

  v4 = sub_16E220(256, a2);
  v5 = v4;
  if ( a2 )
  {
    v6 = v4;
    if ( (unsigned int)a2 <= 0x20 )
    {
      v8 = 0;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      v9 = a1;
      do
      {
        *v9 = v7;
        v8 += 32;
        __pld(v9 + 34);
        v9[1] = v6 + v7;
        v9 += 32;
        v10 = v6 + v6 + v6 + v7;
        *(v9 - 30) = v6 + v6 + v7;
        v11 = v6 + v10;
        *(v9 - 29) = v10;
        v12 = v6 + v6 + v10;
        *(v9 - 28) = v11;
        v13 = v6 + v12;
        *(v9 - 27) = v12;
        v14 = v6 + v6 + v12;
        *(v9 - 26) = v13;
        v15 = v6 + v14;
        *(v9 - 25) = v14;
        v16 = v6 + v6 + v14;
        *(v9 - 24) = v15;
        v17 = v6 + v16;
        *(v9 - 23) = v16;
        v18 = v6 + v6 + v16;
        *(v9 - 22) = v17;
        v19 = v6 + v18;
        *(v9 - 21) = v18;
        v20 = v6 + v6 + v18;
        *(v9 - 20) = v19;
        v21 = v6 + v20;
        *(v9 - 19) = v20;
        v22 = v6 + v6 + v20;
        *(v9 - 18) = v21;
        v23 = v6 + v22;
        *(v9 - 17) = v22;
        v24 = v6 + v6 + v22;
        *(v9 - 16) = v23;
        v25 = v6 + v24;
        *(v9 - 15) = v24;
        v26 = v6 + v6 + v24;
        *(v9 - 14) = v25;
        v27 = v6 + v26;
        *(v9 - 13) = v26;
        v28 = v6 + v6 + v26;
        *(v9 - 12) = v27;
        v29 = v6 + v28;
        *(v9 - 11) = v28;
        v30 = v6 + v6 + v28;
        *(v9 - 10) = v29;
        v31 = v6 + v30;
        *(v9 - 9) = v30;
        v32 = v6 + v6 + v30;
        *(v9 - 8) = v31;
        v33 = v6 + v32;
        *(v9 - 7) = v32;
        v34 = v6 + v6 + v32;
        *(v9 - 6) = v33;
        v35 = v6 + v34;
        *(v9 - 5) = v34;
        v36 = v6 + v6 + v34;
        *(v9 - 4) = v35;
        *(v9 - 3) = v36;
        *(v9 - 2) = v6 + v36;
        v37 = v6 + v6 + v36;
        *(v9 - 1) = v37;
        v7 = v6 + v37;
      }
      while ( v8 != ((a2 - 33) & 0xFFFFFFE0) + 32 );
    }
    v38 = &a1[v8 - 1];
    v39 = v8 * v6;
    do
    {
      ++v8;
      *++v38 = v39;
      v39 += v6;
    }
    while ( a2 > v8 );
  }
  *a1 = rand();
  return v5;
}
