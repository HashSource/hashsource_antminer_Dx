int __fastcall sub_39528(int a1, int *a2, _QWORD ***a3)
{
  int v4; // r0
  int v7; // r5
  int v8; // r8
  bool v9; // zf
  int v10; // r10
  char **v11; // r3
  char *v12; // r8
  char **v13; // r3
  int v14; // r1
  bool v15; // zf
  int v16; // r2
  _DWORD *v17; // r4
  _DWORD *v18; // r0
  char *v19; // r6
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r2
  _QWORD **v24; // r3
  _QWORD *v25; // r4
  __int64 v26; // r0
  int v27; // r2
  __int64 v28; // r0
  __int64 **v29; // r2
  int v30; // r3
  unsigned int *v31; // r3
  unsigned int v32; // r2
  _DWORD **v33; // r3
  _DWORD *v34; // r3
  int v35; // r2
  int v36; // r5
  unsigned int v37; // r8
  bool v38; // zf
  _DWORD *v39; // r1
  bool v40; // zf
  int v41; // r2
  int v42; // r2
  _DWORD **v43; // r3
  int v44; // r2
  _QWORD **v45; // r3
  __int64 v46; // r0
  int v47; // r0
  _DWORD **v48; // r2
  int v49; // r2
  _DWORD **v51; // r3
  int v52; // r2
  _DWORD **v53; // r3
  _DWORD *v54; // r9
  _DWORD *v55; // r5
  _DWORD *v56; // r7
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  _DWORD *v61; // r4
  int v62; // r1
  int v63; // r2
  int v64; // r3
  char *v65; // r3
  char *v66; // r1
  _DWORD *v67; // r0
  bool v68; // zf
  _DWORD *v69; // r0
  int v70; // r11
  char *v71; // r7
  int appended; // r8
  int v73; // r9
  _DWORD *v74; // r0
  size_t v75; // r0
  _DWORD **v76; // r3
  _DWORD *v77; // r2
  int v78; // r3
  const char *v79; // r2
  char *v80; // r3
  char *v81; // r1
  char *v82; // r2
  int v83; // r0
  int v84; // r3
  int v85; // [sp+0h] [bp-34h]
  const void *v86[3]; // [sp+8h] [bp-2Ch] BYREF
  unsigned int v87; // [sp+14h] [bp-20h] BYREF
  void *v88; // [sp+18h] [bp-1Ch]
  char v89; // [sp+20h] [bp-14h] BYREF
  void *ptr; // [sp+24h] [bp-10h]

  v4 = *(unsigned __int8 *)(a1 + 36);
  switch ( v4 )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_118;
      v23 = *a2;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v80 = "Expected real or integer, got %s";
        LOWORD(v81) = -18332;
        v82 = &aReadConfigIni_0[4 * v23];
        v83 = a1;
        goto LABEL_182;
      }
      if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
        return 0;
      v24 = (*a3)++;
      v25 = *v24;
      if ( v23 == 3 )
        LODWORD(v26) = sub_F7714(*((_QWORD *)a2 + 1));
      else
        v26 = *((_QWORD *)a2 + 1);
      *v25 = v26;
      return 0;
    case 'I':
      if ( !a2 )
        goto LABEL_118;
      v27 = *a2;
      if ( *a2 != 3 )
        goto LABEL_181;
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      ++*a3;
      v28 = json_integer_value((int)a2);
      **v29 = v28;
      return v7;
    case 'O':
      v30 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_103;
      if ( v30 )
        return 0;
      if ( a2[1] == -1 )
      {
        v51 = (_DWORD **)(*a3)++;
        goto LABEL_105;
      }
      v31 = (unsigned int *)(a2 + 1);
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 + 1, v31) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v33 = (_DWORD **)(*a3)++;
        v34 = *v33;
        goto LABEL_106;
      }
      return 0;
    case '[':
      if ( a2 )
      {
        v35 = *a2;
        if ( *a2 != 1 )
        {
          v80 = "Expected array, got %s";
          LOWORD(v81) = -18332;
          v82 = &aReadConfigIni_0[4 * v35];
          v83 = a1;
LABEL_182:
          HIWORD(v81) = (unsigned int)"<validation>" >> 16;
          v7 = -1;
          sub_204B8(v83, v81, 10, v80, *((_DWORD *)v82 + 68));
          return v7;
        }
      }
      sub_205D8((_DWORD *)a1);
      v36 = *(unsigned __int8 *)(a1 + 36);
      if ( v36 == 93 )
      {
        v37 = 0;
LABEL_173:
        if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
          return 0;
LABEL_121:
        if ( a2 )
        {
LABEL_122:
          v67 = json_array_size(a2);
          if ( v67 != (_DWORD *)v37 )
          {
            sub_204B8(a1, "<validation>", 7, "%li array item(s) left unpacked", (char *)v67 - v37);
            return -1;
          }
        }
        return 0;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
LABEL_155:
        sub_204B8(a1, "<format>", 9, "Unexpected end of format string");
        return -1;
      }
      v38 = v36 == 42;
      if ( v36 != 42 )
        v38 = v36 == 33;
      v37 = v38;
      if ( !v38 )
      {
        if ( a2 )
        {
          while ( strchr("{[siIbfFOon", v36) )
          {
            v39 = json_array_get(a2, v37);
            if ( !v39 )
            {
              v7 = -1;
              sub_204B8(a1, "<validation>", 17, "Array index %lu out of range", v37);
              return v7;
            }
            ++v37;
            if ( sub_39528(a1, (int)v39, a3) )
              return -1;
            sub_205D8((_DWORD *)a1);
            v36 = *(unsigned __int8 *)(a1 + 36);
            if ( v36 == 93 )
            {
              if ( (*(_DWORD *)(a1 + 60) & 2) != 0 )
                goto LABEL_122;
              return 0;
            }
            if ( !*(_BYTE *)(a1 + 36) )
              goto LABEL_155;
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
            if ( sub_39528(a1, 0, a3) )
              return -1;
            sub_205D8((_DWORD *)a1);
            v36 = *(unsigned __int8 *)(a1 + 36);
            if ( v36 == 93 )
              goto LABEL_173;
            if ( !*(_BYTE *)(a1 + 36) )
              goto LABEL_155;
            v68 = v36 == 42;
            if ( v36 != 42 )
              v68 = v36 == 33;
            if ( v68 )
              goto LABEL_81;
          }
        }
        LOWORD(v65) = -32544;
        LOWORD(v66) = 32744;
        v85 = v36;
LABEL_117:
        HIWORD(v65) = (unsigned int)"Unexpected format character '%c'" >> 16;
        HIWORD(v66) = (unsigned int)"<format>" >> 16;
        v7 = -1;
        sub_204B8(a1, v66, 9, v65, v85);
        return v7;
      }
      v37 = 0;
