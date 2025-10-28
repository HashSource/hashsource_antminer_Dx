int __fastcall sub_1026B4(int a1, int a2, char *a3, const char **a4, int *a5, char a6)
{
  int v7; // r3
  int v8; // r3
  char *v9; // r5
  int v10; // r9
  int v11; // r7
  char *v12; // r8
  int v13; // r1
  int v14; // r11
  int v15; // r5
  int v16; // r9
  int v17; // r8
  signed int v18; // r1
  signed int v19; // r10
  int v20; // r0
  signed int v21; // r1
  int v22; // r0
  int v23; // r10
  _DWORD *v24; // lr
  int v25; // r11
  int v26; // r12
  int v27; // t1
  int v28; // r3
  int v29; // r2
  int v30; // r1
  int v31; // r0
  int v32; // r10
  char *v33; // r7
  bool v35; // zf
  int v36; // r3
  int v37; // r5
  int v38; // r11
  int v39; // r8
  int v40; // r9
  int v41; // r8
  signed int v42; // r1
  signed int v43; // r10
  int v44; // r0
  signed int v45; // r1
  int v46; // r0
  int v47; // r10
  _DWORD *v48; // lr
  int v49; // r11
  int v50; // r12
  int v51; // t1
  int v52; // r3
  int v53; // r2
  int v54; // r1
  char *v55; // r0
  int v56; // r3
  _BOOL4 v57; // r2
  int v58; // r3
  int v59; // r2
  int v60; // r3
  int v61; // r1
  int v62; // r11
  int v63; // r9
  unsigned int v64; // r2
  unsigned int v65; // r1
  unsigned int i; // r5
  unsigned int v67; // r1
  int v68; // r0
  int v69; // lr
  signed int j; // r3
  int v71; // r1
  int v72; // r5
  int v73; // r12
  int v74; // r10
  int v75; // [sp+8h] [bp-24h]
  signed int v76; // [sp+8h] [bp-24h]
  int v78; // [sp+14h] [bp-18h]
  char *s; // [sp+18h] [bp-14h]
  char v81; // [sp+24h] [bp-8h]

  s = a3;
  if ( !a3 )
    return -1;
  v7 = dword_1907A0;
  v75 = dword_1907A0;
  if ( dword_1907A0 == -1 )
  {
    v7 = getenv("POSIXLY_CORRECT") != 0;
    v75 = v7;
    dword_1907A0 = v7;
  }
  v35 = v7 == 0;
  v8 = (unsigned __int8)*s;
  if ( !v35 )
  {
    v36 = ((_BYTE)v8 - 43) & 0xFD;
    v35 = v36 == 0;
    v81 = a6 & 0xFE;
    if ( v36 )
      v36 = 0;
    v78 = a6 & 2;
    if ( !v35 )
    {
      v75 = v36;
      goto LABEL_9;
    }
    v75 = v36;
LABEL_61:
    ++s;
    goto LABEL_9;
  }
  if ( v8 == 43 )
  {
    v81 = a6 & 0xFE;
    v78 = a6 & 2;
    goto LABEL_61;
  }
  if ( v8 == 45 )
  {
    v81 = a6 | 2;
    v75 = a6 & 1;
    v78 = 2;
    goto LABEL_61;
  }
  v81 = a6;
  v75 = a6 & 1;
  v78 = a6 & 2;
LABEL_9:
  if ( !optind )
  {
    optind = 1;
    optarg = 0;
    dword_1907A4 = -1;
    dword_1907A8 = -1;
    goto LABEL_12;
  }
  optarg = 0;
  if ( !optreset )
  {
    v9 = off_190794;
    v10 = (unsigned __int8)*off_190794;
    if ( !*off_190794 )
      goto LABEL_12;
    goto LABEL_36;
  }
  dword_1907A4 = -1;
  dword_1907A8 = -1;
  while ( 1 )
  {
LABEL_12:
    v11 = optind;
    optreset = 0;
    if ( optind >= a1 )
    {
      v37 = dword_1907A4;
      v38 = dword_1907A8;
      off_190794 = &byte_1755A4;
      if ( dword_1907A4 == -1 )
      {
        if ( dword_1907A8 != -1 )
          optind = dword_1907A8;
        goto LABEL_65;
      }
      v40 = optind - dword_1907A4;
      v41 = dword_1907A4 - dword_1907A8;
      sub_15D65C(dword_1907A4 - dword_1907A8, optind - dword_1907A4);
      v43 = v42;
      if ( v42 )
      {
        v44 = v11 - v37;
        while ( 1 )
        {
          sub_15D65C(v44, v43);
          v44 = v43;
          if ( !v45 )
            break;
          v43 = v45;
        }
      }
      else
      {
        v43 = v11 - v37;
      }
      v46 = sub_15D3C8(v11 - v38, v43);
      if ( v43 > 0 && v46 > 0 )
      {
        v47 = v43 + v37;
        v48 = (_DWORD *)(a2 + 4 * (v37 + 0x3FFFFFFF));
        v49 = v37;
        do
        {
          v51 = v48[1];
          ++v48;
          v50 = v51;
          v52 = v49;
          v53 = 0;
          do
          {
            ++v53;
            if ( v37 <= v52 )
              v52 -= v41;
            else
              v52 += v40;
            v54 = *(_DWORD *)(a2 + 4 * v52);
            *(_DWORD *)(a2 + 4 * v52) = v50;
            *v48 = v54;
            v50 = v54;
          }
          while ( v46 != v53 );
          ++v49;
        }
        while ( v49 != v47 );
      }
      goto LABEL_83;
    }
    v12 = *(char **)(a2 + 4 * optind);
    v13 = (unsigned __int8)*v12;
    off_190794 = v12;
    if ( v13 != 45 )
      goto LABEL_14;
    v10 = (unsigned __int8)v12[1];
    if ( v12[1] )
      break;
    if ( strchr(s, 45) )
    {
      v32 = dword_1907A8;
      if ( dword_1907A8 != -1 && dword_1907A4 == -1 )
        goto LABEL_49;
LABEL_50:
      v33 = v12 + 1;
      off_190794 = v12 + 1;
      goto LABEL_51;
    }
LABEL_14:
    off_190794 = &byte_1755A4;
    if ( v78 )
    {
      optind = v11 + 1;
      optarg = (int)v12;
      return 1;
    }
    if ( !v75 )
      return -1;
    v14 = dword_1907A8;
    if ( dword_1907A8 == -1 )
    {
      dword_1907A8 = v11;
    }
    else
    {
      v15 = dword_1907A4;
      if ( dword_1907A4 != -1 )
      {
        v16 = v11 - dword_1907A4;
        v17 = dword_1907A4 - dword_1907A8;
        sub_15D65C(dword_1907A4 - dword_1907A8, v11 - dword_1907A4);
        v19 = v18;
        if ( v18 )
        {
          v20 = v11 - v15;
          while ( 1 )
          {
            sub_15D65C(v20, v19);
            v20 = v19;
            if ( !v21 )
              break;
            v19 = v21;
          }
        }
        else
        {
          v19 = v11 - v15;
        }
        v22 = sub_15D3C8(v11 - v14, v19);
        if ( v19 > 0 && v22 > 0 )
        {
          v23 = v19 + v15;
          v24 = (_DWORD *)(a2 + 4 * (v15 + 0x3FFFFFFF));
          v25 = v15;
          do
          {
            v27 = v24[1];
            ++v24;
            v26 = v27;
            v28 = v25;
            v29 = 0;
            do
            {
              ++v29;
              if ( v28 >= v15 )
                v28 -= v17;
              else
                v28 += v16;
              v30 = *(_DWORD *)(a2 + 4 * v28);
              *(_DWORD *)(a2 + 4 * v28) = v26;
              *v24 = v30;
              v26 = v30;
            }
            while ( v22 != v29 );
            ++v25;
          }
          while ( v25 != v23 );
        }
        dword_1907A8 = v11 - v17;
        dword_1907A4 = -1;
      }
    }
    v9 = off_190794;
    optind = v11 + 1;
    v10 = (unsigned __int8)*off_190794;
    if ( *off_190794 )
      goto LABEL_36;
  }
  v32 = dword_1907A8;
  if ( dword_1907A8 != -1 && dword_1907A4 == -1 )
  {
LABEL_49:
    dword_1907A4 = v11;
    if ( !v10 )
      goto LABEL_50;
  }
  v9 = v12 + 1;
  off_190794 = v12 + 1;
  if ( v10 != 45 )
  {
LABEL_36:
    if ( !a4 || *(char **)(a2 + 4 * optind) == v9 )
      goto LABEL_85;
    if ( v10 == 45 )
      goto LABEL_103;
    if ( (v81 & 4) == 0 )
      goto LABEL_85;
    v31 = v10 != 58 && strchr(s, v10) != 0;
LABEL_43:
    v39 = sub_100F44(a2, s, a4, a5, v31);
    if ( v39 == -1 )
    {
      v10 = (unsigned __int8)*v9;
      goto LABEL_85;
    }
    goto LABEL_44;
  }
  if ( !v12[2] )
  {
    v62 = dword_1907A4;
    optind = ++v11;
    off_190794 = &byte_1755A4;
    if ( dword_1907A4 == -1 )
      goto LABEL_65;
    v63 = v11 - dword_1907A4;
    v41 = dword_1907A4 - v32;
    sub_15D65C(dword_1907A4 - v32, v11 - dword_1907A4);
    v64 = v11 - v62;
    for ( i = v65; i; i = v67 )
    {
      sub_15D65C(v64, i);
      v64 = i;
    }
    v76 = v64;
    v68 = sub_15D3C8(v11 - v32, v64);
    v69 = a2 + 4 * v62;
    for ( j = 0; v76 > j; ++j )
    {
      v71 = j + v62;
      if ( v68 > 0 )
      {
        v72 = *(_DWORD *)(v69 + 4 * j);
        v73 = 0;
        do
        {
          ++v73;
          if ( v62 > v71 )
            v71 += v63;
          else
            v71 -= v41;
          v74 = *(_DWORD *)(a2 + 4 * v71);
          *(_DWORD *)(a2 + 4 * v71) = v72;
          *(_DWORD *)(v69 + 4 * j) = v74;
          v72 = v74;
        }
        while ( v73 != v68 );
      }
    }
LABEL_83:
    optind = v11 - v41;
LABEL_65:
    dword_1907A4 = -1;
    dword_1907A8 = -1;
    return -1;
  }
  if ( !a4 )
  {
    v33 = v12 + 2;
    ++v12;
    off_190794 = v33;
LABEL_51:
    if ( !v12[1] )
    {
      v55 = strchr(s, 45);
      if ( v55 )
      {
        v56 = (unsigned __int8)v55[1];
        v39 = 45;
        goto LABEL_92;
      }
    }
    if ( *v33 )
    {
      v39 = 45;
LABEL_54:
      optopt = v39;
      return 63;
    }
    return -1;
  }
  if ( v9 != *(char **)(a2 + 4 * optind) )
  {
LABEL_103:
    ++v9;
    v31 = 0;
    off_190794 = v9;
    goto LABEL_43;
  }
LABEL_85:
  v33 = v9 + 1;
  off_190794 = v9 + 1;
  v39 = v10;
  if ( v10 == 58 )
    goto LABEL_104;
  if ( v10 == 45 )
  {
    v12 = v9;
    goto LABEL_51;
  }
  v55 = strchr(s, v10);
  if ( !v55 )
  {
LABEL_104:
    if ( !v9[1] )
      ++optind;
    goto LABEL_54;
  }
  v56 = (unsigned __int8)v55[1];
  v57 = v10 == 87;
  if ( !a4 )
    v57 = 0;
  if ( v57 && v56 == 59 )
  {
    if ( !v9[1] )
    {
      v58 = ++optind;
      if ( optind >= a1 )
      {
        optopt = 87;
        off_190794 = &byte_1755A4;
        if ( *s == 58 )
          return 58;
        return 63;
      }
      off_190794 = *(char **)(a2 + 4 * v58);
    }
    v39 = sub_100F44(a2, s, a4, a5, 0);
LABEL_44:
    off_190794 = &byte_1755A4;
    return v39;
  }
LABEL_92:
  if ( v56 == 58 )
  {
    v59 = optind;
    optarg = 0;
    v60 = optind + 1;
    if ( *v33 )
    {
      optarg = (int)v33;
LABEL_120:
      optind = v60;
      off_190794 = &byte_1755A4;
      return v39;
    }
    if ( v55[2] == 58 )
      goto LABEL_120;
    ++optind;
    if ( a1 > v60 )
    {
      v61 = *(_DWORD *)(a2 + 4 * v60);
      v60 = v59 + 2;
      optarg = v61;
      goto LABEL_120;
    }
    optopt = v39;
    off_190794 = &byte_1755A4;
    if ( *s == 58 )
      return 58;
    return 63;
  }
  if ( !*v33 )
    ++optind;
  return v39;
}
