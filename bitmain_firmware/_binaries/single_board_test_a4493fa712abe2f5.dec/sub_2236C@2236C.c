unsigned int __fastcall sub_2236C(int a1, int a2)
{
  _BYTE *v2; // r3
  unsigned int v5; // r5
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  __int64 v9; // r2
  bool v10; // cc
  int v11; // r0
  const char *v12; // r5
  int v13; // r5
  int v15; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r9
  int v19; // r5
  __int64 v20; // kr00_8
  int v21; // r9
  int v22; // r11
  int v23; // r3
  int v24; // r2
  int v25; // r3
  int v26; // r2
  int v27; // r2
  bool v28; // zf
  _BOOL4 v29; // r2
  _BOOL4 v30; // r2
  int v31; // r3
  _BYTE *v32; // r7
  char v33; // r3
  int v34; // r2
  int v35; // r3
  unsigned int v36; // r0
  bool v37; // zf
  const char *v38; // r7
  int *v39; // r5
  __int64 v40; // r0
  int v41; // r1
  int v42; // r0
  unsigned int v43; // r5
  int v44; // r0
  bool v45; // zf
  bool v46; // zf
  int v47; // r3
  int v48; // r3
  int v49; // r2
  int v50; // r2
  int v51; // r3
  int v52; // r3
  double v53; // r2
  int v54; // r7
  bool v55; // cc
  unsigned int v56; // r5
  int v57; // r3
  int v58; // r7
  int v59; // r8
  int v60; // r3
  int v61; // r2
  int v62; // r2
  int v63; // r7
  char *v64; // r0
  char *v65; // r7
  int v66; // r5
  unsigned __int8 *i; // r5
  int v68; // r3
  unsigned int v69; // r3
  int v70; // r3
  int v71; // r2
  int v72; // r3
  int v73; // r0
  int v74; // r0
  int v75; // r3
  int v76; // r0
  int v77; // r0
  int v78; // r3
  int v79; // r0
  int32_t v80; // r0
  int v81; // r3
  int v82; // r3
  int v83; // r1
  int v84; // r2
  int v85; // r2
  int v86; // r3
  int v87; // r1
  int v88; // r1
  int v89; // r3
  int v90; // r2
  int v91; // r2
  unsigned int v92; // r0
  int v93; // r2
  int v94; // r3
  int v95; // r2
  int v96; // r3
  int v97; // r3
  int v98; // r2
  int v99; // r7
  unsigned int v100; // r5
  int v101; // r2
  int v102; // r2
  const char *v103; // r3
  const char *v104; // r3
  int v105; // r3
  int v106; // r8
  int v107; // r0
  unsigned int v108; // r8
  char *v109; // r11
  _BYTE *v110; // r9
  int v111; // r3
  int v112; // r2
  char arg[4]; // [sp+0h] [bp-1Ch]
  char arga[4]; // [sp+0h] [bp-1Ch]
  char v115; // [sp+Fh] [bp-Dh] BYREF
  double endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = *(_BYTE **)(a1 + 40);
  *(_DWORD *)(a1 + 44) = 0;
  *v2 = 0;
  if ( *(_DWORD *)(a1 + 60) == 256 )
  {
    jsonp_free(*(void **)(a1 + 64));
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 20);
      if ( v5 )
        goto LABEL_4;
      v15 = *(_DWORD *)(a1 + 16);
      v16 = a1 + v15;
      v17 = v15 + 1;
      v18 = *(unsigned __int8 *)(a1 + v15 + 8);
      if ( !*(_BYTE *)(a1 + v15 + 8) )
      {
        v19 = (*(int (__fastcall **)(_DWORD, int))a1)(*(_DWORD *)(a1 + 4), v17);
        if ( v19 == -1 )
        {
          *(_DWORD *)(a1 + 20) = -1;
          goto LABEL_79;
        }
        *(_DWORD *)(a1 + 16) = v18;
        *(_BYTE *)(a1 + 8) = v19;
        if ( (unsigned int)(v19 - 128) > 0x7F )
        {
          v17 = 1;
          v16 = a1;
          *(_BYTE *)(a1 + 9) = v18;
          goto LABEL_38;
        }
        if ( ((unsigned __int8)v19 ^ 0x80u) <= 0x41 )
          goto LABEL_46;
        if ( (unsigned __int8)(v19 + 62) <= 0x1Du )
        {
          v21 = 2;
          *(_BYTE *)(a1 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
          v22 = a1 + 8;
          v23 = *(_BYTE *)(a1 + 8) & 0x1F;
        }
        else
        {
          if ( (unsigned __int8)(v19 + 32) <= 0xFu )
          {
            v21 = 3;
          }
          else
          {
            if ( (unsigned __int8)(v19 + 16) > 4u )
              goto LABEL_46;
            v21 = 4;
          }
          v22 = a1 + 8;
          v32 = (_BYTE *)(a1 + 9);
          do
            *v32++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
          while ( (_BYTE *)(a1 + 8 + v21) != v32 );
          v33 = *(_BYTE *)(a1 + 8);
          if ( v21 == 3 )
          {
            v34 = *(unsigned __int8 *)(a1 + 9);
            v35 = v33 & 0xF;
            if ( (v34 ^ 0x80u) > 0x3F )
              goto LABEL_46;
            v25 = (v34 & 0x3F) + (v35 << 6);
            goto LABEL_53;
          }
          v21 = 4;
          v23 = v33 & 7;
        }
        v24 = *(unsigned __int8 *)(a1 + 9);
        if ( (v24 ^ 0x80u) > 0x3F )
          goto LABEL_46;
        v25 = (v24 & 0x3F) + (v23 << 6);
        if ( v21 == 2 )
        {
LABEL_57:
          if ( (unsigned int)(v25 - 55296) < 0x800 )
            goto LABEL_46;
          v28 = v25 == 127;
          if ( v25 <= 127 )
            v28 = v21 == 2;
          if ( v28 )
            goto LABEL_46;
          v29 = v21 == 3;
          if ( v25 >= 2048 )
            v29 = 0;
          if ( v29 )
            goto LABEL_46;
          v30 = v21 == 4;
          if ( v25 >= 0x10000 )
            v30 = 0;
          if ( v30 )
          {
LABEL_46:
            *(_DWORD *)(a1 + 20) = -2;
            sub_21104(a2, a1, 5, "unable to decode byte 0x%x", v19);
            goto LABEL_47;
          }
          *(_BYTE *)(v21 + a1 + 8) = 0;
          v31 = *(_DWORD *)(a1 + 16);
          v17 = v31 + 1;
          v16 = a1 + v31;
          goto LABEL_38;
        }
LABEL_53:
        v26 = *(unsigned __int8 *)(v22 + 2);
        if ( (v26 ^ 0x80u) > 0x3F )
          goto LABEL_46;
        v25 = (v26 & 0x3F) + (v25 << 6);
        if ( v21 == 4 )
        {
          v27 = *(unsigned __int8 *)(v22 + 3);
          if ( (v27 ^ 0x80u) > 0x3F )
            goto LABEL_46;
          v25 = (v27 & 0x3F) + (v25 << 6);
          if ( v25 > (int)&unk_10FFFF )
            goto LABEL_46;
        }
        else
        {
          v21 = 3;
        }
        goto LABEL_57;
      }
LABEL_38:
      *(_DWORD *)(a1 + 16) = v17;
      v5 = *(unsigned __int8 *)(v16 + 8);
      ++*(_DWORD *)(a1 + 36);
      if ( v5 != 10 )
        break;
      v20 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 32) = HIDWORD(v20);
      *(_DWORD *)(a1 + 24) = v20 + 1;
    }
    if ( (v5 & 0x80) == 0 || (unsigned __int8)(v5 + 62) <= 0x32u )
      ++*(_DWORD *)(a1 + 28);
