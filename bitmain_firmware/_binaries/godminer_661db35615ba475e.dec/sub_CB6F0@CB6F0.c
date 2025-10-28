_DWORD *__fastcall sub_CB6F0(int a1, size_t **a2)
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
  const char *v15; // r3
  char v16; // r2
  int v17; // r3
  bool v18; // zf
  _DWORD *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r12
  int v30; // r1
  int v31; // r2
  int v32; // r3
  char *v33; // r0
  char *v34; // r9
  size_t v35; // r7
  int v36; // r12
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // r3
  unsigned int v43; // r8
  size_t v44; // r10
  void *v45; // r0
  void *v46; // r0
  char *v47; // r0
  const char **v48; // r3
  const char *v49; // r6
  int v50; // r3
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r6
  int v55; // r1
  int v56; // r2
  int v57; // r3
  _DWORD *v58; // r0
  char *v59; // r1
  unsigned int *v60; // r3
  unsigned int v61; // r2
  unsigned int v62; // r2
  unsigned int v64; // r3
  __int64 v65; // r0
  bool v66; // zf
  size_t *v67; // r3
  unsigned int *v68; // r3
  unsigned int v69; // r2
  int v70; // r2
  _DWORD *v71; // r5
  int v72; // r1
  int v73; // r2
  int v74; // r3
  _DWORD *v75; // r7
  _DWORD *v76; // r6
  int v77; // lr
  int v78; // r1
  int v79; // r2
  int v80; // r3
  bool v81; // zf
  unsigned int v82; // r8
  _BYTE *v83; // r0
  int v84; // r12
  int v85; // r1
  int v86; // r2
  int v87; // r3
  int v88; // r1
  int v89; // r2
  int v90; // r3
  size_t v91; // r2
  char **v92; // r3
  char *v93; // r8
  int v94; // r3
  unsigned int v95; // r3
  __int64 v96; // r6
  _QWORD *v97; // r0
  int v98; // r0
  const char **v99; // r3
  const char *v100; // r5
  int v101; // r1
  int v102; // r2
  int v103; // r3
  int v104; // r12
  void *v105; // r8
  int v106; // r1
  int v107; // r2
  int v108; // r3
  int v109; // r1
  int v110; // r2
  int v111; // r3
  int v112; // r9
  int v113; // r1
  int v114; // r2
  int v115; // r3
  _DWORD *v116; // r2
  _BOOL4 v117; // r5
  unsigned int *v118; // r3
  unsigned int v119; // r1
  unsigned int v120; // r1
  const char **v121; // r3
  size_t v122; // r0
  int v123; // r1
  int v124; // r2
  int v125; // r3
  int v126; // r1
  int v127; // r2
  int v128; // r3
  _DWORD *v129; // r0
  int v130; // r1
  int v131; // r2
  int v132; // r3
  int v133; // r1
  int v134; // r2
  int v135; // r3
  int v136; // r6
  int v137; // r1
  int v138; // r2
  int v139; // r3
  int v140; // r1
  int v141; // r2
  int v142; // r3
  const char **v143; // r3
  size_t v144; // r6
  _BYTE *v145; // r0
  _BYTE *v146; // r7
  _DWORD *v147; // r0
  int v148; // r1
  int v149; // r2
  int v150; // r3
  int v151; // r12
  int v152; // r1
  int v153; // r2
  int v154; // r3
  _DWORD *v155; // r0
  unsigned int s; // [sp+Ch] [bp-38h]
  char *sa; // [sp+Ch] [bp-38h]
  char *sb; // [sp+Ch] [bp-38h]
  char *v159; // [sp+10h] [bp-34h]
  _DWORD *v160; // [sp+14h] [bp-30h]
  int v161; // [sp+1Ch] [bp-28h]
  int v162; // [sp+2Ch] [bp-18h]
  void *ptr; // [sp+34h] [bp-10h] BYREF
  unsigned int v164; // [sp+38h] [bp-Ch]
  int v165; // [sp+3Ch] [bp-8h]

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'I':
      v64 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      v65 = *(_QWORD *)v64;
      *a2 = (size_t *)(v64 + 8);
      v4 = json_integer(v65);
      if ( v4 )
        return v4;
      goto LABEL_61;
    case 'O':
      sub_10133C((_DWORD *)a1);
      v6 = *(unsigned __int8 *)(a1 + 36);
      v66 = v6 == 63;
      if ( v6 != 63 )
        v66 = v6 == 42;
      if ( !v66 )
      {
        v130 = *(_DWORD *)(a1 + 28);
        v131 = *(_DWORD *)(a1 + 32);
        v132 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v130;
        *(_DWORD *)(a1 + 48) = v131;
        *(_DWORD *)(a1 + 52) = v132;
        v133 = *(_DWORD *)(a1 + 12);
        v134 = *(_DWORD *)(a1 + 16);
        v135 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v133;
        *(_DWORD *)(a1 + 32) = v134;
        *(_DWORD *)(a1 + 36) = v135;
      }
      v67 = (*a2)++;
      v4 = (_DWORD *)*v67;
      if ( !*v67 )
        goto LABEL_13;
      if ( v4[1] != -1 )
      {
        v68 = v4 + 1;
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 + 1, v68) );
        __dmb(0xBu);
      }
      return v4;
    case '[':
      v4 = json_array();
      sub_10133C((_DWORD *)a1);
      while ( 2 )
      {
        if ( *(_BYTE *)(a1 + 36) != 93 )
        {
          if ( *(_BYTE *)(a1 + 36) )
          {
            sub_10133C((_DWORD *)a1);
            v51 = *(_DWORD *)(a1 + 28);
            v52 = *(_DWORD *)(a1 + 32);
            v53 = *(_DWORD *)(a1 + 36);
            v54 = *(unsigned __int8 *)(a1 + 36);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 44) = v51;
            *(_DWORD *)(a1 + 48) = v52;
            *(_DWORD *)(a1 + 52) = v53;
            v55 = *(_DWORD *)(a1 + 12);
            v56 = *(_DWORD *)(a1 + 16);
            v57 = *(_DWORD *)(a1 + 20);
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 28) = v55;
            *(_DWORD *)(a1 + 32) = v56;
            *(_DWORD *)(a1 + 36) = v57;
            v58 = sub_CB6F0(a1, a2);
            v59 = (char *)v58;
            if ( v58 )
            {
              if ( !*(_DWORD *)(a1 + 76) )
                goto LABEL_180;
              if ( v58[1] != -1 )
              {
                v60 = v58 + 1;
                __dmb(0xBu);
                do
                {
                  v61 = __ldrex(v60);
                  v62 = v61 - 1;
                }
                while ( __strex(v62, v60) );
                if ( !v62 )
                {
                  sa = (char *)v58;
                  json_delete(v58);
                  v59 = sa;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                {
LABEL_180:
                  if ( json_array_append_new((int)v4, v59) )
                  {
                    sub_101190((char *)a1, "<internal>", 1, "Unable to append to array");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
                }
              }
            }
            else if ( v54 != 42 )
            {
              *(_DWORD *)(a1 + 76) = 1;
            }
            sub_10133C((_DWORD *)a1);
            continue;
          }
          goto LABEL_140;
        }
        break;
      }
      if ( *(_DWORD *)(a1 + 76) )
        goto LABEL_141;
      return v4;
    case 'b':
      if ( *(*a2)++ )
        return dword_190774;
      else
        return dword_19078C;
    case 'f':
      v95 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      v96 = *(_QWORD *)v95;
      *a2 = (size_t *)(v95 + 8);
      v97 = json_real();
      v4 = v97;
      if ( !v97 )
        goto LABEL_61;
      if ( *(_DWORD *)v97 == 4 )
      {
        v97[1] = v96;
      }
      else
      {
        if ( *((_DWORD *)v97 + 1) != -1 )
          sub_F8BC0(v97);
        v15 = "Invalid floating point value";
        v16 = 15;
LABEL_16:
        v4 = 0;
        sub_101190((char *)a1, "<args>", v16, v15);
        *(_DWORD *)(a1 + 76) = 1;
      }
      return v4;
    case 'i':
      v98 = *(*a2)++;
      v4 = json_integer(v98);
      if ( !v4 )
      {
LABEL_61:
        sub_101190((char *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      return v4;
    case 'n':
      return dword_190784;
    case 'o':
      sub_10133C((_DWORD *)a1);
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
        return dword_190784;
      v15 = "NULL object";
      v16 = 12;
      goto LABEL_16;
    case 's':
      sub_10133C((_DWORD *)a1);
      v17 = *(unsigned __int8 *)(a1 + 36);
      v18 = v17 == 42;
      if ( v17 != 42 )
        v18 = v17 == 63;
      v162 = *(unsigned __int8 *)(a1 + 36);
      if ( v18 )
      {
        sub_10133C((_DWORD *)a1);
        v136 = *(unsigned __int8 *)(a1 + 36);
        v137 = *(_DWORD *)(a1 + 28);
        v138 = *(_DWORD *)(a1 + 32);
        v139 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v137;
        *(_DWORD *)(a1 + 48) = v138;
        *(_DWORD *)(a1 + 52) = v139;
        v140 = *(_DWORD *)(a1 + 12);
        v141 = *(_DWORD *)(a1 + 16);
        v142 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v140;
        *(_DWORD *)(a1 + 32) = v141;
        *(_DWORD *)(a1 + 36) = v142;
        if ( ((v136 - 35) & 0xFD) == 0 || v136 == 43 )
        {
          sub_101190((char *)a1, "<format>", 9, "Cannot use '%c' on optional strings", v136);
          *(_DWORD *)(a1 + 76) = 1;
          return 0;
        }
        v143 = (const char **)(*a2)++;
        v100 = *v143;
        if ( *v143 )
        {
LABEL_147:
          v144 = strlen(v100);
          if ( !utf8_check_string((int)v100, v144) )
          {
            sub_101190((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "string");
            *(_DWORD *)(a1 + 76) = 1;
            return 0;
          }
          if ( !*(_DWORD *)(a1 + 76) )
          {
            v145 = off_190780(v144 + 1);
            v146 = v145;
            if ( v145 )
            {
              memcpy(v145, v100, v144);
              v146[v144] = 0;
              v147 = off_190780(0x10u);
              v4 = v147;
              if ( v147 )
              {
                v147[2] = v146;
                v147[3] = v144;
                *v147 = 2;
                v147[1] = 1;
              }
              else
              {
                jsonp_free(v146);
              }
              return v4;
            }
          }
          return 0;
        }
LABEL_4:
        if ( v162 == 63 && !*(_DWORD *)(a1 + 76) )
          return dword_190784;
        return 0;
      }
      v19 = (_DWORD *)(a1 + 24);
      v20 = *(_DWORD *)(a1 + 28);
      v21 = *(_DWORD *)(a1 + 32);
      v22 = *(_DWORD *)(a1 + 36);
      v159 = (char *)(a1 + 40);
      v160 = (_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = v20;
      *(_DWORD *)(a1 + 48) = v21;
      *(_DWORD *)(a1 + 52) = v22;
      v23 = *(_DWORD *)(a1 + 12);
      v24 = *(_DWORD *)(a1 + 16);
      v25 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v23;
      *(_DWORD *)(a1 + 32) = v24;
      *(_DWORD *)(a1 + 36) = v25;
      sub_10133C((_DWORD *)a1);
      v26 = *(_DWORD *)(a1 + 28);
      v27 = *(_DWORD *)(a1 + 32);
      v28 = *(_DWORD *)(a1 + 36);
      v29 = *(unsigned __int8 *)(a1 + 36);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = v26;
      *(_DWORD *)(a1 + 48) = v27;
      *(_DWORD *)(a1 + 52) = v28;
      v30 = *(_DWORD *)(a1 + 12);
      v31 = *(_DWORD *)(a1 + 16);
      v32 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v30;
      *(_DWORD *)(a1 + 32) = v31;
      *(_DWORD *)(a1 + 36) = v32;
      if ( (((_BYTE)v29 - 35) & 0xFD) != 0 && v29 != 43 )
      {
        v99 = (const char **)(*a2)++;
        v100 = *v99;
        if ( !*v99 )
        {
          sub_101190((char *)a1, "<args>", 12, "NULL %s", "string");
          *(_DWORD *)(a1 + 76) = 1;
          return 0;
        }
        goto LABEL_147;
      }
      v33 = (char *)off_190780(0x10u);
      v34 = v33;
      if ( v33 )
      {
        *v33 = 0;
      }
      else
      {
        sub_101190((char *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      v35 = 0;
      s = 16;
      do
      {
        v48 = (const char **)(*a2)++;
        v49 = *v48;
        if ( !*v48 )
        {
          sub_101190((char *)a1, "<args>", 12, "NULL %s", "string");
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_10133C((_DWORD *)a1);
        v50 = *(unsigned __int8 *)(a1 + 36);
        if ( v50 == 35 )
        {
          v36 = *(_DWORD *)(a1 + 76);
          v43 = *(*a2)++;
          goto LABEL_40;
        }
        v36 = *(_DWORD *)(a1 + 76);
        if ( v50 == 37 )
        {
          v43 = *(*a2)++;
LABEL_40:
          if ( v36 )
            goto LABEL_35;
          goto LABEL_27;
        }
        v37 = *(_DWORD *)(a1 + 28);
        v38 = *(_DWORD *)(a1 + 32);
        v39 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)v159 = *v19;
        *(_DWORD *)(a1 + 44) = v37;
        *(_DWORD *)(a1 + 48) = v38;
        *(_DWORD *)(a1 + 52) = v39;
        v40 = *(_DWORD *)(a1 + 12);
        v41 = *(_DWORD *)(a1 + 16);
        v42 = *(_DWORD *)(a1 + 20);
        *v19 = *v160;
        *(_DWORD *)(a1 + 28) = v40;
        *(_DWORD *)(a1 + 32) = v41;
        *(_DWORD *)(a1 + 36) = v42;
        if ( v36 )
          goto LABEL_35;
        v43 = strlen(v49);
LABEL_27:
        if ( s - v35 > v43 )
          goto LABEL_34;
        if ( !((v43 == -1) | (s >> 31)) && -2 - v43 >= v35 )
        {
          v44 = 2 * s;
          if ( v35 + 1 + v43 >= 2 * s )
            v44 = v35 + 1 + v43;
          v45 = off_190780(v44);
          v161 = (int)v45;
          if ( v45 )
          {
            memcpy(v45, v34, v35);
            v46 = v34;
            s = v44;
            v34 = (char *)v161;
            off_190550(v46);
LABEL_34:
            v47 = &v34[v35];
            v35 += v43;
            memcpy(v47, v49, v43);
            v34[v35] = 0;
            goto LABEL_35;
          }
        }
        sub_101190((char *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
LABEL_35:
        sub_10133C((_DWORD *)a1);
      }
      while ( *(_BYTE *)(a1 + 36) == 43 );
      v148 = *(_DWORD *)(a1 + 28);
      v149 = *(_DWORD *)(a1 + 32);
      v150 = *(_DWORD *)(a1 + 36);
      v151 = *(_DWORD *)(a1 + 76);
      *(_DWORD *)v159 = *v19;
      *(_DWORD *)(a1 + 44) = v148;
      *(_DWORD *)(a1 + 48) = v149;
      *(_DWORD *)(a1 + 52) = v150;
      v152 = *(_DWORD *)(a1 + 12);
      v153 = *(_DWORD *)(a1 + 16);
      v154 = *(_DWORD *)(a1 + 20);
      *v19 = *v160;
      *(_DWORD *)(a1 + 28) = v152;
      *(_DWORD *)(a1 + 32) = v153;
      *(_DWORD *)(a1 + 36) = v154;
      if ( v151 )
      {
        if ( v34 )
          jsonp_free(v34);
        goto LABEL_4;
      }
      if ( !utf8_check_string((int)v34, v35) )
      {
        sub_101190((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "string");
        if ( v34 )
          off_190550(v34);
        *(_DWORD *)(a1 + 76) = 1;
        return 0;
      }
      if ( !v34 )
        return 0;
      v155 = (_DWORD *)off_190780(16);
      v4 = v155;
      if ( v155 )
      {
        v155[2] = v34;
        v155[3] = v35;
        *v155 = 2;
        v155[1] = 1;
      }
      else
      {
        jsonp_free(v34);
      }
      return v4;
    case '{':
      v4 = json_object();
      sub_10133C((_DWORD *)a1);
LABEL_72:
      v70 = *(unsigned __int8 *)(a1 + 36);
      if ( v70 == 125 )
      {
        if ( !*(_DWORD *)(a1 + 76) )
          return v4;
      }
      else if ( *(_BYTE *)(a1 + 36) )
      {
        if ( v70 == 115 )
        {
          v71 = (_DWORD *)(a1 + 24);
          sub_10133C((_DWORD *)a1);
          v72 = *(_DWORD *)(a1 + 28);
          v73 = *(_DWORD *)(a1 + 32);
          v74 = *(_DWORD *)(a1 + 36);
          v75 = (_DWORD *)(a1 + 40);
          v76 = (_DWORD *)(a1 + 8);
          v77 = *(unsigned __int8 *)(a1 + 36);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 44) = v72;
          *(_DWORD *)(a1 + 48) = v73;
          *(_DWORD *)(a1 + 52) = v74;
          v78 = *(_DWORD *)(a1 + 12);
          v79 = *(_DWORD *)(a1 + 16);
          v80 = *(_DWORD *)(a1 + 20);
          v81 = v77 == 43;
          if ( v77 != 43 )
            v81 = ((v77 - 35) & 0xFD) == 0;
          v82 = !v81;
          *v71 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 28) = v78;
          *(_DWORD *)(a1 + 32) = v79;
          *(_DWORD *)(a1 + 36) = v80;
          if ( !v81 )
          {
            v121 = (const char **)(*a2)++;
            v105 = (void *)*v121;
            if ( *v121 )
            {
              v122 = strlen(*v121);
              if ( !utf8_check_string((int)v105, v122) )
              {
                v105 = 0;
                sub_101190((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "object key");
                *(_DWORD *)(a1 + 76) = 1;
              }
            }
            else
            {
              sub_101190((char *)a1, "<args>", 12, "NULL %s", "object key");
              *(_DWORD *)(a1 + 76) = 1;
            }
            goto LABEL_132;
          }
          v164 = v82;
          v165 = 16;
          v83 = off_190780(0x10u);
          ptr = v83;
          if ( v83 )
          {
            *v83 = v82;
          }
          else
          {
            sub_101190((char *)a1, "<internal>", 1, "Out of memory");
            *(_DWORD *)(a1 + 76) = 1;
          }
          while ( 1 )
          {
            v92 = (char **)(*a2)++;
            v93 = *v92;
            if ( !*v92 )
            {
              sub_101190((char *)a1, "<args>", 12, "NULL %s", "object key");
              *(_DWORD *)(a1 + 76) = 1;
            }
            sub_10133C((_DWORD *)a1);
            v94 = *(unsigned __int8 *)(a1 + 36);
            if ( v94 == 35 )
              break;
            v84 = *(_DWORD *)(a1 + 76);
            if ( v94 == 37 )
            {
              v91 = *(*a2)++;
LABEL_95:
              if ( !v84 )
                goto LABEL_88;
              goto LABEL_90;
            }
            v85 = *(_DWORD *)(a1 + 28);
            v86 = *(_DWORD *)(a1 + 32);
            v87 = *(_DWORD *)(a1 + 36);
            *v75 = *v71;
            *(_DWORD *)(a1 + 44) = v85;
            *(_DWORD *)(a1 + 48) = v86;
            *(_DWORD *)(a1 + 52) = v87;
            v88 = *(_DWORD *)(a1 + 12);
            v89 = *(_DWORD *)(a1 + 16);
            v90 = *(_DWORD *)(a1 + 20);
            *v71 = *v76;
            *(_DWORD *)(a1 + 28) = v88;
            *(_DWORD *)(a1 + 32) = v89;
            *(_DWORD *)(a1 + 36) = v90;
            if ( !v84 )
            {
              v91 = strlen(v93);
LABEL_88:
              if ( strbuffer_append_bytes((const void **)&ptr, v93, v91) == -1 )
              {
                sub_101190((char *)a1, "<internal>", 1, "Out of memory");
                *(_DWORD *)(a1 + 76) = 1;
              }
            }
LABEL_90:
            sub_10133C((_DWORD *)a1);
            if ( *(_BYTE *)(a1 + 36) != 43 )
            {
              v101 = *(_DWORD *)(a1 + 28);
              v102 = *(_DWORD *)(a1 + 32);
              v103 = *(_DWORD *)(a1 + 36);
              v104 = *(_DWORD *)(a1 + 76);
              v105 = ptr;
              *v75 = *v71;
              *(_DWORD *)(a1 + 44) = v101;
              *(_DWORD *)(a1 + 48) = v102;
              *(_DWORD *)(a1 + 52) = v103;
              v106 = *(_DWORD *)(a1 + 12);
              v107 = *(_DWORD *)(a1 + 16);
              v108 = *(_DWORD *)(a1 + 20);
              *v71 = *v76;
              *(_DWORD *)(a1 + 28) = v106;
              *(_DWORD *)(a1 + 32) = v107;
              *(_DWORD *)(a1 + 36) = v108;
              if ( v104 )
              {
                if ( v105 )
                  jsonp_free(v105);
                v105 = 0;
              }
              else
              {
                if ( utf8_check_string((int)v105, v164) )
                {
                  sub_10133C((_DWORD *)a1);
                  sub_10133C((_DWORD *)a1);
                  v109 = *(_DWORD *)(a1 + 28);
                  v110 = *(_DWORD *)(a1 + 32);
                  v111 = *(_DWORD *)(a1 + 36);
                  v112 = *(unsigned __int8 *)(a1 + 36);
                  *v75 = *v71;
                  *(_DWORD *)(a1 + 44) = v109;
                  *(_DWORD *)(a1 + 48) = v110;
                  *(_DWORD *)(a1 + 52) = v111;
                  v113 = *(_DWORD *)(a1 + 12);
                  v114 = *(_DWORD *)(a1 + 16);
                  v115 = *(_DWORD *)(a1 + 20);
                  *v71 = *v76;
                  *(_DWORD *)(a1 + 28) = v113;
                  *(_DWORD *)(a1 + 32) = v114;
                  *(_DWORD *)(a1 + 36) = v115;
                  v116 = sub_CB6F0(a1, a2);
                  if ( v116 )
                  {
                    v117 = v105 == 0;
                    goto LABEL_116;
                  }
                  jsonp_free(v105);
LABEL_134:
                  if ( v112 != 42 )
                  {
                    sub_101190((char *)a1, "<args>", 12, "NULL object value");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
LABEL_120:
                  sub_10133C((_DWORD *)a1);
                  goto LABEL_72;
                }
                sub_101190((char *)a1, "<args>", 5, "Invalid UTF-8 %s", "object key");
                if ( ptr )
                  ((void (*)(void))off_190550)();
                v105 = 0;
                *(_DWORD *)(a1 + 76) = 1;
              }
LABEL_132:
              sub_10133C((_DWORD *)a1);
              sub_10133C((_DWORD *)a1);
              v123 = *(_DWORD *)(a1 + 28);
              v124 = *(_DWORD *)(a1 + 32);
              v125 = *(_DWORD *)(a1 + 36);
              v112 = *(unsigned __int8 *)(a1 + 36);
              *v75 = *v71;
              *(_DWORD *)(a1 + 44) = v123;
              *(_DWORD *)(a1 + 48) = v124;
              *(_DWORD *)(a1 + 52) = v125;
              v126 = *(_DWORD *)(a1 + 12);
              v127 = *(_DWORD *)(a1 + 16);
              v128 = *(_DWORD *)(a1 + 20);
              *v71 = *v76;
              *(_DWORD *)(a1 + 28) = v126;
              *(_DWORD *)(a1 + 32) = v127;
              *(_DWORD *)(a1 + 36) = v128;
              v116 = sub_CB6F0(a1, a2);
              if ( !v116 )
                goto LABEL_134;
              v117 = 1;
LABEL_116:
              if ( !*(_DWORD *)(a1 + 76) )
              {
LABEL_117:
                if ( json_object_set_new_nocheck(v4, (char *)v105, v116) )
                {
                  sub_101190((char *)a1, "<internal>", 1, "Unable to add key \"%s\"", v105);
                  *(_DWORD *)(a1 + 76) = 1;
                }
                goto LABEL_119;
              }
              if ( v116[1] == -1 )
              {
LABEL_119:
                if ( v117 )
                  goto LABEL_120;
              }
              else
              {
                v118 = v116 + 1;
                __dmb(0xBu);
                do
                {
                  v119 = __ldrex(v118);
                  v120 = v119 - 1;
                }
                while ( __strex(v120, v118) );
                if ( !v120 )
                {
                  sb = (char *)v116;
                  json_delete(v116);
                  v116 = sb;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                  goto LABEL_117;
                if ( v117 )
                  goto LABEL_120;
              }
              off_190550(v105);
              goto LABEL_120;
            }
          }
          v84 = *(_DWORD *)(a1 + 76);
          v91 = *(*a2)++;
          goto LABEL_95;
        }
        sub_101190((char *)a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
      }
      else
      {
LABEL_140:
        sub_101190((char *)a1, "<format>", 9, "Unexpected end of format string");
      }
LABEL_141:
      if ( v4 && v4[1] != -1 )
      {
        v129 = v4;
        v4 = 0;
        sub_F8BC0(v129);
        return v4;
      }
      return 0;
    default:
      sub_101190((char *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
      v4 = 0;
      *(_DWORD *)(a1 + 76) = 1;
      return v4;
  }
}
