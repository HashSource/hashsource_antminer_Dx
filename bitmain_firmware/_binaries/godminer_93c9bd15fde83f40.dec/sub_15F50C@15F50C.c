int __fastcall sub_15F50C(int a1, int *a2, int ***a3)
{
  int v4; // r0
  int v7; // r6
  int v8; // r7
  bool v9; // zf
  int v10; // r10
  char **v11; // r3
  char *v12; // r7
  char **v13; // r3
  int *v14; // r1
  bool v15; // zf
  int v16; // r2
  _DWORD *v17; // r4
  _DWORD *v18; // r0
  char *v19; // r5
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r2
  int **v24; // r3
  int *v25; // r4
  __int64 v26; // r0
  int v27; // r2
  int **v28; // r3
  __int64 v29; // r0
  int v30; // r3
  unsigned int *v31; // r3
  unsigned int v32; // r2
  int **v33; // r3
  int *v34; // r3
  int v35; // r2
  int v36; // r6
  unsigned int v37; // r7
  bool v38; // zf
  int *v39; // r1
  bool v40; // zf
  int v41; // r2
  int v42; // r2
  int **v43; // r3
  int v44; // r2
  int **v45; // r3
  __int64 v46; // r0
  int **v47; // r3
  int v48; // r2
  int v49; // r2
  int **v51; // r3
  int v52; // r2
  int **v53; // r3
  _DWORD *v54; // r7
  _DWORD *v55; // r12
  _DWORD *v56; // lr
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  _DWORD *v61; // r4
  int v62; // r1
  int v63; // r2
  int v64; // r3
  const char *v65; // r3
  char *v66; // r1
  int v67; // r3
  _DWORD *v68; // r0
  bool v69; // zf
  int v70; // r3
  int v71; // r7
  int *v72; // r10
  bool v73; // zf
  int v74; // r9
  char *v75; // r8
  int appended; // r11
  bool v77; // zf
  size_t v78; // r0
  int **v79; // r3
  _DWORD *v80; // r0
  int *v81; // r2
  int v82; // r3
  const char *v83; // r2
  const char *v84; // r3
  char *v85; // r1
  char *v86; // r12
  char *v87; // r0
  char arg[4]; // [sp+0h] [bp-3Ch]
  const void *v89[3]; // [sp+10h] [bp-2Ch] BYREF
  unsigned int v90; // [sp+1Ch] [bp-20h] BYREF
  void *v91; // [sp+20h] [bp-1Ch]
  char v92; // [sp+28h] [bp-14h] BYREF
  void *ptr; // [sp+2Ch] [bp-10h]

  v4 = *(unsigned __int8 *)(a1 + 36);
  switch ( v4 )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_116;
      v23 = *a2;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v84 = "Expected real or integer, got %s";
        LOWORD(v85) = 2464;
        v86 = (&off_1908E8)[v23];
        v87 = (char *)a1;
        goto LABEL_197;
      }
      if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
        return 0;
      v24 = (*a3)++;
      v25 = *v24;
      if ( v23 == 3 )
        LODWORD(v26) = sub_16E7EC(*((_QWORD *)a2 + 1));
      else
        v26 = *((_QWORD *)a2 + 1);
      *(_QWORD *)v25 = v26;
      return 0;
    case 'I':
      if ( !a2 )
        goto LABEL_116;
      v27 = *a2;
      if ( *a2 != 3 )
        goto LABEL_196;
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v28 = *a3;
      v29 = *((_QWORD *)a2 + 1);
      ++*a3;
      *(_QWORD *)*v28 = v29;
      return v7;
    case 'O':
      v30 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_103;
      if ( v30 )
        return 0;
      if ( a2[1] == -1 )
      {
        v51 = (*a3)++;
        goto LABEL_105;
      }
      v31 = (unsigned int *)(a2 + 1);
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 + 1, v31) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v33 = (*a3)++;
        v34 = *v33;
        goto LABEL_106;
      }
      return 0;
    case '[':
      if ( a2 && (v35 = *a2, *a2 != 1) )
      {
        v84 = "Expected array, got %s";
        LOWORD(v85) = 2464;
        v86 = (&off_1908E8)[v35];
        v87 = (char *)a1;
LABEL_197:
        HIWORD(v85) = (unsigned int)"<validation>" >> 16;
        v7 = -1;
        sub_15BCD4(v87, v85, 10, v84, v86);
      }
      else
      {
        sub_15BB30((_DWORD *)a1);
        v36 = *(unsigned __int8 *)(a1 + 36);
        if ( v36 == 93 )
        {
          v37 = 0;
LABEL_187:
          if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
            return 0;
LABEL_120:
          if ( a2 )
          {
LABEL_121:
            if ( *a2 == 1 )
              v67 = a2[3];
            else
              v67 = 0;
            if ( v67 != v37 )
            {
              v7 = -1;
              v68 = json_array_size(a2);
              sub_15BCD4((char *)a1, "<validation>", 7, "%li array item(s) left unpacked", (char *)v68 - v37);
              return v7;
            }
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 36) )
        {
LABEL_169:
          sub_15BCD4((char *)a1, "<format>", 9, "Unexpected end of format string");
          return -1;
        }
        v38 = v36 == 42;
        if ( v36 != 42 )
          v38 = v36 == 33;
        v37 = v38;
        if ( v38 )
        {
          v37 = 0;
LABEL_81:
          if ( v36 == 33 )
          {
            sub_15BB30((_DWORD *)a1);
            v41 = *(unsigned __int8 *)(a1 + 36);
            if ( v41 == 93 )
              goto LABEL_120;
          }
          else
          {
            sub_15BB30((_DWORD *)a1);
            v41 = *(unsigned __int8 *)(a1 + 36);
            if ( v41 == 93 )
              return 0;
            v36 = 42;
          }
          sub_15BCD4((char *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v36, v41);
          return -1;
        }
        if ( a2 )
        {
          while ( strchr("{[siIbfFOon", v36) )
          {
            v39 = json_array_get(a2, v37);
            if ( !v39 )
            {
              v7 = -1;
              sub_15BCD4((char *)a1, "<validation>", 17, "Array index %lu out of range", v37);
              return v7;
            }
            ++v37;
            if ( sub_15F50C(a1, v39, (_QWORD ***)a3) )
              return -1;
            sub_15BB30((_DWORD *)a1);
            v36 = *(unsigned __int8 *)(a1 + 36);
            if ( v36 == 93 )
            {
              if ( (*(_DWORD *)(a1 + 60) & 2) != 0 )
                goto LABEL_121;
              return 0;
            }
            if ( !*(_BYTE *)(a1 + 36) )
              goto LABEL_169;
            v40 = v36 == 33;
            if ( v36 != 33 )
              v40 = v36 == 42;
            if ( v40 )
              goto LABEL_81;
          }
        }
        else
        {
          v37 = 0;
          while ( 1 )
          {
            ++v37;
            if ( !strchr("{[siIbfFOon", v36) )
              break;
            if ( sub_15F50C(a1, 0, (_QWORD ***)a3) )
              return -1;
            sub_15BB30((_DWORD *)a1);
            v36 = *(unsigned __int8 *)(a1 + 36);
            if ( v36 == 93 )
              goto LABEL_187;
            if ( !*(_BYTE *)(a1 + 36) )
              goto LABEL_169;
            v69 = v36 == 42;
            if ( v36 != 42 )
              v69 = v36 == 33;
            if ( v69 )
              goto LABEL_81;
          }
        }
        LOWORD(v65) = 2748;
        LOWORD(v66) = 2516;
        *(_DWORD *)arg = v36;
LABEL_115:
        HIWORD(v65) = (unsigned int)"Unexpected format character '%c'" >> 16;
        HIWORD(v66) = (unsigned int)"<format>" >> 16;
        v7 = -1;
        sub_15BCD4((char *)a1, v66, 9, v65, *(_DWORD *)arg);
      }
      return v7;
    case 'b':
      if ( !a2 )
        goto LABEL_116;
      v42 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v84 = "Expected true or false, got %s";
        LOWORD(v85) = 2464;
        v86 = (&off_1908E8)[v42];
        v87 = (char *)a1;
        goto LABEL_197;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v43 = (*a3)++;
      **v43 = v42 == 5;
      return v7;
    case 'f':
      if ( !a2 )
        goto LABEL_116;
      v44 = *a2;
      if ( *a2 != 4 )
      {
        v84 = "Expected real, got %s";
        LOWORD(v85) = 2464;
        v86 = (&off_1908E8)[v44];
        v87 = (char *)a1;
        goto LABEL_197;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v45 = *a3;
      v46 = *((_QWORD *)a2 + 1);
      ++*a3;
      *(_QWORD *)*v45 = v46;
      return v7;
    case 'i':
      if ( !a2 )
      {
LABEL_116:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v27 = *a2;
      if ( *a2 != 3 )
      {
LABEL_196:
        v84 = "Expected integer, got %s";
        LOWORD(v85) = (unsigned __int16)"<validation>";
        v86 = (&off_1908E8)[v27];
        v87 = (char *)a1;
        goto LABEL_197;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v47 = *a3;
      v48 = a2[2];
      ++*a3;
      **v47 = v48;
      return v7;
    case 'n':
      if ( !a2 )
        return 0;
      v49 = *a2;
      if ( *a2 == 7 )
        return 0;
      v84 = "Expected null, got %s";
      LOWORD(v85) = 2464;
      v86 = (&off_1908E8)[v49];
      v87 = (char *)a1;
      goto LABEL_197;
    case 'o':
      v30 = *(_DWORD *)(a1 + 60) & 1;
LABEL_103:
      if ( v30 )
        return 0;
      v51 = (*a3)++;
      if ( !a2 )
        return 0;
LABEL_105:
      v34 = *v51;
LABEL_106:
      *v34 = (int)a2;
      return 0;
    case 's':
      if ( a2 )
      {
        v52 = *a2;
        if ( *a2 != 2 )
        {
          v84 = "Expected string, got %s";
          LOWORD(v85) = 2464;
          v86 = (&off_1908E8)[v52];
          v87 = (char *)a1;
          goto LABEL_197;
        }
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v53 = (*a3)++;
      v54 = *v53;
      if ( !*v53 )
      {
        sub_15BCD4((char *)a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      sub_15BB30((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 36) != 37 )
      {
        v55 = (_DWORD *)(a1 + 24);
        v56 = (_DWORD *)(a1 + 40);
        v57 = *(_DWORD *)(a1 + 24);
        v58 = *(_DWORD *)(a1 + 28);
        v59 = *(_DWORD *)(a1 + 32);
        v60 = *(_DWORD *)(a1 + 36);
        v61 = (_DWORD *)(a1 + 8);
        *v56 = v57;
        v56[1] = v58;
        v56[2] = v59;
        v56[3] = v60;
        v62 = v61[1];
        v63 = v61[2];
        v64 = v61[3];
        *v55 = *v61;
        v55[1] = v62;
        v55[2] = v63;
        v55[3] = v64;
        if ( !a2 )
          return 0;
        *v54 = json_string_value(a2);
        return v7;
      }
      v79 = (*a3)++;
      if ( !*v79 )
      {
        sub_15BCD4((char *)a1, "<args>", 12, "NULL string length argument");
        return -1;
      }
      if ( a2 )
      {
        v80 = json_string_value(a2);
        v82 = *a2;
        *v54 = v80;
        if ( v82 == 2 )
          v7 = a2[3];
        *v81 = v7;
      }
      return 0;
    case '{':
      v7 = hashtable_init(&v90);
      if ( v7 )
      {
        sub_15BCD4((char *)a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      if ( a2 && *a2 )
      {
        v7 = -1;
        sub_15BCD4((char *)a1, "<validation>", 10, "Expected object, got %s", (&off_1908E8)[*a2]);
        goto LABEL_33;
      }
      sub_15BB30((_DWORD *)a1);
      v8 = *(unsigned __int8 *)(a1 + 36);
      if ( v8 == 125 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
          goto LABEL_33;
        v70 = *a2;
        goto LABEL_201;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
LABEL_177:
        sub_15BCD4((char *)a1, "<format>", 9, "Unexpected end of format string");
        v7 = -1;
        goto LABEL_33;
      }
      v9 = v8 == 42;
      if ( v8 != 42 )
        v9 = v8 == 33;
      v10 = v9;
      if ( v9 )
      {
        v10 = 0;
LABEL_28:
        if ( v8 == 33 )
        {
          sub_15BB30((_DWORD *)a1);
          v16 = *(unsigned __int8 *)(a1 + 36);
          if ( v16 == 125 )
            goto LABEL_142;
        }
        else
        {
          sub_15BB30((_DWORD *)a1);
          v16 = *(unsigned __int8 *)(a1 + 36);
          if ( v16 == 125 )
            goto LABEL_33;
          v8 = 42;
        }
        v7 = -1;
        sub_15BCD4((char *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v8, v16);
        goto LABEL_33;
      }
      if ( v8 != 115 )
      {
LABEL_182:
        v7 = -1;
        sub_15BCD4((char *)a1, "<format>", 9, "Expected format 's', got '%c'", v8);
        goto LABEL_33;
      }
      v11 = (char **)(*a3)++;
      v12 = *v11;
      if ( !*v11 )
      {
LABEL_183:
        sub_15BCD4((char *)a1, "<args>", 12, "NULL object key");
        v7 = -1;
        goto LABEL_33;
      }
      while ( 1 )
      {
        sub_15BB30((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 63 )
        {
          sub_15BB30((_DWORD *)a1);
          if ( a2 )
          {
            v10 = 1;
            v14 = (int *)json_object_get(a2, v12);
          }
          else
          {
            v14 = 0;
            v10 = 1;
          }
        }
        else if ( a2 )
        {
          v14 = (int *)json_object_get(a2, v12);
          if ( !v14 )
          {
            v7 = -1;
            sub_15BCD4((char *)a1, "<validation>", 16, "Object item not found: %s", v12);
            goto LABEL_33;
          }
        }
        else
        {
          v14 = 0;
        }
        if ( sub_15F50C(a1, v14, (_QWORD ***)a3) )
        {
          v7 = -1;
          goto LABEL_33;
        }
        hashtable_set(&v90, v12, (int)dword_1A25D8);
        sub_15BB30((_DWORD *)a1);
        v8 = *(unsigned __int8 *)(a1 + 36);
        if ( v8 == 125 )
          break;
        if ( !*(_BYTE *)(a1 + 36) )
          goto LABEL_177;
        v15 = v8 == 42;
        if ( v8 != 42 )
          v15 = v8 == 33;
        if ( v15 )
          goto LABEL_28;
        if ( v8 != 115 )
          goto LABEL_182;
        v13 = (char **)(*a3)++;
        v12 = *v13;
        if ( !*v13 )
          goto LABEL_183;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
        goto LABEL_33;
LABEL_142:
      if ( !a2 )
        goto LABEL_33;
      v70 = *a2;
      if ( v10 )
      {
        if ( v70 )
          goto LABEL_33;
        goto LABEL_145;
      }
LABEL_201:
      if ( v70 || a2[2] == v90 )
        goto LABEL_33;
LABEL_145:
      v71 = a2[8];
      v72 = a2 + 7;
      v73 = v71 == 0;
      if ( v71 )
        v73 = v71 == (_DWORD)v72;
      v74 = v73;
      if ( !v73 )
      {
        v75 = (char *)(v71 + 16);
        if ( v71 != -16 )
        {
          if ( *(_DWORD *)(v71 + 12) )
          {
            appended = 1;
            while ( 1 )
            {
              if ( !hashtable_get((int)&v90, v75) )
              {
                ++v74;
                if ( appended == 1 )
                {
                  appended = strbuffer_init(v89);
LABEL_165:
                  if ( !appended )
                  {
                    v78 = strlen(v75);
                    appended = strbuffer_append_bytes(v89, v75, v78);
                  }
                  goto LABEL_155;
                }
                if ( !appended )
                {
                  appended = strbuffer_append_bytes(v89, ", ", 2u);
                  goto LABEL_165;
                }
              }
LABEL_155:
              if ( !*a2 )
              {
                v71 = *(_DWORD *)(v71 + 4);
                v77 = v71 == 0;
                if ( v71 )
                  v77 = v72 == (int *)v71;
                if ( !v77 )
                {
                  v75 = (char *)(v71 + 16);
                  if ( v71 != -16 )
                  {
                    if ( *(_DWORD *)(v71 + 12) )
                      continue;
                  }
                }
              }
              if ( v74 )
              {
                if ( appended )
                  v83 = "<unknown>";
                else
                  v83 = (const char *)v89[0];
                sub_15BCD4((char *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v74, v83);
                v7 = -1;
                strbuffer_close((int)v89);
              }
              break;
            }
          }
        }
      }
LABEL_33:
      v17 = ptr;
      if ( ptr != &v92 )
      {
        do
        {
          v18 = (_DWORD *)v17[5];
          v19 = (char *)v17[1];
          if ( v18 )
          {
            v20 = v18 + 1;
            if ( v18[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v21 = __ldrex(v20);
                v22 = v21 - 1;
              }
              while ( __strex(v22, v20) );
              if ( !v22 )
                json_delete(v18);
            }
          }
          off_1A25EC(v17);
          v17 = v19;
        }
        while ( v19 != &v92 );
      }
      if ( v91 )
        off_1A25EC(v91);
      return v7;
    default:
      LOWORD(v65) = (unsigned __int16)"Unexpected format character '%c'";
      LOWORD(v66) = (unsigned __int16)"<format>";
      *(_DWORD *)arg = v4;
      goto LABEL_115;
  }
}
