int *__fastcall EaglesongPermutation(int *result)
{
  char *v1; // r8
  int v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // lr
  int *v6; // r9
  int v7; // r11
  _DWORD *v8; // r12
  _DWORD *v9; // r4
  int v10; // t1
  __int64 v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // lr
  unsigned int v14; // r12
  unsigned int v15; // r2
  unsigned int v16; // r5
  unsigned int v17; // r11
  int v18; // r6
  int v19; // r6
  int v20; // r6
  char v21; // r3
  int v22; // r5
  int v23; // r7
  int v24; // r6
  int v25; // r5
  int v26; // r3
  int v27; // lr
  int v28; // r12
  unsigned int v29; // lr
  int v30; // r11
  int v31; // r3
  unsigned int v32; // lr
  int v33; // r2
  unsigned int v34; // lr
  unsigned int v35; // lr
  unsigned int v36; // lr
  int v37; // r2
  unsigned int v38; // lr
  int v39; // r3
  int v40; // r7
  int v41; // r6
  int v42; // r3
  int v43; // r3
  int v44; // lr
  int v45; // r11
  int v46; // r3
  int v47; // t2
  int v48; // r3
  int v49; // r6
  int v50; // r3
  int v51; // r12
  int v52; // r3
  int v53; // r11
  int v54; // r11
  int v55; // r3
  int v56; // [sp+0h] [bp-7Ch]
  int v57; // [sp+0h] [bp-7Ch]
  int v58; // [sp+4h] [bp-78h]
  int v59; // [sp+8h] [bp-74h]
  int v60; // [sp+8h] [bp-74h]
  int v61; // [sp+Ch] [bp-70h]
  int v62; // [sp+Ch] [bp-70h]
  int v63; // [sp+10h] [bp-6Ch]
  int v64; // [sp+10h] [bp-6Ch]
  int v65; // [sp+14h] [bp-68h]
  int v66; // [sp+14h] [bp-68h]
  int v67; // [sp+18h] [bp-64h]
  int v68; // [sp+1Ch] [bp-60h]
  int v69; // [sp+20h] [bp-5Ch]
  int v70; // [sp+24h] [bp-58h]
  int v71; // [sp+28h] [bp-54h]
  int v72; // [sp+28h] [bp-54h]
  int v73; // [sp+2Ch] [bp-50h]
  __int64 v74; // [sp+2Ch] [bp-50h]
  _DWORD v75[5]; // [sp+34h] [bp-48h] BYREF
  __int64 v76; // [sp+48h] [bp-34h]
  unsigned int v77; // [sp+50h] [bp-2Ch]
  unsigned int v78; // [sp+54h] [bp-28h]
  unsigned int v79; // [sp+58h] [bp-24h]
  int v80; // [sp+5Ch] [bp-20h]
  int v81; // [sp+60h] [bp-1Ch]
  int v82; // [sp+64h] [bp-18h]
  int v83; // [sp+68h] [bp-14h]
  int v84; // [sp+6Ch] [bp-10h]
  unsigned int v85; // [sp+70h] [bp-Ch]
  unsigned int v86; // [sp+74h] [bp-8h]

  if ( num_rounds > 0 )
  {
    v1 = (char *)&unk_18F564;
    v56 = result[1];
    v70 = 0;
    v2 = result[10];
    v3 = result[11];
    v4 = result[12];
    v58 = result[3];
    v5 = result[8];
    v67 = *result;
    v69 = result[4];
    v68 = result[2];
    v6 = result;
    v59 = result[5];
    v61 = result[6];
    v63 = result[7];
    v65 = result[9];
    v71 = result[13];
    v73 = result[14];
    v7 = result[15];
    do
    {
      v8 = &unk_18FFE0;
      v9 = v75;
      do
      {
        v10 = v8[1];
        ++v8;
        v9[1] = (v8[16] * v56)
              ^ (v10 * v67)
              ^ (v8[32] * v68)
              ^ (v8[48] * v58)
              ^ (v8[64] * v69)
              ^ (v8[80] * v59)
              ^ (v8[96] * v61)
              ^ (v8[112] * v63)
              ^ (v8[128] * v5)
              ^ (v8[144] * v65)
              ^ (v8[160] * v2)
              ^ (v8[176] * v3)
              ^ (v8[192] * v4)
              ^ (v8[208] * v71)
              ^ (v8[224] * v73)
              ^ (v8[240] * v7);
        ++v9;
      }
      while ( &unk_190020 != (_UNKNOWN *)v8 );
      v11 = v76;
      v6[7] = v78;
      v12 = v75[2];
      v13 = v75[3];
      v6[9] = v80;
      v14 = v75[4];
      v15 = v77;
      v6[10] = v81;
      v16 = v75[1];
      v17 = v79;
      v6[11] = v82;
      v6[12] = v83;
      v18 = v84;
      v6[1] = v12;
      v6[2] = v13;
      *((_QWORD *)v6 + 2) = v11;
      v6[13] = v18;
      v19 = v85;
      ++v70;
      *v6 = v16;
      v6[3] = v14;
      v6[6] = v15;
      v6[8] = v17;
      v6[14] = v19;
      v20 = v86;
      __pld(v1);
      __pld(v1 + 4);
      v6[15] = v20;
      LOBYTE(v20) = dword_1903E8;
      v21 = dword_1903EC;
      __pld(v1 + 8);
      __pld(v1 + 12);
      v1 += 64;
      v22 = (v16 << v21) ^ (v16 << dword_1903E8) ^ v16 ^ (v16 >> (32 - v20)) ^ (v16 >> (32 - v21));
      *v6 = v22;
      v57 = v22;
      v23 = (v12 << dword_1903F8)
          ^ (v12 << dword_1903F4)
          ^ v12
          ^ (v12 >> (32 - dword_1903F4))
          ^ (v12 >> (32 - dword_1903F8));
      v6[1] = v23;
      v24 = (v13 << dword_190404)
          ^ (v13 << dword_190400)
          ^ v13
          ^ (v13 >> (32 - dword_190400))
          ^ (v13 >> (32 - dword_190404));
      v6[2] = v24;
      v25 = (v14 << dword_190410)
          ^ (v14 << dword_19040C)
          ^ v14
          ^ (v14 >> (32 - dword_19040C))
          ^ (v14 >> (32 - dword_190410));
      v6[3] = v25;
      v26 = ((_DWORD)v11 << dword_19041C)
          ^ ((_DWORD)v11 << dword_190418)
          ^ v11
          ^ ((unsigned int)v11 >> (32 - dword_190418))
          ^ ((unsigned int)v11 >> (32 - dword_19041C));
      v6[4] = v26;
      v60 = v26;
      v27 = (HIDWORD(v11) << dword_190428)
          ^ (HIDWORD(v11) << dword_190424)
          ^ HIDWORD(v11)
          ^ (HIDWORD(v11) >> (32 - dword_190424))
          ^ (HIDWORD(v11) >> (32 - dword_190428));
      v6[5] = v27;
      v62 = v27;
      v28 = (v15 << dword_190434)
          ^ (v15 << dword_190430)
          ^ v15
          ^ (v15 >> (32 - dword_190430))
          ^ (v15 >> (32 - dword_190434));
      v6[6] = v28;
      HIDWORD(v11) = (v78 << dword_190440)
                   ^ (v78 << dword_19043C)
                   ^ v78
                   ^ (v78 >> (32 - dword_19043C))
                   ^ (v78 >> (32 - dword_190440));
      v29 = v80;
      v6[7] = HIDWORD(v11);
      v64 = HIDWORD(v11);
      v30 = (v17 << dword_19044C)
          ^ (v17 << dword_190448)
          ^ v17
          ^ (v17 >> (32 - dword_190448))
          ^ (v17 >> (32 - dword_19044C));
      v6[8] = v30;
      v31 = (v29 << dword_190458)
          ^ (v29 << dword_190454)
          ^ v29
          ^ (v29 >> (32 - dword_190454))
          ^ (v29 >> (32 - dword_190458));
      v32 = v81;
      v6[9] = v31;
      v66 = v31;
      v33 = (v32 << dword_190464)
          ^ (v32 << dword_190460)
          ^ v32
          ^ (v32 >> (32 - dword_190460))
          ^ (v32 >> (32 - dword_190464));
      v34 = v82;
      v6[10] = v33;
      v72 = v33;
      LODWORD(v11) = (v34 << dword_190470)
                   ^ (v34 << dword_19046C)
                   ^ v34
                   ^ (v34 >> (32 - dword_19046C))
                   ^ (v34 >> (32 - dword_190470));
      v35 = v83;
      v6[11] = v11;
      HIDWORD(v11) = (v35 << dword_19047C)
                   ^ (v35 << dword_190478)
                   ^ v35
                   ^ (v35 >> (32 - dword_190478))
                   ^ (v35 >> (32 - dword_19047C));
      v36 = v84;
      v6[12] = HIDWORD(v11);
      v74 = v11;
      v75[0] = (v36 << dword_190488)
             ^ (v36 << dword_190484)
             ^ v36
             ^ (v36 >> (32 - dword_190484))
             ^ (v36 >> (32 - dword_190488));
      v6[13] = v75[0];
      v37 = (v85 << dword_190494)
          ^ (v85 << dword_190490)
          ^ v85
          ^ (v85 >> (32 - dword_190490))
          ^ (v85 >> (32 - dword_190494));
      v38 = v86;
      v6[14] = v37;
      HIDWORD(v11) = (v38 << dword_1904A0)
                   ^ (v86 << dword_19049C)
                   ^ v86
                   ^ (v86 >> (32 - dword_19049C))
                   ^ (v86 >> (32 - dword_1904A0));
      v6[15] = HIDWORD(v11);
      v39 = *((_DWORD *)v1 - 32) ^ v57;
      *v6 = v39;
      v40 = v23 ^ *((_DWORD *)v1 - 31);
      v6[1] = v40;
      v67 = __ROR4__(v39 + v40, 24);
      v41 = v24 ^ *((_DWORD *)v1 - 30);
      v6[2] = v41;
      v56 = v67 + __ROR4__(v40, 8);
      v42 = *((_DWORD *)v1 - 29) ^ v25;
      v6[3] = v42;
      v68 = __ROR4__(v41 + v42, 24);
      v58 = v68 + __ROR4__(v42, 8);
      LODWORD(v11) = *((_DWORD *)v1 - 28) ^ v60;
      v6[4] = v11;
      v43 = *((_DWORD *)v1 - 27) ^ v62;
      v6[5] = v43;
      v44 = *((_DWORD *)v1 - 26);
      v69 = __ROR4__(v11 + v43, 24);
      v59 = v69 + __ROR4__(v43, 8);
      v6[6] = v28 ^ v44;
      LODWORD(v11) = *((_DWORD *)v1 - 25) ^ v64;
      v6[7] = v11;
      v45 = v30 ^ *((_DWORD *)v1 - 24);
      v6[8] = v45;
      v61 = __ROR4__((v28 ^ v44) + v11, 24);
      v63 = v61 + __ROR4__(v11, 8);
      v46 = *((_DWORD *)v1 - 23) ^ v66;
      v6[9] = v46;
      v5 = __ROR4__(v45 + v46, 24);
      v47 = __ROR4__(v46, 8);
      v48 = v72 ^ *((_DWORD *)v1 - 22);
      v6[10] = v48;
      v65 = v5 + v47;
      v49 = *((_DWORD *)v1 - 21) ^ v74;
      v6[11] = v49;
      v2 = __ROR4__(v48 + v49, 24);
      v3 = v2 + __ROR4__(v49, 8);
      v50 = HIDWORD(v74) ^ *((_DWORD *)v1 - 20);
      v51 = v75[0];
      v6[12] = v50;
      LODWORD(v11) = *((_DWORD *)v1 - 19) ^ v51;
      v6[13] = v11;
      v4 = __ROR4__(v50 + v11, 24);
      v52 = v37 ^ *((_DWORD *)v1 - 18);
      v6[14] = v52;
      v53 = *((_DWORD *)v1 - 17);
      v71 = v4 + __ROR4__(v11, 8);
      v6[13] = v71;
      v54 = v53 ^ HIDWORD(v11);
      v6[12] = v4;
      v6[11] = v3;
      v6[10] = v2;
      v73 = __ROR4__(v52 + v54, 24);
      v7 = v73 + __ROR4__(v54, 8);
      v6[14] = v73;
      v6[2] = v68;
      *v6 = v67;
      v55 = num_rounds;
      v6[9] = v5 + v47;
      v6[7] = v63;
      v6[6] = v61;
      result = (int *)v58;
      v6[8] = v5;
      v6[5] = v59;
      v6[4] = v69;
      v6[3] = v58;
      v6[1] = v56;
      v6[15] = v7;
    }
    while ( v55 > v70 );
  }
  return result;
}
