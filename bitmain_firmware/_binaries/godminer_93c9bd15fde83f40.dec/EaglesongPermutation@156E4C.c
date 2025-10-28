int *__fastcall EaglesongPermutation(int *result)
{
  int *v1; // r12
  int v2; // lr
  int v3; // r8
  int v4; // r5
  int v5; // r7
  char *v6; // r9
  int *v7; // r10
  int v8; // r11
  _DWORD *v9; // r6
  _DWORD *v10; // r4
  int v11; // t1
  __int64 v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r4
  unsigned int v15; // lr
  unsigned int v16; // r2
  unsigned int v17; // r6
  unsigned int v18; // r11
  int v19; // r7
  int v20; // r7
  int v21; // r7
  int v22; // r7
  int v23; // r3
  int v24; // r6
  int v25; // r8
  int v26; // r7
  int v27; // r6
  int v28; // r5
  int v29; // r4
  int v30; // lr
  unsigned int v31; // r4
  int v32; // r11
  int v33; // r3
  unsigned int v34; // r4
  int v35; // r2
  unsigned int v36; // r4
  unsigned int v37; // r4
  unsigned int v38; // r4
  int v39; // r2
  unsigned int v40; // r4
  int v41; // r3
  int v42; // r8
  int v43; // r7
  int v44; // r3
  int v45; // r3
  int v46; // r4
  int v47; // r11
  int v48; // r3
  int v49; // t2
  int v50; // r3
  int v51; // r8
  int v52; // r3
  int v53; // r3
  int v54; // r11
  int v55; // r11
  int v56; // r2
  int v57; // r3
  int v58; // [sp+0h] [bp-A0h]
  int v59; // [sp+0h] [bp-A0h]
  int v60; // [sp+4h] [bp-9Ch]
  int v61; // [sp+8h] [bp-98h]
  int v62; // [sp+8h] [bp-98h]
  int v63; // [sp+Ch] [bp-94h]
  int v64; // [sp+Ch] [bp-94h]
  int v65; // [sp+10h] [bp-90h]
  int v66; // [sp+14h] [bp-8Ch]
  int v67; // [sp+14h] [bp-8Ch]
  int v68; // [sp+18h] [bp-88h]
  int v69; // [sp+18h] [bp-88h]
  int v70; // [sp+1Ch] [bp-84h]
  int v71; // [sp+20h] [bp-80h]
  int v72; // [sp+24h] [bp-7Ch]
  int v73; // [sp+28h] [bp-78h]
  __int64 v74; // [sp+28h] [bp-78h]
  int v75; // [sp+2Ch] [bp-74h]
  int v76; // [sp+30h] [bp-70h]
  _DWORD v77[5]; // [sp+34h] [bp-6Ch] BYREF
  __int64 v78; // [sp+48h] [bp-58h]
  unsigned int v79; // [sp+50h] [bp-50h]
  unsigned int v80; // [sp+54h] [bp-4Ch]
  unsigned int v81; // [sp+58h] [bp-48h]
  int v82; // [sp+5Ch] [bp-44h]
  int v83; // [sp+60h] [bp-40h]
  int v84; // [sp+64h] [bp-3Ch]
  int v85; // [sp+68h] [bp-38h]
  int v86; // [sp+6Ch] [bp-34h]
  unsigned int v87; // [sp+70h] [bp-30h]
  unsigned int v88; // [sp+74h] [bp-2Ch]

  v1 = &blake256_rounds;
  if ( num_rounds > 0 )
  {
    v72 = 0;
    v58 = result[1];
    v2 = result[8];
    v3 = result[12];
    v4 = result[10];
    v5 = result[2];
    v60 = result[3];
    v6 = (char *)&unk_1A2C30;
    v7 = result;
    v70 = *result;
    v71 = result[4];
    v61 = result[5];
    v63 = result[6];
    v65 = result[7];
    v66 = result[9];
    v68 = result[11];
    v73 = result[13];
    v75 = result[14];
    v8 = result[15];
    do
    {
      v9 = v77;
      v77[0] = v1;
      v10 = &unk_1A36AC;
      do
      {
        v11 = v10[1];
        ++v10;
        v9[1] = (v10[16] * v58)
              ^ (v11 * v70)
              ^ (v10[32] * v5)
              ^ (v10[48] * v60)
              ^ (v10[64] * v71)
              ^ (v10[80] * v61)
              ^ (v10[96] * v63)
              ^ (v10[112] * v65)
              ^ (v10[128] * v2)
              ^ (v10[144] * v66)
              ^ (v10[160] * v4)
              ^ (v10[176] * v68)
              ^ (v10[192] * v3)
              ^ (v10[208] * v73)
              ^ (v10[224] * v75)
              ^ (v10[240] * v8);
        ++v9;
      }
      while ( &unk_1A36EC != (_UNKNOWN *)v10 );
      v12 = v78;
      v7[7] = v80;
      v13 = v77[2];
      v14 = v77[3];
      v7[9] = v82;
      v15 = v77[4];
      v16 = v79;
      v7[10] = v83;
      v17 = v77[1];
      v18 = v81;
      v7[11] = v84;
      v1 = (int *)v77[0];
      v7[12] = v85;
      v19 = v86;
      *((_QWORD *)v7 + 2) = v12;
      ++v72;
      v7[13] = v19;
      v20 = v87;
      *v7 = v17;
      v7[1] = v13;
      v7[2] = v14;
      v7[3] = v15;
      v7[6] = v16;
      v7[8] = v18;
      v7[14] = v20;
      v21 = v88;
      __pld(v6);
      __pld(v6 + 4);
      v7[15] = v21;
      v22 = v1[947];
      v23 = v1[948];
      __pld(v6 + 8);
      __pld(v6 + 12);
      v6 += 64;
      v24 = (v17 << v23) ^ (v17 << v22) ^ v17 ^ (v17 >> (32 - v22)) ^ (v17 >> (32 - v23));
      *v7 = v24;
      v59 = v24;
      v25 = (v13 << v1[951]) ^ (v13 << v1[950]) ^ v13 ^ (v13 >> (32 - v1[950])) ^ (v13 >> (32 - v1[951]));
      v7[1] = v25;
      v26 = (v14 << v1[954]) ^ (v14 << v1[953]) ^ v14 ^ (v14 >> (32 - v1[953])) ^ (v14 >> (32 - v1[954]));
      v7[2] = v26;
      v27 = (v15 << v1[957]) ^ (v15 << v1[956]) ^ v15 ^ (v15 >> (32 - v1[956])) ^ (v15 >> (32 - v1[957]));
      v7[3] = v27;
      v28 = ((_DWORD)v12 << v1[960])
          ^ ((_DWORD)v12 << v1[959])
          ^ v12
          ^ ((unsigned int)v12 >> (32 - v1[959]))
          ^ ((unsigned int)v12 >> (32 - v1[960]));
      v7[4] = v28;
      v29 = (HIDWORD(v12) << v1[963])
          ^ (HIDWORD(v12) << v1[962])
          ^ HIDWORD(v12)
          ^ (HIDWORD(v12) >> (32 - v1[962]))
          ^ (HIDWORD(v12) >> (32 - v1[963]));
      v7[5] = v29;
      v62 = v29;
      v30 = (v16 << v1[966]) ^ (v16 << v1[965]) ^ v16 ^ (v16 >> (32 - v1[965])) ^ (v16 >> (32 - v1[966]));
      v7[6] = v30;
      HIDWORD(v12) = (v80 << v1[969]) ^ (v80 << v1[968]) ^ v80 ^ (v80 >> (32 - v1[968])) ^ (v80 >> (32 - v1[969]));
      v31 = v82;
      v7[7] = HIDWORD(v12);
      v64 = HIDWORD(v12);
      v32 = (v18 << v1[972]) ^ (v18 << v1[971]) ^ v18 ^ (v18 >> (32 - v1[971])) ^ (v18 >> (32 - v1[972]));
      v7[8] = v32;
      v33 = (v31 << v1[975]) ^ (v31 << v1[974]) ^ v31 ^ (v31 >> (32 - v1[974])) ^ (v31 >> (32 - v1[975]));
      v34 = v83;
      v7[9] = v33;
      v67 = v33;
      v35 = (v34 << v1[978]) ^ (v34 << v1[977]) ^ v34 ^ (v34 >> (32 - v1[977])) ^ (v34 >> (32 - v1[978]));
      v36 = v84;
      v7[10] = v35;
      v69 = v35;
      LODWORD(v12) = (v36 << v1[981]) ^ (v36 << v1[980]) ^ v36 ^ (v36 >> (32 - v1[980])) ^ (v36 >> (32 - v1[981]));
      v37 = v85;
      v7[11] = v12;
      HIDWORD(v12) = (v37 << v1[984]) ^ (v37 << v1[983]) ^ v37 ^ (v37 >> (32 - v1[983])) ^ (v37 >> (32 - v1[984]));
      v38 = v86;
      v7[12] = HIDWORD(v12);
      v74 = v12;
      v76 = (v38 << v1[987]) ^ (v38 << v1[986]) ^ v38 ^ (v38 >> (32 - v1[986])) ^ (v38 >> (32 - v1[987]));
      v7[13] = v76;
      v39 = (v87 << v1[990]) ^ (v87 << v1[989]) ^ v87 ^ (v87 >> (32 - v1[989])) ^ (v87 >> (32 - v1[990]));
      v40 = v88;
      v7[14] = v39;
      HIDWORD(v12) = (v40 << v1[993]) ^ (v88 << v1[992]) ^ v88 ^ (v88 >> (32 - v1[992])) ^ (v88 >> (32 - v1[993]));
      v7[15] = HIDWORD(v12);
      v41 = *((_DWORD *)v6 - 32) ^ v59;
      *v7 = v41;
      v42 = v25 ^ *((_DWORD *)v6 - 31);
      v7[1] = v42;
      v70 = __ROR4__(v41 + v42, 24);
      v43 = v26 ^ *((_DWORD *)v6 - 30);
      v7[2] = v43;
      v58 = v70 + __ROR4__(v42, 8);
      v44 = *((_DWORD *)v6 - 29) ^ v27;
      v7[3] = v44;
      v5 = __ROR4__(v43 + v44, 24);
      LODWORD(v12) = *((_DWORD *)v6 - 28) ^ v28;
      v7[4] = v12;
      v60 = v5 + __ROR4__(v44, 8);
      v45 = *((_DWORD *)v6 - 27) ^ v62;
      v7[5] = v45;
      v46 = *((_DWORD *)v6 - 26);
      v71 = __ROR4__(v12 + v45, 24);
      v61 = v71 + __ROR4__(v45, 8);
      v7[6] = v30 ^ v46;
      LODWORD(v12) = *((_DWORD *)v6 - 25) ^ v64;
      v7[7] = v12;
      v47 = v32 ^ *((_DWORD *)v6 - 24);
      v63 = __ROR4__((v30 ^ v46) + v12, 24);
      v7[8] = v47;
      v65 = v63 + __ROR4__(v12, 8);
      v48 = *((_DWORD *)v6 - 23) ^ v67;
      v7[9] = v48;
      v2 = __ROR4__(v47 + v48, 24);
      v49 = __ROR4__(v48, 8);
      v50 = v69 ^ *((_DWORD *)v6 - 22);
      v7[10] = v50;
      v66 = v2 + v49;
      v51 = *((_DWORD *)v6 - 21) ^ v74;
      v7[11] = v51;
      v4 = __ROR4__(v50 + v51, 24);
      v68 = v4 + __ROR4__(v51, 8);
      v52 = HIDWORD(v74) ^ *((_DWORD *)v6 - 20);
      v7[12] = v52;
      LODWORD(v12) = *((_DWORD *)v6 - 19) ^ v76;
      v7[13] = v12;
      v3 = __ROR4__(v52 + v12, 24);
      v53 = v39 ^ *((_DWORD *)v6 - 18);
      v7[14] = v53;
      v54 = *((_DWORD *)v6 - 17);
      v73 = v3 + __ROR4__(v12, 8);
      v7[13] = v73;
      v55 = v54 ^ HIDWORD(v12);
      v7[12] = v3;
      v56 = __ROR4__(v53 + v55, 24);
      v7[11] = v68;
      v8 = v56 + __ROR4__(v55, 8);
      v7[10] = v4;
      v75 = v56;
      v7[14] = v56;
      *v7 = v70;
      v7[7] = v65;
      v57 = v1[1];
      v7[9] = v2 + v49;
      result = (int *)v61;
      v7[4] = v71;
      v7[8] = v2;
      v7[6] = v63;
      v7[5] = v61;
      v7[3] = v60;
      v7[2] = v5;
      v7[1] = v58;
      v7[15] = v8;
    }
    while ( v57 > v72 );
  }
  return result;
}
