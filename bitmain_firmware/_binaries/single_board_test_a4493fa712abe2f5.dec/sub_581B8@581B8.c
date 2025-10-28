int __fastcall sub_581B8(int *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r5
  __int64 v8; // r6
  int v9; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r4
  int v13; // lr
  int v14; // r0
  int v15; // r12
  int v16; // r3
  int v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r9
  int v21; // r0
  int v22; // r8
  __int64 v23; // kr08_8
  int v24; // r2
  int v25; // r10
  int v26; // r2
  int v27; // r2
  int v28; // r3
  int v29; // r7
  int v30; // r2
  int v31; // r0
  int v32; // r3
  int v33; // r11
  int v34; // r6
  int v35; // lr
  int v36; // r10
  int v37; // r2
  int v38; // r9
  int v39; // r3
  int v40; // r11
  int v41; // r5
  int v42; // r8
  int v43; // r12
  int v44; // r1
  int v45; // r0
  __int64 v47; // r2
  int v48; // [sp+4h] [bp-70h]
  int v49; // [sp+8h] [bp-6Ch]
  int v50; // [sp+8h] [bp-6Ch]
  int v51; // [sp+Ch] [bp-68h]
  int v52; // [sp+10h] [bp-64h]
  int v53; // [sp+14h] [bp-60h]
  int v54; // [sp+14h] [bp-60h]
  int v55; // [sp+18h] [bp-5Ch]
  int v56; // [sp+1Ch] [bp-58h]
  int v57; // [sp+20h] [bp-54h]
  int v58; // [sp+20h] [bp-54h]
  int v59; // [sp+24h] [bp-50h]
  int v60; // [sp+28h] [bp-4Ch]
  int v61; // [sp+2Ch] [bp-48h]
  int v62; // [sp+30h] [bp-44h]
  int v63; // [sp+34h] [bp-40h]
  int v64; // [sp+38h] [bp-3Ch]
  int v65; // [sp+3Ch] [bp-38h]
  int v66; // [sp+40h] [bp-34h]
  int v67; // [sp+44h] [bp-30h]
  int v68; // [sp+48h] [bp-2Ch]
  int v69; // [sp+4Ch] [bp-28h]
  int v70; // [sp+50h] [bp-24h]
  int v71; // [sp+54h] [bp-20h]
  int v72; // [sp+58h] [bp-1Ch]
  int v73; // [sp+5Ch] [bp-18h]
  int v74; // [sp+60h] [bp-14h]
  int v75; // [sp+64h] [bp-10h]
  int v76; // [sp+68h] [bp-Ch]
  int *v77; // [sp+6Ch] [bp-8h]

  v3 = *a1;
  v59 = 4;
  v5 = a1[2];
  v4 = a1[1];
  v6 = v3 ^ *a2;
  v7 = a1[3];
  *a1 = v6;
  v61 = v6;
  v49 = v6;
  v8 = *((_QWORD *)a1 + 2);
  v9 = a2[1] ^ v4;
  a1[1] = v9;
  v62 = v9;
  v55 = v9;
  v10 = a2[2] ^ v5;
  v11 = a1[9];
  a1[2] = v10;
  v12 = a2[3];
  v63 = v10;
  v57 = v10;
  a1[3] = v7 ^ v12;
  v13 = v7 ^ v12;
  v64 = v7 ^ v12;
  v14 = a2[4] ^ v8;
  a1[4] = v14;
  v15 = v14;
  v16 = a2[5];
  v65 = v14;
  a1[5] = HIDWORD(v8) ^ v16;
  v66 = HIDWORD(v8) ^ v16;
  v51 = HIDWORD(v8) ^ v16;
  v17 = a1[14];
  LODWORD(v8) = a1[15];
  v18 = a1[6] ^ a2[6];
  a1[6] = v18;
  v67 = v18;
  v56 = v18;
  v19 = a1[7] ^ a2[7];
  a1[7] = v19;
  v20 = v19;
  v68 = v19;
  v21 = a1[8] ^ a2[8];
  a1[8] = v21;
  v22 = v21;
  v69 = v21;
  v23 = *((_QWORD *)a1 + 6);
  v24 = v11 ^ a2[9];
  a1[9] = v24;
  v25 = v24;
  v70 = v24;
  v26 = a1[10] ^ a2[10];
  a1[10] = v26;
  v71 = v26;
  v52 = v26;
  v27 = a1[11] ^ a2[11];
  a1[11] = v27;
  v28 = a2[12];
  v72 = v27;
  v48 = v27;
  a1[12] = v23 ^ v28;
  v29 = v23 ^ v28;
  v73 = v23 ^ v28;
  v77 = a1;
  v30 = a2[13] ^ HIDWORD(v23);
  a1[13] = v30;
  v74 = v30;
  v31 = v17 ^ a2[14];
  a1[14] = v31;
  v32 = v31;
  v33 = v57;
  v75 = v31;
  v76 = v8 ^ a2[15];
  v53 = v76;
  do
  {
    v34 = v32 ^ __ROR4__(v56 + v52, 25);
    v35 = v13 ^ __ROR4__(v48 + v53, 25);
    v58 = v15 ^ __ROR4__(v49 + v29, 25);
    v36 = v25 ^ __ROR4__(v55 + v51, 25);
    v37 = v30 ^ __ROR4__(v51 + v36, 23);
    v38 = v20 ^ __ROR4__(v53 + v35, 23);
    v60 = v22 ^ __ROR4__(v58 + v49, 23);
    v39 = v33 ^ __ROR4__(v34 + v52, 23);
    v40 = v29 ^ __ROR4__(v58 + v60, 19);
    v41 = v55 ^ __ROR4__(v36 + v37, 19);
    v42 = v48 ^ __ROR4__(v35 + v38, 19);
    v43 = v56 ^ __ROR4__(v34 + v39, 19);
    v50 = v49 ^ __ROR4__(v60 + v40, 14);
    v54 = v53 ^ __ROR4__(v38 + v42, 14);
    v44 = v52 ^ __ROR4__(v39 + v43, 14);
    v29 = v40 ^ __ROR4__(v34 + v54, 25);
    v45 = v51 ^ __ROR4__(v37 + v41, 14);
    v55 = v41 ^ __ROR4__(v35 + v50, 25);
    v48 = v42 ^ __ROR4__(v36 + v44, 25);
    v56 = v43 ^ __ROR4__(v58 + v45, 25);
    v20 = v38 ^ __ROR4__(v45 + v56, 23);
    v33 = v39 ^ __ROR4__(v50 + v55, 23);
    v22 = v60 ^ __ROR4__(v44 + v48, 23);
    v15 = v58 ^ __ROR4__(v56 + v20, 19);
    v30 = v37 ^ __ROR4__(v54 + v29, 23);
    v13 = v35 ^ __ROR4__(v55 + v33, 19);
    v32 = v34 ^ __ROR4__(v29 + v30, 19);
    v25 = v36 ^ __ROR4__(v48 + v22, 19);
    v49 = v50 ^ __ROR4__(v33 + v13, 14);
    v51 = v45 ^ __ROR4__(v20 + v15, 14);
    v52 = v44 ^ __ROR4__(v22 + v25, 14);
    v53 = v54 ^ __ROR4__(v30 + v32, 14);
    --v59;
  }
  while ( v59 );
  *v77 = v61 + v49;
  v77[1] = v62 + v55;
  v77[2] = v63 + v33;
  v77[3] = v64 + v13;
  v77[4] = v65 + v15;
  v77[6] = v67 + v56;
  LODWORD(v47) = v74 + v30;
  HIDWORD(v47) = v75 + v32;
  v77[5] = v66 + v51;
  v77[7] = v68 + v20;
  v77[8] = v69 + v22;
  v77[9] = v70 + v25;
  v77[10] = v71 + v52;
  v77[11] = v72 + v48;
  v77[12] = v73 + v29;
  *(_QWORD *)(v77 + 13) = v47;
  v77[15] = v76 + v53;
  return v65 + v15;
}
