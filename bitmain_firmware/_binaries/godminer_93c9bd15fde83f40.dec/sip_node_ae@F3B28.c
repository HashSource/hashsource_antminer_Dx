unsigned int __fastcall sip_node_ae(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  _DWORD *v9; // r6
  int v10; // r0
  __int64 v11; // r0
  unsigned int v12; // r8
  int v13; // kr00_4
  unsigned int v14; // r5
  unsigned int v15; // r8
  unsigned __int64 v16; // kr18_8
  unsigned int v17; // r11
  unsigned int v18; // r7
  unsigned int v19; // r9
  int v20; // r3
  unsigned __int64 v21; // kr20_8
  int v22; // r8
  unsigned int v23; // r12
  unsigned int v24; // r5
  unsigned int v25; // r9
  unsigned int v26; // r8
  unsigned int v27; // r2
  unsigned int v28; // r7
  unsigned __int64 v29; // kr28_8
  bool v30; // cf
  int v31; // r10
  unsigned int v32; // r8
  unsigned int v33; // r10
  unsigned int v34; // r11
  unsigned int v35; // r5
  unsigned int v36; // r2
  int v37; // r7
  int v38; // lr
  int v39; // r3
  unsigned int v40; // r5
  __int64 v41; // r10
  unsigned int v42; // r2
  __int64 v43; // kr30_8
  unsigned int v44; // r12
  unsigned __int64 v45; // kr38_8
  unsigned int v46; // r7
  unsigned int v47; // r8
  unsigned int v48; // lr
  int v49; // r3
  int v50; // r9
  int v51; // r12
  unsigned int v52; // r7
  unsigned int v53; // r9
  unsigned int v54; // r8
  int v55; // r2
  int v56; // r5
  int v57; // r12
  unsigned __int64 v58; // kr40_8
  unsigned int v59; // r9
  unsigned int v60; // r3
  unsigned int v61; // r12
  int v62; // lr
  unsigned int v63; // r3
  unsigned int v64; // r5
  unsigned int v65; // kr48_4
  unsigned int v66; // r2
  unsigned int v67; // lr
  unsigned int v68; // r12
  unsigned int v69; // r5
  unsigned int v70; // r7
  __int64 v71; // r8
  unsigned int v72; // r12
  unsigned int v73; // kr50_4
  unsigned int v74; // r3
  unsigned int v75; // r2
  unsigned __int64 v76; // kr60_8
  unsigned int v77; // r5
  unsigned int v78; // kr14_4
  unsigned __int64 v79; // kr70_8
  unsigned int v80; // r5
  int v81; // r2
  int v82; // r7

  v9 = (_DWORD *)(8 * a1);
  v10 = a8 | (2 * a7);
  HIDWORD(v11) = a3 + a2;
  v12 = (a6 << 16) | ((a5 ^ v10) >> 16);
  v13 = a5 ^ v10;
  v14 = (((_DWORD)a3 << 13) | (HIDWORD(a3) >> 19)) ^ (a3 + a2);
  LODWORD(v11) = ((v13 << 16) | HIWORD(a6)) ^ (v13 + a4);
  v15 = v12 ^ ((__PAIR64__(a6, v13) + a4) >> 32);
  v16 = __PAIR64__(a6, v13) + a4 + __PAIR64__((a3 >> 19) ^ ((unsigned __int64)(a3 + a2) >> 32), v14);
  v17 = ((v14 << 17) | (HIDWORD(v16) >> 15)) ^ v16;
  v18 = (((_DWORD)v11 << 21) | (v15 >> 11)) ^ (((unsigned __int64)(a3 + a2) >> 32) + v11);
  v19 = ((v15 << 21) | ((unsigned int)v11 >> 11)) ^ ((__PAIR64__(v15, (unsigned __int64)(a3 + a2) >> 32) + v11) >> 32);
  v21 = __PAIR64__(v15, (unsigned __int64)(a3 + a2) >> 32)
      + v11
      + __PAIR64__(((HIDWORD(v16) << 17) | (v14 >> 15)) ^ HIDWORD(v16), v17);
  HIDWORD(v11) = HIDWORD(v21);
  v20 = v21;
  v22 = (v19 << 16) | HIWORD(v18);
  v23 = HIDWORD(v16) + v18;
  v24 = ((v17 << 13) | (HIDWORD(v11) >> 19)) ^ v20;
  LODWORD(v11) = ((v18 << 16) | HIWORD(v19)) ^ (HIDWORD(v16) + v18);
  v25 = v19 + __CFADD__(HIDWORD(v16), v18) + (_DWORD)v16;
  v26 = v22 ^ v25;
  v27 = ((HIDWORD(v11) << 13) | (v17 >> 19)) ^ HIDWORD(v11);
  v28 = v26 << 21;
  v29 = __PAIR64__(v25, v23) + __PAIR64__(v27, v24);
  v30 = __CFADD__(HIDWORD(v11), (_DWORD)v11);
  HIDWORD(v11) += v11;
  v31 = ((_DWORD)v11 << 21) | (v26 >> 11);
  v32 = v26 + v30 + v20;
  v33 = v31 ^ HIDWORD(v11);
  v34 = ((v24 << 17) | (v27 >> 15)) ^ (v23 + v24);
  LODWORD(v11) = (v28 | ((unsigned int)v11 >> 11)) ^ v32;
  v35 = ((v27 << 17) | (v24 >> 15)) ^ ((__PAIR64__(v25, v23) + __PAIR64__(v27, v24)) >> 32);
  v36 = (v33 << 16) | WORD1(v11);
  HIDWORD(v11) ^= a8 | (2 * a7);
  v30 = __CFADD__(HIDWORD(v11), v34);
  HIDWORD(v11) += v34;
  v37 = v35 << 13;
  v38 = (v34 << 13) | (v35 >> 19);
  v39 = ((_DWORD)v11 << 16) | HIWORD(v33);
  v40 = v35 + v30 + v32;
  v30 = __CFADD__(HIDWORD(v29) ^ 0xFF, v33);
  LODWORD(v41) = (HIDWORD(v29) ^ 0xFF) + v33;
  v42 = v36 ^ v41;
  LODWORD(v11) = v11 + v30 + (_DWORD)v29;
  HIDWORD(v41) = (v37 | (v34 >> 19)) ^ v40;
  v43 = v41 + __PAIR64__(v11, (unsigned int)v38 ^ HIDWORD(v11));
  v44 = (((v38 ^ HIDWORD(v11)) << 17) | (HIDWORD(v41) >> 15)) ^ (v41 + (v38 ^ HIDWORD(v11)));
  v45 = __PAIR64__(HIDWORD(v11), v40) + __PAIR64__(v39 ^ (unsigned int)v11, v42);
  v46 = ((v42 << 21) | ((v39 ^ (unsigned int)v11) >> 11)) ^ (v40 + v42);
  v47 = (((v39 ^ (unsigned int)v11) << 21) | (v42 >> 11))
      ^ ((__PAIR64__(HIDWORD(v11), v40) + __PAIR64__(v39 ^ (unsigned int)v11, v42)) >> 32);
  HIDWORD(v11) = ((HIDWORD(v41) << 17) | (((unsigned int)v38 ^ HIDWORD(v11)) >> 15))
               ^ ((v41 + __PAIR64__(v11, (unsigned int)v38 ^ HIDWORD(v11))) >> 32);
  v30 = __CFADD__((_DWORD)v45, v44);
  v48 = v45 + v44;
  v49 = (v44 << 13) | (HIDWORD(v11) >> 19);
  v50 = (v46 << 16) | HIWORD(v47);
  HIDWORD(v41) = (v47 << 16) | HIWORD(v46);
  v51 = (HIDWORD(v11) << 13) | (v44 >> 19);
  HIDWORD(v11) += v30 + HIDWORD(v45);
  v30 = __CFADD__(HIDWORD(v43), v46);
  v52 = HIDWORD(v43) + v46;
  v53 = v50 ^ v52;
  v54 = v47 + v30 + (_DWORD)v43;
  HIDWORD(v41) ^= v54;
  v55 = v51 ^ HIDWORD(v11);
  v56 = (v53 << 21) | (HIDWORD(v41) >> 11);
  LODWORD(v41) = ((v49 ^ v48) << 17) | (((unsigned int)v51 ^ HIDWORD(v11)) >> 15);
  v57 = (HIDWORD(v41) << 21) | (v53 >> 11);
  v58 = __PAIR64__(v54, v52) + __PAIR64__(v55, v49 ^ v48);
  v30 = __CFADD__(HIDWORD(v11), v53);
  v59 = HIDWORD(v11) + v53;
  HIDWORD(v11) = v56 ^ v59;
  HIDWORD(v41) += v30 + v48;
  v60 = (v55 << 17) | ((v49 ^ v48) >> 15);
  v61 = v57 ^ HIDWORD(v41);
  v62 = (v56 ^ v59) << 16;
  v63 = v60 ^ HIDWORD(v58);
  v64 = (v61 << 16) | ((v56 ^ v59) >> 16);
  v65 = v59 + (v41 ^ v58);
  HIDWORD(v41) = (__PAIR64__(v63, v59) + (v41 ^ (unsigned int)v58)) >> 32;
  v66 = ((((unsigned int)v41 ^ (unsigned int)v58) << 13) | (v63 >> 19)) ^ v65;
  v67 = (v62 | HIWORD(v61)) ^ (HIDWORD(v58) + HIDWORD(v11));
  v68 = v61 + __CFADD__(HIDWORD(v58), HIDWORD(v11)) + (_DWORD)v58;
  v69 = v64 ^ v68;
  LODWORD(v41) = ((v63 << 13) | (((unsigned int)v41 ^ (unsigned int)v58) >> 19)) ^ HIDWORD(v41);
  v70 = (v66 << 17) | ((unsigned int)v41 >> 15);
  LODWORD(v11) = (_DWORD)v41 << 17;
  v73 = HIDWORD(v58) + HIDWORD(v11) + v66;
  v72 = (__PAIR64__(v68, HIDWORD(v58) + HIDWORD(v11)) + __PAIR64__(v41, v66)) >> 32;
  LODWORD(v71) = v73;
  LODWORD(v41) = (v69 << 21) | (v67 >> 11);
  v74 = ((v67 << 21) | (v69 >> 11)) ^ (HIDWORD(v41) + v67);
  HIDWORD(v71) = (__PAIR64__(v65, HIDWORD(v41)) + __PAIR64__(v69, v67)) >> 32;
  v75 = (v11 | (v66 >> 15)) ^ v72;
  v76 = __PAIR64__(v75, HIDWORD(v41) + v67) + (v71 ^ v70);
  v77 = ((v74 << 16) | (((unsigned int)v41 ^ HIDWORD(v71)) >> 16)) ^ (v72 + v74);
  HIDWORD(v11) = ((((unsigned int)v41 ^ HIDWORD(v71)) << 16) | HIWORD(v74))
               ^ ((__PAIR64__(v73, v72) + __PAIR64__((unsigned int)v41 ^ HIDWORD(v71), v74)) >> 32);
  LODWORD(v11) = ((v75 << 13) | ((v70 ^ v73) >> 19)) ^ HIDWORD(v76);
  v78 = (((v70 ^ v73) << 13) | (v75 >> 19)) ^ v76;
  LODWORD(v71) = (v77 << 21) | (HIDWORD(v11) >> 11);
  HIDWORD(v41) = (HIDWORD(v11) << 21) | (v77 >> 11);
  v79 = __PAIR64__(v73, v72) + __PAIR64__((unsigned int)v41 ^ HIDWORD(v71), v74) + __PAIR64__(v11, v78);
  v30 = __CFADD__(HIDWORD(v76), v77);
  v80 = HIDWORD(v76) + v77;
  v81 = ((v78 << 17) | ((unsigned int)v11 >> 15)) ^ v79;
  LODWORD(v71) = v71 ^ v80;
  HIDWORD(v11) += v30 + (_DWORD)v76;
  HIDWORD(v41) ^= HIDWORD(v11);
  v82 = (((_DWORD)v11 << 17) | (v78 >> 15)) ^ HIDWORD(v79);
  v9[436466] = v80;
  v9[436467] = HIDWORD(v11);
  v9[436482] = v71;
  v9[436483] = HIDWORD(v41);
  v9[436490] = HIDWORD(v79);
  v9[436491] = v79;
  v9[436475] = v82;
  v9[436474] = v81;
  return (((v81 ^ (unsigned int)v71 ^ v80 ^ HIDWORD(v79)) << 17)
        | ((v82 ^ HIDWORD(v41) ^ HIDWORD(v11) ^ (unsigned int)v79) >> 15))
       & 0x1FFFFFFF;
}
