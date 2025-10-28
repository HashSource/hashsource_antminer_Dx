int __fastcall sub_41B84(int a1, __int64 a2)
{
  __int64 v3; // kr28_8
  __int64 v4; // r6
  unsigned int v5; // r5
  unsigned int v6; // r8
  unsigned int v7; // r9
  int v8; // r12
  unsigned int v9; // lr
  __int64 v10; // kr38_8
  unsigned int v11; // r2
  unsigned int v12; // r5
  unsigned __int64 v13; // kr40_8
  unsigned __int64 v14; // kr48_8
  unsigned int v15; // r4
  unsigned int v16; // lr
  unsigned int v17; // r2
  __int64 v18; // r8
  unsigned int v19; // r12
  int v20; // r8
  unsigned int v21; // r4
  int v22; // r11
  int v23; // r5
  int v24; // lr
  unsigned int v25; // kr0C_4
  int v26; // r11
  int v27; // r2
  unsigned int v28; // lr
  __int64 v29; // kr60_8
  __int64 v30; // r10
  unsigned int v31; // r5
  bool v32; // cf
  unsigned __int64 v33; // kr68_8
  unsigned int v34; // lr
  int v35; // r5
  unsigned int v36; // kr10_4
  unsigned __int64 v37; // kr70_8
  unsigned __int64 v38; // kr78_8
  unsigned int v39; // r5
  unsigned int v40; // r12
  unsigned int v41; // r4
  unsigned int v42; // lr
  unsigned int v43; // r2
  unsigned __int64 v44; // kr88_8
  unsigned int v45; // r5
  int v46; // r1
  unsigned int v47; // r3
  unsigned int v48; // r2
  unsigned int v49; // r3
  unsigned int v50; // krA0_4
  unsigned int v51; // lr
  unsigned __int64 v52; // krB0_8
  unsigned int v53; // kr24_4
  unsigned int v54; // r2
  unsigned int v55; // r0
  unsigned int v56; // r5
  unsigned int v57; // r3
  int v58; // lr
  int v59; // r4
  unsigned int v61; // r2
  unsigned int v62; // r5
  char v64; // [sp+4h] [bp-18h]
  unsigned int v65; // [sp+4h] [bp-18h]
  __int64 v66; // [sp+8h] [bp-14h]
  int v67; // [sp+10h] [bp-Ch]
  unsigned int v68; // [sp+10h] [bp-Ch]
  unsigned int v69; // [sp+10h] [bp-Ch]
  int v70; // [sp+14h] [bp-8h]

  v3 = *(_QWORD *)(a1 + 24);
  v66 = a2;
  HIDWORD(a2) ^= HIDWORD(v3);
  HIDWORD(v4) = *(_DWORD *)(a1 + 8);
  LODWORD(v4) = *(_DWORD *)(a1 + 12);
  v5 = (HIDWORD(a2) << 16) | (((unsigned int)v3 ^ (unsigned int)a2) >> 16);
  v6 = (v4 >> 19) ^ (HIDWORD(v4) + *(_DWORD *)a1);
  v7 = (__PAIR64__(v4, HIDWORD(v4)) + *(_QWORD *)a1) >> 32;
  v8 = HIDWORD(v4) + *(_DWORD *)a1;
  v9 = (*(__int64 *)(a1 + 8) >> 19) ^ ((*(_QWORD *)(a1 + 8) + *(_QWORD *)a1) >> 32);
  v10 = (a2 ^ (unsigned int)v3) + *(_QWORD *)(a1 + 16);
  v11 = ((((unsigned int)v3 ^ (unsigned int)a2) << 16) | HIWORD(HIDWORD(a2))) ^ v10;
  v12 = v5 ^ HIDWORD(v10);
  v13 = v10 + __PAIR64__(v9, v6);
  v14 = __PAIR64__(v8, v7) + __PAIR64__(v12, v11);
  v67 = v10 + v6;
  v64 = -(char)*(_QWORD *)(a1 + 32) & 0x3F;
  v15 = ((v12 << *(_DWORD *)(a1 + 32))
       | (v11 << (*(_DWORD *)(a1 + 32) - 32))
       | (v11 >> (32 - *(_DWORD *)(a1 + 32)))
       | (v12 >> v64))
      ^ ((__PAIR64__(v8, v7) + __PAIR64__(v12, v11)) >> 32);
  HIDWORD(v4) = (v9 << 17) | (v6 >> 15);
  v16 = ((v6 << 17) | (v9 >> 15)) ^ (v10 + v6);
  v17 = ((v11 << *(_DWORD *)(a1 + 32)) | (v11 >> v64) | (v12 << (32 - v64)) | (v12 >> (v64 - 32))) ^ (v7 + v11);
  HIDWORD(v4) ^= HIDWORD(v13);
  LODWORD(v4) = (v15 << 16) | HIWORD(v17);
  v19 = (v14 + __PAIR64__(HIDWORD(v4), v16)) >> 32;
  HIDWORD(v18) = v14 + v16;
  v20 = (v17 << 16) | HIWORD(v15);
  v21 = v15 + __CFADD__(HIDWORD(v13), v17) + v67;
  v22 = HIDWORD(v4) << 13;
  LODWORD(v4) = v4 ^ v21;
  HIDWORD(v4) = (v16 << 13) | (HIDWORD(v4) >> 19);
  v23 = *(_DWORD *)(a1 + 32);
  LODWORD(v18) = v20 ^ (HIDWORD(v13) + v17);
  v24 = v22 | (v16 >> 19);
  HIDWORD(v4) ^= HIDWORD(v18);
  v25 = HIDWORD(v13) + v17;
  v26 = (_DWORD)v4 << v23;
  v27 = (_DWORD)v18 << (v23 - 32);
  v28 = v24 ^ v19;
  v29 = __PAIR64__(v4, v19) + v18;
  LODWORD(v30) = ((v28 << 17) | (HIDWORD(v4) >> 15)) ^ ((__PAIR64__(v21, v25) + __PAIR64__(v28, HIDWORD(v4))) >> 32);
  v31 = ((__PAIR64__(v4, v18) >> v64) | ((_DWORD)v18 << v23)) ^ (v19 + v18);
  LODWORD(v18) = (v26 | v27 | ((unsigned int)v18 >> (32 - *(_DWORD *)(a1 + 32))) | ((unsigned int)v4 >> v64))
               ^ ((__PAIR64__(v4, v19) + v18) >> 32);
  HIDWORD(v30) = ((HIDWORD(v4) << 17) | (v28 >> 15)) ^ (v25 + HIDWORD(v4));
  v32 = __CFADD__(v66 ^ v29, HIDWORD(v30));
  v68 = (v66 ^ v29) + HIDWORD(v30);
  LODWORD(v4) = v30 >> 19;
  HIDWORD(v30) = ((_DWORD)v30 << 13) | (HIDWORD(v30) >> 19);
  LODWORD(v30) = v30 + v32 + (HIDWORD(v66) ^ HIDWORD(v29));
  v33 = __PAIR64__(v25 + HIDWORD(v4), ((__PAIR64__(v21, v25) + __PAIR64__(v28, HIDWORD(v4))) >> 32) ^ 0xFF)
      + __PAIR64__(v18, v31);
  v34 = (((_DWORD)v18 << 16) | HIWORD(v31))
      ^ ((__PAIR64__(v25 + HIDWORD(v4), ((__PAIR64__(v21, v25) + __PAIR64__(v28, HIDWORD(v4))) >> 32) ^ 0xFF)
        + __PAIR64__(v18, v31)) >> 32);
  HIDWORD(v4) = ((v31 << 16) | WORD1(v18)) ^ v33;
  HIDWORD(v30) ^= v30;
  v35 = __PAIR64__(v34, HIDWORD(v4)) >> v64;
  LODWORD(v66) = HIDWORD(v4) << *(_DWORD *)(a1 + 32);
  v36 = v4 ^ v68;
  HIDWORD(v18) = ((unsigned int)v4 ^ v68) << 17;
  LODWORD(v4) = (HIDWORD(v30) << 17) | (((unsigned int)v4 ^ v68) >> 15);
  v37 = v33 + __PAIR64__(HIDWORD(v30), v36);
  v38 = __PAIR64__(v68, v30) + __PAIR64__(v34, HIDWORD(v4));
  HIDWORD(v4) = ((v34 << *(_DWORD *)(a1 + 32))
               | (HIDWORD(v4) << (*(_DWORD *)(a1 + 32) - 32))
               | (HIDWORD(v4) >> (32 - *(_DWORD *)(a1 + 32)))
               | (v34 >> v64))
              ^ ((__PAIR64__(v68, v30) + __PAIR64__(v34, HIDWORD(v4))) >> 32);
  HIDWORD(v30) = (HIDWORD(v18) | (HIDWORD(v30) >> 15)) ^ (v33 + v36);
  LODWORD(v4) = v4 ^ HIDWORD(v37);
  HIDWORD(v18) = HIDWORD(v30) << 13;
  v39 = (v35 | v66) ^ v38;
  v69 = v38 + HIDWORD(v30);
  v40 = (v38 + __PAIR64__(v4, HIDWORD(v30))) >> 32;
  v41 = v37 + __CFADD__(HIDWORD(v37), v39) + HIDWORD(v4);
  v42 = ((HIDWORD(v4) << 16) | HIWORD(v39)) ^ v41;
  v43 = ((v39 << 16) | HIWORD(HIDWORD(v4))) ^ (HIDWORD(v37) + v39);
  HIDWORD(v30) = (((_DWORD)v4 << 13) | (HIDWORD(v30) >> 19)) ^ v40;
  LODWORD(v4) = (HIDWORD(v18) | ((unsigned int)v4 >> 19)) ^ v69;
  v44 = __PAIR64__(v41, HIDWORD(v37) + v39) + __PAIR64__(HIDWORD(v30), v4);
  LODWORD(v18) = HIDWORD(v30) << 17;
  HIDWORD(v4) = ((v42 << *(_DWORD *)(a1 + 32))
               | (v43 << (*(_DWORD *)(a1 + 32) - 32))
               | (v43 >> (32 - *(_DWORD *)(a1 + 32)))
               | (v42 >> v64))
              ^ ((__PAIR64__(v69, v40) + __PAIR64__(v42, v43)) >> 32);
  HIDWORD(v30) = (((_DWORD)v4 << 17) | (HIDWORD(v30) >> 15)) ^ (HIDWORD(v37) + v39 + v4);
  LODWORD(v4) = (v18 | ((unsigned int)v4 >> 15)) ^ HIDWORD(v44);
  LODWORD(v18) = HIDWORD(v30) << 13;
  v45 = ((__PAIR64__(v42, v43) >> v64) | (v43 << *(_DWORD *)(a1 + 32))) ^ (v40 + v43);
  LODWORD(v30) = (__PAIR64__(v69, v40) + __PAIR64__(v42, v43) + __PAIR64__(v4, HIDWORD(v30))) >> 32;
  v46 = v40 + v43 + HIDWORD(v30);
  v47 = v44 + __CFADD__(HIDWORD(v44), v45) + HIDWORD(v4);
  v48 = ((HIDWORD(v4) << 16) | HIWORD(v45)) ^ v47;
  HIDWORD(v18) = ((v45 << 16) | HIWORD(HIDWORD(v4))) ^ (HIDWORD(v44) + v45);
  HIDWORD(v30) = (((_DWORD)v4 << 13) | (HIDWORD(v30) >> 19)) ^ v30;
  LODWORD(v4) = (v18 | ((unsigned int)v4 >> 19)) ^ v46;
  v50 = HIDWORD(v44) + v45 + v4;
  v49 = (__PAIR64__(v47, HIDWORD(v44) + v45) + __PAIR64__(HIDWORD(v30), v4)) >> 32;
  v51 = (((_DWORD)v4 << 17) | (HIDWORD(v30) >> 15)) ^ v50;
  LODWORD(v4) = ((HIDWORD(v30) << 17) | ((unsigned int)v4 >> 15)) ^ v49;
  HIDWORD(v30) = ((v48 << *(_DWORD *)(a1 + 32))
                | (HIDWORD(v18) << (*(_DWORD *)(a1 + 32) - 32))
                | (HIDWORD(v18) >> (32 - *(_DWORD *)(a1 + 32)))
                | (v48 >> v64))
               ^ ((__PAIR64__(v46, v30) + __PAIR64__(v48, HIDWORD(v18))) >> 32);
  v52 = __PAIR64__(v46, v30) + __PAIR64__(v48, HIDWORD(v18)) + __PAIR64__(v4, v51);
  v53 = ((HIDWORD(v18) << *(_DWORD *)(a1 + 32)) | (HIDWORD(v18) >> v64) | (v48 << (32 - v64)) | (v48 >> (v64 - 32)))
      ^ (v30 + HIDWORD(v18));
  v54 = ((v53 << 16) | HIWORD(HIDWORD(v30))) ^ (v49 + v53);
  v55 = ((v51 << 13) | ((unsigned int)v4 >> 19)) ^ v52;
  v56 = ((HIDWORD(v30) << 16) | HIWORD(v53)) ^ ((__PAIR64__(v50, v49) + __PAIR64__(HIDWORD(v30), v53)) >> 32);
  v70 = (__PAIR64__(v50, v49) + __PAIR64__(HIDWORD(v30), v53)) >> 32;
  v32 = __CFADD__(v49 + v53, v55);
  v57 = v49 + v53 + v55;
  HIDWORD(v4) = (((_DWORD)v4 << 13) | (v51 >> 19)) ^ HIDWORD(v52);
  v58 = (v55 << 17) | (HIDWORD(v4) >> 15);
  LODWORD(v18) = (v54 >> v64) | (v56 << (32 - v64));
  LODWORD(v66) = v54 >> (32 - *(_DWORD *)(a1 + 32));
  HIDWORD(v66) = v54 << *(_DWORD *)(a1 + 32);
  v59 = (v56 << *(_DWORD *)(a1 + 32)) | (v54 << (*(_DWORD *)(a1 + 32) - 32));
  HIDWORD(v18) = v56 >> (v64 - 32);
  LODWORD(v4) = (HIDWORD(v4) << 17) | (v55 >> 15);
  v65 = v56 >> v64;
  HIDWORD(v4) += v32 + v70;
  v32 = __CFADD__(HIDWORD(v52), v54);
  v61 = HIDWORD(v52) + v54;
  LODWORD(v4) = v4 ^ HIDWORD(v4);
  v62 = v56 + v32 + (_DWORD)v52;
  *(_DWORD *)(a1 + 20) = v57;
  *(_DWORD *)(a1 + 8) = v58 ^ v57;
  *(_DWORD *)a1 = v61;
  *(_DWORD *)(a1 + 4) = v62;
  *(_QWORD *)(a1 + 12) = v4;
  *(_DWORD *)(a1 + 24) = (HIDWORD(v66) | v18 | HIDWORD(v18)) ^ v61;
  *(_DWORD *)(a1 + 28) = (v65 | v59 | v66) ^ v62;
  return a1;
}
