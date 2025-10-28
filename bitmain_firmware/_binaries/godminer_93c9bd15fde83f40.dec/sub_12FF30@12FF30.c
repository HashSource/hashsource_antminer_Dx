unsigned int __fastcall sub_12FF30(int a1, int a2)
{
  _BYTE *v2; // r2
  unsigned int v5; // r5
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  __int64 v9; // r2
  bool v10; // cc
  int v11; // r0
  const char *v12; // r5
  int v13; // r5
  int v15; // r2
  int v16; // r3
  int v17; // r9
  int v18; // r1
  int v19; // r0
  int v20; // r5
  int v21; // r3
  int v22; // r2
  int v23; // r9
  int v24; // r11
  int v25; // r3
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r2
  bool v30; // zf
  _BOOL4 v31; // r2
  _BOOL4 v32; // r2
  int v33; // r2
  void *v34; // r0
  _BYTE *v35; // r7
  char v36; // r3
  int v37; // r2
  int v38; // r3
  unsigned int v39; // r0
  bool v40; // zf
  const char *v41; // r7
  int *v42; // r5
  __int64 v43; // r0
  int v44; // r3
  int v45; // r3
  int v46; // r2
  int v47; // r1
  int v48; // r0
  unsigned int v49; // r5
  int v50; // r0
  bool v51; // zf
  bool v52; // zf
  int v53; // r2
  int v54; // r3
  bool v55; // zf
  double v56; // r2
  int v57; // r7
  bool v58; // cc
  unsigned int v59; // r5
  _BYTE *v60; // r0
  _BYTE *v61; // r7
  int v62; // r5
  unsigned __int8 *i; // r5
  int v64; // r3
  unsigned int v65; // r3
  int v66; // r3
  int v67; // r2
  int v68; // r3
  int v69; // r0
  int v70; // r0
  int v71; // r3
  int v72; // r0
  int v73; // r0
  int v74; // r3
  int v75; // r0
  int v76; // r0
  int v77; // r3
  int v78; // r3
  int v79; // r1
  int v80; // r2
  int v81; // r2
  int v82; // r3
  int v83; // r1
  int v84; // r1
  int v85; // r3
  int v86; // r2
  int v87; // r2
  unsigned int v88; // r0
  int v89; // r2
  int v90; // r3
  int v91; // r2
  int v92; // r3
  int v93; // r8
  int v94; // r7
  int v95; // r8
  int v96; // r3
  int v97; // r2
  int v98; // r2
  int v99; // r2
  int v100; // r3
  int v101; // r2
  unsigned int v102; // r5
  int v103; // r2
  const char *v104; // r3
  const char *v105; // r3
  int v106; // r3
  int v107; // r8
  int v108; // r0
  unsigned int v109; // r8
  char *v110; // r11
  _BYTE *v111; // r9
  int v112; // r3
  int v113; // r2
  char arg[4]; // [sp+0h] [bp-1Ch]
  char arga[4]; // [sp+0h] [bp-1Ch]
  char v116; // [sp+Fh] [bp-Dh] BYREF
  double endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = *(_BYTE **)(a1 + 40);
  *(_DWORD *)(a1 + 44) = 0;
  *v2 = 0;
  if ( *(_DWORD *)(a1 + 60) == 256 )
  {
    v34 = *(void **)(a1 + 64);
    if ( v34 )
      off_1A25EC(v34);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 20);
      if ( v5 )
        goto LABEL_3;
      v15 = *(_DWORD *)(a1 + 16);
      v16 = a1 + v15;
      v17 = *(unsigned __int8 *)(a1 + v15 + 8);
      if ( *(_BYTE *)(a1 + v15 + 8) )
      {
        v18 = v15 + 1;
        goto LABEL_40;
      }
      v19 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      v20 = v19;
      if ( v19 == -1 )
      {
        *(_DWORD *)(a1 + 20) = -1;
        goto LABEL_84;
      }
      *(_DWORD *)(a1 + 16) = v17;
      *(_BYTE *)(a1 + 8) = v19;
      if ( (unsigned int)(v19 - 128) > 0x7F )
      {
        v18 = 1;
        v16 = a1;
        *(_BYTE *)(a1 + 9) = v17;
        goto LABEL_40;
      }
      if ( ((unsigned __int8)v19 ^ 0x80u) <= 0x41 )
        goto LABEL_48;
      if ( (unsigned __int8)(v19 + 62) <= 0x1Du )
      {
        v23 = 2;
        *(_BYTE *)(a1 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        v24 = a1 + 8;
        v25 = *(_BYTE *)(a1 + 8) & 0x1F;
      }
      else
      {
        if ( (unsigned __int8)(v19 + 32) <= 0xFu )
        {
          v23 = 3;
        }
        else
        {
          if ( (unsigned __int8)(v19 + 16) > 4u )
            goto LABEL_48;
          v23 = 4;
        }
        v24 = a1 + 8;
        v35 = (_BYTE *)(a1 + 9);
        do
          *v35++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        while ( (_BYTE *)(a1 + 8 + v23) != v35 );
        v36 = *(_BYTE *)(a1 + 8);
        if ( v23 == 3 )
        {
          v37 = *(unsigned __int8 *)(a1 + 9);
          v38 = v36 & 0xF;
          if ( (v37 ^ 0x80u) > 0x3F )
            goto LABEL_48;
          v27 = (v37 & 0x3F) + (v38 << 6);
LABEL_55:
          v28 = *(unsigned __int8 *)(v24 + 2);
          if ( (v28 ^ 0x80u) > 0x3F )
            goto LABEL_48;
          v27 = (v28 & 0x3F) + (v27 << 6);
          if ( v23 == 4 )
          {
            v29 = *(unsigned __int8 *)(v24 + 3);
            if ( (v29 ^ 0x80u) > 0x3F )
              goto LABEL_48;
            v27 = (v29 & 0x3F) + (v27 << 6);
            if ( v27 > 1114111 )
              goto LABEL_48;
          }
          else
          {
            v23 = 3;
          }
          goto LABEL_59;
        }
        v23 = 4;
        v25 = v36 & 7;
      }
      v26 = *(unsigned __int8 *)(a1 + 9);
      if ( (v26 ^ 0x80u) > 0x3F )
        goto LABEL_48;
      v27 = (v26 & 0x3F) + (v25 << 6);
      if ( v23 != 2 )
        goto LABEL_55;
LABEL_59:
      if ( (unsigned int)(v27 - 55296) < 0x800 )
        goto LABEL_48;
      v30 = v27 == 127;
      if ( v27 <= 127 )
        v30 = v23 == 2;
      if ( v30 )
        goto LABEL_48;
      v31 = v23 == 3;
      if ( v27 >= 2048 )
        v31 = 0;
      if ( v31 )
        goto LABEL_48;
      v32 = v23 == 4;
      if ( v27 >= 0x10000 )
        v32 = 0;
      if ( v32 )
      {
LABEL_48:
        *(_DWORD *)(a1 + 20) = -2;
        sub_12DF38(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", v20);
        goto LABEL_49;
      }
      *(_BYTE *)(a1 + v23 + 8) = 0;
      v33 = *(_DWORD *)(a1 + 16);
      v18 = v33 + 1;
      v16 = a1 + v33;
LABEL_40:
      *(_DWORD *)(a1 + 16) = v18;
      v5 = *(unsigned __int8 *)(v16 + 8);
      ++*(_DWORD *)(a1 + 36);
      if ( v5 != 10 )
        break;
      v21 = *(_DWORD *)(a1 + 24);
      v22 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 24) = v21 + 1;
      *(_DWORD *)(a1 + 32) = v22;
    }
    if ( (v5 & 0x80) == 0 || (unsigned __int8)(v5 + 62) <= 0x32u )
      ++*(_DWORD *)(a1 + 28);
LABEL_3:
    v6 = v5 == 9;
    if ( v5 != 9 )
      v6 = v5 == 32;
    if ( !v6 )
    {
      v7 = v5 == 10;
      if ( v5 != 10 )
        v7 = v5 == 13;
      if ( !v7 )
        break;
    }
  }
  if ( v5 == -1 )
  {
LABEL_84:
    *(_DWORD *)(a1 + 60) = 0;
    return 0;
  }
  if ( v5 == -2 )
  {
LABEL_49:
    *(_DWORD *)(a1 + 60) = -1;
    return -1;
  }
  v116 = v5;
  strbuffer_append_bytes((const void **)(a1 + 40), &v116, 1u);
  if ( ((v5 - 123) & 0xFFFFFFFD) == 0 || ((v5 - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_82;
  v8 = v5 == 44;
  if ( v5 != 44 )
    v8 = v5 == 58;
  HIDWORD(v9) = v8;
  if ( v8 )
    goto LABEL_82;
  if ( v5 != 34 )
  {
    v10 = v5 > 0x2D;
    if ( v5 != 45 )
      v10 = v5 - 48 > 9;
    if ( !v10 )
    {
      *(_DWORD *)(a1 + 60) = -1;
      if ( v5 == 45 )
      {
        v88 = sub_12E064(a1, a2);
        if ( v88 == 48 )
        {
LABEL_88:
          v39 = sub_12E064(a1, a2);
          if ( v39 - 48 > 9 )
            goto LABEL_91;
LABEL_89:
          sub_15DE84((_DWORD *)a1, v39);
          return *(_DWORD *)(a1 + 60);
        }
        if ( v88 - 48 <= 9 )
          goto LABEL_90;
        if ( v88 < 0xFFFFFFFE )
        {
          --*(_DWORD *)(a1 + 36);
          if ( v88 == 10 )
          {
            v89 = *(_DWORD *)(a1 + 32);
            --*(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 28) = v89;
          }
          else if ( utf8_check_first((unsigned __int8)v88) )
          {
            --*(_DWORD *)(a1 + 28);
          }
          v90 = *(_DWORD *)(a1 + 44);
          --*(_DWORD *)(a1 + 16);
          if ( v90 )
          {
            v91 = *(_DWORD *)(a1 + 40);
            v92 = v90 - 1;
            *(_DWORD *)(a1 + 44) = v92;
            *(_BYTE *)(v91 + v92) = 0;
            return *(_DWORD *)(a1 + 60);
          }
        }
        return *(_DWORD *)(a1 + 60);
      }
      if ( v5 == 48 )
        goto LABEL_88;
      do
LABEL_90:
        v39 = sub_12E064(a1, a2);
      while ( v39 - 48 <= 9 );
LABEL_91:
      if ( (*(_DWORD *)(a1 + 52) & 8) == 0 )
      {
        v40 = v39 == 46;
        if ( v39 != 46 )
          v40 = v39 == 69;
        if ( !v40 )
        {
          if ( v39 != 101 )
          {
            if ( v39 + 2 > 1 )
              sub_15DE84((_DWORD *)a1, v39);
            v41 = *(const char **)(a1 + 40);
            v42 = _errno_location();
            *v42 = 0;
            v43 = strtoll(v41, (char **)&endptr, 10);
            if ( *v42 == 34 )
            {
              if ( v43 >= 0 )
                LOWORD(v105) = -21396;
              else
                LOWORD(v105) = -21424;
              HIWORD(v105) = 24;
              sub_12DF38(a2, (_DWORD *)a1, 15, v105);
              return *(_DWORD *)(a1 + 60);
            }
            else
            {
              v13 = 257;
              *(_QWORD *)(a1 + 64) = v43;
              *(_DWORD *)(a1 + 60) = 257;
            }
            return v13;
          }
LABEL_257:
          v39 = sub_12E064(a1, a2);
          if ( ((v39 - 43) & 0xFFFFFFFD) == 0 )
            v39 = sub_12E064(a1, a2);
          if ( v39 - 48 > 9 )
          {
            if ( v39 < 0xFFFFFFFE )
              goto LABEL_89;
            return *(_DWORD *)(a1 + 60);
          }
          do
            v39 = sub_12E064(a1, a2);
          while ( v39 - 48 <= 9 );
LABEL_131:
          if ( v39 + 2 > 1 )
            sub_15DE84((_DWORD *)a1, v39);
          if ( !jsonp_strtod((const char **)(a1 + 40), &endptr) )
          {
            v56 = endptr;
            v13 = 258;
            *(_DWORD *)(a1 + 60) = 258;
            *(double *)(a1 + 64) = v56;
            return v13;
          }
          sub_12DF38(a2, (_DWORD *)a1, 15, "real number overflow");
          return *(_DWORD *)(a1 + 60);
        }
      }
      if ( v39 != 46 )
      {
LABEL_130:
        if ( (v39 & 0xFFFFFFDF) == 0x45 )
          goto LABEL_257;
        goto LABEL_131;
      }
      v102 = *(_DWORD *)(a1 + 20);
      if ( v102 )
      {
LABEL_252:
        if ( v102 - 48 <= 9 )
        {
          strbuffer_append_byte(a1 + 40, v102);
          do
            v39 = sub_12E064(a1, a2);
          while ( v39 - 48 <= 9 );
          goto LABEL_130;
        }
        goto LABEL_253;
      }
      v106 = *(_DWORD *)(a1 + 16);
      v107 = *(unsigned __int8 *)(a1 + v106 + 8);
      if ( *(_BYTE *)(a1 + v106 + 8) )
      {
LABEL_286:
        *(_DWORD *)(a1 + 16) = v106 + 1;
        v102 = *(unsigned __int8 *)(a1 + v106 + 8);
        ++*(_DWORD *)(a1 + 36);
        if ( v102 != 10 )
        {
          if ( (v102 & 0x80) == 0 || (unsigned __int8)(v102 + 62) <= 0x32u )
            ++*(_DWORD *)(a1 + 28);
          goto LABEL_252;
        }
        v112 = *(_DWORD *)(a1 + 24);
        v113 = *(_DWORD *)(a1 + 28);
        *(_DWORD *)(a1 + 28) = 0;
        *(_DWORD *)(a1 + 24) = v112 + 1;
        *(_DWORD *)(a1 + 32) = v113;
LABEL_253:
        if ( v102 < 0xFFFFFFFE )
        {
          --*(_DWORD *)(a1 + 36);
          if ( v102 == 10 )
          {
            v103 = *(_DWORD *)(a1 + 32);
            --*(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 28) = v103;
          }
          else if ( utf8_check_first((unsigned __int8)v102) )
          {
            --*(_DWORD *)(a1 + 28);
          }
          v13 = *(_DWORD *)(a1 + 60);
          --*(_DWORD *)(a1 + 16);
          return v13;
        }
        return *(_DWORD *)(a1 + 60);
      }
      v108 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      v102 = v108;
      if ( v108 == -1 )
      {
        *(_DWORD *)(a1 + 20) = -1;
        goto LABEL_253;
      }
      *(_DWORD *)(a1 + 16) = v107;
      *(_BYTE *)(a1 + 8) = v108;
      if ( (unsigned int)(v108 - 128) > 0x7F )
      {
        v106 = v107;
        *(_BYTE *)(a1 + 9) = v107;
        goto LABEL_286;
      }
      if ( ((unsigned __int8)v108 ^ 0x80u) > 0x41 )
      {
        if ( (unsigned __int8)(v108 + 62) <= 0x1Du )
        {
          v109 = 2;
          v110 = (char *)(a1 + 8);
          *(_BYTE *)(a1 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
          goto LABEL_302;
        }
        if ( (unsigned __int8)(v108 + 32) <= 0xFu )
        {
          v109 = 3;
          goto LABEL_296;
        }
        if ( (unsigned __int8)(v108 + 16) <= 4u )
        {
          v109 = 4;
LABEL_296:
          v110 = (char *)(a1 + 8);
          v111 = (_BYTE *)(a1 + 9);
          do
            *v111++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
          while ( v111 != (_BYTE *)(a1 + 8 + v109) );
LABEL_302:
          if ( utf8_check_full(v110, v109, 0) )
          {
            *(_BYTE *)(a1 + v109 + 8) = 0;
            v106 = *(_DWORD *)(a1 + 16);
            goto LABEL_286;
          }
        }
      }
      *(_DWORD *)arga = v102;
      *(_DWORD *)(a1 + 20) = -2;
      v102 = -2;
      sub_12DF38(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", *(_DWORD *)arga);
      goto LABEL_253;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      LOBYTE(v44) = *(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8);
      if ( (_BYTE)v44 )
      {
        do
        {
          LOBYTE(endptr) = v44;
          strbuffer_append_bytes((const void **)(a1 + 40), &endptr, 1u);
          v45 = *(_DWORD *)(a1 + 16) + 1;
          v46 = *(_DWORD *)(a1 + 36) + 1;
          *(_DWORD *)(a1 + 16) = v45;
          *(_DWORD *)(a1 + 36) = v46;
          v44 = *(unsigned __int8 *)(a1 + v45 + 8);
        }
        while ( v44 );
      }
      goto LABEL_49;
    }
    do
      v11 = sub_12E064(a1, a2);
    while ( (v11 & 0xFFFFFFDF) - 65 <= 0x19 );
    v12 = *(const char **)(a1 + 40);
    if ( (unsigned int)(v11 + 2) > 1 )
    {
      --*(_DWORD *)(a1 + 36);
      if ( v11 == 10 )
      {
        v53 = *(_DWORD *)(a1 + 32);
        --*(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 28) = v53;
      }
      else if ( (v11 & 0x80) == 0 || (unsigned __int8)(v11 + 62) <= 0x32u )
      {
        --*(_DWORD *)(a1 + 28);
      }
      v54 = *(_DWORD *)(a1 + 44);
      v55 = v54 == 0;
      if ( v54 )
        --v54;
      --*(_DWORD *)(a1 + 16);
      if ( !v55 )
      {
        *(_DWORD *)(a1 + 44) = v54;
        v12[v54] = 0;
        v12 = *(const char **)(a1 + 40);
      }
    }
    if ( !strcmp(v12, "true") )
    {
      v13 = 259;
      *(_DWORD *)(a1 + 60) = 259;
      return v13;
    }
    if ( strcmp(v12, "false") )
    {
      if ( !strcmp(v12, "null") )
      {
        v13 = 261;
        *(_DWORD *)(a1 + 60) = 261;
        return v13;
      }
      goto LABEL_49;
    }
    v5 = 260;
LABEL_82:
    *(_DWORD *)(a1 + 60) = v5;
    return v5;
  }
  LODWORD(v9) = -1;
  *(_QWORD *)(a1 + 60) = v9;
  while ( 2 )
  {
    v47 = a2;
    v48 = a1;
LABEL_105:
    v49 = sub_12E064(v48, v47);
LABEL_106:
    if ( v49 == 34 )
    {
      v60 = jsonp_malloc((void *)(*(_DWORD *)(a1 + 44) + 1));
      v61 = v60;
      if ( !v60 )
        goto LABEL_121;
      v62 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 64) = v60;
      for ( i = (unsigned __int8 *)(v62 + 1); ; i += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v64 = *i;
            if ( v64 == 34 )
            {
              *v61 = 0;
              v13 = 256;
              v99 = *(_DWORD *)(a1 + 64);
              *(_DWORD *)(a1 + 60) = 256;
              *(_DWORD *)(a1 + 68) = &v61[-v99];
              return v13;
            }
            if ( v64 == 92 )
              break;
            *v61 = v64;
            ++i;
            ++v61;
          }
          v65 = i[1];
          if ( v65 != 117 )
            break;
          v66 = i[2];
          v67 = v66 - 48;
          if ( (unsigned __int8)(v66 - 48) > 9u )
          {
            if ( (unsigned int)(v66 - 97) <= 0x19 )
            {
              v67 = v66 - 87;
            }
            else
            {
              if ( (unsigned int)(v66 - 65) > 0x19 )
                goto LABEL_273;
              v67 = v66 - 55;
            }
          }
          v68 = i[3];
          v69 = 16 * v67;
          if ( (unsigned __int8)(v68 - 48) <= 9u )
          {
            v70 = v68 - 48 + v69;
          }
          else if ( (unsigned int)(v68 - 97) <= 0x19 )
          {
            v70 = v68 - 87 + v69;
          }
          else
          {
            if ( (unsigned int)(v68 - 65) > 0x19 )
              goto LABEL_273;
            v70 = v68 - 55 + v69;
          }
          v71 = i[4];
          v72 = 16 * v70;
          if ( (unsigned __int8)(v71 - 48) <= 9u )
          {
            v73 = v71 - 48 + v72;
          }
          else if ( (unsigned int)(v71 - 97) <= 0x19 )
          {
            v73 = v71 - 87 + v72;
          }
          else
          {
            if ( (unsigned int)(v71 - 65) > 0x19 )
              goto LABEL_273;
            v73 = v71 - 55 + v72;
          }
          v74 = i[5];
          v75 = 16 * v73;
          if ( (unsigned __int8)(v74 - 48) <= 9u )
          {
            v76 = v74 - 48 + v75;
          }
          else if ( (unsigned int)(v74 - 97) <= 0x19 )
          {
            v76 = v74 - 87 + v75;
          }
          else
          {
            if ( (unsigned int)(v74 - 65) > 0x19 )
            {
LABEL_273:
              LOWORD(v104) = -21516;
              *(_DWORD *)arg = i;
              goto LABEL_265;
            }
            v76 = v74 - 55 + v75;
          }
          if ( (unsigned int)(v76 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v76 - 56320) < 0x400 )
              goto LABEL_266;
            i += 6;
          }
          else
          {
            if ( i[6] != 92 || i[7] != 117 )
            {
LABEL_266:
              sub_12DF38(a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X'", v76);
              goto LABEL_121;
            }
            v77 = i[8];
            if ( (unsigned __int8)(v77 - 48) <= 9u )
            {
              v78 = v77 - 48;
            }
            else if ( (unsigned int)(v77 - 97) <= 0x19 )
            {
              v78 = v77 - 87;
            }
            else
            {
              if ( (unsigned int)(v77 - 65) > 0x19 )
                goto LABEL_264;
              v78 = v77 - 55;
            }
            v79 = i[9];
            v80 = 16 * v78;
            if ( (unsigned __int8)(v79 - 48) <= 9u )
            {
              v81 = v79 - 48 + v80;
            }
            else if ( (unsigned int)(v79 - 97) <= 0x19 )
            {
              v81 = v79 - 87 + v80;
            }
            else
            {
              if ( (unsigned int)(v79 - 65) > 0x19 )
                goto LABEL_264;
              v81 = v79 - 55 + v80;
            }
            v82 = i[10];
            v83 = 16 * v81;
            if ( (unsigned __int8)(v82 - 48) <= 9u )
            {
              v84 = v82 - 48 + v83;
            }
            else if ( (unsigned int)(v82 - 97) <= 0x19 )
            {
              v84 = v82 - 87 + v83;
            }
            else
            {
              if ( (unsigned int)(v82 - 65) > 0x19 )
                goto LABEL_264;
              v84 = v82 - 55 + v83;
            }
            v85 = i[11];
            v86 = 16 * v84;
            if ( (unsigned __int8)(v85 - 48) <= 9u )
            {
              v87 = v85 - 48 + v86;
            }
            else if ( (unsigned int)(v85 - 97) <= 0x19 )
            {
              v87 = v85 - 87 + v86;
            }
            else
            {
              if ( (unsigned int)(v85 - 65) > 0x19 )
              {
LABEL_264:
                LOWORD(v104) = (unsigned __int16)"invalid Unicode escape '%.6s'";
                *(_DWORD *)arg = i + 6;
LABEL_265:
                HIWORD(v104) = (unsigned int)"invalid Unicode escape '%.6s'" >> 16;
                sub_12DF38(a2, (_DWORD *)a1, 8, v104, *(_DWORD *)arg);
                goto LABEL_121;
              }
              v87 = v85 - 55 + v86;
            }
            if ( (unsigned int)(v87 - 56320) >= 0x400 )
            {
              sub_12DF38(a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v76, v87);
              goto LABEL_121;
            }
            i += 12;
            v76 = v87 - 56320 + ((v76 - 55296) << 10) + 0x10000;
          }
          utf8_encode(v76, v61, &endptr);
          v61 += LODWORD(endptr);
        }
        if ( v65 == 98 )
        {
          *v61 = 8;
          goto LABEL_163;
        }
        if ( v65 <= 0x62 )
        {
          if ( v65 == 47 || v65 == 92 || v65 == 34 )
            goto LABEL_162;
        }
        else
        {
          if ( v65 == 110 )
          {
            *v61 = 10;
            goto LABEL_163;
          }
          if ( v65 <= 0x6E )
          {
            if ( v65 == 102 )
              *v61 = 12;
          }
          else
          {
            if ( v65 == 114 )
            {
              *v61 = 13;
              goto LABEL_163;
            }
            if ( v65 == 116 )
            {
              LOBYTE(v65) = 9;
LABEL_162:
              *v61 = v65;
            }
          }
        }
LABEL_163:
        ++v61;
      }
    }
    if ( v49 == -2 )
      goto LABEL_121;
    if ( v49 == -1 )
    {
      sub_12DF38(a2, (_DWORD *)a1, 6, "premature end of input");
      goto LABEL_121;
    }
    if ( v49 > 0x1F )
    {
      v47 = a2;
      v48 = a1;
      if ( v49 == 92 )
      {
        v50 = sub_12E064(a1, a2);
        if ( v50 == 117 )
        {
          v57 = 4;
          v49 = sub_12E064(a1, a2);
          while ( 1 )
          {
            v58 = v49 - 48 > 9;
            if ( v49 - 48 > 9 )
              v58 = v49 - 65 > 5;
            v59 = v49 - 97;
            if ( v58 && v59 > 5 )
              break;
            --v57;
            v49 = sub_12E064(a1, a2);
            if ( !v57 )
              goto LABEL_106;
          }
LABEL_120:
          sub_12DF38(a2, (_DWORD *)a1, 8, "invalid escape");
          goto LABEL_121;
        }
        v51 = v50 == 92;
        if ( v50 != 92 )
          v51 = v50 == 34;
        if ( !v51 )
        {
          v52 = v50 == 98;
          if ( v50 != 98 )
            v52 = v50 == 47;
          if ( !v52 && (v50 & 0xFFFFFFF7) != 0x66 && ((v50 - 114) & 0xFFFFFFFD) != 0 )
            goto LABEL_120;
        }
        continue;
      }
      goto LABEL_105;
    }
    break;
  }
  v93 = *(_DWORD *)(a1 + 16);
  v94 = *(_DWORD *)(a1 + 44);
  --*(_DWORD *)(a1 + 36);
  v95 = v93 - 1;
  if ( v49 != 10 )
  {
    if ( utf8_check_first((unsigned __int8)v49) )
    {
      v100 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 16) = v95;
      *(_DWORD *)(a1 + 28) = v100 - 1;
      if ( !v94 )
      {
LABEL_247:
        sub_12DF38(a2, (_DWORD *)a1, 8, "control character 0x%x", v49);
        goto LABEL_121;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 16) = v95;
      if ( !v94 )
        goto LABEL_247;
    }
    v101 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 44) = v94 - 1;
    *(_BYTE *)(v101 + v94 - 1) = 0;
    goto LABEL_247;
  }
  v96 = *(_DWORD *)(a1 + 24);
  v97 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 16) = v95;
  *(_DWORD *)(a1 + 24) = v96 - 1;
  *(_DWORD *)(a1 + 28) = v97;
  if ( v94 )
  {
    v98 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 44) = v94 - 1;
    *(_BYTE *)(v98 + v94 - 1) = 0;
  }
  sub_12DF38(a2, (_DWORD *)a1, 8, "unexpected newline");
LABEL_121:
  jsonp_free(*(void **)(a1 + 64));
  v13 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  return v13;
}
