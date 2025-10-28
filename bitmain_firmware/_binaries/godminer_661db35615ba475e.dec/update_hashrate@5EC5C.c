_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  float v3; // s13
  int v6; // r11
  int v7; // r8
  float v8; // s15
  float v9; // s16
  unsigned __int64 v10; // r6
  int v11; // r4
  bool v12; // cc
  int v13; // r2
  unsigned int v14; // r6
  float v15; // s14
  int v16; // r3
  float v17; // s15
  int v18; // r2
  int v19; // r0
  int v20; // r7
  int v21; // r12
  int v22; // r7
  __int64 v23; // kr10_8
  int v24; // r0
  int v25; // lr
  float v26; // s13
  float v27; // s15
  int v28; // r11
  int v29; // r2
  float v30; // s16
  int v31; // r4
  int v32; // r3
  int v33; // r2
  double v34; // d6
  int v36; // r9
  __int64 v37; // r6
  float v38; // s16
  _DWORD *v39; // r4
  int v40; // r1
  _QWORD *v41; // r3
  __int64 v42; // r0
  unsigned int v43; // r3
  int v44; // r2
  float v45; // s16
  float v46; // r0
  int v47; // r0
  char v48; // r1
  int v49; // r3
  __int64 v50; // r0
  float v51; // s17
  unsigned __int64 v52; // [sp+8h] [bp-2Ch]
  int v54; // [sp+1Ch] [bp-18h]
  int v55; // [sp+20h] [bp-14h]
  int v56; // [sp+20h] [bp-14h]
  int v57; // [sp+24h] [bp-10h]
  double v58; // [sp+28h] [bp-Ch] BYREF

  (*(void (__fastcall **)(int, double *))(a1 + 76))(a1, &v58);
  v6 = *(_DWORD *)(a1 + 120);
  *(double *)(a2 + 48) = v58;
  if ( v6 > 4 )
    return a3;
  v7 = 16 * v6;
  if ( !*((_BYTE *)&stru_190E30 + v6 + 3248) )
  {
    clock_gettime(1, (struct timespec *)((char *)&unk_191AE4 + v7));
    clock_gettime(1, (struct timespec *)((char *)&unk_191B24 + v7));
    clock_gettime(1, (struct timespec *)((char *)&unk_191B64 + v7));
    *((_BYTE *)&stru_190E30 + v6 + 3248) = 1;
  }
  if ( *(_QWORD *)(a1 + 240) )
  {
    v54 = v7 + 8;
    clock_gettime(1, (struct timespec *)((char *)&unk_191AE4 + v7 + 8));
    v8 = 5.0;
    v9 = (float)(1000LL
               * (*(_DWORD *)((char *)&stru_190E30 + v7 + 3260) - *(_DWORD *)((char *)&stru_190E30 + v7 + 3252))
               + (*(_DWORD *)((char *)&stru_190E30 + v7 + 3264) - *(_DWORD *)((char *)&stru_190E30 + v7 + 3256))
               / 1000000)
       * 0.001;
    if ( v9 >= 5.0 )
    {
      v36 = *(_DWORD *)(a1 + 172);
      v56 = *(_DWORD *)(a1 + 240);
      v37 = *(_QWORD *)(a1 + 240) - qword_191BB0[v6 - 1];
      v57 = *(_DWORD *)(a1 + 244);
      if ( !strcmp((const char *)v36, "grin29")
        || *(_BYTE *)v36 == 97 && *(_BYTE *)(v36 + 1) == 101 && !*(_BYTE *)(v36 + 2) )
      {
        v38 = (float)(COERCE_FLOAT(sub_15DB80(v37)) / v9) * (float)*(unsigned int *)(a1 + 228);
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 228);
        v48 = 32 - v47;
        v49 = 1 << (v47 - 32);
        LODWORD(v50) = 1 << v47;
        HIDWORD(v50) = v49 | (1u >> v48);
        v51 = COERCE_FLOAT(sub_15DB80(v50));
        v38 = v51 * (float)(COERCE_FLOAT(sub_15DB80(v37)) / v9);
      }
      v39 = (_DWORD *)((char *)&unk_192CF0 + 2896 * v6);
      clock_gettime(1, (struct timespec *)((char *)&unk_191AE4 + v7));
      v40 = v39[720];
      v41 = &qword_191BB0[v6];
      *((_DWORD *)v41 - 1) = v57;
      *((_DWORD *)v41 - 2) = v56;
      LODWORD(v42) = v39[722];
      LODWORD(v52) = v42 + 1;
      v43 = v39[723];
      v44 = (v40 + 1) % 720;
      *((float *)&unk_192CF0 + 724 * v6 + v40) = v38;
      HIDWORD(v42) = v43;
      v39[720] = v44;
      HIDWORD(v52) = (__PAIR64__(v43, v42) + 1) >> 32;
      v45 = v38 + (float)(COERCE_FLOAT(sub_15DB80(v42)) * *(float *)(a2 + 40));
      v46 = COERCE_FLOAT(sub_15DB80(v52));
      *((_QWORD *)v39 + 361) = v52;
      v10 = v52;
      v8 = v45 / v46;
      *(float *)(a2 + 40) = v45 / v46;
    }
    else
    {
      v10 = *((_QWORD *)&unk_192CF0 + 362 * v6 + 361);
      v52 = v10;
    }
    v11 = *((_DWORD *)&unk_192CF0 + 724 * v6 + 720);
    if ( v10 )
    {
      v55 = *((_DWORD *)&unk_192CF0 + 724 * v6 + 720);
      v12 = HIDWORD(v10) != 0;
      v13 = 359;
      if ( !HIDWORD(v10) )
        v12 = (unsigned int)v10 > 0x167;
      if ( v12 )
        v3 = 360.0;
      else
        v13 = v10;
      if ( !v12 )
      {
        HIDWORD(v10) = v13;
        v8 = *(float *)&v13;
      }
      LOWORD(v14) = 23302;
      v15 = *((float *)&unk_192CF0 + 724 * v6 + (v11 + 719) % 720);
      if ( v12 )
        HIDWORD(v10) = 360;
      else
        v3 = (float)SLODWORD(v8);
      v16 = v11 + 719;
      v17 = 0.0;
      HIWORD(v14) = 1456;
      *(float *)(a2 + 32) = v15;
      v18 = 0;
      while ( 1 )
      {
        ++v18;
        v17 = v17 + v15;
        v19 = v16 % 720;
        if ( v18 >= SHIDWORD(v10) )
          break;
        v16 = v19 + 719;
        v15 = *((float *)&unk_192CF0
              + 724 * v6
              + v19
              + 719
              - 720 * ((((unsigned int)(v19 + 719) >> 4) * (unsigned __int64)v14) >> 32));
      }
      v11 = v55;
    }
    else
    {
      v3 = 0.0;
      *(_DWORD *)(a2 + 32) = 2143289344;
      v17 = 0.0;
    }
    v20 = *(_DWORD *)(a1 + 180);
    *(float *)(a2 + 36) = v17 / v3;
    if ( v20 <= 0 )
    {
      v23 = 0;
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 248);
      v22 = v21 + 48 * v20;
      v23 = 0;
      do
      {
        v24 = *(_DWORD *)(v21 + 24);
        v21 += 48;
        v23 += __PAIR64__(
                 *(_DWORD *)(v21 - 20) + (unsigned int)__CFADD__(*(_DWORD *)(v21 - 32), v24) + *(_DWORD *)(v21 - 28),
                 *(_DWORD *)(v21 - 32) + v24)
             + *(_QWORD *)(v21 - 16)
             + *(_QWORD *)(v21 - 8);
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)(a2 + 72) = v23;
    clock_gettime(1, (struct timespec *)((char *)&unk_191B24 + v54));
    if ( (float)((float)(1000LL
                       * (*(_DWORD *)((char *)&stru_190E30 + v7 + 3324) - *(_DWORD *)((char *)&stru_190E30 + v7 + 3316))
                       + (*(_DWORD *)((char *)&stru_190E30 + v7 + 3328) - *(_DWORD *)((char *)&stru_190E30 + v7 + 3320))
                       / 1000000)
               * 0.001) < 900.0 )
      goto LABEL_36;
    if ( v52 > 0xB3 )
    {
      v26 = 180.0;
      v25 = 180;
    }
    else
    {
      v25 = v52;
      v26 = (float)(int)v52;
      if ( !(_DWORD)v52 )
      {
        v27 = 0.0;
        goto LABEL_30;
      }
    }
    v27 = 0.0;
    v28 = 724 * v6;
    v29 = 0;
    do
    {
      ++v29;
      v11 = (v11 + 719) % 720;
      v27 = v27 + *((float *)&unk_192CF0 + v28 + v11);
    }
    while ( v29 < v25 );