LABEL_4:
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
LABEL_79:
    *(_DWORD *)(a1 + 60) = 0;
    return 0;
  }
  if ( v5 == -2 )
  {
LABEL_47:
    *(_DWORD *)(a1 + 60) = -1;
    return -1;
  }
  v115 = v5;
  strbuffer_append_bytes((const void **)(a1 + 40), &v115, 1u);
  if ( ((v5 - 123) & 0xFFFFFFFD) == 0 || ((v5 - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_77;
  v8 = v5 == 44;
  if ( v5 != 44 )
    v8 = v5 == 58;
  HIDWORD(v9) = v8;
  if ( v8 )
    goto LABEL_77;
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
        v92 = sub_211C0(a1, a2);
        if ( v92 == 48 )
        {
LABEL_83:
          v36 = sub_211C0(a1, a2);
          if ( v36 - 48 > 9 )
            goto LABEL_86;
LABEL_84:
          sub_1FF08((_DWORD *)a1, v36);
          return *(_DWORD *)(a1 + 60);
        }
        if ( v92 - 48 <= 9 )
          goto LABEL_85;
        if ( v92 < 0xFFFFFFFE )
        {
          --*(_DWORD *)(a1 + 36);
          if ( v92 == 10 )
          {
            v93 = *(_DWORD *)(a1 + 32);
            --*(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 28) = v93;
          }
          else if ( utf8_check_first(v92) )
          {
            --*(_DWORD *)(a1 + 28);
          }
          v94 = *(_DWORD *)(a1 + 44);
          --*(_DWORD *)(a1 + 16);
          if ( v94 )
          {
            v95 = *(_DWORD *)(a1 + 40);
            v96 = v94 - 1;
            *(_DWORD *)(a1 + 44) = v96;
            *(_BYTE *)(v95 + v96) = 0;
            return *(_DWORD *)(a1 + 60);
          }
        }
        return *(_DWORD *)(a1 + 60);
      }
      if ( v5 == 48 )
        goto LABEL_83;
      do
LABEL_85:
        v36 = sub_211C0(a1, a2);
      while ( v36 - 48 <= 9 );
LABEL_86:
      if ( (*(_DWORD *)(a1 + 52) & 8) == 0 )
      {
        v37 = v36 == 46;
        if ( v36 != 46 )
          v37 = v36 == 69;
        if ( !v37 )
        {
          if ( v36 != 101 )
          {
            if ( v36 + 2 > 1 )
              sub_1FF08((_DWORD *)a1, v36);
            v38 = *(const char **)(a1 + 40);
            v39 = _errno_location();
            *v39 = 0;
            v40 = strtoll(v38, (char **)&endptr, 10);
            if ( *v39 == 34 )
            {
              if ( v40 >= 0 )
                LOWORD(v104) = -32304;
              else
                LOWORD(v104) = -32332;
              HIWORD(v104) = 15;
              sub_21104(a2, a1, 15, v104);
              return *(_DWORD *)(a1 + 60);
            }
            else
            {
              v13 = 257;
              *(_QWORD *)(a1 + 64) = v40;
              *(_DWORD *)(a1 + 60) = 257;
            }
            return v13;
          }
LABEL_228:
          v36 = sub_211C0(a1, a2);
          if ( ((v36 - 43) & 0xFFFFFFFD) == 0 )
            v36 = sub_211C0(a1, a2);
          if ( v36 - 48 > 9 )
          {
            if ( v36 < 0xFFFFFFFE )
              goto LABEL_84;
            return *(_DWORD *)(a1 + 60);
          }
          do
            v36 = sub_211C0(a1, a2);
          while ( v36 - 48 <= 9 );
LABEL_126:
          if ( v36 + 2 > 1 )
            sub_1FF08((_DWORD *)a1, v36);
          if ( !jsonp_strtod((const char **)(a1 + 40), &endptr) )
          {
            v53 = endptr;
            v13 = 258;
            *(_DWORD *)(a1 + 60) = 258;
            *(double *)(a1 + 64) = v53;
            return v13;
          }
          sub_21104(a2, a1, 15, "real number overflow");
          return *(_DWORD *)(a1 + 60);
        }
      }
      if ( v36 != 46 )
      {
LABEL_125:
        if ( (v36 & 0xFFFFFFDF) == 0x45 )
          goto LABEL_228;
        goto LABEL_126;
      }
      v100 = *(_DWORD *)(a1 + 20);
      if ( v100 )
      {
LABEL_244:
        if ( v100 - 48 <= 9 )
        {
          strbuffer_append_byte(a1 + 40, v100);
          do
            v36 = sub_211C0(a1, a2);
          while ( v36 - 48 <= 9 );
          goto LABEL_125;
        }
        goto LABEL_245;
      }
      v105 = *(_DWORD *)(a1 + 16);
      v106 = *(unsigned __int8 *)(a1 + v105 + 8);
      if ( *(_BYTE *)(a1 + v105 + 8) )
      {
LABEL_276:
        *(_DWORD *)(a1 + 16) = v105 + 1;
        v100 = *(unsigned __int8 *)(v105 + a1 + 8);
        ++*(_DWORD *)(a1 + 36);
        if ( v100 != 10 )
        {
          if ( (v100 & 0x80) == 0 || (unsigned __int8)(v100 + 62) <= 0x32u )
            ++*(_DWORD *)(a1 + 28);
          goto LABEL_244;
        }
        v111 = *(_DWORD *)(a1 + 24);
        v112 = *(_DWORD *)(a1 + 28);
        *(_DWORD *)(a1 + 28) = 0;
        *(_DWORD *)(a1 + 24) = v111 + 1;
        *(_DWORD *)(a1 + 32) = v112;
LABEL_245:
        if ( v100 < 0xFFFFFFFE )
        {
          --*(_DWORD *)(a1 + 36);
          if ( v100 == 10 )
          {
            v101 = *(_DWORD *)(a1 + 32);
            --*(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 28) = v101;
          }
          else if ( utf8_check_first(v100) )
          {
            --*(_DWORD *)(a1 + 28);
          }
          v13 = *(_DWORD *)(a1 + 60);
          --*(_DWORD *)(a1 + 16);
          return v13;
        }
        return *(_DWORD *)(a1 + 60);
      }
      v107 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      v100 = v107;
      if ( v107 == -1 )
      {
        *(_DWORD *)(a1 + 20) = -1;
        goto LABEL_245;
      }
      *(_DWORD *)(a1 + 16) = v106;
      *(_BYTE *)(a1 + 8) = v107;
      if ( (unsigned int)(v107 - 128) > 0x7F )
      {
        v105 = v106;
        *(_BYTE *)(a1 + 9) = v106;
        goto LABEL_276;
      }
      if ( ((unsigned __int8)v107 ^ 0x80u) > 0x41 )
      {
        if ( (unsigned __int8)(v107 + 62) <= 0x1Du )
        {
          v108 = 2;
          v109 = (char *)(a1 + 8);
          *(_BYTE *)(a1 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        }
        else
        {
          if ( (unsigned __int8)(v107 + 32) <= 0xFu )
          {
            v108 = 3;
          }
          else
          {
            if ( (unsigned __int8)(v107 + 16) > 4u )
              goto LABEL_283;
            v108 = 4;
          }
          v109 = (char *)(a1 + 8);
          v110 = (_BYTE *)(a1 + 9);
          do
            *v110++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
          while ( v110 != (_BYTE *)(a1 + 8 + v108) );
        }
        if ( utf8_check_full(v109, v108, 0) )
        {
          *(_BYTE *)(v108 + a1 + 8) = 0;
          v105 = *(_DWORD *)(a1 + 16);
          goto LABEL_276;
        }
      }
LABEL_283:
      *(_DWORD *)arga = v100;
      *(_DWORD *)(a1 + 20) = -2;
      v100 = -2;
      sub_21104(a2, a1, 5, "unable to decode byte 0x%x", *(_DWORD *)arga);
      goto LABEL_245;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      LOBYTE(v47) = *(_BYTE *)(*(_DWORD *)(a1 + 16) + a1 + 8);
      if ( (_BYTE)v47 )
      {
        do
        {
          LOBYTE(endptr) = v47;
          strbuffer_append_bytes((const void **)(a1 + 40), &endptr, 1u);
          v48 = *(_DWORD *)(a1 + 16) + 1;
          v49 = *(_DWORD *)(a1 + 36) + 1;
          *(_DWORD *)(a1 + 16) = v48;
          *(_DWORD *)(a1 + 36) = v49;
          v47 = *(unsigned __int8 *)(a1 + v48 + 8);
        }
        while ( v47 );
      }
      goto LABEL_47;
    }
    do
      v11 = sub_211C0(a1, a2);
    while ( (v11 & 0xFFFFFFDF) - 65 <= 0x19 );
    v12 = *(const char **)(a1 + 40);
    if ( (unsigned int)(v11 + 2) > 1 )
    {
      --*(_DWORD *)(a1 + 36);
      if ( v11 == 10 )
      {
        v50 = *(_DWORD *)(a1 + 32);
        --*(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 28) = v50;
      }
      else if ( (v11 & 0x80) == 0 || (unsigned __int8)(v11 + 62) <= 0x32u )
      {
        --*(_DWORD *)(a1 + 28);
      }
      v51 = *(_DWORD *)(a1 + 44);
      --*(_DWORD *)(a1 + 16);
      if ( v51 )
      {
        v52 = v51 - 1;
        *(_DWORD *)(a1 + 44) = v52;
        v12[v52] = 0;
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
      goto LABEL_47;
    }
    v5 = 260;
LABEL_77:
    *(_DWORD *)(a1 + 60) = v5;
    return v5;
  }
  LODWORD(v9) = -1;
  *(_QWORD *)(a1 + 60) = v9;
LABEL_96:
  v41 = a2;
  v42 = a1;
  while ( 1 )
  {
    v43 = sub_211C0(v42, v41);
LABEL_98:
    if ( v43 == 34 )
      break;
    if ( v43 == -2 )
      goto LABEL_113;
    if ( v43 == -1 )
    {
      sub_21104(a2, a1, 6, "premature end of input");
      goto LABEL_113;
    }
    if ( v43 <= 0x1F )
    {
      v57 = *(_DWORD *)(a1 + 16);
      v58 = *(_DWORD *)(a1 + 44);
      --*(_DWORD *)(a1 + 36);
      v59 = v57 - 1;
      if ( v43 == 10 )
      {
        v60 = *(_DWORD *)(a1 + 24);
        v61 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 16) = v59;
        *(_DWORD *)(a1 + 24) = v60 - 1;
        *(_DWORD *)(a1 + 28) = v61;
        if ( v58 )
        {
          v62 = *(_DWORD *)(a1 + 40);
          v63 = v58 - 1;
          *(_DWORD *)(a1 + 44) = v63;
          *(_BYTE *)(v62 + v63) = 0;
        }
        sub_21104(a2, a1, 8, "unexpected newline");
        goto LABEL_113;
      }
      if ( utf8_check_first(v43) )
      {
        v97 = *(_DWORD *)(a1 + 28);
        *(_DWORD *)(a1 + 16) = v59;
        *(_DWORD *)(a1 + 28) = v97 - 1;
        if ( v58 )
          goto LABEL_239;
      }
      else
      {
        *(_DWORD *)(a1 + 16) = v59;
        if ( v58 )
        {
LABEL_239:
          v98 = *(_DWORD *)(a1 + 40);
          v99 = v58 - 1;
          *(_DWORD *)(a1 + 44) = v99;
          *(_BYTE *)(v98 + v99) = 0;
        }
      }
      sub_21104(a2, a1, 8, "control character 0x%x", v43);
      goto LABEL_113;
    }
    v41 = a2;
    v42 = a1;
    if ( v43 == 92 )
    {
      v44 = sub_211C0(a1, a2);
      if ( v44 == 117 )
      {
        v54 = 4;
        v43 = sub_211C0(a1, a2);
        while ( 1 )
        {
          v55 = v43 - 48 > 9;
          if ( v43 - 48 > 9 )
            v55 = v43 - 65 > 5;
          v56 = v43 - 97;
          if ( v55 && v56 > 5 )
            goto LABEL_112;
          --v54;
          v43 = sub_211C0(a1, a2);
          if ( !v54 )
            goto LABEL_98;
        }
      }
      v45 = v44 == 92;
      if ( v44 != 92 )
        v45 = v44 == 34;
      if ( !v45 )
      {
        v46 = v44 == 98;
        if ( v44 != 98 )
          v46 = v44 == 47;
        if ( !v46 && (v44 & 0xFFFFFFF7) != 0x66 && ((v44 - 114) & 0xFFFFFFFD) != 0 )
        {
LABEL_112:
          sub_21104(a2, a1, 8, "invalid escape");
          goto LABEL_113;
        }
      }
      goto LABEL_96;
    }
  }
  v64 = (char *)jsonp_malloc((void *)(*(_DWORD *)(a1 + 44) + 1));
  v65 = v64;
  if ( !v64 )
    goto LABEL_113;
  v66 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 64) = v64;
  for ( i = (unsigned __int8 *)(v66 + 1); ; ++i )
  {
LABEL_146:
    v68 = *i;
    if ( v68 == 34 )
    {
      *v65 = 0;
      v13 = 256;
      v102 = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 60) = 256;
      *(_DWORD *)(a1 + 68) = &v65[-v102];
      return v13;
    }
    if ( v68 == 92 )
      break;
    *v65++ = v68;
  }
  v69 = i[1];
  if ( v69 != 117 )
  {
    if ( v69 == 98 )
    {
      *v65 = 8;
LABEL_162:
      ++v65;
      i += 2;
      goto LABEL_146;
    }
    if ( v69 <= 0x62 )
    {
      if ( v69 != 47 && v69 != 92 && v69 != 34 )
        goto LABEL_162;
    }
    else
    {
      if ( v69 == 110 )
      {
        *v65 = 10;
        goto LABEL_162;
      }
      if ( v69 <= 0x6E )
      {
        if ( v69 == 102 )
          *v65 = 12;
        goto LABEL_162;
      }
      if ( v69 == 114 )
      {
        *v65 = 13;
        goto LABEL_162;
      }
      if ( v69 != 116 )
        goto LABEL_162;
      LOBYTE(v69) = 9;
    }
    *v65 = v69;
    goto LABEL_162;
  }
  v70 = i[2];
  v71 = v70 - 48;
  if ( (unsigned __int8)(v70 - 48) > 9u )
  {
    if ( (unsigned int)(v70 - 97) <= 0x19 )
    {
      v71 = v70 - 87;
    }
    else
    {
      if ( (unsigned int)(v70 - 65) > 0x19 )
        goto LABEL_265;
      v71 = v70 - 55;
    }
  }
  v72 = i[3];
  v73 = 16 * v71;
  if ( (unsigned __int8)(v72 - 48) <= 9u )
  {
    v74 = v73 + v72 - 48;
  }
  else if ( (unsigned int)(v72 - 97) <= 0x19 )
  {
    v74 = v73 + v72 - 87;
  }
  else
  {
    if ( (unsigned int)(v72 - 65) > 0x19 )
      goto LABEL_265;
    v74 = v73 + v72 - 55;
  }
  v75 = i[4];
  v76 = 16 * v74;
  if ( (unsigned __int8)(v75 - 48) <= 9u )
  {
    v77 = v76 + v75 - 48;
  }
  else if ( (unsigned int)(v75 - 97) <= 0x19 )
  {
    v77 = v76 + v75 - 87;
  }
  else
  {
    if ( (unsigned int)(v75 - 65) > 0x19 )
      goto LABEL_265;
    v77 = v76 + v75 - 55;
  }
  v78 = i[5];
  v79 = 16 * v77;
  if ( (unsigned __int8)(v78 - 48) <= 9u )
  {
    v80 = v79 + v78 - 48;
    goto LABEL_179;
  }
  if ( (unsigned int)(v78 - 97) <= 0x19 )
  {
    v80 = v79 + v78 - 87;
    goto LABEL_179;
  }
  if ( (unsigned int)(v78 - 65) <= 0x19 )
  {
    v80 = v79 + v78 - 55;
LABEL_179:
    if ( (unsigned int)(v80 - 55296) >= 0x400 )
    {
      if ( (unsigned int)(v80 - 56320) < 0x400 )
        goto LABEL_256;
      i += 6;
    }
    else
    {
      if ( i[6] != 92 || i[7] != 117 )
      {
LABEL_256:
        sub_21104(a2, a1, 8, "invalid Unicode '\\u%04X'", v80);
        goto LABEL_113;
      }
      v81 = i[8];
      if ( (unsigned __int8)(v81 - 48) <= 9u )
      {
        v82 = v81 - 48;
      }
      else if ( (unsigned int)(v81 - 97) <= 0x19 )
      {
        v82 = v81 - 87;
      }
      else
      {
        if ( (unsigned int)(v81 - 65) > 0x19 )
          goto LABEL_258;
        v82 = v81 - 55;
      }
      v83 = i[9];
      v84 = 16 * v82;
      if ( (unsigned __int8)(v83 - 48) <= 9u )
      {
        v85 = v84 + v83 - 48;
      }
      else if ( (unsigned int)(v83 - 97) <= 0x19 )
      {
        v85 = v84 + v83 - 87;
      }
      else
      {
        if ( (unsigned int)(v83 - 65) > 0x19 )
          goto LABEL_258;
        v85 = v84 + v83 - 55;
      }
      v86 = i[10];
      v87 = 16 * v85;
      if ( (unsigned __int8)(v86 - 48) <= 9u )
      {
        v88 = v87 + v86 - 48;
      }
      else if ( (unsigned int)(v86 - 97) <= 0x19 )
      {
        v88 = v87 + v86 - 87;
      }
      else
      {
        if ( (unsigned int)(v86 - 65) > 0x19 )
          goto LABEL_258;
        v88 = v87 + v86 - 55;
      }
      v89 = i[11];
      v90 = 16 * v88;
      if ( (unsigned __int8)(v89 - 48) <= 9u )
      {
        v91 = v90 + v89 - 48;
      }
      else if ( (unsigned int)(v89 - 97) <= 0x19 )
      {
        v91 = v90 + v89 - 87;
      }
      else
      {
        if ( (unsigned int)(v89 - 65) > 0x19 )
        {
LABEL_258:
          LOWORD(v103) = (unsigned __int16)"invalid Unicode escape '%.6s'";
          *(_DWORD *)arg = i + 6;
          goto LABEL_259;
        }
        v91 = v90 + v89 - 55;
      }
      if ( (unsigned int)(v91 - 56320) >= 0x400 )
      {
        sub_21104(a2, a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v80, v91);
        goto LABEL_113;
      }
      i += 12;
      v80 = v91 - 56320 + ((v80 - 55296) << 10) + 0x10000;
    }
    utf8_encode(v80, v65, (int *)&endptr);
    v65 += LODWORD(endptr);
    goto LABEL_146;
  }
LABEL_265:
  LOWORD(v103) = -32424;
  *(_DWORD *)arg = i;
LABEL_259:
  HIWORD(v103) = (unsigned int)"invalid Unicode escape '%.6s'" >> 16;
  sub_21104(a2, a1, 8, v103, *(_DWORD *)arg);
LABEL_113:
  jsonp_free(*(void **)(a1 + 64));
  v13 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  return v13;
}
