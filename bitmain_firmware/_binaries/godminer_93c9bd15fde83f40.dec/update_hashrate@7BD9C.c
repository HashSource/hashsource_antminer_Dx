_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  float v3; // s13
  int v6; // r10
  int v7; // r9
  _DWORD *v8; // r6
  float v10; // s15
  float v11; // s16
  unsigned __int64 v12; // r6
  int v13; // r5
  bool v14; // cc
  int v15; // r2
  int v16; // lr
  float v17; // s14
  unsigned int v18; // r6
  float v19; // s15
  int v20; // r3
  int v21; // r2
  int v22; // r0
  int v23; // r7
  int v24; // r12
  int v25; // r7
  __int64 v26; // kr10_8
  int v27; // r0
  float v28; // s13
  int v29; // lr
  int v30; // r1
  float v31; // s15
  int v32; // r10
  int v33; // r2
  float v34; // s16
  int v35; // r5
  int v36; // r3
  int v37; // r2
  double v38; // d6
  __int64 v39; // kr18_8
  int v40; // r0
  char v41; // r1
  int v42; // r3
  __int64 v43; // r0
  float v44; // s17
  float v45; // s16
  _DWORD *v46; // r5
  unsigned int v47; // r12
  int v48; // r1
  __int64 v49; // r0
  int v50; // r3
  float v51; // s16
  float v52; // r0
  int v53; // [sp+0h] [bp-34h]
  unsigned __int64 v55; // [sp+10h] [bp-24h]
  int v56; // [sp+1Ch] [bp-18h]
  int v57; // [sp+20h] [bp-14h]
  unsigned int v58; // [sp+20h] [bp-14h]
  int v59; // [sp+24h] [bp-10h]
  double v60; // [sp+28h] [bp-Ch] BYREF

  (*(void (__fastcall **)(int, double *))(a1 + 88))(a1, &v60);
  v6 = *(_DWORD *)(a1 + 132);
  *(double *)(a2 + 48) = v60;
  if ( v6 > 4 )
    return a3;
  v7 = 2 * v6;
  if ( !*((_BYTE *)&qword_1A4030[147] + v6) )
  {
    clock_gettime(1, (struct timespec *)((char *)&unk_1A44CC + v7 * 8));
    clock_gettime(1, (struct timespec *)((char *)&unk_1A450C + v7 * 8));
    clock_gettime(1, (struct timespec *)((char *)&unk_1A454C + v7 * 8));
    *((_QWORD *)&unk_1A4590 + v6) = 0;
    *((_BYTE *)&qword_1A4030[147] + v6) = 1;
  }
  v8 = (_DWORD *)(a1 + 256);
  if ( !*(_QWORD *)(a1 + 256) || !*(_BYTE *)(a1 + 142) )
  {
    clock_gettime(1, (struct timespec *)((char *)&unk_1A44CC + v7 * 8));
    clock_gettime(1, (struct timespec *)((char *)&unk_1A450C + v7 * 8));
    clock_gettime(1, (struct timespec *)((char *)&unk_1A454C + v7 * 8));
    *((_QWORD *)&unk_1A4590 + v6) = 0;
    return a3;
  }
  v56 = v7 * 8 + 8;
  clock_gettime(1, (struct timespec *)((char *)&unk_1A44CC + v7 * 8 + 8));
  v10 = 5.0;
  v11 = (float)(1000LL * (HIDWORD(qword_1A4030[v7 + 148]) - HIDWORD(qword_1A4030[v7 + 147]))
              + (LODWORD(qword_1A4030[v7 + 149]) - LODWORD(qword_1A4030[v7 + 148])) / 1000000)
      * 0.001;
  if ( v11 >= 5.0 )
  {
    v53 = *v8;
    v58 = *(_DWORD *)(a1 + 260);
    v59 = *(_DWORD *)(a1 + 184);
    v39 = __PAIR64__(v58, *v8) - *((_QWORD *)&unk_1A4590 + v6);
    if ( !strcmp((const char *)v59, "grin29")
      || *(_BYTE *)v59 == 97 && *(_BYTE *)(v59 + 1) == 101 && !*(_BYTE *)(v59 + 2) )
    {
      v45 = (float)(COERCE_FLOAT(sub_16E9D8(v39)) / v11) * (float)*(unsigned int *)(a1 + 244);
    }
    else
    {
      v40 = *(_DWORD *)(a1 + 244);
      v41 = 32 - v40;
      v42 = 1 << (v40 - 32);
      LODWORD(v43) = 1 << v40;
      HIDWORD(v43) = v42 | (1u >> v41);
      v44 = COERCE_FLOAT(sub_16E9D8(v43));
      v45 = v44 * (float)(COERCE_FLOAT(sub_16E9D8(v39)) / v11);
    }
    clock_gettime(1, (struct timespec *)((char *)&unk_1A44CC + v7 * 8));
    v46 = (_DWORD *)((char *)&unk_1A5A08 + 2896 * v6);
    *((_DWORD *)&unk_1A4590 + 2 * v6) = v53;
    v47 = v46[723];
    v48 = v46[720];
    *((_DWORD *)&unk_1A4590 + 2 * v6 + 1) = v58;
    LODWORD(v49) = v46[722];
    v50 = (v48 + 1) % 720;
    *((float *)&unk_1A5A08 + 724 * v6 + v48) = v45;
    HIDWORD(v49) = v47;
    v55 = __PAIR64__(v47, v49) + 1;
    v46[720] = v50;
    v51 = v45 + (float)(COERCE_FLOAT(sub_16E9D8(v49)) * *(float *)(a2 + 40));
    v52 = COERCE_FLOAT(sub_16E9D8(v55));
    *((_QWORD *)v46 + 361) = v55;
    v12 = v55;
    v10 = v51 / v52;
    *(float *)(a2 + 40) = v51 / v52;
  }
  else
  {
    v12 = *((_QWORD *)&unk_1A5A08 + 362 * v6 + 361);
    v55 = v12;
  }
  v13 = *((_DWORD *)&unk_1A5A08 + 724 * v6 + 720);
  if ( v12 )
  {
    v57 = *((_DWORD *)&unk_1A5A08 + 724 * v6 + 720);
    v14 = HIDWORD(v12) != 0;
    v15 = 359;
    if ( !HIDWORD(v12) )
      v14 = (unsigned int)v12 > 0x167;
    if ( v14 )
      v3 = 360.0;
    else
      v15 = v12;
    if ( !v14 )
    {
      HIDWORD(v12) = v15;
      v10 = *(float *)&v15;
    }
    LOWORD(v16) = 24759;
    v17 = *((float *)&unk_1A5A08 + 724 * v6 + (v13 + 719) % 720);
    LOWORD(v18) = 23302;
    if ( v14 )
      HIDWORD(v12) = 360;
    else
      v3 = (float)SLODWORD(v10);
    v19 = 0.0;
    v20 = v13 + 719;
    *(float *)(a2 + 32) = v17;
    HIWORD(v16) = -18933;
    HIWORD(v18) = 1456;
    v21 = 0;
    while ( 1 )
    {
      ++v21;
      v19 = v19 + v17;
      v22 = v20 - 720 * (((int)(v20 + ((unsigned __int64)(v20 * (__int64)v16) >> 32)) >> 9) - (v20 >> 31));
      if ( v21 >= SHIDWORD(v12) )
        break;
      v20 = v22 + 719;
      v17 = *((float *)&unk_1A5A08
            + 724 * v6
            + v22
            + 719
            - 720 * ((((unsigned int)(v22 + 719) >> 4) * (unsigned __int64)v18) >> 32));
    }
    v13 = v57;
  }
  else
  {
    v3 = 0.0;
    *(_DWORD *)(a2 + 32) = 2143289344;
    v19 = 0.0;
  }
  v23 = *(_DWORD *)(a1 + 192);
  *(float *)(a2 + 36) = v19 / v3;
  if ( v23 <= 0 )
  {
    v26 = 0;
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 264);
    v25 = v24 + 48 * v23;
    v26 = 0;
    do
    {
      v27 = *(_DWORD *)(v24 + 24);
      v24 += 48;
      v26 += __PAIR64__(
               *(_DWORD *)(v24 - 20) + (unsigned int)__CFADD__(*(_DWORD *)(v24 - 32), v27) + *(_DWORD *)(v24 - 28),
               *(_DWORD *)(v24 - 32) + v27)
           + *(_QWORD *)(v24 - 16)
           + *(_QWORD *)(v24 - 8);
    }
    while ( v24 != v25 );
  }
  *(_QWORD *)(a2 + 72) = v26;
  clock_gettime(1, (struct timespec *)((char *)&unk_1A450C + v56));
  if ( (float)((float)(1000LL * (HIDWORD(qword_1A4030[v7 + 156]) - HIDWORD(qword_1A4030[v7 + 155]))
                     + (LODWORD(qword_1A4030[v7 + 157]) - LODWORD(qword_1A4030[v7 + 156])) / 1000000)
             * 0.001) >= 900.0 )
  {
    if ( v55 <= 0xB3 )
    {
      v29 = v55;
      v28 = (float)(int)v55;
      if ( !(_DWORD)v55 )
      {
        v31 = 0.0;
        goto LABEL_33;
      }
    }
    else
    {
      v28 = 180.0;
      v29 = 180;
    }
    v30 = v13;
    v31 = 0.0;
    v32 = 724 * v6;
    v33 = 0;
    do
    {
      ++v33;
      v30 = (v30 + 719) % 720;
      v31 = v31 + *((float *)&unk_1A5A08 + v32 + v30);
    }
    while ( v33 < v29 );
LABEL_33:
    v34 = v31 / v28;
    v35 = *(_DWORD *)(a2 + 192);
    if ( v35 > 23 )
    {
      memcpy((void *)(a2 + 96), (const void *)(a2 + 100), 0x5Cu);
      *(float *)(a2 + 188) = v34;
    }
    else
    {
      *(float *)(a2 + 4 * v35 + 96) = v34;
    }
    v36 = *(_DWORD *)(a2 + 200);
    v37 = *(_DWORD *)(a2 + 204);
    v38 = v60 * 0.8;
    *(_DWORD *)(a2 + 192) = v35 + 1;
    *(_DWORD *)(a2 + 200) = v36 + 1;
    *(_DWORD *)(a2 + 204) = __CFADD__(v36, 1) + v37;
    if ( v34 <= v38 )
      *a3 |= 1u;
    clock_gettime(1, (struct timespec *)((char *)&unk_1A450C + v7 * 8));
  }
  if ( !strcmp(*(const char **)(a1 + 184), "dash") )
  {
    clock_gettime(1, (struct timespec *)((char *)&unk_1A454C + v56));
    if ( (float)((float)(1000LL * (HIDWORD(qword_1A4030[v7 + 164]) - HIDWORD(qword_1A4030[v7 + 163]))
                       + (LODWORD(qword_1A4030[v7 + 165]) - LODWORD(qword_1A4030[v7 + 164])) / 1000000)
               * 0.001) >= 3000.0 )
    {
      (*(void (__fastcall **)(int))(a1 + 128))(a1);
      clock_gettime(1, (struct timespec *)((char *)&unk_1A454C + v7 * 8));
    }
  }
  return a3;
}
