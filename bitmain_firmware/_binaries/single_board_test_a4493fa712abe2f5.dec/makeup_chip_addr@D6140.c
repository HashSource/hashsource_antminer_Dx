int __fastcall makeup_chip_addr(_BYTE *a1, signed int a2)
{
  int result; // r0
  char v5; // r4
  signed int v6; // r1
  _BYTE *v7; // r3
  char v8; // r5
  char v9; // r4
  char v10; // r5
  char v11; // r4
  char v12; // r5
  char v13; // r4
  char v14; // r5
  char v15; // r4
  char v16; // r5
  char v17; // r4
  char v18; // r5
  char v19; // r4
  char v20; // r5
  char v21; // r4
  char v22; // r5
  char v23; // r4
  char v24; // r5
  char v25; // r4
  char v26; // r5
  char v27; // r4
  char v28; // r5
  char v29; // r4
  char v30; // r5
  char v31; // r4
  char v32; // r5
  char v33; // r4
  char v34; // r5
  char v35; // r4
  char v36; // r5
  char v37; // r4
  _BYTE *v38; // r6
  char v39; // r3

  result = sub_F7148(256, a2);
  if ( a2 )
  {
    if ( (unsigned int)a2 <= 0x20 )
    {
      v6 = 0;
    }
    else
    {
      v5 = 0;
      v6 = 0;
      v7 = a1;
      do
      {
        v8 = result + v5;
        *v7 = v5;
        v6 += 32;
        __pld(v7 + 34);
        v9 = result + result + v5;
        v7[1] = v8;
        v7 += 32;
        v10 = result + v9;
        *(v7 - 30) = v9;
        v11 = result + result + v9;
        *(v7 - 29) = v10;
        v12 = result + v11;
        *(v7 - 28) = v11;
        v13 = result + result + v11;
        *(v7 - 27) = v12;
        v14 = result + v13;
        *(v7 - 26) = v13;
        v15 = result + result + v13;
        *(v7 - 25) = v14;
        v16 = result + v15;
        *(v7 - 24) = v15;
        v17 = result + result + v15;
        *(v7 - 23) = v16;
        v18 = result + v17;
        *(v7 - 22) = v17;
        v19 = result + result + v17;
        *(v7 - 21) = v18;
        v20 = result + v19;
        *(v7 - 20) = v19;
        v21 = result + result + v19;
        *(v7 - 19) = v20;
        v22 = result + v21;
        *(v7 - 18) = v21;
        v23 = result + result + v21;
        *(v7 - 17) = v22;
        v24 = result + v23;
        *(v7 - 16) = v23;
        v25 = result + result + v23;
        *(v7 - 15) = v24;
        v26 = result + v25;
        *(v7 - 14) = v25;
        v27 = result + result + v25;
        *(v7 - 13) = v26;
        v28 = result + v27;
        *(v7 - 12) = v27;
        v29 = result + result + v27;
        *(v7 - 11) = v28;
        v30 = result + v29;
        *(v7 - 10) = v29;
        v31 = result + result + v29;
        *(v7 - 9) = v30;
        v32 = result + v31;
        *(v7 - 8) = v31;
        v33 = result + result + v31;
        *(v7 - 7) = v32;
        v34 = result + v33;
        *(v7 - 6) = v33;
        v35 = result + result + v33;
        *(v7 - 5) = v34;
        v36 = result + v35;
        *(v7 - 4) = v35;
        v37 = result + result + v35;
        *(v7 - 3) = v36;
        *(v7 - 2) = v37;
        *(v7 - 1) = result + v37;
        v5 = result + result + v37;
      }
      while ( v6 != ((a2 - 33) & 0xFFFFFFE0) + 32 );
    }
    v38 = &a1[v6 - 1];
    v39 = v6 * result;
    do
    {
      ++v6;
      *++v38 = v39;
      v39 += result;
    }
    while ( a2 > v6 );
  }
  return result;
}
