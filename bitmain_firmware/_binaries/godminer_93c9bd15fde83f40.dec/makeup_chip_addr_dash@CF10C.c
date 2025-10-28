int __fastcall makeup_chip_addr_dash(_BYTE *a1, signed int a2)
{
  int result; // r0
  char v5; // r12
  signed int v6; // r1
  _BYTE *v7; // r3
  char v8; // lr
  char v9; // r12
  char v10; // lr
  char v11; // r12
  char v12; // lr
  char v13; // r12
  char v14; // lr
  char v15; // r12
  char v16; // lr
  char v17; // r12
  char v18; // lr
  char v19; // r12
  char v20; // lr
  char v21; // r12
  char v22; // lr
  char v23; // r12
  char v24; // lr
  char v25; // r12
  char v26; // lr
  char v27; // r12
  char v28; // lr
  char v29; // r12
  char v30; // lr
  char v31; // r12
  char v32; // lr
  char v33; // r12
  char v34; // lr
  char v35; // lr
  _BYTE *v36; // r5
  char v37; // r3

  result = sub_16E220(256, a2);
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
        *v7 = v5;
        v6 += 32;
        __pld(v7 + 34);
        v7[1] = result + v5;
        v7 += 32;
        v8 = result + result + result + v5;
        *(v7 - 30) = result + result + v5;
        v9 = result + v8;
        *(v7 - 29) = v8;
        v10 = result + result + v8;
        *(v7 - 28) = v9;
        v11 = result + v10;
        *(v7 - 27) = v10;
        v12 = result + result + v10;
        *(v7 - 26) = v11;
        v13 = result + v12;
        *(v7 - 25) = v12;
        v14 = result + result + v12;
        *(v7 - 24) = v13;
        v15 = result + v14;
        *(v7 - 23) = v14;
        v16 = result + result + v14;
        *(v7 - 22) = v15;
        v17 = result + v16;
        *(v7 - 21) = v16;
        v18 = result + result + v16;
        *(v7 - 20) = v17;
        v19 = result + v18;
        *(v7 - 19) = v18;
        v20 = result + result + v18;
        *(v7 - 18) = v19;
        v21 = result + v20;
        *(v7 - 17) = v20;
        v22 = result + result + v20;
        *(v7 - 16) = v21;
        v23 = result + v22;
        *(v7 - 15) = v22;
        v24 = result + result + v22;
        *(v7 - 14) = v23;
        v25 = result + v24;
        *(v7 - 13) = v24;
        v26 = result + result + v24;
        *(v7 - 12) = v25;
        v27 = result + v26;
        *(v7 - 11) = v26;
        v28 = result + result + v26;
        *(v7 - 10) = v27;
        v29 = result + v28;
        *(v7 - 9) = v28;
        v30 = result + result + v28;
        *(v7 - 8) = v29;
        v31 = result + v30;
        *(v7 - 7) = v30;
        v32 = result + result + v30;
        *(v7 - 6) = v31;
        v33 = result + v32;
        *(v7 - 5) = v32;
        v34 = result + result + v32;
        *(v7 - 4) = v33;
        *(v7 - 3) = v34;
        *(v7 - 2) = result + v34;
        v35 = result + result + v34;
        *(v7 - 1) = v35;
        v5 = result + v35;
      }
      while ( v6 != ((a2 - 33) & 0xFFFFFFE0) + 32 );
    }
    v36 = &a1[v6 - 1];
    v37 = v6 * result;
    do
    {
      ++v6;
      *++v36 = v37;
      v37 += result;
    }
    while ( a2 > v6 );
  }
  return result;
}
