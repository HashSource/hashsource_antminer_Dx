_DWORD *__fastcall sub_1608A0(int a1, size_t **a2)
{
  _DWORD *v4; // r10
  int v6; // lr
  bool v7; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  size_t *v14; // r3
  int v15; // r3
  bool v16; // zf
  _DWORD *v17; // r5
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r12
  int v28; // r1
  int v29; // r2
  int v30; // r3
  char *v31; // r0
  char *v32; // r9
  size_t v33; // r7
  int v34; // r12
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r1
  int v39; // r2
  int v40; // r3
  unsigned int v41; // r8
  size_t v42; // r10
  void *v43; // r0
  void *v44; // r0
  char *v45; // r0
  const char **v46; // r3
  const char *v47; // r6
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r6
  int v53; // r1
  int v54; // r2
  int v55; // r3
  _DWORD *v56; // r0
  char *v57; // r1
  unsigned int *v58; // r3
  unsigned int v59; // r2
  unsigned int v60; // r2
  unsigned int v62; // r3
  __int64 v63; // r0
  bool v64; // zf
  size_t *v65; // r3
  unsigned int *v66; // r3
  unsigned int v67; // r2
  int v68; // r2
  _DWORD *v69; // r5
  int v70; // r1
  int v71; // r2
  int v72; // r3
  _DWORD *v73; // r7
  _DWORD *v74; // r6
  int v75; // lr
  int v76; // r1
  int v77; // r2
  int v78; // r3
  bool v79; // zf
  unsigned int v80; // r8
  _BYTE *v81; // r0
  int v82; // r12
  int v83; // r1
  int v84; // r2
  int v85; // r3
  int v86; // r1
  int v87; // r2
  int v88; // r3
  size_t v89; // r2
  char **v90; // r3
  char *v91; // r8
  int v92; // r3
  unsigned int v93; // r3
  __int64 v94; // r6
  _DWORD *v95; // r0
  int v96; // r0
  const char **v97; // r3
  const char *v98; // r5
  int v99; // r1
  int v100; // r2
  int v101; // r3
  int v102; // r12
  void *v103; // r8
  int v104; // r1
  int v105; // r2
  int v106; // r3
  int v107; // r1
  int v108; // r2
  int v109; // r3
  int v110; // r9
  int v111; // r1
  int v112; // r2
  int v113; // r3
  _DWORD *v114; // r2
  _BOOL4 v115; // r5
  unsigned int *v116; // r3
  unsigned int v117; // r1
  unsigned int v118; // r1
  const char **v119; // r3
  size_t v120; // r0
  int v121; // r1
  int v122; // r2
  int v123; // r3
  int v124; // r1
  int v125; // r2
  int v126; // r3
  _DWORD *v127; // r0
  int v128; // r1
  int v129; // r2
  int v130; // r3
  int v131; // r1
  int v132; // r2
  int v133; // r3
  int v134; // r6
  int v135; // r1
  int v136; // r2
  int v137; // r3
  int v138; // r1
  int v139; // r2
  int v140; // r3
  const char **v141; // r3
  size_t v142; // r6
  _BYTE *v143; // r0
  _BYTE *v144; // r7
  _DWORD *v145; // r0
  int v146; // r1
  int v147; // r2
  int v148; // r3
  int v149; // r12
  int v150; // r1
  int v151; // r2
  int v152; // r3
  _DWORD *v153; // r0
  unsigned int s; // [sp+Ch] [bp-38h]
  char *sa; // [sp+Ch] [bp-38h]
  char *sb; // [sp+Ch] [bp-38h]
  char *v157; // [sp+10h] [bp-34h]
  _DWORD *v158; // [sp+14h] [bp-30h]
  int v159; // [sp+1Ch] [bp-28h]
  int v160; // [sp+2Ch] [bp-18h]
  void *ptr; // [sp+34h] [bp-10h] BYREF
  unsigned int v162; // [sp+38h] [bp-Ch]
  int v163; // [sp+3Ch] [bp-8h]

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'I':
      v62 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      v63 = *(_QWORD *)v62;
      *a2 = (size_t *)(v62 + 8);
      v4 = json_integer(v63);
      if ( v4 )
        return v4;
      goto LABEL_60;
    case 'O':
      sub_15BB30((_DWORD *)a1);
      v6 = *(unsigned __int8 *)(a1 + 36);
      v64 = v6 == 63;
      if ( v6 != 63 )
        v64 = v6 == 42;
      if ( !v64 )
      {
        v128 = *(_DWORD *)(a1 + 28);
        v129 = *(_DWORD *)(a1 + 32);
        v130 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v128;
        *(_DWORD *)(a1 + 48) = v129;
        *(_DWORD *)(a1 + 52) = v130;
        v131 = *(_DWORD *)(a1 + 12);
        v132 = *(_DWORD *)(a1 + 16);
        v133 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v131;
        *(_DWORD *)(a1 + 32) = v132;
        *(_DWORD *)(a1 + 36) = v133;
      }
      v65 = (*a2)++;
      v4 = (_DWORD *)*v65;
      if ( !*v65 )
        goto LABEL_13;
      if ( v4[1] != -1 )
      {
        v66 = v4 + 1;
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 + 1, v66) );
        __dmb(0xBu);
      }
      return v4;
    case '[':
      v4 = json_array();
      sub_15BB30((_DWORD *)a1);
      while ( 2 )
      {
        if ( *(_BYTE *)(a1 + 36) != 93 )
        {
          if ( *(_BYTE *)(a1 + 36) )
          {
            sub_15BB30((_DWORD *)a1);
            v49 = *(_DWORD *)(a1 + 28);
            v50 = *(_DWORD *)(a1 + 32);
            v51 = *(_DWORD *)(a1 + 36);
            v52 = *(unsigned __int8 *)(a1 + 36);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 44) = v49;
            *(_DWORD *)(a1 + 48) = v50;
            *(_DWORD *)(a1 + 52) = v51;
            v53 = *(_DWORD *)(a1 + 12);
            v54 = *(_DWORD *)(a1 + 16);
            v55 = *(_DWORD *)(a1 + 20);
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 28) = v53;
            *(_DWORD *)(a1 + 32) = v54;
            *(_DWORD *)(a1 + 36) = v55;
            v56 = sub_1608A0(a1, a2);
            v57 = (char *)v56;
            if ( v56 )
            {
              if ( !*(_DWORD *)(a1 + 76) )
                goto LABEL_175;
              if ( v56[1] != -1 )
              {
                v58 = v56 + 1;
                __dmb(0xBu);
                do
                {
                  v59 = __ldrex(v58);
                  v60 = v59 - 1;
                }
                while ( __strex(v60, v58) );
                if ( !v60 )
                {
                  sa = (char *)v56;
                  json_delete(v56);
                  v57 = sa;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                {
LABEL_175:
                  if ( json_array_append_new((int)v4, v57) )
                  {
                    sub_15BCD4((char *)a1, "<internal>", 1, "Unable to append to array");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
                }
              }
            }
            else if ( v52 != 42 )
            {
              *(_DWORD *)(a1 + 76) = 1;
            }
            sub_15BB30((_DWORD *)a1);
            continue;
          }
          goto LABEL_135;
        }
        break;
      }
      if ( *(_DWORD *)(a1 + 76) )
        goto LABEL_136;
      return v4;
    case 'b':
      if ( *(*a2)++ )
        return dword_1A24DC;
      else
        return dword_1A24E4;
    case 'f':
      v93 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      v94 = *(_QWORD *)v93;
      *a2 = (size_t *)(v93 + 8);
      v95 = off_1A25E8(0x10u);
      v4 = v95;
      if ( !v95 )
        goto LABEL_60;
      *((_QWORD *)v95 + 1) = v94;
      *v95 = 4;
      v95[1] = 1;
      return v4;
    case 'i':
      v96 = *(*a2)++;
      v4 = json_integer(v96);
      if ( !v4 )
      {
LABEL_60:
        sub_15BCD4((char *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      return v4;
    case 'n':
      return dword_1A25D8;
    case 'o':
      sub_15BB30((_DWORD *)a1);
      v6 = *(unsigned __int8 *)(a1 + 36);
      v7 = v6 == 63;
      if ( v6 != 63 )
        v7 = v6 == 42;
      if ( !v7 )
      {
        v8 = *(_DWORD *)(a1 + 28);
        v9 = *(_DWORD *)(a1 + 32);
        v10 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v8;
        *(_DWORD *)(a1 + 48) = v9;
        *(_DWORD *)(a1 + 52) = v10;
        v11 = *(_DWORD *)(a1 + 12);
        v12 = *(_DWORD *)(a1 + 16);
        v13 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v11;
        *(_DWORD *)(a1 + 32) = v12;
        *(_DWORD *)(a1 + 36) = v13;
      }
      v14 = (*a2)++;
      v4 = (_DWORD *)*v14;
      if ( *v14 )
        return v4;
LABEL_13:
      if ( v6 == 42 )
        return 0;
      if ( v6 == 63 )
        return dword_1A25D8;
      sub_15BCD4((char *)a1, "<args>", 12, "NULL object");
      v4 = 0;
      *(_DWORD *)(a1 + 76) = 1;
      return v4;
    case 's':
      sub_15BB30((_DWORD *)a1);
      v15 = *(unsigned __int8 *)(a1 + 36);
      v16 = v15 == 42;
      if ( v15 != 42 )
        v16 = v15 == 63;
      v160 = *(unsigned __int8 *)(a1 + 36);
      if ( v16 )
      {
        sub_15BB30((_DWORD *)a1);
        v134 = *(unsigned __int8 *)(a1 + 36);
        v135 = *(_DWORD *)(a1 + 28);
        v136 = *(_DWORD *)(a1 + 32);
        v137 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v135;
        *(_DWORD *)(a1 + 48) = v136;
        *(_DWORD *)(a1 + 52) = v137;
        v138 = *(_DWORD *)(a1 + 12);
        v139 = *(_DWORD *)(a1 + 16);
        v140 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v138;
        *(_DWORD *)(a1 + 32) = v139;
        *(_DWORD *)(a1 + 36) = v140;
        if ( ((v134 - 35) & 0xFD) == 0 || v134 == 43 )
        {
          sub_15BCD4((char *)a1, "<format>", 9, "Cannot use '%c' on optional strings", v134);
          *(_DWORD *)(a1 + 76) = 1;
          return 0;
        }
        v141 = (const char **)(*a2)++;
        v98 = *v141;
        if ( *v141 )
        {
LABEL_142:
          v142 = strlen(v98);
          if ( !utf8_check_string((int)v98, v142) )
          {
            sub_15BCD4((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "string");
            *(_DWORD *)(a1 + 76) = 1;
            return 0;
          }
          if ( !*(_DWORD *)(a1 + 76) )
          {
            v143 = off_1A25E8(v142 + 1);
            v144 = v143;
            if ( v143 )
            {
              memcpy(v143, v98, v142);
              v144[v142] = 0;
              v145 = off_1A25E8(0x10u);
              v4 = v145;
              if ( v145 )
              {
                v145[2] = v144;
                v145[3] = v142;
                *v145 = 2;
                v145[1] = 1;
              }
              else
              {
                jsonp_free(v144);
              }
              return v4;
            }
          }
          return 0;
        }
LABEL_4:
        if ( v160 == 63 && !*(_DWORD *)(a1 + 76) )
          return dword_1A25D8;
        return 0;
      }
      v17 = (_DWORD *)(a1 + 24);
      v18 = *(_DWORD *)(a1 + 28);
      v19 = *(_DWORD *)(a1 + 32);
      v20 = *(_DWORD *)(a1 + 36);
      v158 = (_DWORD *)(a1 + 40);
      v157 = (char *)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = v18;
      *(_DWORD *)(a1 + 48) = v19;
      *(_DWORD *)(a1 + 52) = v20;
      v21 = *(_DWORD *)(a1 + 12);
      v22 = *(_DWORD *)(a1 + 16);
      v23 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v21;
      *(_DWORD *)(a1 + 32) = v22;
      *(_DWORD *)(a1 + 36) = v23;
      sub_15BB30((_DWORD *)a1);
      v24 = *(_DWORD *)(a1 + 28);
      v25 = *(_DWORD *)(a1 + 32);
      v26 = *(_DWORD *)(a1 + 36);
      v27 = *(unsigned __int8 *)(a1 + 36);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = v24;
      *(_DWORD *)(a1 + 48) = v25;
      *(_DWORD *)(a1 + 52) = v26;
      v28 = *(_DWORD *)(a1 + 12);
      v29 = *(_DWORD *)(a1 + 16);
      v30 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v28;
      *(_DWORD *)(a1 + 32) = v29;
      *(_DWORD *)(a1 + 36) = v30;
      if ( (((_BYTE)v27 - 35) & 0xFD) != 0 && v27 != 43 )
      {
        v97 = (const char **)(*a2)++;
        v98 = *v97;
        if ( !*v97 )
        {
          sub_15BCD4((char *)a1, "<args>", 12, "NULL %s", "string");
          *(_DWORD *)(a1 + 76) = 1;
          return 0;
        }
        goto LABEL_142;
      }
      v31 = (char *)off_1A25E8(0x10u);
      v32 = v31;
      if ( v31 )
      {
        *v31 = 0;
      }
      else
      {
        sub_15BCD4((char *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      v33 = 0;
      s = 16;
      do
      {
        v46 = (const char **)(*a2)++;
        v47 = *v46;
        if ( !*v46 )
        {
          sub_15BCD4((char *)a1, "<args>", 12, "NULL %s", "string");
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_15BB30((_DWORD *)a1);
        v48 = *(unsigned __int8 *)(a1 + 36);
        if ( v48 == 35 )
        {
          v34 = *(_DWORD *)(a1 + 76);
          v41 = *(*a2)++;
          goto LABEL_39;
        }
        v34 = *(_DWORD *)(a1 + 76);
        if ( v48 == 37 )
        {
          v41 = *(*a2)++;
LABEL_39:
          if ( v34 )
            goto LABEL_34;
          goto LABEL_26;
        }
        v35 = *(_DWORD *)(a1 + 28);
        v36 = *(_DWORD *)(a1 + 32);
        v37 = *(_DWORD *)(a1 + 36);
        *v158 = *v17;
        *(_DWORD *)(a1 + 44) = v35;
        *(_DWORD *)(a1 + 48) = v36;
        *(_DWORD *)(a1 + 52) = v37;
        v38 = *(_DWORD *)(a1 + 12);
        v39 = *(_DWORD *)(a1 + 16);
        v40 = *(_DWORD *)(a1 + 20);
        *v17 = *(_DWORD *)v157;
        *(_DWORD *)(a1 + 28) = v38;
        *(_DWORD *)(a1 + 32) = v39;
        *(_DWORD *)(a1 + 36) = v40;
        if ( v34 )
          goto LABEL_34;
        v41 = strlen(v47);
LABEL_26:
        if ( v41 < s - v33 )
          goto LABEL_33;
        if ( !((v41 == -1) | (s >> 31)) && -2 - v41 >= v33 )
        {
          v42 = 2 * s;
          if ( v33 + 1 + v41 >= 2 * s )
            v42 = v33 + 1 + v41;
          v43 = off_1A25E8(v42);
          v159 = (int)v43;
          if ( v43 )
          {
            memcpy(v43, v32, v33);
            v44 = v32;
            s = v42;
            v32 = (char *)v159;
            off_1A25EC(v44);
LABEL_33:
            v45 = &v32[v33];
            v33 += v41;
            memcpy(v45, v47, v41);
            v32[v33] = 0;
            goto LABEL_34;
          }
        }
        sub_15BCD4((char *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
LABEL_34:
        sub_15BB30((_DWORD *)a1);
      }
      while ( *(_BYTE *)(a1 + 36) == 43 );
      v146 = *(_DWORD *)(a1 + 28);
      v147 = *(_DWORD *)(a1 + 32);
      v148 = *(_DWORD *)(a1 + 36);
      v149 = *(_DWORD *)(a1 + 76);
      *v158 = *v17;
      *(_DWORD *)(a1 + 44) = v146;
      *(_DWORD *)(a1 + 48) = v147;
      *(_DWORD *)(a1 + 52) = v148;
      v150 = *(_DWORD *)(a1 + 12);
      v151 = *(_DWORD *)(a1 + 16);
      v152 = *(_DWORD *)(a1 + 20);
      *v17 = *(_DWORD *)v157;
      *(_DWORD *)(a1 + 28) = v150;
      *(_DWORD *)(a1 + 32) = v151;
      *(_DWORD *)(a1 + 36) = v152;
      if ( v149 )
      {
        if ( v32 )
          jsonp_free(v32);
        goto LABEL_4;
      }
      if ( !utf8_check_string((int)v32, v33) )
      {
        sub_15BCD4((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "string");
        if ( v32 )
          off_1A25EC(v32);
        *(_DWORD *)(a1 + 76) = 1;
        return 0;
      }
      if ( !v32 )
        return 0;
      v153 = (_DWORD *)off_1A25E8(16);
      v4 = v153;
      if ( v153 )
      {
        v153[2] = v32;
        v153[3] = v33;
        *v153 = 2;
        v153[1] = 1;
      }
      else
      {
        jsonp_free(v32);
      }
      return v4;
    case '{':
      v4 = json_object();
      sub_15BB30((_DWORD *)a1);
LABEL_71:
      v68 = *(unsigned __int8 *)(a1 + 36);
      if ( v68 == 125 )
      {
        if ( !*(_DWORD *)(a1 + 76) )
          return v4;
      }
      else if ( *(_BYTE *)(a1 + 36) )
      {
        if ( v68 == 115 )
        {
          v69 = (_DWORD *)(a1 + 24);
          sub_15BB30((_DWORD *)a1);
          v70 = *(_DWORD *)(a1 + 28);
          v71 = *(_DWORD *)(a1 + 32);
          v72 = *(_DWORD *)(a1 + 36);
          v73 = (_DWORD *)(a1 + 40);
          v74 = (_DWORD *)(a1 + 8);
          v75 = *(unsigned __int8 *)(a1 + 36);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 44) = v70;
          *(_DWORD *)(a1 + 48) = v71;
          *(_DWORD *)(a1 + 52) = v72;
          v76 = *(_DWORD *)(a1 + 12);
          v77 = *(_DWORD *)(a1 + 16);
          v78 = *(_DWORD *)(a1 + 20);
          v79 = v75 == 43;
          if ( v75 != 43 )
            v79 = ((v75 - 35) & 0xFD) == 0;
          v80 = !v79;
          *v69 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 28) = v76;
          *(_DWORD *)(a1 + 32) = v77;
          *(_DWORD *)(a1 + 36) = v78;
          if ( !v79 )
          {
            v119 = (const char **)(*a2)++;
            v103 = (void *)*v119;
            if ( *v119 )
            {
              v120 = strlen(*v119);
              if ( !utf8_check_string((int)v103, v120) )
              {
                v103 = 0;
                sub_15BCD4((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "object key");
                *(_DWORD *)(a1 + 76) = 1;
              }
            }
            else
            {
              sub_15BCD4((char *)a1, "<args>", 12, "NULL %s", "object key");
              *(_DWORD *)(a1 + 76) = 1;
            }
            goto LABEL_127;
          }
          v162 = v80;
          v163 = 16;
          v81 = off_1A25E8(0x10u);
          ptr = v81;
          if ( v81 )
          {
            *v81 = v80;
          }
          else
          {
            sub_15BCD4((char *)a1, "<internal>", 1, "Out of memory");
            *(_DWORD *)(a1 + 76) = 1;
          }
          while ( 1 )
          {
            v90 = (char **)(*a2)++;
            v91 = *v90;
            if ( !*v90 )
            {
              sub_15BCD4((char *)a1, "<args>", 12, "NULL %s", "object key");
              *(_DWORD *)(a1 + 76) = 1;
            }
            sub_15BB30((_DWORD *)a1);
            v92 = *(unsigned __int8 *)(a1 + 36);
            if ( v92 == 35 )
              break;
            v82 = *(_DWORD *)(a1 + 76);
            if ( v92 == 37 )
            {
              v89 = *(*a2)++;
LABEL_94:
              if ( !v82 )
                goto LABEL_87;
              goto LABEL_89;
            }
            v83 = *(_DWORD *)(a1 + 28);
            v84 = *(_DWORD *)(a1 + 32);
            v85 = *(_DWORD *)(a1 + 36);
            *v73 = *v69;
            *(_DWORD *)(a1 + 44) = v83;
            *(_DWORD *)(a1 + 48) = v84;
            *(_DWORD *)(a1 + 52) = v85;
            v86 = *(_DWORD *)(a1 + 12);
            v87 = *(_DWORD *)(a1 + 16);
            v88 = *(_DWORD *)(a1 + 20);
            *v69 = *v74;
            *(_DWORD *)(a1 + 28) = v86;
            *(_DWORD *)(a1 + 32) = v87;
            *(_DWORD *)(a1 + 36) = v88;
            if ( !v82 )
            {
              v89 = strlen(v91);
LABEL_87:
              if ( strbuffer_append_bytes((const void **)&ptr, v91, v89) == -1 )
              {
                sub_15BCD4((char *)a1, "<internal>", 1, "Out of memory");
                *(_DWORD *)(a1 + 76) = 1;
              }
            }
LABEL_89:
            sub_15BB30((_DWORD *)a1);
            if ( *(_BYTE *)(a1 + 36) != 43 )
            {
              v99 = *(_DWORD *)(a1 + 28);
              v100 = *(_DWORD *)(a1 + 32);
              v101 = *(_DWORD *)(a1 + 36);
              v102 = *(_DWORD *)(a1 + 76);
              v103 = ptr;
              *v73 = *v69;
              *(_DWORD *)(a1 + 44) = v99;
              *(_DWORD *)(a1 + 48) = v100;
              *(_DWORD *)(a1 + 52) = v101;
              v104 = *(_DWORD *)(a1 + 12);
              v105 = *(_DWORD *)(a1 + 16);
              v106 = *(_DWORD *)(a1 + 20);
              *v69 = *v74;
              *(_DWORD *)(a1 + 28) = v104;
              *(_DWORD *)(a1 + 32) = v105;
              *(_DWORD *)(a1 + 36) = v106;
              if ( v102 )
              {
                if ( v103 )
                  jsonp_free(v103);
                v103 = 0;
              }
              else
              {
                if ( utf8_check_string((int)v103, v162) )
                {
                  sub_15BB30((_DWORD *)a1);
                  sub_15BB30((_DWORD *)a1);
                  v107 = *(_DWORD *)(a1 + 28);
                  v108 = *(_DWORD *)(a1 + 32);
                  v109 = *(_DWORD *)(a1 + 36);
                  v110 = *(unsigned __int8 *)(a1 + 36);
                  *v73 = *v69;
                  *(_DWORD *)(a1 + 44) = v107;
                  *(_DWORD *)(a1 + 48) = v108;
                  *(_DWORD *)(a1 + 52) = v109;
                  v111 = *(_DWORD *)(a1 + 12);
                  v112 = *(_DWORD *)(a1 + 16);
                  v113 = *(_DWORD *)(a1 + 20);
                  *v69 = *v74;
                  *(_DWORD *)(a1 + 28) = v111;
                  *(_DWORD *)(a1 + 32) = v112;
                  *(_DWORD *)(a1 + 36) = v113;
                  v114 = sub_1608A0(a1, a2);
                  if ( v114 )
                  {
                    v115 = v103 == 0;
                    goto LABEL_111;
                  }
                  jsonp_free(v103);
LABEL_129:
                  if ( v110 != 42 )
                  {
                    sub_15BCD4((char *)a1, "<args>", 12, "NULL object value");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
LABEL_115:
                  sub_15BB30((_DWORD *)a1);
                  goto LABEL_71;
                }
                sub_15BCD4((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "object key");
                if ( ptr )
                  ((void (*)(void))off_1A25EC)();
                v103 = 0;
                *(_DWORD *)(a1 + 76) = 1;
              }
LABEL_127:
              sub_15BB30((_DWORD *)a1);
              sub_15BB30((_DWORD *)a1);
              v121 = *(_DWORD *)(a1 + 28);
              v122 = *(_DWORD *)(a1 + 32);
              v123 = *(_DWORD *)(a1 + 36);
              v110 = *(unsigned __int8 *)(a1 + 36);
              *v73 = *v69;
              *(_DWORD *)(a1 + 44) = v121;
              *(_DWORD *)(a1 + 48) = v122;
              *(_DWORD *)(a1 + 52) = v123;
              v124 = *(_DWORD *)(a1 + 12);
              v125 = *(_DWORD *)(a1 + 16);
              v126 = *(_DWORD *)(a1 + 20);
              *v69 = *v74;
              *(_DWORD *)(a1 + 28) = v124;
              *(_DWORD *)(a1 + 32) = v125;
              *(_DWORD *)(a1 + 36) = v126;
              v114 = sub_1608A0(a1, a2);
              if ( !v114 )
                goto LABEL_129;
              v115 = 1;
LABEL_111:
              if ( !*(_DWORD *)(a1 + 76) )
              {
LABEL_112:
                if ( json_object_set_new_nocheck(v4, (char *)v103, v114) )
                {
                  sub_15BCD4((char *)a1, "<internal>", 1, "Unable to add key \"%s\"", v103);
                  *(_DWORD *)(a1 + 76) = 1;
                }
                goto LABEL_114;
              }
              if ( v114[1] == -1 )
              {
LABEL_114:
                if ( v115 )
                  goto LABEL_115;
              }
              else
              {
                v116 = v114 + 1;
                __dmb(0xBu);
                do
                {
                  v117 = __ldrex(v116);
                  v118 = v117 - 1;
                }
                while ( __strex(v118, v116) );
                if ( !v118 )
                {
                  sb = (char *)v114;
                  json_delete(v114);
                  v114 = sb;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                  goto LABEL_112;
                if ( v115 )
                  goto LABEL_115;
              }
              off_1A25EC(v103);
              goto LABEL_115;
            }
          }
          v82 = *(_DWORD *)(a1 + 76);
          v89 = *(*a2)++;
          goto LABEL_94;
        }
        sub_15BCD4((char *)a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
      }
      else
      {
LABEL_135:
        sub_15BCD4((char *)a1, "<format>", 9, "Unexpected end of format string");
      }
LABEL_136:
      if ( v4 && v4[1] != -1 )
      {
        v127 = v4;
        v4 = 0;
        sub_84ED0(v127);
        return v4;
      }
      return 0;
    default:
      sub_15BCD4((char *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
      v4 = 0;
      *(_DWORD *)(a1 + 76) = 1;
      return v4;
  }
}
