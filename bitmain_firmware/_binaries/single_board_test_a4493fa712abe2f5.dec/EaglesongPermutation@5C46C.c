int *__fastcall EaglesongPermutation(int *result)
{
  int v1; // lr
  int *v2; // r9
  char *v3; // r10
  __int64 v4; // kr00_8
  int v5; // r11
  int v6; // r6
  _DWORD *v7; // r12
  _DWORD *v8; // r5
  int v9; // t1
  unsigned int v10; // r11
  unsigned int v11; // r5
  unsigned int v12; // r6
  __int64 v13; // r0
  unsigned int v14; // r4
  unsigned int v15; // r2
  unsigned int v16; // r12
  int v17; // r7
  int v18; // r7
  int v19; // r7
  int v20; // r7
  int v21; // r7
  int v22; // r7
  int v23; // lr
  int v24; // r12
  int v25; // r7
  int v26; // r6
  int v27; // r5
  int v28; // r4
  unsigned int v29; // r3
  int v30; // r3
  int v31; // r2
  unsigned int v32; // r3
  int v33; // r11
  unsigned int v34; // r3
  int v35; // r11
  unsigned int v36; // r3
  int v37; // r11
  unsigned int v38; // r3
  int v39; // r11
  unsigned int v40; // r3
  int v41; // r11
  int v42; // r3
  int v43; // r2
  int v44; // r7
  int v45; // r6
  int v46; // r2
  int v47; // r3
  int v48; // r2
  int v49; // r3
  int v50; // r3
  int v51; // r7
  int v52; // r2
  int v53; // r3
  int v54; // r2
  int v55; // r11
  int v56; // r3
  int v57; // [sp+4h] [bp-A4h]
  int v58; // [sp+4h] [bp-A4h]
  int v59; // [sp+8h] [bp-A0h]
  int v60; // [sp+Ch] [bp-9Ch]
  int v61; // [sp+10h] [bp-98h]
  int v62; // [sp+14h] [bp-94h]
  int v63; // [sp+18h] [bp-90h]
  int v64; // [sp+18h] [bp-90h]
  int v65; // [sp+1Ch] [bp-8Ch]
  int v66; // [sp+1Ch] [bp-8Ch]
  int v67; // [sp+20h] [bp-88h]
  int v68; // [sp+24h] [bp-84h]
  int v69; // [sp+24h] [bp-84h]
  int v70; // [sp+28h] [bp-80h]
  int v71; // [sp+2Ch] [bp-7Ch]
  int v72; // [sp+30h] [bp-78h]
  int v73; // [sp+30h] [bp-78h]
  int v74; // [sp+34h] [bp-74h]
  int v75; // [sp+34h] [bp-74h]
  int v76; // [sp+38h] [bp-70h]
  _DWORD v77[8]; // [sp+3Ch] [bp-6Ch] BYREF
  unsigned int v78; // [sp+5Ch] [bp-4Ch]
  unsigned int v79; // [sp+60h] [bp-48h]
  unsigned int v80; // [sp+64h] [bp-44h]
  int v81; // [sp+68h] [bp-40h]
  int v82; // [sp+6Ch] [bp-3Ch]
  int v83; // [sp+70h] [bp-38h]
  unsigned int v84; // [sp+74h] [bp-34h]
  int v85; // [sp+78h] [bp-30h]
  int v86; // [sp+7Ch] [bp-2Ch]

  if ( num_rounds > 0 )
  {
    v59 = result[1];
    v71 = 0;
    v57 = *result;
    v60 = result[3];
    v1 = result[2];
    v2 = result;
    v61 = result[5];
    v70 = result[4];
    v3 = (char *)&unk_1284F4;
    v67 = result[6];
    v62 = result[7];
    v63 = result[9];
    v4 = *((_QWORD *)result + 5);
    v65 = result[11];
    v68 = result[12];
    v72 = result[13];
    v74 = result[14];
    v5 = result[15];
    v6 = result[8];
    do
    {
      v77[0] = v2;
      v7 = v77;
      v8 = &unk_128F70;
      do
      {
        v9 = v8[1];
        ++v8;
        v7[1] = (v8[16] * v59)
              ^ (v9 * v57)
              ^ (v8[32] * v1)
              ^ (v8[48] * v60)
              ^ (v8[64] * v70)
              ^ (v8[80] * v61)
              ^ (v8[96] * v67)
              ^ (v8[112] * v62)
              ^ (v8[128] * v6)
              ^ (v8[144] * v63)
              ^ (v8[160] * v4)
              ^ (v8[176] * v65)
              ^ (v8[192] * v68)
              ^ (v8[208] * v72)
              ^ (v8[224] * v74)
              ^ (v8[240] * v5);
        ++v7;
      }
      while ( &unk_128FB0 != (_UNKNOWN *)v8 );
      v2 = (int *)v77[0];
      v10 = v80;
      *(_DWORD *)(v77[0] + 28) = v78;
      v12 = v77[2];
      v11 = v77[3];
      v14 = v77[4];
      LODWORD(v13) = v77[5];
      v2[8] = v79;
      v2[9] = v10;
      HIDWORD(v13) = v77[6];
      v15 = v77[7];
      v16 = v77[1];
      v2[10] = v81;
      v17 = v82;
      *v2 = v16;
      v2[1] = v12;
      v2[11] = v17;
      v18 = v83;
      v2[2] = v11;
      v2[3] = v14;
      *((_QWORD *)v2 + 2) = v13;
      v2[12] = v18;
      v19 = v84;
      ++v71;
      v2[6] = v15;
      v2[13] = v19;
      v20 = v85;
      __pld(v3);
      __pld(v3 + 4);
      v2[14] = v20;
      v21 = v86;
      __pld(v3 + 8);
      __pld(v3 + 12);
      v3 += 64;
      v2[15] = v21;
      v22 = (v16 << dword_129378)
          ^ (v16 << dword_12937C)
          ^ v16
          ^ (v16 >> (32 - dword_129378))
          ^ (v16 >> (32 - dword_12937C));
      *v2 = v22;
      v58 = v22;
      v23 = (v12 << dword_129384)
          ^ (v12 << dword_129388)
          ^ v12
          ^ (v12 >> (32 - dword_129384))
          ^ (v12 >> (32 - dword_129388));
      v2[1] = v23;
      v24 = (v11 << dword_129394)
          ^ (v11 << dword_129390)
          ^ v11
          ^ (v11 >> (32 - dword_129390))
          ^ (v11 >> (32 - dword_129394));
      v2[2] = v24;
      v25 = (v14 << dword_1293A0)
          ^ (v14 << dword_12939C)
          ^ v14
          ^ (v14 >> (32 - dword_12939C))
          ^ (v14 >> (32 - dword_1293A0));
      v2[3] = v25;
      v26 = ((_DWORD)v13 << dword_1293AC)
          ^ ((_DWORD)v13 << dword_1293A8)
          ^ v13
          ^ ((unsigned int)v13 >> (32 - dword_1293A8))
          ^ ((unsigned int)v13 >> (32 - dword_1293AC));
      v2[4] = v26;
      v27 = (HIDWORD(v13) << dword_1293B8)
          ^ (HIDWORD(v13) << dword_1293B4)
          ^ HIDWORD(v13)
          ^ (HIDWORD(v13) >> (32 - dword_1293B4))
          ^ (HIDWORD(v13) >> (32 - dword_1293B8));
      v2[5] = v27;
      v28 = (v15 << dword_1293C4)
          ^ (v15 << dword_1293C0)
          ^ v15
          ^ (v15 >> (32 - dword_1293C0))
          ^ (v15 >> (32 - dword_1293C4));
      v2[6] = v28;
      LODWORD(v13) = (v78 << dword_1293D0)
                   ^ (v78 << dword_1293CC)
                   ^ v78
                   ^ (v78 >> (32 - dword_1293CC))
                   ^ (v78 >> (32 - dword_1293D0));
      v29 = v79;
      v2[7] = v13;
      v30 = (v29 << dword_1293DC)
          ^ (v29 << dword_1293D8)
          ^ v79
          ^ (v29 >> (32 - dword_1293D8))
          ^ (v79 >> (32 - dword_1293DC));
      v2[8] = v30;
      v64 = v30;
      v31 = (v10 >> (32 - dword_1293E8))
          ^ (v10 << dword_1293E8)
          ^ (v10 << dword_1293E4)
          ^ v10
          ^ (v10 >> (32 - dword_1293E4));
      v32 = v81;
      v2[9] = v31;
      v66 = v31;
      v33 = (v32 << dword_1293F4)
          ^ (v32 << dword_1293F0)
          ^ v32
          ^ (v32 >> (32 - dword_1293F0))
          ^ (v32 >> (32 - dword_1293F4));
      v34 = v82;
      v2[10] = v33;
      v69 = v33;
      v35 = (v34 << dword_129400)
          ^ (v34 << dword_1293FC)
          ^ v34
          ^ (v34 >> (32 - dword_1293FC))
          ^ (v34 >> (32 - dword_129400));
      v36 = v83;
      v2[11] = v35;
      BYTE4(v13) = dword_129408;
      LOBYTE(v31) = dword_12940C;
      v73 = v35;
      v2[12] = (v36 << dword_12940C)
             ^ (v36 << dword_129408)
             ^ v36
             ^ (v36 >> (32 - dword_129408))
             ^ (v36 >> (32 - dword_12940C));
      v75 = (v36 << v31) ^ (v36 << SBYTE4(v13)) ^ v36 ^ (v36 >> (32 - BYTE4(v13))) ^ (v36 >> (32 - v31));
      v37 = (v84 << dword_129418)
          ^ (v84 << dword_129414)
          ^ v84
          ^ (v84 >> (32 - dword_129414))
          ^ (v84 >> (32 - dword_129418));
      v38 = v85;
      v2[13] = v37;
      v76 = v37;
      v39 = (v38 << dword_129424)
          ^ (v38 << dword_129420)
          ^ v38
          ^ (v38 >> (32 - dword_129420))
          ^ (v38 >> (32 - dword_129424));
      v40 = v86;
      v2[14] = v39;
      v77[0] = v39;
      v41 = (v40 << dword_129430)
          ^ (v40 << dword_12942C)
          ^ v40
          ^ (v40 >> (32 - dword_12942C))
          ^ (v40 >> (32 - dword_129430));
      v2[15] = v41;
      v42 = *((_DWORD *)v3 - 32) ^ v58;
      *v2 = v42;
      v43 = v23 ^ *((_DWORD *)v3 - 31);
      v2[1] = v43;
      HIDWORD(v13) = *((_DWORD *)v3 - 30);
      v57 = __ROR4__(v42 + v43, 24);
      v2[2] = v24 ^ HIDWORD(v13);
      v59 = v57 + __ROR4__(v43, 8);
      v44 = v25 ^ *((_DWORD *)v3 - 29);
      v2[3] = v44;
      v1 = __ROR4__((v24 ^ HIDWORD(v13)) + v44, 24);
      v45 = v26 ^ *((_DWORD *)v3 - 28);
      v2[4] = v45;
      v60 = v1 + __ROR4__(v44, 8);
      v46 = *((_DWORD *)v3 - 27) ^ v27;
      v2[5] = v46;
      v70 = __ROR4__(v45 + v46, 24);
      HIDWORD(v13) = v28 ^ *((_DWORD *)v3 - 26);
      v61 = v70 + __ROR4__(v46, 8);
      v2[6] = HIDWORD(v13);
      v47 = *((_DWORD *)v3 - 25) ^ v13;
      v2[7] = v47;
      v67 = __ROR4__(HIDWORD(v13) + v47, 24);
      v48 = *((_DWORD *)v3 - 24) ^ v64;
      v2[8] = v48;
      v62 = v67 + __ROR4__(v47, 8);
      v49 = *((_DWORD *)v3 - 23) ^ v66;
      v2[9] = v49;
      v6 = __ROR4__(v48 + v49, 24);
      HIDWORD(v13) = *((_DWORD *)v3 - 22) ^ v69;
      v2[10] = HIDWORD(v13);
      v63 = v6 + __ROR4__(v49, 8);
      v50 = *((_DWORD *)v3 - 21) ^ v73;
      v2[11] = v50;
      v51 = __ROR4__(HIDWORD(v13) + v50, 24);
      HIDWORD(v13) = v75 ^ *((_DWORD *)v3 - 20);
      v65 = v51 + __ROR4__(v50, 8);
      v2[12] = HIDWORD(v13);
      v52 = v76 ^ *((_DWORD *)v3 - 19);
      LODWORD(v13) = v77[0];
      v2[13] = v52;
      v68 = __ROR4__(HIDWORD(v13) + v52, 24);
      v53 = *((_DWORD *)v3 - 18) ^ v13;
      v2[14] = v53;
      v72 = v68 + __ROR4__(v52, 8);
      v54 = *((_DWORD *)v3 - 17);
      v2[12] = v68;
      v2[13] = v72;
      v55 = v41 ^ v54;
      v2[8] = v6;
      v2[9] = v63;
      v2[11] = v65;
      HIDWORD(v13) = __ROR4__(v53 + v55, 24);
      v2[2] = v1;
      v2[3] = v60;
      v5 = HIDWORD(v13) + __ROR4__(v55, 8);
      result = (int *)v57;
      v2[6] = v67;
      v2[7] = v62;
      v74 = HIDWORD(v13);
      *v2 = v57;
      v56 = num_rounds;
      v2[14] = HIDWORD(v13);
      v2[10] = v51;
      v2[4] = v70;
      v2[5] = v61;
      v2[1] = v59;
      v2[15] = v5;
      LODWORD(v4) = v51;
    }
    while ( v56 > v71 );
  }
  return result;
}
