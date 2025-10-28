int __fastcall sha256_transf(int result, unsigned int *a2, int a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r10
  char *v5; // r8
  unsigned int v6; // lr
  unsigned int v7; // r10
  unsigned int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // lr
  unsigned int v12; // r12
  unsigned int v13; // r4
  unsigned int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // lr
  unsigned int v18; // r12
  int v19; // r0
  unsigned int v20; // r6
  unsigned int v21; // r2
  unsigned int v22; // r4
  unsigned int v23; // r1
  int v24; // lr
  unsigned int v25; // r7
  unsigned int v26; // r11
  unsigned int v27; // r3
  unsigned int v28; // r2
  int v29; // r12
  int v30; // r6
  unsigned int v31; // r1
  unsigned int v32; // r2
  unsigned int v33; // r9
  unsigned int v34; // r5
  unsigned int v35; // r4
  int v36; // r1
  int v37; // r0
  int v38; // r7
  int v39; // r0
  unsigned int v40; // r12
  unsigned int v41; // r11
  unsigned int v42; // r0
  int v43; // r6
  int v44; // r9
  unsigned int *v45; // lr
  unsigned int v46; // r1
  unsigned int v47; // r6
  int v48; // r3
  int v49; // r3
  int v50; // r6
  int v51; // r9
  int v52; // r10
  int v53; // r4
  int v54; // r11
  int v55; // r7
  int v56; // r5
  int v57; // r8
  int v58; // lr
  int v59; // r0
  int v60; // r3
  int v61; // lr
  int v62; // r0
  int v63; // [sp+4h] [bp-130h]
  int v64; // [sp+8h] [bp-12Ch]
  int v65; // [sp+Ch] [bp-128h]
  int v66; // [sp+10h] [bp-124h]
  int v67; // [sp+14h] [bp-120h]
  int v68; // [sp+18h] [bp-11Ch]
  __int64 v69; // [sp+1Ch] [bp-118h]
  unsigned int *v70; // [sp+24h] [bp-110h]
  unsigned int *v71; // [sp+28h] [bp-10Ch]
  int v72; // [sp+2Ch] [bp-108h]
  _DWORD v73[27]; // [sp+30h] [bp-104h]
  char v74; // [sp+9Ch] [bp-98h] BYREF
  int v75; // [sp+E8h] [bp-4Ch]
  unsigned int v76; // [sp+ECh] [bp-48h]
  unsigned int v77; // [sp+F0h] [bp-44h]
  int v78; // [sp+10Ch] [bp-28h]
  int v79; // [sp+110h] [bp-24h] BYREF
  unsigned int v80; // [sp+120h] [bp-14h]
  unsigned int v81; // [sp+124h] [bp-10h]
  int v82; // [sp+128h] [bp-Ch]
  int v83; // [sp+12Ch] [bp-8h]

  v72 = result;
  if ( a3 > 0 )
  {
    v71 = &a2[16 * a3];
    v63 = *(_DWORD *)(result + 136);
    v65 = *(_DWORD *)(result + 144);
    v64 = *(_DWORD *)(result + 140);
    v66 = *(_DWORD *)(result + 148);
    v67 = *(_DWORD *)(result + 152);
    v68 = *(_DWORD *)(result + 156);
    v69 = *(_QWORD *)(result + 160);
    do
    {
      v3 = a2[3];
      v4 = *a2;
      v5 = &v74;
      v6 = bswap32(a2[2]);
      __pld(a2 + 18);
      __pld(a2 + 19);
      __pld(a2 + 17);
      v7 = bswap32(v4);
      __pld(a2 + 16);
      v8 = a2[4];
      v9 = a2[5];
      v10 = a2[6];
      v73[2] = v6;
      v11 = a2[7];
      v73[3] = bswap32(v3);
      v12 = a2[8];
      v13 = a2[1];
      v73[4] = bswap32(v8);
      v14 = a2[9];
      v73[5] = bswap32(v9);
      v15 = a2[10];
      v73[6] = bswap32(v10);
      v16 = a2[11];
      v73[7] = bswap32(v11);
      v17 = a2[12];
      v73[8] = bswap32(v12);
      v18 = a2[13];
      v73[9] = bswap32(v14);
      v73[10] = bswap32(v15);
      v19 = 16;
      v70 = a2 + 16;
      v73[0] = v7;
      v73[1] = bswap32(v13);
      v73[11] = bswap32(v16);
      v73[12] = bswap32(v17);
      v73[13] = bswap32(v18);
      v20 = bswap32(a2[14]);
      v21 = bswap32(a2[15]);
      v73[14] = v20;
      v73[15] = v21;
      do
      {
        v22 = *((_DWORD *)v5 - 26);
        v23 = *((_DWORD *)v5 - 25);
        v24 = v19 + 8;
        v25 = *((_DWORD *)v5 - 24);
        v26 = *((_DWORD *)v5 - 23);
        v27 = (__ROR4__(v20, 19) ^ __ROR4__(v20, 17) ^ (v20 >> 10))
            + v7
            + *((_DWORD *)v5 - 18)
            + (__ROR4__(v22, 18) ^ __ROR4__(v22, 7) ^ (v22 >> 3));
        v28 = (__ROR4__(v21, 17) ^ __ROR4__(v21, 19) ^ (v21 >> 10))
            + *((_DWORD *)v5 - 17)
            + v22
            + (__ROR4__(v23, 18) ^ __ROR4__(v23, 7) ^ (v23 >> 3));
        v29 = *((_DWORD *)v5 - 15);
        v30 = __ROR4__(v28, 19) ^ __ROR4__(v28, 17) ^ (v28 >> 10);
        v31 = v23 + *((_DWORD *)v5 - 16);
        *((_DWORD *)v5 - 10) = v28;
        v32 = *((_DWORD *)v5 - 21);
        v33 = *((_DWORD *)v5 - 22);
        v34 = (__ROR4__(v25, 7) ^ __ROR4__(v25, 18) ^ (v25 >> 3))
            + v31
            + (__ROR4__(v27, 19) ^ __ROR4__(v27, 17) ^ (v27 >> 10));
        *((_DWORD *)v5 - 9) = v34;
        v35 = (__ROR4__(v26, 7) ^ __ROR4__(v26, 18) ^ (v26 >> 3)) + v25 + v29 + v30;
        v36 = *((_DWORD *)v5 - 13);
        v37 = *((_DWORD *)v5 - 14);
        *((_DWORD *)v5 - 8) = v35;
        v38 = *((_DWORD *)v5 - 12);
        v39 = v26 + v37;
        v40 = (__ROR4__(v32, 7) ^ __ROR4__(v32, 18) ^ (v32 >> 3))
            + v33
            + v36
            + (__ROR4__(v35, 17) ^ __ROR4__(v35, 19) ^ (v35 >> 10));
        v41 = *((_DWORD *)v5 - 20);
        v7 = *((_DWORD *)v5 - 19);
        v42 = (__ROR4__(v33, 7) ^ __ROR4__(v33, 18) ^ (v33 >> 3))
            + v39
            + (__ROR4__(v34, 17) ^ __ROR4__(v34, 19) ^ (v34 >> 10));
        *((_DWORD *)v5 - 6) = v40;
        *((_DWORD *)v5 - 11) = v27;
        __pld(v5 - 28);
        *((_DWORD *)v5 - 7) = v42;
        v43 = (__ROR4__(v41, 7) ^ __ROR4__(v41, 18) ^ (v41 >> 3)) + v32 + v38;
        __pld(v5);
        v21 = (__ROR4__(v7, 7) ^ __ROR4__(v7, 18) ^ (v7 >> 3))
            + v27
            + v41
            + (__ROR4__(v40, 17) ^ __ROR4__(v40, 19) ^ (v40 >> 10));
        v20 = v43 + (__ROR4__(v42, 17) ^ __ROR4__(v42, 19) ^ (v42 >> 10));
        *((_DWORD *)v5 - 4) = v21;
        v19 = v24;
        *((_DWORD *)v5 - 5) = v20;
        v44 = 64 - v24;
        v5 += 32;
      }
      while ( v24 != 56 );
      v45 = (unsigned int *)&v79;
      while ( 1 )
      {
        v19 += 2;
        v46 = *(v45 - 15);
        v47 = (__ROR4__(v20, 19) ^ __ROR4__(v20, 17) ^ (v20 >> 10)) + v7;
        v7 = *(v45 - 14);
        v48 = (__ROR4__(v21, 19) ^ __ROR4__(v21, 17) ^ (v21 >> 10)) + *(v45 - 6);
        v20 = v47 + *(v45 - 7) + (__ROR4__(v46, 18) ^ __ROR4__(v46, 7) ^ (v46 >> 3));
        *v45 = v20;
        v45 += 2;
        v21 = v48 + v46 + (__ROR4__(v7, 18) ^ __ROR4__(v7, 7) ^ (v7 >> 3));
        *(v45 - 1) = v21;
        if ( v19 == 62 )
          break;
        v44 -= 2;
      }
      v82 = (__ROR4__(v80, 19) ^ __ROR4__(v80, 17) ^ (v80 >> 10))
          + v75
          + v78
          + (__ROR4__(v76, 18) ^ __ROR4__(v76, 7) ^ (v76 >> 3));
      if ( v44 != 3 )
        v83 = v79
            + v76
            + (__ROR4__(v81, 19) ^ __ROR4__(v81, 17) ^ (v81 >> 10))
            + (__ROR4__(v77, 18) ^ __ROR4__(v77, 7) ^ (v77 >> 3));
      v49 = HIDWORD(v69);
      v50 = 0;
      v51 = v69;
      v52 = v68;
      v53 = v67;
      v54 = v66;
      v55 = v65;
      v56 = v63;
      v57 = v64;
      while ( 1 )
      {
        v58 = v73[v50];
        v59 = sha256_k[v50++];
        v60 = (__ROR4__(v53, 11) ^ __ROR4__(v53, 6) ^ __ROR4__(v53, 25)) + (v51 & ~v53 ^ v52 & v53) + v58 + v59 + v49;
        v61 = v54 + v60;
        v62 = (__ROR4__(v56, 13) ^ __ROR4__(v56, 2) ^ __ROR4__(v56, 22)) + (v57 & v55 ^ (v57 ^ v55) & v56) + v60;
        v54 = v55;
        v49 = v51;
        if ( v50 == 64 )
          break;
        v51 = v52;
        v55 = v57;
        v52 = v53;
        v57 = v56;
        v53 = v61;
        v56 = v62;
      }
      a2 = v70;
      v63 += v62;
      v64 += v56;
      result = v64;
      v65 += v57;
      v66 += v55;
      v67 += v61;
      v68 += v53;
      LODWORD(v69) = v69 + v52;
      HIDWORD(v69) += v51;
      *(_DWORD *)(v72 + 136) = v63;
      *(_DWORD *)(v72 + 140) = v64;
      *(_DWORD *)(v72 + 144) = v65;
      *(_DWORD *)(v72 + 148) = v66;
      *(_DWORD *)(v72 + 152) = v67;
      *(_DWORD *)(v72 + 156) = v68;
      *(_QWORD *)(v72 + 160) = v69;
    }
    while ( v71 != v70 );
  }
  return result;
}
