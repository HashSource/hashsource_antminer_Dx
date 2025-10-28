unsigned int __fastcall vblake_hash(int *a1, int *a2)
{
  int *v2; // r12
  int *v3; // r5
  int *v4; // r4
  int v5; // r0
  int v6; // r1
  int *v7; // lr
  int v8; // r2
  int v9; // r3
  char *v10; // r5
  __int64 v11; // r10
  int v12; // r3
  int v13; // r7
  int v14; // r0
  int v15; // r11
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r3
  int v20; // r1
  int v21; // r12
  int v22; // r5
  unsigned int v23; // r2
  int v24; // r0
  __int64 v26; // [sp+28h] [bp-1F4h]
  __int64 v27; // [sp+30h] [bp-1ECh]
  __int64 v28; // [sp+38h] [bp-1E4h]
  __int64 v29; // [sp+40h] [bp-1DCh]
  int v30; // [sp+40h] [bp-1DCh]
  __int64 v31; // [sp+48h] [bp-1D4h]
  int v32; // [sp+48h] [bp-1D4h]
  __int64 v33; // [sp+50h] [bp-1CCh]
  __int64 v34; // [sp+58h] [bp-1C4h]
  __int64 v35; // [sp+60h] [bp-1BCh]
  __int64 v36; // [sp+68h] [bp-1B4h]
  __int64 v37; // [sp+70h] [bp-1ACh]
  __int64 v38; // [sp+78h] [bp-1A4h]
  __int64 v39; // [sp+80h] [bp-19Ch]
  __int64 v40; // [sp+88h] [bp-194h]
  _BYTE v42[64]; // [sp+D8h] [bp-144h] BYREF
  __int64 v43; // [sp+118h] [bp-104h] BYREF
  __int64 v44; // [sp+120h] [bp-FCh]
  unsigned __int64 v45; // [sp+128h] [bp-F4h]
  unsigned __int64 v46; // [sp+130h] [bp-ECh]
  unsigned __int64 v47; // [sp+138h] [bp-E4h]
  __int64 v48; // [sp+140h] [bp-DCh]
  unsigned __int64 v49; // [sp+148h] [bp-D4h]
  __int64 v50; // [sp+150h] [bp-CCh]
  int v51; // [sp+158h] [bp-C4h]
  int v52; // [sp+15Ch] [bp-C0h]
  int v53; // [sp+160h] [bp-BCh]
  int v54; // [sp+164h] [bp-B8h]
  int v55; // [sp+168h] [bp-B4h]
  int v56; // [sp+16Ch] [bp-B0h]
  int v57; // [sp+170h] [bp-ACh]
  int v58; // [sp+174h] [bp-A8h]
  int v59; // [sp+178h] [bp-A4h]
  int v60; // [sp+17Ch] [bp-A0h]
  int v61; // [sp+180h] [bp-9Ch]
  int v62; // [sp+184h] [bp-98h]
  int v63; // [sp+188h] [bp-94h]
  int v64; // [sp+18Ch] [bp-90h]
  int v65; // [sp+190h] [bp-8Ch]
  int v66; // [sp+194h] [bp-88h]
  _DWORD v67[32]; // [sp+198h] [bp-84h] BYREF

  v2 = a2;
  v3 = a2 + 16;
  v4 = (int *)v42;
  do
  {
    v5 = *v2;
    v2 += 4;
    v6 = *(v2 - 3);
    v7 = v4;
    v8 = *(v2 - 2);
    v4 += 4;
    v9 = *(v2 - 1);
    *v7 = v5;
    v7[1] = v6;
    v7[2] = v8;
    v7[3] = v9;
  }
  while ( v2 != v3 );
  memset(&v67[16], 0, 0x40u);
  v40 = 0x63D980597B560E6BLL;
  v43 = 0x4BBF42C1F107AD85LL;
  v44 = 0x5D11A8C3B5AEB12ELL;
  v39 = 0xBAFCD004F92CA000LL;
  v45 = 0xA64AB78DC2774652LL;
  v46 = 0xC67595724658F253LL;
  v37 = 0x2FE452DA9632463ELL;
  v38 = 0x64A39957839525E7LL;
  v47 = 0xB8864E79CB891E56LL;
  v48 = 0x12ED593E29FB41A1LL;
  v36 = 0x98A7B5496226F800LL;
  v35 = 0x531655D90C59EB1BLL;
  v49 = 0xB1DA3AB63C60BAA8LL;
  v50 = 0x6D20E50C1F954DEDLL;
  v34 = 0xD1A00BA6DAE5B800LL;
  v31 = 0xBBA055B53D47C800LL;
  v51 = -267997795;
  v52 = 1270825665;
  v53 = -1246842578;
  v54 = 1561438403;
  v33 = 0x4606AD364DC879DDLL;
  v27 = 0xA47B39A2AE9F9000LL;
  v55 = -1032370606;
  v56 = -1505052787;
  v57 = 1180234323;
  v58 = -965372558;
  v29 = 0x4F452FEC309911EBLL;
  v10 = (char *)&unk_16173F;
  v28 = 0x3CFCC66F74E1022CLL;
  v60 = -1199157639;
  v61 = 704332193;
  v62 = 317544766;
  v65 = 529878509;
  v66 = 1830872332;
  v59 = -880206314;
  v63 = -1012972201;
  v64 = 1311098185;
  v67[3] = (v42[15] << 24) ^ (v42[14] << 16) ^ (v42[13] << 8) ^ v42[12];
  v67[1] = (v42[7] << 24) ^ (v42[6] << 16) ^ (v42[5] << 8) ^ v42[4];
  v67[0] = v42[0] ^ (v42[3] << 24) ^ (v42[2] << 16) ^ (v42[1] << 8);
  v67[2] = v42[8] ^ (v42[11] << 24) ^ (v42[10] << 16) ^ (v42[9] << 8);
  v67[5] = v42[20] ^ (v42[23] << 24) ^ (v42[22] << 16) ^ (v42[21] << 8);
  v67[4] = v42[16] ^ (v42[19] << 24) ^ (v42[18] << 16) ^ (v42[17] << 8);
  v67[7] = (v42[30] << 16) ^ (v42[31] << 24) ^ (v42[29] << 8) ^ v42[28];
  v67[6] = v42[24] ^ (v42[27] << 24) ^ (v42[26] << 16) ^ (v42[25] << 8);
  v67[8] = v42[32] ^ (v42[35] << 24) ^ (v42[34] << 16) ^ (v42[33] << 8);
  v67[9] = (v42[38] << 16) ^ (v42[39] << 24) ^ (v42[37] << 8) ^ v42[36];
  v67[10] = v42[40] ^ (v42[43] << 24) ^ (v42[42] << 16) ^ (v42[41] << 8);
  v67[11] = (v42[46] << 16) ^ (v42[47] << 24) ^ (v42[45] << 8) ^ v42[44];
  v26 = 0xC0EFA33E77E6488LL;
  v67[13] = v42[52] ^ (v42[54] << 16) ^ (v42[55] << 24) ^ (v42[53] << 8);
  v67[12] = v42[48] ^ (v42[51] << 24) ^ (v42[50] << 16) ^ (v42[49] << 8);
  v67[15] = (v42[62] << 16) ^ (v42[63] << 24) ^ (v42[61] << 8) ^ v42[60];
  v67[14] = v42[56] ^ (v42[59] << 24) ^ (v42[58] << 16) ^ (v42[57] << 8);
  v11 = 0xD859E6F081AAE000LL;
  sub_3E704(
    (int)&v43,
    4,
    8,
    12,
    *(_QWORD *)&v67[2 * unk_161711],
    *(_QWORD *)&v67[2 * unk_161710],
    0xD35B2E0E0B723800LL,
    0xA51B6A89D489E800LL);
  while ( 1 )
  {
    sub_3E480(
      (int)&v43,
      5,
      9,
      13,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 44)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 45)],
      v26,
      v27);
    sub_3E1FC(
      (int)&v43,
      6,
      10,
      14,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 42)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 43)],
      v28,
      v29);
    sub_3DF78(
      (int)&v43,
      7,
      11,
      15,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 40)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 41)],
      v31,
      v33);
    sub_3E704(
      (int)&v43,
      5,
      10,
      15,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 38)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 39)],
      v34,
      v35);
    sub_3E480(
      (int)&v43,
      6,
      11,
      12,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 36)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 37)],
      v36,
      v37);
    sub_3E1FC(
      (int)&v43,
      7,
      8,
      13,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 34)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 35)],
      v38,
      v39);
    sub_3DF78(
      (int)&v43,
      4,
      9,
      14,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 32)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 33)],
      v40,
      v11);
    if ( v10 == (char *)&unk_16182F )
      break;
    v12 = (unsigned __int8)*(v10 - 22);
    v13 = (unsigned __int8)*(v10 - 30);
    v14 = 8 * (unsigned __int8)*(v10 - 27);
    v15 = (unsigned __int8)*(v10 - 28);
    v16 = 8 * (unsigned __int8)*(v10 - 24);
    __pld(v10);
    v30 = v14;
    v17 = (unsigned __int8)*(v10 - 19);
    v32 = v16;
    v18 = (unsigned __int8)*(v10 - 16);
    v10 += 16;
    v26 = qword_161810[v15];
    v27 = qword_161810[(unsigned __int8)*(v10 - 45)];
    v28 = qword_161810[(unsigned __int8)*(v10 - 42)];
    v11 = qword_161810[(unsigned __int8)*(v10 - 33)];
    v29 = *(_QWORD *)((char *)qword_161810 + v30);
    v31 = *(_QWORD *)((char *)qword_161810 + v32);
    v33 = qword_161810[(unsigned __int8)*(v10 - 41)];
    v34 = qword_161810[v12];
    v35 = qword_161810[(unsigned __int8)*(v10 - 39)];
    v36 = qword_161810[(unsigned __int8)*(v10 - 36)];
    v37 = qword_161810[(unsigned __int8)*(v10 - 37)];
    v38 = qword_161810[(unsigned __int8)*(v10 - 34)];
    v39 = qword_161810[v17];
    v40 = qword_161810[v18];
    sub_3E704(
      (int)&v43,
      4,
      8,
      12,
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 46)],
      *(_QWORD *)&v67[2 * (unsigned __int8)*(v10 - 47)],
      qword_161810[v13],
      qword_161810[(unsigned __int8)*(v10 - 47)]);
  }
  v19 = v57 ^ v46 ^ v51 ^ v43 ^ v63 ^ v49 ^ 0x8B3FE57E;
  v20 = v58 ^ HIDWORD(v46) ^ HIDWORD(v43) ^ v52 ^ HIDWORD(v49) ^ v64 ^ 0x3C10ED05;
  v21 = v50 ^ v65 ^ v53 ^ v44 ^ v47 ^ v59 ^ 0x61B2E295;
  v22 = v56 ^ HIDWORD(v45) ^ v62 ^ HIDWORD(v48);
  v23 = v60 ^ HIDWORD(v47) ^ v54 ^ HIDWORD(v44) ^ HIDWORD(v50) ^ v66 ^ 0x88B703B6;
  v24 = v61 ^ v48 ^ v55 ^ v45 ^ 0xEB8C07F3;
  *a1 = (unsigned __int8)v19 | (unsigned __int16)(BYTE1(v19) << 8) | (BYTE2(v19) << 16) & 0xFFFFFF | (HIBYTE(v19) << 24);
  a1[2] = (unsigned __int8)v21
        | (unsigned __int16)(BYTE1(v21) << 8)
        | (BYTE2(v21) << 16) & 0xFFFFFF
        | (HIBYTE(v21) << 24);
  a1[1] = (unsigned __int16)((unsigned __int8)v20 | (BYTE1(v20) << 8))
        | (BYTE2(v20) << 16) & 0xFFFFFF
        | (HIBYTE(v20) << 24);
  a1[3] = (unsigned __int16)((unsigned __int8)v23 | (BYTE1(v23) << 8))
        | (BYTE2(v23) << 16) & 0xFFFFFF
        | (HIBYTE(v23) << 24);
  a1[4] = (unsigned __int16)((unsigned __int8)v24 | (BYTE1(v24) << 8))
        | (BYTE2(v24) << 16) & 0xFFFFFF
        | (HIBYTE(v24) << 24);
  a1[5] = (unsigned __int8)v22 ^ 0xB3
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v22 ^ 0xEEB3) >> 8) << 8)
        | ((unsigned __int8)((v22 ^ 0xB4A7EEB3) >> 16) << 16) & 0xFFFFFF
        | ((v22 ^ 0xB4A7EEB3) >> 24 << 24);
  return (v22 ^ 0xB4A7EEB3) >> 16;
}
