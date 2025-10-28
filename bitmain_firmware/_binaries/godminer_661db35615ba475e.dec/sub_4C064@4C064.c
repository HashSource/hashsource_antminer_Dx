int __fastcall sub_4C064(int result, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r6
  __int64 v7; // r2
  unsigned int v8; // lr
  unsigned int v9; // r1
  int v10; // r9
  __int64 v11; // r2
  unsigned __int64 v12; // kr20_8
  unsigned int v13; // r10
  unsigned int v14; // r9
  unsigned int v15; // r8
  unsigned int v16; // r7
  unsigned int v17; // r1
  unsigned __int64 v18; // kr30_8
  int v19; // r4
  int v20; // r6
  unsigned int v21; // r5
  __int64 v22; // r10
  int v23; // r11
  unsigned int v24; // r6
  unsigned __int64 v25; // kr40_8
  unsigned int v26; // r7
  unsigned int v27; // r8
  unsigned int v28; // r9
  int v29; // r1
  int v30; // r12
  unsigned __int64 v31; // kr28_8
  __int64 v32; // r2
  unsigned int v33; // r6
  unsigned int v34; // r5
  unsigned int v35; // r9
  int v36; // lr
  int v37; // r8
  unsigned __int64 v38; // r2
  bool v39; // cf
  unsigned int v40; // r5
  int v41; // lr
  unsigned int v42; // r6
  unsigned int v43; // r8
  unsigned int v44; // lr
  unsigned int v45; // r9
  unsigned int v46; // r6
  unsigned int v47; // kr48_4
  int v48; // r7
  unsigned int v49; // r1
  unsigned int v50; // r12
  unsigned int v51; // r9
  int v52; // r7
  unsigned __int64 v53; // kr58_8
  unsigned int v54; // r8
  unsigned int v55; // r9
  unsigned int v56; // r5
  unsigned int v57; // r6
  int v58; // r12
  unsigned int v59; // r1
  unsigned int v60; // r9
  unsigned int v61; // lr
  int v62; // r7
  unsigned int v63; // kr18_4
  unsigned int v64; // r1
  int v65; // r9
  unsigned int v66; // r7
  unsigned int v67; // r9
  unsigned __int64 v68; // kr88_8
  unsigned __int64 v69; // kr90_8
  unsigned int v70; // r8
  unsigned int v71; // r12
  unsigned int v72; // r1
  unsigned int v73; // lr
  int v74; // r7
  unsigned int v75; // r9
  unsigned int v76; // r6
  unsigned int v77; // r8
  unsigned int v78; // lr
  unsigned int v79; // r12
  int v80; // r1
  int v81; // r4
  int v82; // [sp+4h] [bp-20h]
  unsigned __int64 v83; // [sp+14h] [bp-10h]

  v5 = *(_DWORD *)(result + 8);
  HIDWORD(v7) = *(_DWORD *)(result + 12);
  LODWORD(v7) = *(_DWORD *)result;
  v8 = *(_DWORD *)(result + 24) ^ a3;
  v83 = __PAIR64__(a4, a3);
  v9 = *(_DWORD *)(result + 28) ^ a4;
  v10 = (v5 << 13) | (HIDWORD(v7) >> 19);
  v11 = __PAIR64__(*(_DWORD *)(result + 4), v5) + v7;
  v12 = __PAIR64__(v9, v8) + *(_QWORD *)(result + 16);
  v13 = ((v9 << 16) | HIWORD(v8)) ^ HIDWORD(v12);
  v14 = v10 ^ v11;
  v15 = ((v8 << 16) | HIWORD(v9)) ^ v12;
  v16 = (*(__int64 *)(result + 8) >> 19) ^ HIDWORD(v11);
  v17 = (v12 + __PAIR64__(v16, v14)) >> 32;
  v18 = __PAIR64__(v11, HIDWORD(v11)) + __PAIR64__(v13, v15);
  v19 = *(_DWORD *)(result + 32);
  v82 = -v19 & 0x3F;
  v20 = __PAIR64__(v13, v15) >> v82;
  v21 = ((v16 << 17) | (v14 >> 15)) ^ v17;
  LODWORD(v22) = ((v13 << v19) | (v15 << (v19 - 32)) | (v15 >> (32 - v19)) | (v13 >> v82))
               ^ ((__PAIR64__(v11, HIDWORD(v11)) + __PAIR64__(v13, v15)) >> 32);
  v23 = v20 | (v15 << v19);
  v24 = ((v14 << 17) | (v16 >> 15)) ^ (v12 + v14);
  HIDWORD(v22) = v23 ^ v18;
  LODWORD(v11) = (v18 + __PAIR64__(v21, v24)) >> 32;
  HIDWORD(v11) = v18 + v24;
  v25 = __PAIR64__((unsigned int)v12 + v14, v17) + __PAIR64__(v22, HIDWORD(v22));
  v26 = (v22 >> 16) ^ (v17 + HIDWORD(v22));
  v27 = (((_DWORD)v22 << 16) | HIWORD(HIDWORD(v22)))
      ^ ((__PAIR64__((unsigned int)v12 + v14, v17) + __PAIR64__(v22, HIDWORD(v22))) >> 32);
  v28 = ((v24 << 13) | (v21 >> 19)) ^ (v18 + v24);
  v31 = v25 + __PAIR64__(((v21 << 13) | (v24 >> 19)) ^ (unsigned int)v11, v28);
  v30 = HIDWORD(v31);
  v29 = v31;
  HIDWORD(v22) = (v25 + __PAIR64__(((v21 << 13) | (v24 >> 19)) ^ (unsigned int)v11, v28)) >> 32 << 17;
  LODWORD(v22) = (v28 << 17)
               | ((unsigned int)((v25 + __PAIR64__(((v21 << 13) | (v24 >> 19)) ^ (unsigned int)v11, v28)) >> 32) >> 15);
  v32 = v11 + __PAIR64__(v27, v26);
  v33 = ((v27 << v19) | (v26 << (v19 - 32)) | (v26 >> (32 - v19)) | (v27 >> v82)) ^ HIDWORD(v32);
  v34 = ((v26 >> v82) | (v27 << (32 - v82)) | (v27 >> (v82 - 32)) | (v26 << v19)) ^ v32;
  LODWORD(v22) = v22 ^ v29;
  v35 = (HIDWORD(v22) | (v28 >> 15)) ^ v30;
  v36 = v34 << 16;
  v30 ^= 0xFFu;
  v37 = (v33 << 16) | HIWORD(v34);
  v38 = (v32 ^ v83) + __PAIR64__(v35, v22);
  HIDWORD(v22) = (_DWORD)v22 << 13;
  v39 = __CFADD__(v30, v34);
  v40 = v30 + v34;
  v41 = v36 | HIWORD(v33);
  v42 = v33 + v39 + v29;
  v43 = v37 ^ v42;
  v44 = v41 ^ v40;
  LODWORD(v22) = ((v35 << 13) | ((unsigned int)v22 >> 19)) ^ HIDWORD(v38);
  v45 = (HIDWORD(v22) | (v35 >> 19)) ^ v38;
  v47 = v40 + v45;
  v46 = (__PAIR64__(v42, v40) + __PAIR64__(v22, v45)) >> 32;
  v48 = (_DWORD)v22 << 17;
  v49 = ((v44 >> v82) | (v43 << (32 - v82)) | (v43 >> (v82 - 32)) | (v44 << v19)) ^ (HIDWORD(v38) + v44);
  v50 = ((v43 << v19) | (v44 << (v19 - 32)) | (v44 >> (32 - v19)) | (v43 >> v82))
      ^ ((__PAIR64__(v38, HIDWORD(v38)) + __PAIR64__(v43, v44)) >> 32);
  LODWORD(v22) = ((v45 << 17) | ((unsigned int)v22 >> 15)) ^ (v40 + v45);
  v51 = (v48 | (v45 >> 15)) ^ v46;
  v52 = (_DWORD)v22 << 13;
  v53 = __PAIR64__(v38, HIDWORD(v38)) + __PAIR64__(v43, v44) + __PAIR64__(v51, v22);
  v54 = ((v49 << 16) | HIWORD(v50)) ^ (v46 + v49);
  HIDWORD(v22) = ((v50 << 16) | HIWORD(v49)) ^ ((__PAIR64__(v47, v46) + __PAIR64__(v50, v49)) >> 32);
  LODWORD(v22) = ((v51 << 13) | ((unsigned int)v22 >> 19)) ^ HIDWORD(v53);
  v55 = (v52 | (v51 >> 19)) ^ v53;
  v56 = (__PAIR64__(v47, v46) + __PAIR64__(v50, v49) + __PAIR64__(v22, v55)) >> 32;
  v57 = v46 + v49 + v55;
  HIDWORD(v38) = ((HIDWORD(v22) << v19) | (v54 << (v19 - 32)) | (v54 >> (32 - v19)) | (HIDWORD(v22) >> v82))
               ^ ((__PAIR64__(v53, HIDWORD(v53)) + __PAIR64__(HIDWORD(v22), v54)) >> 32);
  v58 = (_DWORD)v22 << 17;
  v59 = ((v54 >> v82) | (HIDWORD(v22) << (32 - v82)) | (HIDWORD(v22) >> (v82 - 32)) | (v54 << v19))
      ^ (HIDWORD(v53) + v54);
  LODWORD(v22) = ((v55 << 17) | ((unsigned int)v22 >> 15)) ^ v57;
  v60 = (v58 | (v55 >> 15)) ^ v56;
  v61 = (__PAIR64__(v53, HIDWORD(v53)) + __PAIR64__(HIDWORD(v22), v54) + __PAIR64__(v60, v22)) >> 32;
  LODWORD(v38) = HIDWORD(v53) + v54 + v22;
  v62 = (HIDWORD(v38) << 16) | HIWORD(v59);
  v63 = v59;
  HIDWORD(v22) = v60 << 13;
  v64 = ((v59 << 16) | HIWORD(HIDWORD(v38))) ^ (v56 + v59);
  v65 = ((_DWORD)v22 << 13) | (v60 >> 19);
  v66 = v62 ^ ((__PAIR64__(v57, v56) + __PAIR64__(HIDWORD(v38), v63)) >> 32);
  LODWORD(v22) = (HIDWORD(v22) | ((unsigned int)v22 >> 19)) ^ v61;
  v67 = v65 ^ v38;
  v68 = __PAIR64__(v57, v56) + __PAIR64__(HIDWORD(v38), v63) + __PAIR64__(v22, v67);
  v69 = __PAIR64__(v38, v61) + __PAIR64__(v66, v64);
  v70 = ((v66 << v19) | (v64 << (v19 - 32)) | (v64 >> (32 - v19)) | (v66 >> v82))
      ^ ((__PAIR64__(v38, v61) + __PAIR64__(v66, v64)) >> 32);
  v71 = ((v67 << 17) | ((unsigned int)v22 >> 15)) ^ v68;
  v72 = ((v64 >> v82) | (v66 << (32 - v82)) | (v66 >> (v82 - 32)) | (v64 << v19)) ^ (v61 + v64);
  v73 = (((_DWORD)v22 << 17) | (v67 >> 15)) ^ HIDWORD(v68);
  v74 = (v70 << 16) | HIWORD(v72);
  LODWORD(v38) = (v69 + __PAIR64__(v73, v71)) >> 32;
  HIDWORD(v22) = v69 + v71;
  v75 = v73 << 13;
  LODWORD(v22) = (v72 << 16) | HIWORD(v70);
  v76 = HIDWORD(v68) + v72;
  v77 = v70 + __CFADD__(HIDWORD(v68), v72) + (_DWORD)v68;
  LODWORD(v22) = v22 ^ (HIDWORD(v68) + v72);
  v78 = ((v71 << 13) | (v73 >> 19)) ^ (v69 + v71);
  v79 = (v75 | (v71 >> 19)) ^ v38;
  *(_DWORD *)(result + 20) = HIDWORD(v68) + v72 + v78;
  v80 = __PAIR64__(v74 ^ v77, v22) << v19 >> 32;
  v81 = *(_DWORD *)(result + 32);
  *(_DWORD *)(result + 8) = ((v78 << 17) | (v79 >> 15)) ^ (v76 + v78);
  *(_QWORD *)result = __PAIR64__(v74 ^ v77, v38) + v22;
  *(_DWORD *)(result + 16) = (__PAIR64__(v77, v76) + __PAIR64__(v79, v78)) >> 32;
  *(_DWORD *)(result + 12) = ((v79 << 17) | (v78 >> 15)) ^ ((__PAIR64__(v77, v76) + __PAIR64__(v79, v78)) >> 32);
  *(_DWORD *)(result + 24) = ((__PAIR64__(v74 ^ v77, v22) >> v82) | ((_DWORD)v22 << v81)) ^ (v38 + v22);
  *(_DWORD *)(result + 28) = (v80 | ((v74 ^ v77) >> v82)) ^ ((__PAIR64__(v74 ^ v77, v38) + v22) >> 32);
  return result;
}