LABEL_81:
      if ( v36 == 33 )
      {
        sub_205D8((_DWORD *)a1);
        v41 = *(unsigned __int8 *)(a1 + 36);
        if ( v41 == 93 )
          goto LABEL_121;
      }
      else
      {
        sub_205D8((_DWORD *)a1);
        v41 = *(unsigned __int8 *)(a1 + 36);
        if ( v41 == 93 )
          return 0;
        v36 = 42;
      }
      sub_204B8(a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v36, v41);
      return -1;
    case 'b':
      if ( !a2 )
        goto LABEL_118;
      v42 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v80 = "Expected true or false, got %s";
        LOWORD(v81) = -18332;
        v82 = &aReadConfigIni_0[4 * v42];
        v83 = a1;
        goto LABEL_182;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v43 = (_DWORD **)(*a3)++;
      **v43 = v42 == 5;
      return v7;
    case 'f':
      if ( !a2 )
        goto LABEL_118;
      v44 = *a2;
      if ( *a2 != 4 )
      {
        v80 = "Expected real, got %s";
        LOWORD(v81) = -18332;
        v82 = &aReadConfigIni_0[4 * v44];
        v83 = a1;
        goto LABEL_182;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v45 = *a3;
      v46 = *((_QWORD *)a2 + 1);
      ++*a3;
      **v45 = v46;
      return v7;
    case 'i':
      if ( !a2 )
      {
LABEL_118:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v27 = *a2;
      if ( *a2 != 3 )
      {
LABEL_181:
        v80 = "Expected integer, got %s";
        LOWORD(v81) = (unsigned __int16)"<validation>";
        v82 = &aReadConfigIni_0[4 * v27];
        v83 = a1;
        goto LABEL_182;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      ++*a3;
      v47 = json_integer_value((int)a2);
      **v48 = v47;
      return v7;
    case 'n':
      if ( !a2 )
        return 0;
      v49 = *a2;
      if ( *a2 == 7 )
        return 0;
      v80 = "Expected null, got %s";
      LOWORD(v81) = -18332;
      v82 = &aReadConfigIni_0[4 * v49];
      v83 = a1;
      goto LABEL_182;
    case 'o':
      v30 = *(_DWORD *)(a1 + 60) & 1;
LABEL_103:
      if ( v30 )
        return 0;
      v51 = (_DWORD **)(*a3)++;
      if ( !a2 )
        return 0;
LABEL_105:
      v34 = *v51;
LABEL_106:
      *v34 = a2;
      return 0;
    case 's':
      if ( a2 )
      {
        v52 = *a2;
        if ( *a2 != 2 )
        {
          v80 = "Expected string, got %s";
          LOWORD(v81) = -18332;
          v82 = &aReadConfigIni_0[4 * v52];
          v83 = a1;
          goto LABEL_182;
        }
      }
      if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
        return 0;
      v53 = (_DWORD **)(*a3)++;
      v54 = *v53;
      if ( !*v53 )
      {
        sub_204B8(a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      sub_205D8((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 36) == 37 )
      {
        v76 = (_DWORD **)(*a3)++;
        v77 = *v76;
        if ( !*v76 )
        {
          sub_204B8(a1, "<args>", 12, "NULL string length argument");
          return -1;
        }
        if ( a2 )
        {
          if ( *a2 == 2 )
          {
            v78 = a2[3];
            *v54 = a2[2];
          }
          else
          {
            *v54 = 0;
            v78 = 0;
          }
          *v77 = v78;
        }
      }
      else
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
        if ( a2 )
        {
          if ( *a2 == 2 )
            *v54 = a2[2];
          else
            *v54 = 0;
        }
      }
      return 0;
    case '{':
      v7 = hashtable_init(&v87);
      if ( v7 )
      {
        sub_204B8(a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      if ( a2 && *a2 )
      {
        v7 = -1;
        sub_204B8(a1, "<validation>", 10, "Expected object, got %s", *(const char **)&aReadConfigIni_0[4 * *a2 + 272]);
        goto LABEL_33;
      }
      sub_205D8((_DWORD *)a1);
      v8 = *(unsigned __int8 *)(a1 + 36);
      if ( v8 == 125 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
          goto LABEL_33;
LABEL_185:
        if ( *a2 )
          v84 = 0;
        else
          v84 = a2[2];
        if ( v87 == v84 )
          goto LABEL_33;
        goto LABEL_142;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
LABEL_163:
        sub_204B8(a1, "<format>", 9, "Unexpected end of format string");
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
          sub_205D8((_DWORD *)a1);
          v16 = *(unsigned __int8 *)(a1 + 36);
          if ( v16 == 125 )
            goto LABEL_140;
        }
        else
        {
          sub_205D8((_DWORD *)a1);
          v16 = *(unsigned __int8 *)(a1 + 36);
          if ( v16 == 125 )
            goto LABEL_33;
          v8 = 42;
        }
        v7 = -1;
        sub_204B8(a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v8, v16);
        goto LABEL_33;
      }
      if ( v8 != 115 )
      {
LABEL_166:
        v7 = -1;
        sub_204B8(a1, "<format>", 9, "Expected format 's', got '%c'", v8);
        goto LABEL_33;
      }
      v11 = (char **)(*a3)++;
      v12 = *v11;
      if ( !*v11 )
      {
LABEL_169:
        sub_204B8(a1, "<args>", 12, "NULL object key");
        v7 = -1;
        goto LABEL_33;
      }
      while ( 1 )
      {
        sub_205D8((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 63 )
        {
          sub_205D8((_DWORD *)a1);
          if ( a2 )
          {
            v10 = 1;
            v14 = json_object_get(a2, v12);
          }
          else
          {
            v14 = 0;
            v10 = 1;
          }
        }
        else if ( a2 )
        {
          v14 = json_object_get(a2, v12);
          if ( !v14 )
          {
            v7 = -1;
            sub_204B8(a1, "<validation>", 16, "Object item not found: %s", v12);
            goto LABEL_33;
          }
        }
        else
        {
          v14 = 0;
        }
        if ( sub_39528(a1, v14, a3) )
        {
          v7 = -1;
          goto LABEL_33;
        }
        hashtable_set(&v87, v12, (int)&unk_12A270);
        sub_205D8((_DWORD *)a1);
        v8 = *(unsigned __int8 *)(a1 + 36);
        if ( v8 == 125 )
          break;
        if ( !*(_BYTE *)(a1 + 36) )
          goto LABEL_163;
        v15 = v8 == 42;
        if ( v8 != 42 )
          v15 = v8 == 33;
        if ( v15 )
          goto LABEL_28;
        if ( v8 != 115 )
          goto LABEL_166;
        v13 = (char **)(*a3)++;
        v12 = *v13;
        if ( !*v13 )
          goto LABEL_169;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
        goto LABEL_33;
LABEL_140:
      if ( !a2 )
        goto LABEL_33;
      if ( !v10 )
        goto LABEL_185;
LABEL_142:
      v69 = json_object_iter(a2);
      if ( !v69 )
        goto LABEL_33;
      v70 = (int)v69;
      v71 = (char *)(v69 + 4);
      appended = 1;
      v73 = 0;
      if ( !v69[3] )
        goto LABEL_33;
      do
      {
        if ( !hashtable_get((int)&v87, v71) )
        {
          ++v73;
          if ( appended == 1 )
          {
            appended = strbuffer_init(v86);
          }
          else
          {
            if ( appended )
              goto LABEL_145;
            appended = strbuffer_append_bytes(v86, ", ", 2u);
          }
          if ( !appended )
          {
            v75 = strlen(v71);
            appended = strbuffer_append_bytes(v86, v71, v75);
          }
        }
LABEL_145:
        v74 = json_object_iter_next(a2, v70);
        if ( !v74 )
          break;
        v71 = (char *)(v74 + 4);
        v70 = (int)v74;
      }
      while ( v74[3] );
      if ( v73 )
      {
        v79 = (const char *)v86[0];
        if ( appended )
          v79 = "<unknown>";
        sub_204B8(a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v73, v79);
        v7 = -1;
        strbuffer_close((int)v86);
      }
LABEL_33:
      v17 = ptr;
      if ( ptr != &v89 )
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
          off_12A254(v17);
          v17 = v19;
        }
        while ( v19 != &v89 );
      }
      if ( v88 )
        off_12A254(v88);
      return v7;
    default:
      LOWORD(v65) = (unsigned __int16)"Unexpected format character '%c'";
      LOWORD(v66) = (unsigned __int16)"<format>";
      v85 = v4;
      goto LABEL_117;
  }
}