LABEL_30:
    v30 = v27 / v26;
    v31 = *(_DWORD *)(a2 + 192);
    if ( v31 > 23 )
    {
      memcpy((void *)(a2 + 96), (const void *)(a2 + 100), 0x5Cu);
      *(float *)(a2 + 188) = v30;
    }
    else
    {
      *(float *)(a2 + 4 * v31 + 96) = v30;
    }
    v32 = *(_DWORD *)(a2 + 200);
    v33 = *(_DWORD *)(a2 + 204);
    v34 = v58 * 0.8;
    *(_DWORD *)(a2 + 192) = v31 + 1;
    *(_DWORD *)(a2 + 200) = v32 + 1;
    *(_DWORD *)(a2 + 204) = __CFADD__(v32, 1) + v33;
    if ( v30 <= v34 )
      *a3 |= 1u;
    clock_gettime(1, (struct timespec *)((char *)&unk_191B24 + v7));
LABEL_36:
    if ( !strcmp(*(const char **)(a1 + 172), "dash") )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_191B64 + v54));
      if ( (float)((float)(1000LL
                         * (*(_DWORD *)((char *)&stru_190E30 + v7 + 3388) - *(_DWORD *)((char *)&stru_190E30 + v7 + 3380))
                         + (*(_DWORD *)((char *)&stru_190E30 + v7 + 3392) - *(_DWORD *)((char *)&stru_190E30 + v7 + 3384))
                         / 1000000)
                 * 0.001) >= 3000.0 )
      {
        (*(void (__fastcall **)(int))(a1 + 116))(a1);
        clock_gettime(1, (struct timespec *)((char *)&unk_191B64 + v7));
      }
    }
    return a3;
  }
  clock_gettime(1, (struct timespec *)((char *)&unk_191AE4 + v7));
  clock_gettime(1, (struct timespec *)((char *)&unk_191B24 + v7));
  clock_gettime(1, (struct timespec *)((char *)&unk_191B64 + v7));
  return a3;
}
