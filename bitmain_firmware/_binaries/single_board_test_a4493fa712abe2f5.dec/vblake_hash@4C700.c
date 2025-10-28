unsigned int __fastcall vblake_hash(unsigned int *a1, int *a2)
{
  int *v2; // r4
  int *v3; // r7
  int *v4; // r6
  int v5; // r0
  int v6; // r1
  int *v7; // r5
  int v8; // r2
  int v9; // r3
  __int64 v10; // r8
  char *v11; // r10
  __int64 v12; // r6
  __int64 i; // r2
  int v14; // r8
  int v15; // r9
  int v16; // lr
  char *v17; // r4
  int v18; // r12
  int v19; // r4
  int v20; // r12
  int v21; // r3
  int v22; // r4
  int v23; // r5
  unsigned int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r7
  unsigned int result; // r0
  __int64 v28; // [sp+20h] [bp-1FCh]
  __int64 v29; // [sp+28h] [bp-1F4h]
  __int64 v30; // [sp+30h] [bp-1ECh]
  __int64 v31; // [sp+38h] [bp-1E4h]
  __int64 v32; // [sp+40h] [bp-1DCh]
  char *v33; // [sp+40h] [bp-1DCh]
  __int64 v34; // [sp+48h] [bp-1D4h]
  __int64 v35; // [sp+50h] [bp-1CCh]
  __int64 v36; // [sp+58h] [bp-1C4h]
  __int64 v37; // [sp+60h] [bp-1BCh]
  __int64 v38; // [sp+68h] [bp-1B4h]
  __int64 v39; // [sp+70h] [bp-1ACh]
  __int64 v40; // [sp+78h] [bp-1A4h]
  __int64 v41; // [sp+80h] [bp-19Ch]
  __int64 v42; // [sp+88h] [bp-194h]
  _BYTE v44[64]; // [sp+D8h] [bp-144h] BYREF
  __int64 v45; // [sp+118h] [bp-104h] BYREF
  __int64 v46; // [sp+120h] [bp-FCh]
  __int64 v47; // [sp+128h] [bp-F4h]
  unsigned __int64 v48; // [sp+130h] [bp-ECh]
  __int64 v49; // [sp+138h] [bp-E4h]
  __int64 v50; // [sp+140h] [bp-DCh]
  unsigned __int64 v51; // [sp+148h] [bp-D4h]
  __int64 v52; // [sp+150h] [bp-CCh]
  int v53; // [sp+158h] [bp-C4h]
  int v54; // [sp+15Ch] [bp-C0h]
  int v55; // [sp+160h] [bp-BCh]
  int v56; // [sp+164h] [bp-B8h]
  int v57; // [sp+168h] [bp-B4h]
  int v58; // [sp+16Ch] [bp-B0h]
  int v59; // [sp+170h] [bp-ACh]
  int v60; // [sp+174h] [bp-A8h]
  int v61; // [sp+178h] [bp-A4h]
  int v62; // [sp+17Ch] [bp-A0h]
  int v63; // [sp+180h] [bp-9Ch]
  int v64; // [sp+184h] [bp-98h]
  int v65; // [sp+188h] [bp-94h]
  int v66; // [sp+18Ch] [bp-90h]
  int v67; // [sp+190h] [bp-8Ch]
  int v68; // [sp+194h] [bp-88h]
  _DWORD v69[32]; // [sp+198h] [bp-84h] BYREF

  v2 = a2;
  v3 = a2 + 16;
  v4 = (int *)v44;
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
  memset(&v69[16], 0, 0x40u);
  v45 = loc_4CB2C;
  v46 = loc_4CAF4;
  v41 = loc_4CB34;
  v42 = loc_4CA90;
  v10 = loc_4CAA0;
  v47 = loc_4CB04;
  v48 = 0xC67595724658F253LL;
  v40 = loc_4CA98;
  v39 = loc_4CAA8;
  v49 = loc_4CB14;
  v50 = loc_4CB0C;
  v38 = 0x98A7B5496226F800LL;
  v37 = loc_4CAB8;
  v51 = 0xB1DA3AB63C60BAA8LL;
  v52 = loc_4CB1C;
  v36 = loc_4CAC0;
  v34 = loc_4CAC8;
  v53 = -267997795;
  v54 = 1270825665;
  v55 = -1246842578;
  v56 = 1561438403;
  v35 = 0xBBA055B53D47C800LL;
  v57 = -1032370606;
  v58 = -1505052787;
  v59 = 1180234323;
  v60 = -965372558;
  v32 = loc_4CAD8;
  v11 = (char *)&unk_FC42F;
  v31 = loc_4CAE0;
  v62 = -1199157639;
  v63 = 704332193;
  v64 = 317544766;
  v67 = 529878509;
  v68 = 1830872332;
  v61 = -880206314;
  v66 = 1311098185;
  v65 = -1012972201;
  v69[1] = (v44[7] << 24) ^ (v44[6] << 16) ^ (v44[5] << 8) ^ v44[4];
  v69[0] = v44[0] ^ (v44[3] << 24) ^ (v44[2] << 16) ^ (v44[1] << 8);
  v69[2] = v44[8] ^ (v44[11] << 24) ^ (v44[10] << 16) ^ (v44[9] << 8);
  v69[3] = (v44[15] << 24) ^ (v44[14] << 16) ^ (v44[13] << 8) ^ v44[12];
  v69[5] = (v44[23] << 24) ^ (v44[22] << 16) ^ (v44[21] << 8) ^ v44[20];
  v69[4] = v44[16] ^ (v44[19] << 24) ^ (v44[18] << 16) ^ (v44[17] << 8);
  v69[6] = v44[24] ^ (v44[27] << 24) ^ (v44[26] << 16) ^ (v44[25] << 8);
  v69[7] = (v44[30] << 16) ^ (v44[31] << 24) ^ (v44[29] << 8) ^ v44[28];
  v69[8] = v44[32] ^ (v44[35] << 24) ^ (v44[34] << 16) ^ (v44[33] << 8);
  v69[9] = (v44[38] << 16) ^ (v44[39] << 24) ^ (v44[37] << 8) ^ v44[36];
  v69[10] = v44[40] ^ (v44[43] << 24) ^ (v44[42] << 16) ^ (v44[41] << 8);
  v30 = loc_4CAE8;
  v69[11] = (v44[46] << 16) ^ (v44[47] << 24) ^ (v44[45] << 8) ^ v44[44];
  v69[12] = v44[48] ^ (v44[51] << 24) ^ (v44[50] << 16) ^ (v44[49] << 8);
  v69[13] = (v44[54] << 16) ^ (v44[55] << 24) ^ (v44[53] << 8) ^ v44[52];
  v12 = 0x531655D90C59EB1BLL;
  v69[14] = v44[56] ^ (v44[59] << 24) ^ (v44[58] << 16) ^ (v44[57] << 8);
  v69[15] = (v44[62] << 16) ^ (v44[63] << 24) ^ (v44[61] << 8) ^ v44[60];
  v28 = 0xD35B2E0E0B723800LL;
  for ( i = 0xA51B6A89D489E800LL; ; i = v29 )
  {
    sub_D163C(
      (int)&v45,
      4,
      8,
      12,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 46)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 47)],
      v28,
      i);
    sub_D1470(
      (int)&v45,
      5,
      9,
      13,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 44)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 45)],
      v30,
      v31);
    sub_D12A4(
      (int)&v45,
      6,
      10,
      14,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 42)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 43)],
      v32,
      v34);
    sub_D10D8(
      (int)&v45,
      7,
      11,
      15,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 40)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 41)],
      v35,
      v36);
    sub_D163C(
      (int)&v45,
      5,
      10,
      15,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 38)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 39)],
      v37,
      v12);
    sub_D1470(
      (int)&v45,
      6,
      11,
      12,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 36)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 37)],
      v38,
      v39);
    sub_D12A4(
      (int)&v45,
      7,
      8,
      13,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 34)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 35)],
      v40,
      v41);
    sub_D10D8(
      (int)&v45,
      4,
      9,
      14,
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 32)],
      *(_QWORD *)&v69[2 * (unsigned __int8)*(v11 - 33)],
      v42,
      v10);
    if ( v11 == (char *)&unk_FC51F )
      break;
    v14 = (unsigned __int8)*(v11 - 31);
    v15 = (unsigned __int8)*(v11 - 30);
    v16 = (unsigned __int8)*(v11 - 28);
    v17 = (char *)&unk_FC1C0 + 8 * (unsigned __int8)*(v11 - 26);
    __pld(v11);
    v18 = (unsigned __int8)*(v11 - 29);
    v33 = v17;
    v19 = (unsigned __int8)*(v11 - 21);
    v11 += 16;
    v28 = *((_QWORD *)&unk_FC1C0 + v15 + 104);
    v29 = *((_QWORD *)&unk_FC1C0 + v14 + 104);
    v30 = *((_QWORD *)&unk_FC1C0 + v16 + 104);
    v31 = *((_QWORD *)&unk_FC1C0 + v18 + 104);
    v32 = *((_QWORD *)v33 + 104);
    v34 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 43) + 104);
    v35 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 40) + 104);
    v36 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 41) + 104);
    v38 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 36) + 104);
    v37 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 38) + 104);
    v10 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 33) + 104);
    v39 = *((_QWORD *)&unk_FC1C0 + v19 + 104);
    v12 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 39) + 104);
    v40 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 34) + 104);
    v41 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 35) + 104);
    v42 = *((_QWORD *)&unk_FC1C0 + (unsigned __int8)*(v11 - 32) + 104);
  }
  v20 = v59 ^ v48 ^ v53 ^ v45;
  v21 = v60 ^ HIDWORD(v48) ^ HIDWORD(v45) ^ v54 ^ v66 ^ HIDWORD(v51) ^ 0x3C10ED05;
  v22 = v57 ^ v47 ^ v50 ^ v63 ^ 0xEB8C07F3;
  v23 = v61 ^ v49 ^ v46 ^ v55 ^ v67 ^ v52 ^ 0x61B2E295;
  v24 = v62 ^ HIDWORD(v49) ^ v56 ^ HIDWORD(v46) ^ HIDWORD(v52) ^ v68 ^ 0x88B703B6;
  v25 = v64 ^ HIDWORD(v50) ^ v58 ^ HIDWORD(v47) ^ 0xB4A7EEB3;
  *a1 = (unsigned __int8)(v20 ^ v51 ^ v65) ^ 0x7E
      | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v20 ^ v51 ^ v65 ^ 0xE57E) >> 8) << 8)
      | ((unsigned __int8)((v20 ^ (unsigned int)v51 ^ v65 ^ 0x8B3FE57E) >> 16) << 16) & 0xFFFFFF
      | ((v20 ^ (unsigned int)v51 ^ v65 ^ 0x8B3FE57E) >> 24 << 24);
  a1[2] = (unsigned __int8)v23
        | (unsigned __int16)(BYTE1(v23) << 8)
        | (BYTE2(v23) << 16) & 0xFFFFFF
        | (HIBYTE(v23) << 24);
  v26 = HIWORD(v24);
  LOWORD(v23) = v24;
  a1[1] = (unsigned __int8)v21
        | (unsigned __int16)(BYTE1(v21) << 8)
        | (BYTE2(v21) << 16) & 0xFFFFFF
        | (HIBYTE(v21) << 24);
  result = HIBYTE(v24);
  a1[3] = (unsigned __int16)v23 | ((unsigned __int8)v26 << 16) & 0xFFFFFF | ((unsigned __int8)result << 24);
  a1[4] = (unsigned __int8)v22
        | (unsigned __int16)(BYTE1(v22) << 8)
        | (BYTE2(v22) << 16) & 0xFFFFFF
        | (HIBYTE(v22) << 24);
  a1[5] = (unsigned __int16)((unsigned __int8)v25 | (BYTE1(v25) << 8))
        | (BYTE2(v25) << 16) & 0xFFFFFF
        | (HIBYTE(v25) << 24);
  return result;
}
