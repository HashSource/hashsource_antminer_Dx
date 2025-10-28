unsigned int *__fastcall sub_217FC(int a1, size_t **a2)
{
  unsigned int *v4; // r11
  unsigned int *result; // r0
  int v6; // r6
  bool v7; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  size_t *v14; // r3
  int v15; // r8
  bool v16; // zf
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r6
  int v27; // r1
  int v28; // r2
  int v29; // r3
  char *v30; // r0
  char *v31; // r9
  size_t v32; // r7
  int v33; // r12
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r2
  int v39; // r3
  unsigned int v40; // r8
  size_t v41; // r11
  char *v42; // r0
  void *v43; // r0
  char *v44; // r0
  const char **v45; // r3
  const char *v46; // r6
  int v47; // r3
  int v48; // r12
  unsigned int *v49; // r0
  void *(*v50)(size_t); // r2
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r7
  int v56; // r1
  int v57; // r2
  int v58; // r3
  unsigned int *v59; // r0
  unsigned int *v60; // r1
  unsigned int *v61; // r3
  unsigned int v62; // r2
  unsigned int v63; // r2
  unsigned int v65; // r3
  __int64 v66; // r6
  bool v67; // zf
  size_t *v68; // r3
  unsigned int *v69; // r3
  unsigned int v70; // r2
  int v71; // r2
  _DWORD *v72; // r5
  int v73; // r1
  int v74; // r2
  int v75; // r3
  _DWORD *v76; // r7
  _DWORD *v77; // r6
  int v78; // lr
  int v79; // r1
  int v80; // r2
  int v81; // r3
  bool v82; // zf
  unsigned int v83; // r8
  _BYTE *v84; // r0
  int v85; // r12
  int v86; // r1
  int v87; // r2
  int v88; // r3
  int v89; // r1
  int v90; // r2
  int v91; // r3
  size_t v92; // r2
  char **v93; // r3
  char *v94; // r8
  int v95; // r3
  int v96; // r12
  int v97; // r1
  int v98; // r2
  int v99; // r3
  int v100; // lr
  void *v101; // r12
  int v102; // r1
  int v103; // r2
  int v104; // r3
  char *v105; // r8
  int v106; // r1
  int v107; // r2
  int v108; // r3
  int v109; // r9
  int v110; // r1
  int v111; // r2
  int v112; // r3
  int v113; // r5
  unsigned int *v114; // r2
  unsigned int v115; // r3
  __int64 v116; // r6
  unsigned int *v117; // r0
  char *v118; // r3
  char *v119; // r1
  char v120; // r2
  unsigned int *v121; // r3
  unsigned int v122; // r1
  unsigned int v123; // r1
  const char **v124; // r3
  size_t v125; // r0
  int v126; // r1
  int v127; // r2
  int v128; // r3
  int v129; // r1
  int v130; // r2
  int v131; // r3
  unsigned int *v132; // r0
  int v133; // r1
  int v134; // r2
  int v135; // r3
  int v136; // r1
  int v137; // r2
  int v138; // r3
  int v139; // r1
  int v140; // r2
  int v141; // r3
  int v142; // r12
  int v143; // r1
  int v144; // r2
  int v145; // r3
  const char **v146; // r3
  const char *v147; // r5
  size_t v148; // r6
  _BYTE *v149; // r0
  _BYTE *v150; // r7
  unsigned int *v151; // r0
  int v152; // r12
  int v153; // r1
  int v154; // r2
  int v155; // r3
  int v156; // r1
  int v157; // r2
  int v158; // r3
  unsigned int *v159; // r0
  unsigned int *v160; // r0
  const char **v161; // r3
  const char *v162; // [sp+0h] [bp-44h]
  _DWORD *v163; // [sp+Ch] [bp-38h]
  unsigned int *v164; // [sp+Ch] [bp-38h]
  unsigned int *v165; // [sp+Ch] [bp-38h]
  char *s; // [sp+10h] [bp-34h]
  size_t size; // [sp+14h] [bp-30h]
  _DWORD *v168; // [sp+18h] [bp-2Ch]
  char *v169; // [sp+20h] [bp-24h]
  void *v170; // [sp+34h] [bp-10h] BYREF
  unsigned int v171; // [sp+38h] [bp-Ch]
  int v172; // [sp+3Ch] [bp-8h]

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'I':
      v65 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      v66 = *(_QWORD *)v65;
      *a2 = (size_t *)(v65 + 8);
      result = (unsigned int *)off_12A258(0x10u);
      if ( !result )
        goto LABEL_105;
      goto LABEL_60;
    case 'O':
      sub_205D8((_DWORD *)a1);
      v6 = *(unsigned __int8 *)(a1 + 36);
      v67 = v6 == 63;
      if ( v6 != 63 )
        v67 = v6 == 42;
      if ( !v67 )
      {
        v133 = *(_DWORD *)(a1 + 28);
        v134 = *(_DWORD *)(a1 + 32);
        v135 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v133;
        *(_DWORD *)(a1 + 48) = v134;
        *(_DWORD *)(a1 + 52) = v135;
        v136 = *(_DWORD *)(a1 + 12);
        v137 = *(_DWORD *)(a1 + 16);
        v138 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v136;
        *(_DWORD *)(a1 + 32) = v137;
        *(_DWORD *)(a1 + 36) = v138;
      }
      v68 = (*a2)++;
      v4 = (unsigned int *)*v68;
      if ( !*v68 )
        goto LABEL_11;
      if ( v4[1] != -1 )
      {
        v69 = v4 + 1;
        do
          v70 = __ldrex(v69);
        while ( __strex(v70 + 1, v69) );
        __dmb(0xBu);
      }
      return v4;
    case '[':
      v49 = (unsigned int *)off_12A258(0x14u);
      v4 = v49;
      if ( v49 )
      {
        v49[3] = 0;
        v49[2] = 8;
        v50 = off_12A258;
        v49[1] = 1;
        *v49 = 1;
        v51 = (int)v50(32);
        v4[4] = v51;
        if ( !v51 )
        {
          v160 = v4;
          v4 = 0;
          jsonp_free(v160);
        }
      }
      while ( 2 )
      {
        sub_205D8((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) != 93 )
        {
          if ( *(_BYTE *)(a1 + 36) )
          {
            sub_205D8((_DWORD *)a1);
            v52 = *(_DWORD *)(a1 + 28);
            v53 = *(_DWORD *)(a1 + 32);
            v54 = *(_DWORD *)(a1 + 36);
            v55 = *(unsigned __int8 *)(a1 + 36);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 44) = v52;
            *(_DWORD *)(a1 + 48) = v53;
            *(_DWORD *)(a1 + 52) = v54;
            v56 = *(_DWORD *)(a1 + 12);
            v57 = *(_DWORD *)(a1 + 16);
            v58 = *(_DWORD *)(a1 + 20);
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 28) = v56;
            *(_DWORD *)(a1 + 32) = v57;
            *(_DWORD *)(a1 + 36) = v58;
            v59 = sub_217FC(a1, a2);
            v60 = v59;
            if ( v59 )
            {
              if ( !*(_DWORD *)(a1 + 76) )
                goto LABEL_177;
              if ( v59[1] != -1 )
              {
                v61 = v59 + 1;
                __dmb(0xBu);
                do
                {
                  v62 = __ldrex(v61);
                  v63 = v62 - 1;
                }
                while ( __strex(v63, v61) );
                if ( !v63 )
                {
                  v164 = v59;
                  json_delete(v59);
                  v60 = v164;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                {
LABEL_177:
                  if ( json_array_append_new((int)v4, v60) )
                  {
                    sub_204B8(a1, "<internal>", 1, "Unable to append to array");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
                }
              }
            }
            else if ( v55 != 42 )
            {
              *(_DWORD *)(a1 + 76) = 1;
            }
            continue;
          }
          goto LABEL_132;
        }
        break;
      }
      if ( *(_DWORD *)(a1 + 76) )
        goto LABEL_133;
      return v4;
    case 'b':
      if ( *(*a2)++ )
        return dword_12A260;
      else
        return dword_12A268;
    case 'f':
      v115 = ((unsigned int)*a2 + 7) & 0xFFFFFFF8;
      v116 = *(_QWORD *)v115;
      *a2 = (size_t *)(v115 + 8);
      v117 = (unsigned int *)off_12A258(0x10u);
      if ( !v117 )
        goto LABEL_105;
      v4 = v117;
      *((_QWORD *)v117 + 1) = v116;
      *v117 = 4;
      v117[1] = 1;
      return v4;
    case 'i':
      LODWORD(v66) = *(*a2)++;
      v66 = (int)v66;
      result = (unsigned int *)off_12A258(0x10u);
      if ( result )
      {
LABEL_60:
        *((_QWORD *)result + 1) = v66;
        *result = 3;
        result[1] = 1;
        return result;
      }
LABEL_105:
      sub_204B8(a1, "<internal>", 1, "Out of memory");
      goto LABEL_14;
    case 'n':
      return (unsigned int *)&unk_12A270;
    case 'o':
      sub_205D8((_DWORD *)a1);
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
      v4 = (unsigned int *)*v14;
      if ( *v14 )
        return v4;
LABEL_11:
      if ( v6 == 42 )
        return 0;
      if ( v6 == 63 )
        return (unsigned int *)&unk_12A270;
      sub_204B8(a1, "<args>", 12, "NULL object");
      goto LABEL_14;
    case 's':
      sub_205D8((_DWORD *)a1);
      v15 = *(unsigned __int8 *)(a1 + 36);
      v16 = v15 == 42;
      if ( v15 != 42 )
        v16 = v15 == 63;
      if ( v16 )
      {
        sub_205D8((_DWORD *)a1);
        v139 = *(_DWORD *)(a1 + 28);
        v140 = *(_DWORD *)(a1 + 32);
        v141 = *(_DWORD *)(a1 + 36);
        v142 = *(unsigned __int8 *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v139;
        *(_DWORD *)(a1 + 48) = v140;
        *(_DWORD *)(a1 + 52) = v141;
        v143 = *(_DWORD *)(a1 + 12);
        v144 = *(_DWORD *)(a1 + 16);
        v145 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v143;
        *(_DWORD *)(a1 + 32) = v144;
        *(_DWORD *)(a1 + 36) = v145;
        if ( ((v142 - 35) & 0xFD) == 0 || v142 == 43 )
        {
          sub_204B8(a1, "<format>", 9, "Cannot use '%c' on optional strings", v142);
          *(_DWORD *)(a1 + 76) = 1;
          return 0;
        }
        v146 = (const char **)(*a2)++;
        v147 = *v146;
        if ( !*v146 )
        {
          if ( v15 == 63 && !*(_DWORD *)(a1 + 76) )
            return (unsigned int *)&unk_12A270;
          return 0;
        }
        goto LABEL_139;
      }
      v17 = *(_DWORD *)(a1 + 28);
      v18 = *(_DWORD *)(a1 + 32);
      v19 = *(_DWORD *)(a1 + 36);
      s = (char *)(a1 + 8);
      v168 = (_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = v17;
      *(_DWORD *)(a1 + 48) = v18;
      *(_DWORD *)(a1 + 52) = v19;
      v20 = *(_DWORD *)(a1 + 12);
      v21 = *(_DWORD *)(a1 + 16);
      v22 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v20;
      *(_DWORD *)(a1 + 32) = v21;
      *(_DWORD *)(a1 + 36) = v22;
      sub_205D8((_DWORD *)a1);
      v23 = *(_DWORD *)(a1 + 28);
      v24 = *(_DWORD *)(a1 + 32);
      v25 = *(_DWORD *)(a1 + 36);
      v26 = *(unsigned __int8 *)(a1 + 36);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = v23;
      *(_DWORD *)(a1 + 48) = v24;
      *(_DWORD *)(a1 + 52) = v25;
      v27 = *(_DWORD *)(a1 + 12);
      v28 = *(_DWORD *)(a1 + 16);
      v29 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v27;
      *(_DWORD *)(a1 + 32) = v28;
      *(_DWORD *)(a1 + 36) = v29;
      if ( ((v26 - 35) & 0xFD) != 0 && v26 != 43 )
      {
        v161 = (const char **)(*a2)++;
        v147 = *v161;
        if ( !*v161 )
        {
          v118 = "NULL %s";
          v119 = "<args>";
          v162 = "string";
          v120 = 12;
LABEL_107:
          v4 = 0;
          sub_204B8(a1, v119, v120, v118, v162);
          *(_DWORD *)(a1 + 76) = 1;
          return v4;
        }
LABEL_139:
        v148 = strlen(v147);
        if ( !utf8_check_string((int)v147, v148) )
        {
          sub_204B8(a1, "<args>", 5, "Invalid UTF-8 %s", "string");
          *(_DWORD *)(a1 + 76) = 1;
          return 0;
        }
        if ( !*(_DWORD *)(a1 + 76) )
        {
          v149 = off_12A258(v148 + 1);
          v150 = v149;
          if ( v149 )
          {
            memcpy(v149, v147, v148);
            v150[v148] = 0;
            v151 = (unsigned int *)off_12A258(0x10u);
            v4 = v151;
            if ( v151 )
            {
              v151[2] = (unsigned int)v150;
              v151[3] = v148;
              *v151 = 2;
              v151[1] = 1;
            }
            else
            {
              jsonp_free(v150);
            }
            return v4;
          }
        }
        return 0;
      }
      v30 = (char *)off_12A258(0x10u);
      v31 = v30;
      if ( v30 )
      {
        *v30 = 0;
      }
      else
      {
        sub_204B8(a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      v32 = 0;
      size = 16;
      v163 = (_DWORD *)(a1 + 24);
      do
      {
        v45 = (const char **)(*a2)++;
        v46 = *v45;
        if ( !*v45 )
        {
          sub_204B8(a1, "<args>", 12, "NULL %s", "string");
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_205D8((_DWORD *)a1);
        v47 = *(unsigned __int8 *)(a1 + 36);
        if ( v47 == 35 )
        {
          v48 = *(_DWORD *)(a1 + 76);
          v40 = *(*a2)++;
          if ( v48 )
            goto LABEL_33;
        }
        else
        {
          v33 = *(_DWORD *)(a1 + 76);
          if ( v47 == 37 )
          {
            v40 = *(*a2)++;
            if ( v33 )
              goto LABEL_33;
          }
          else
          {
            v34 = *(_DWORD *)(a1 + 28);
            v35 = *(_DWORD *)(a1 + 32);
            v36 = *(_DWORD *)(a1 + 36);
            *v168 = *v163;
            *(_DWORD *)(a1 + 44) = v34;
            *(_DWORD *)(a1 + 48) = v35;
            *(_DWORD *)(a1 + 52) = v36;
            v37 = *(_DWORD *)(a1 + 12);
            v38 = *(_DWORD *)(a1 + 16);
            v39 = *(_DWORD *)(a1 + 20);
            *v163 = *(_DWORD *)s;
            *(_DWORD *)(a1 + 28) = v37;
            *(_DWORD *)(a1 + 32) = v38;
            *(_DWORD *)(a1 + 36) = v39;
            if ( v33 )
              goto LABEL_33;
            v40 = strlen(v46);
          }
        }
        if ( v40 < size - v32 )
          goto LABEL_32;
        if ( !((v40 == -1) | (size >> 31)) && -2 - v40 >= v32 )
        {
          v41 = v32 + 1 + v40;
          if ( v41 < 2 * size )
            v41 = 2 * size;
          v42 = (char *)off_12A258(v41);
          v169 = v42;
          if ( v42 )
          {
            memcpy(v42, v31, v32);
            v43 = v31;
            size = v41;
            v31 = v169;
            off_12A254(v43);
LABEL_32:
            v44 = &v31[v32];
            v32 += v40;
            memcpy(v44, v46, v40);
            v31[v32] = 0;
            goto LABEL_33;
          }
        }
        sub_204B8(a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
LABEL_33:
        sub_205D8((_DWORD *)a1);
      }
      while ( *(_BYTE *)(a1 + 36) == 43 );
      v152 = *(_DWORD *)(a1 + 76);
      v153 = *(_DWORD *)(a1 + 28);
      v154 = *(_DWORD *)(a1 + 32);
      v155 = *(_DWORD *)(a1 + 36);
      *v168 = *v163;
      *(_DWORD *)(a1 + 44) = v153;
      *(_DWORD *)(a1 + 48) = v154;
      *(_DWORD *)(a1 + 52) = v155;
      v156 = *(_DWORD *)(a1 + 12);
      v157 = *(_DWORD *)(a1 + 16);
      v158 = *(_DWORD *)(a1 + 20);
      *v163 = *(_DWORD *)s;
      *(_DWORD *)(a1 + 28) = v156;
      *(_DWORD *)(a1 + 32) = v157;
      *(_DWORD *)(a1 + 36) = v158;
      if ( v152 )
      {
        if ( v31 )
          jsonp_free(v31);
        return 0;
      }
      if ( !utf8_check_string((int)v31, v32) )
      {
        sub_204B8(a1, "<args>", 5, "Invalid UTF-8 %s", "string");
        if ( v31 )
          jsonp_free(v31);
LABEL_14:
        v4 = 0;
        *(_DWORD *)(a1 + 76) = 1;
        return v4;
      }
      if ( v31 && !*(_DWORD *)(a1 + 76) )
      {
        v159 = (unsigned int *)off_12A258(16);
        v4 = v159;
        if ( v159 )
        {
          v159[2] = (unsigned int)v31;
          v159[3] = v32;
          *v159 = 2;
          v159[1] = 1;
        }
        else
        {
          jsonp_free(v31);
        }
        return v4;
      }
      return 0;
    case '{':
      v4 = json_object();
      sub_205D8((_DWORD *)a1);
LABEL_71:
      v71 = *(unsigned __int8 *)(a1 + 36);
      if ( v71 == 125 )
      {
        if ( !*(_DWORD *)(a1 + 76) )
          return v4;
      }
      else if ( *(_BYTE *)(a1 + 36) )
      {
        if ( v71 == 115 )
        {
          v72 = (_DWORD *)(a1 + 24);
          sub_205D8((_DWORD *)a1);
          v73 = *(_DWORD *)(a1 + 28);
          v74 = *(_DWORD *)(a1 + 32);
          v75 = *(_DWORD *)(a1 + 36);
          v76 = (_DWORD *)(a1 + 40);
          v77 = (_DWORD *)(a1 + 8);
          v78 = *(unsigned __int8 *)(a1 + 36);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 44) = v73;
          *(_DWORD *)(a1 + 48) = v74;
          *(_DWORD *)(a1 + 52) = v75;
          v79 = *(_DWORD *)(a1 + 12);
          v80 = *(_DWORD *)(a1 + 16);
          v81 = *(_DWORD *)(a1 + 20);
          v82 = v78 == 43;
          if ( v78 != 43 )
            v82 = (((_BYTE)v78 - 35) & 0xFD) == 0;
          v83 = !v82;
          *v72 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 28) = v79;
          *(_DWORD *)(a1 + 32) = v80;
          *(_DWORD *)(a1 + 36) = v81;
          if ( !v82 )
          {
            v124 = (const char **)(*a2)++;
            v105 = (char *)*v124;
            if ( *v124 )
            {
              v125 = strlen(*v124);
              if ( !utf8_check_string((int)v105, v125) )
              {
                v105 = 0;
                sub_204B8(a1, "<args>", 5, "Invalid UTF-8 %s", "object key");
                *(_DWORD *)(a1 + 76) = 1;
              }
            }
            else
            {
              sub_204B8(a1, "<args>", 12, "NULL %s", "object key");
              *(_DWORD *)(a1 + 76) = 1;
            }
            goto LABEL_124;
          }
          v171 = v83;
          v172 = 16;
          v84 = off_12A258(0x10u);
          v170 = v84;
          if ( v84 )
          {
            *v84 = v83;
          }
          else
          {
            sub_204B8(a1, "<internal>", 1, "Out of memory");
            *(_DWORD *)(a1 + 76) = 1;
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v93 = (char **)(*a2)++;
              v94 = *v93;
              if ( !*v93 )
              {
                sub_204B8(a1, "<args>", 12, "NULL %s", "object key");
                *(_DWORD *)(a1 + 76) = 1;
              }
              sub_205D8((_DWORD *)a1);
              v95 = *(unsigned __int8 *)(a1 + 36);
              if ( v95 != 35 )
                break;
              v96 = *(_DWORD *)(a1 + 76);
              v92 = *(*a2)++;
              if ( !v96 )
                goto LABEL_86;
LABEL_93:
              sub_205D8((_DWORD *)a1);
              if ( *(_BYTE *)(a1 + 36) != 43 )
              {
LABEL_94:
                v97 = *(_DWORD *)(a1 + 28);
                v98 = *(_DWORD *)(a1 + 32);
                v99 = *(_DWORD *)(a1 + 36);
                v100 = *(_DWORD *)(a1 + 76);
                v101 = v170;
                *v76 = *v72;
                *(_DWORD *)(a1 + 44) = v97;
                *(_DWORD *)(a1 + 48) = v98;
                *(_DWORD *)(a1 + 52) = v99;
                v102 = *(_DWORD *)(a1 + 12);
                v103 = *(_DWORD *)(a1 + 16);
                v104 = *(_DWORD *)(a1 + 20);
                *v72 = *v77;
                *(_DWORD *)(a1 + 28) = v102;
                *(_DWORD *)(a1 + 32) = v103;
                *(_DWORD *)(a1 + 36) = v104;
                if ( v100 )
                {
                  if ( v101 )
                    jsonp_free(v101);
                  v105 = 0;
                }
                else
                {
                  if ( utf8_check_string((int)v101, v171) )
                  {
                    v105 = (char *)v170;
                    sub_205D8((_DWORD *)a1);
                    sub_205D8((_DWORD *)a1);
                    v106 = *(_DWORD *)(a1 + 28);
                    v107 = *(_DWORD *)(a1 + 32);
                    v108 = *(_DWORD *)(a1 + 36);
                    v109 = *(unsigned __int8 *)(a1 + 36);
                    *v76 = *v72;
                    *(_DWORD *)(a1 + 44) = v106;
                    *(_DWORD *)(a1 + 48) = v107;
                    *(_DWORD *)(a1 + 52) = v108;
                    v110 = *(_DWORD *)(a1 + 12);
                    v111 = *(_DWORD *)(a1 + 16);
                    v112 = *(_DWORD *)(a1 + 20);
                    *v72 = *v77;
                    *(_DWORD *)(a1 + 28) = v110;
                    *(_DWORD *)(a1 + 32) = v111;
                    *(_DWORD *)(a1 + 36) = v112;
                    v113 = 1;
                    v114 = sub_217FC(a1, a2);
                    if ( v114 )
                      goto LABEL_97;
                    jsonp_free(v105);
LABEL_125:
                    if ( v109 != 42 )
                    {
                      sub_204B8(a1, "<args>", 12, "NULL object value");
                      *(_DWORD *)(a1 + 76) = 1;
                    }
LABEL_101:
                    sub_205D8((_DWORD *)a1);
                    goto LABEL_71;
                  }
                  sub_204B8(a1, "<args>", 5, "Invalid UTF-8 %s", "object key");
                  if ( v170 )
                    jsonp_free(v170);
                  v105 = 0;
                  *(_DWORD *)(a1 + 76) = 1;
                }
LABEL_124:
                sub_205D8((_DWORD *)a1);
                sub_205D8((_DWORD *)a1);
                v126 = *(_DWORD *)(a1 + 28);
                v127 = *(_DWORD *)(a1 + 32);
                v128 = *(_DWORD *)(a1 + 36);
                v109 = *(unsigned __int8 *)(a1 + 36);
                *v76 = *v72;
                *(_DWORD *)(a1 + 44) = v126;
                *(_DWORD *)(a1 + 48) = v127;
                *(_DWORD *)(a1 + 52) = v128;
                v129 = *(_DWORD *)(a1 + 12);
                v130 = *(_DWORD *)(a1 + 16);
                v131 = *(_DWORD *)(a1 + 20);
                *v72 = *v77;
                *(_DWORD *)(a1 + 28) = v129;
                *(_DWORD *)(a1 + 32) = v130;
                *(_DWORD *)(a1 + 36) = v131;
                v113 = 0;
                v114 = sub_217FC(a1, a2);
                if ( !v114 )
                  goto LABEL_125;
LABEL_97:
                if ( !*(_DWORD *)(a1 + 76) )
                {
LABEL_98:
                  if ( json_object_set_new_nocheck(v4, v105, v114) )
                  {
                    sub_204B8(a1, "<internal>", 1, "Unable to add key \"%s\"", v105);
                    *(_DWORD *)(a1 + 76) = 1;
                  }
                  goto LABEL_100;
                }
                if ( v114[1] == -1 )
                {
LABEL_100:
                  if ( !v113 )
                    goto LABEL_101;
                }
                else
                {
                  v121 = v114 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v122 = __ldrex(v121);
                    v123 = v122 - 1;
                  }
                  while ( __strex(v123, v121) );
                  if ( !v123 )
                  {
                    v165 = v114;
                    json_delete(v114);
                    v114 = v165;
                  }
                  if ( !*(_DWORD *)(a1 + 76) )
                    goto LABEL_98;
                  if ( !v113 )
                    goto LABEL_101;
                }
                jsonp_free(v105);
                goto LABEL_101;
              }
            }
            v85 = *(_DWORD *)(a1 + 76);
            if ( v95 == 37 )
              break;
            v86 = *(_DWORD *)(a1 + 28);
            v87 = *(_DWORD *)(a1 + 32);
            v88 = *(_DWORD *)(a1 + 36);
            *v76 = *v72;
            *(_DWORD *)(a1 + 44) = v86;
            *(_DWORD *)(a1 + 48) = v87;
            *(_DWORD *)(a1 + 52) = v88;
            v89 = *(_DWORD *)(a1 + 12);
            v90 = *(_DWORD *)(a1 + 16);
            v91 = *(_DWORD *)(a1 + 20);
            *v72 = *v77;
            *(_DWORD *)(a1 + 28) = v89;
            *(_DWORD *)(a1 + 32) = v90;
            *(_DWORD *)(a1 + 36) = v91;
            if ( !v85 )
            {
              v92 = strlen(v94);
LABEL_86:
              if ( strbuffer_append_bytes((const void **)&v170, v94, v92) == -1 )
              {
                sub_204B8(a1, "<internal>", 1, "Out of memory");
                *(_DWORD *)(a1 + 76) = 1;
              }
            }
            sub_205D8((_DWORD *)a1);
            if ( *(_BYTE *)(a1 + 36) != 43 )
              goto LABEL_94;
          }
          v92 = *(*a2)++;
          if ( v85 )
            goto LABEL_93;
          goto LABEL_86;
        }
        sub_204B8(a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
      }
      else
      {
LABEL_132:
        sub_204B8(a1, "<format>", 9, "Unexpected end of format string");
      }
LABEL_133:
      if ( !v4 || v4[1] == -1 )
        return 0;
      v132 = v4;
      v4 = 0;
      sub_A8E50(v132);
      return v4;
    default:
      v118 = "Unexpected format character '%c'";
      v119 = "<format>";
      v162 = (const char *)*(unsigned __int8 *)(a1 + 36);
      v120 = 9;
      goto LABEL_107;
  }
}
