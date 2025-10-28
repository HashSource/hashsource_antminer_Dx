int __fastcall sub_CA294(int a1, int *a2, int ***a3)
{
  int v4; // r0
  int v7; // r7
  char *v8; // r0
  unsigned int v9; // r1
  char *v10; // r3
  unsigned int v11; // r2
  char *v12; // r3
  int v13; // r7
  bool v14; // zf
  int v15; // r10
  char **v16; // r3
  char *v17; // r7
  char **v18; // r3
  int *v19; // r1
  bool v20; // zf
  int v21; // r2
  int v22; // r7
  _DWORD *v23; // r4
  _DWORD *v24; // r0
  int *v25; // r6
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v29; // r2
  int **v30; // r3
  int *v31; // r4
  __int64 v32; // r0
  int v33; // r2
  int **v34; // r3
  __int64 v35; // r0
  int v36; // r3
  unsigned int *v37; // r3
  unsigned int v38; // r2
  int **v39; // r3
  int *v40; // r3
  int v41; // r2
  int v42; // r5
  unsigned int v43; // r9
  bool v44; // zf
  int *v45; // r1
  bool v46; // zf
  int v47; // r2
  int **v48; // r3
  int v49; // r2
  int v50; // r2
  int v52; // r2
  int **v53; // r3
  int v54; // r2
  int **v55; // r3
  __int64 v56; // r0
  int **v57; // r3
  int v58; // r2
  int **v59; // r3
  _DWORD *v60; // r5
  _DWORD *v61; // r12
  _DWORD *v62; // lr
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  _DWORD *v67; // r4
  int v68; // r1
  int v69; // r2
  int v70; // r3
  const char *v71; // r3
  char *v72; // r1
  int v73; // r3
  _DWORD *v74; // r0
  bool v75; // zf
  int v76; // r3
  int *v77; // r7
  int *v78; // r10
  int v79; // r8
  int v80; // r11
  char *v81; // r7
  int appended; // r9
  int *v83; // r2
  bool v84; // zf
  size_t v85; // r0
  int **v86; // r3
  _DWORD *v87; // r0
  int *v88; // r2
  int v89; // r3
  const char *v90; // r2
  const char *v91; // r3
  char *v92; // r1
  char *v93; // r2
  char *v94; // r0
  char arga[4]; // [sp+0h] [bp-3Ch]
  char arg[4]; // [sp+0h] [bp-3Ch]
  char argb[4]; // [sp+0h] [bp-3Ch]
  const char *argc; // [sp+0h] [bp-3Ch]
  const void *v99[3]; // [sp+10h] [bp-2Ch] BYREF
  int v100; // [sp+1Ch] [bp-20h] BYREF
  void *v101; // [sp+20h] [bp-1Ch]
  int v102; // [sp+24h] [bp-18h]
  int v103; // [sp+28h] [bp-14h] BYREF
  void *ptr; // [sp+2Ch] [bp-10h]
  _DWORD v105[3]; // [sp+30h] [bp-Ch] BYREF

  v4 = *(unsigned __int8 *)(a1 + 36);
  switch ( v4 )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_122;
      v29 = *a2;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v91 = "Expected real or integer, got %s";
        LOWORD(v92) = -21152;
        v93 = &aStratumHandleM_4[4 * v29];
        v94 = (char *)a1;
        goto LABEL_199;
      }
      if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
        return 0;
      v30 = (*a3)++;
      v31 = *v30;
      if ( v29 == 3 )
        LODWORD(v32) = sub_15D994(*((_QWORD *)a2 + 1));
      else
        v32 = *((_QWORD *)a2 + 1);
      *(_QWORD *)v31 = v32;
      return 0;
    case 'I':
      if ( !a2 )
        goto LABEL_122;
      v33 = *a2;
      if ( *a2 != 3 )
        goto LABEL_198;
      v22 = *(_DWORD *)(a1 + 60) & 1;
      if ( v22 )
        return 0;
      v34 = *a3;
      v35 = *((_QWORD *)a2 + 1);
      ++*a3;
      *(_QWORD *)*v34 = v35;
      return v22;
    case 'O':
      v36 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_109;
      if ( v36 )
        return 0;
      if ( a2[1] == -1 )
      {
        v57 = (*a3)++;
        goto LABEL_111;
      }
      v37 = (unsigned int *)(a2 + 1);
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 + 1, v37) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v39 = (*a3)++;
        v40 = *v39;
        goto LABEL_112;
      }
      return 0;
    case '[':
      if ( a2 )
      {
        v41 = *a2;
        if ( *a2 != 1 )
        {
          v91 = "Expected array, got %s";
          LOWORD(v92) = -21152;
          v93 = &aStratumHandleM_4[4 * v41];
          v94 = (char *)a1;
LABEL_199:
          HIWORD(v92) = (unsigned int)"<validation>" >> 16;
          v22 = -1;
          sub_101190(v94, v92, 10, v91, *((_DWORD *)v93 + 81));
          return v22;
        }
      }
      sub_10133C((_DWORD *)a1);
      v42 = *(unsigned __int8 *)(a1 + 36);
      if ( v42 == 93 )
      {
        v43 = 0;
LABEL_189:
        if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
          return 0;
LABEL_126:
        if ( a2 )
        {
LABEL_127:
          if ( *a2 == 1 )
            v73 = a2[3];
          else
            v73 = 0;
          if ( v73 != v43 )
          {
            v22 = -1;
            v74 = json_array_size(a2);
            sub_101190((char *)a1, "<validation>", 7, "%li array item(s) left unpacked", (char *)v74 - v43);
            return v22;
          }
        }
        return 0;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
LABEL_170:
        sub_101190((char *)a1, "<format>", 9, "Unexpected end of format string");
        return -1;
      }
      v44 = v42 == 42;
      if ( v42 != 42 )
        v44 = v42 == 33;
      v43 = v44;
      if ( !v44 )
      {
        if ( a2 )
        {
          while ( strchr("{[siIbfFOon", v42) )
          {
            v45 = json_array_get(a2, v43);
            if ( !v45 )
            {
              v22 = -1;
              sub_101190((char *)a1, "<validation>", 17, "Array index %lu out of range", v43);
              return v22;
            }
            ++v43;
            if ( sub_CA294(a1, v45, (_QWORD ***)a3) )
              return -1;
            sub_10133C((_DWORD *)a1);
            v42 = *(unsigned __int8 *)(a1 + 36);
            if ( v42 == 93 )
            {
              if ( (*(_DWORD *)(a1 + 60) & 2) != 0 )
                goto LABEL_127;
              return 0;
            }
            if ( !*(_BYTE *)(a1 + 36) )
              goto LABEL_170;
            v46 = v42 == 42;
            if ( v42 != 42 )
              v46 = v42 == 33;
            if ( v46 )
              goto LABEL_87;
          }
        }
        else
        {
          v43 = 0;
          while ( 1 )
          {
            ++v43;
            if ( !strchr("{[siIbfFOon", v42) )
              break;
            if ( sub_CA294(a1, 0, (_QWORD ***)a3) )
              return -1;
            sub_10133C((_DWORD *)a1);
            v42 = *(unsigned __int8 *)(a1 + 36);
            if ( v42 == 93 )
              goto LABEL_189;
            if ( !*(_BYTE *)(a1 + 36) )
              goto LABEL_170;
            v75 = v42 == 42;
            if ( v42 != 42 )
              v75 = v42 == 33;
            if ( v75 )
              goto LABEL_87;
          }
        }
        LOWORD(v71) = -20868;
        LOWORD(v72) = -21100;
        *(_DWORD *)arg = v42;
LABEL_121:
        HIWORD(v71) = (unsigned int)"Unexpected format character '%c'" >> 16;
        HIWORD(v72) = (unsigned int)"<format>" >> 16;
        v22 = -1;
        sub_101190((char *)a1, v72, 9, v71, *(_DWORD *)arg);
        return v22;
      }
      v43 = 0;
LABEL_87:
      if ( v42 == 33 )
      {
        sub_10133C((_DWORD *)a1);
        v47 = *(unsigned __int8 *)(a1 + 36);
        if ( v47 == 93 )
          goto LABEL_126;
      }
      else
      {
        sub_10133C((_DWORD *)a1);
        v47 = *(unsigned __int8 *)(a1 + 36);
        if ( v47 == 93 )
          return 0;
        v42 = 42;
      }
      sub_101190((char *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v42, v47);
      return -1;
    case 'b':
      if ( !a2 )
        goto LABEL_122;
      v52 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v91 = "Expected true or false, got %s";
        LOWORD(v92) = -21152;
        v93 = &aStratumHandleM_4[4 * v52];
        v94 = (char *)a1;
        goto LABEL_199;
      }
      v22 = *(_DWORD *)(a1 + 60) & 1;
      if ( v22 )
        return 0;
      v53 = (*a3)++;
      **v53 = v52 == 5;
      return v22;
    case 'f':
      if ( !a2 )
        goto LABEL_122;
      v54 = *a2;
      if ( *a2 != 4 )
      {
        v91 = "Expected real, got %s";
        LOWORD(v92) = -21152;
        v93 = &aStratumHandleM_4[4 * v54];
        v94 = (char *)a1;
        goto LABEL_199;
      }
      v22 = *(_DWORD *)(a1 + 60) & 1;
      if ( v22 )
        return 0;
      v55 = *a3;
      v56 = *((_QWORD *)a2 + 1);
      ++*a3;
      *(_QWORD *)*v55 = v56;
      return v22;
    case 'i':
      if ( !a2 )
      {
LABEL_122:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v33 = *a2;
      if ( *a2 != 3 )
      {
LABEL_198:
        v91 = "Expected integer, got %s";
        LOWORD(v92) = (unsigned __int16)"<validation>";
        v93 = &aStratumHandleM_4[4 * v33];
        v94 = (char *)a1;
        goto LABEL_199;
      }
      v22 = *(_DWORD *)(a1 + 60) & 1;
      if ( v22 )
        return 0;
      v48 = *a3;
      v49 = a2[2];
      ++*a3;
      **v48 = v49;
      return v22;
    case 'n':
      if ( !a2 )
        return 0;
      v50 = *a2;
      if ( *a2 == 7 )
        return 0;
      v91 = "Expected null, got %s";
      LOWORD(v92) = -21152;
      v93 = &aStratumHandleM_4[4 * v50];
      v94 = (char *)a1;
      goto LABEL_199;
    case 'o':
      v36 = *(_DWORD *)(a1 + 60) & 1;
LABEL_109:
      if ( v36 )
        return 0;
      v57 = (*a3)++;
      if ( !a2 )
        return 0;
LABEL_111:
      v40 = *v57;
LABEL_112:
      *v40 = (int)a2;
      return 0;
    case 's':
      if ( a2 )
      {
        v58 = *a2;
        if ( *a2 != 2 )
        {
          v91 = "Expected string, got %s";
          LOWORD(v92) = -21152;
          v93 = &aStratumHandleM_4[4 * v58];
          v94 = (char *)a1;
          goto LABEL_199;
        }
      }
      v22 = *(_DWORD *)(a1 + 60) & 1;
      if ( v22 )
        return 0;
      v59 = (*a3)++;
      v60 = *v59;
      if ( !*v59 )
      {
        sub_101190((char *)a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      sub_10133C((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 36) != 37 )
      {
        v61 = (_DWORD *)(a1 + 24);
        v62 = (_DWORD *)(a1 + 40);
        v63 = *(_DWORD *)(a1 + 24);
        v64 = *(_DWORD *)(a1 + 28);
        v65 = *(_DWORD *)(a1 + 32);
        v66 = *(_DWORD *)(a1 + 36);
        v67 = (_DWORD *)(a1 + 8);
        *v62 = v63;
        v62[1] = v64;
        v62[2] = v65;
        v62[3] = v66;
        v68 = v67[1];
        v69 = v67[2];
        v70 = v67[3];
        *v61 = *v67;
        v61[1] = v68;
        v61[2] = v69;
        v61[3] = v70;
        if ( !a2 )
          return 0;
        *v60 = json_string_value(a2);
        return v22;
      }
      v86 = (*a3)++;
      if ( !*v86 )
      {
        sub_101190((char *)a1, "<args>", 12, "NULL string length argument");
        return -1;
      }
      if ( a2 )
      {
        v87 = json_string_value(a2);
        v89 = *a2;
        *v60 = v87;
        if ( v89 == 2 )
          v22 = a2[3];
        *v88 = v22;
      }
      return 0;
    case '{':
      v7 = 0;
      v100 = 0;
      v102 = 3;
      v8 = (char *)off_190780(0x40u);
      v101 = v8;
      if ( !v8 )
      {
        sub_101190((char *)a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      ptr = &v103;
      v103 = (int)&v103;
      v9 = 1 << v102;
      v105[1] = v105;
      v105[0] = v105;
      if ( 1 << v102 )
      {
        if ( v9 <= 4 )
        {
          v11 = 0;
        }
        else
        {
          v10 = v8 + 236;
          v11 = ((v9 - 5) & 0xFFFFFFFC) + 4;
          do
          {
            v7 += 4;
            __pld(v10);
            *((_DWORD *)v10 - 58) = &v103;
            *((_DWORD *)v10 - 59) = &v103;
            v10 += 32;
            *((_DWORD *)v10 - 64) = &v103;
            *((_DWORD *)v10 - 65) = &v103;
            *((_DWORD *)v10 - 62) = &v103;
            *((_DWORD *)v10 - 63) = &v103;
            *((_DWORD *)v10 - 60) = &v103;
            *((_DWORD *)v10 - 61) = &v103;
          }
          while ( v11 != v7 );
        }
        v12 = &v8[8 * v11];
        do
        {
          *((_DWORD *)v12 + 1) = &v103;
          v12 += 8;
          *(_DWORD *)&v8[8 * v11++] = &v103;
        }
        while ( v9 > v11 );
      }
      if ( a2 && *a2 )
      {
        v22 = -1;
        sub_101190(
          (char *)a1,
          "<validation>",
          10,
          "Expected object, got %s",
          *(const char **)&aStratumHandleM_4[4 * *a2 + 324]);
        goto LABEL_39;
      }
      sub_10133C((_DWORD *)a1);
      v13 = *(unsigned __int8 *)(a1 + 36);
      if ( v13 == 125 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
          goto LABEL_181;
        v76 = *a2;
        goto LABEL_203;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
LABEL_178:
        sub_101190((char *)a1, "<format>", 9, "Unexpected end of format string");
        v22 = -1;
        goto LABEL_39;
      }
      v14 = v13 == 42;
      if ( v13 != 42 )
        v14 = v13 == 33;
      v15 = v14;
      if ( v14 )
      {
        v15 = 0;
LABEL_34:
        if ( v13 == 33 )
        {
          sub_10133C((_DWORD *)a1);
          v21 = *(unsigned __int8 *)(a1 + 36);
          if ( v21 == 125 )
            goto LABEL_148;
        }
        else
        {
          sub_10133C((_DWORD *)a1);
          v21 = *(unsigned __int8 *)(a1 + 36);
          if ( v21 == 125 )
            goto LABEL_181;
          v13 = 42;
        }
        *(_DWORD *)arga = v13;
        v22 = -1;
        sub_101190((char *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", *(_DWORD *)arga, v21);
        goto LABEL_39;
      }
      if ( v13 != 115 )
      {
LABEL_185:
        *(_DWORD *)argb = v13;
        v22 = -1;
        sub_101190((char *)a1, "<format>", 9, "Expected format 's', got '%c'", *(_DWORD *)argb);
        goto LABEL_39;
      }
      v16 = (char **)(*a3)++;
      v17 = *v16;
      if ( !*v16 )
      {
LABEL_186:
        sub_101190((char *)a1, "<args>", 12, "NULL object key");
        v22 = -1;
        goto LABEL_39;
      }
      while ( 1 )
      {
        sub_10133C((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 63 )
        {
          sub_10133C((_DWORD *)a1);
          if ( a2 )
          {
            v15 = 1;
            v19 = (int *)json_object_get(a2, v17);
          }
          else
          {
            v19 = 0;
            v15 = 1;
          }
        }
        else if ( a2 )
        {
          v19 = (int *)json_object_get(a2, v17);
          if ( !v19 )
          {
            argc = v17;
            v22 = -1;
            sub_101190((char *)a1, "<validation>", 16, "Object item not found: %s", argc);
            goto LABEL_39;
          }
        }
        else
        {
          v19 = 0;
        }
        if ( sub_CA294(a1, v19, (_QWORD ***)a3) )
        {
          v22 = -1;
          goto LABEL_39;
        }
        hashtable_set(&v100, v17, (int)dword_190784);
        sub_10133C((_DWORD *)a1);
        v13 = *(unsigned __int8 *)(a1 + 36);
        if ( v13 == 125 )
          break;
        if ( !*(_BYTE *)(a1 + 36) )
          goto LABEL_178;
        v20 = v13 == 42;
        if ( v13 != 42 )
          v20 = v13 == 33;
        if ( v20 )
          goto LABEL_34;
        if ( v13 != 115 )
          goto LABEL_185;
        v18 = (char **)(*a3)++;
        v17 = *v18;
        if ( !*v18 )
          goto LABEL_186;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
      {
LABEL_181:
        v22 = 0;
        goto LABEL_39;
      }
LABEL_148:
      if ( !a2 )
        goto LABEL_181;
      v76 = *a2;
      if ( v15 )
      {
        if ( v76 )
          goto LABEL_181;
        goto LABEL_151;
      }
LABEL_203:
      if ( v76 || a2[2] == v100 )
        goto LABEL_181;
LABEL_151:
      v77 = (int *)a2[8];
      v78 = a2 + 7;
      v79 = v77 == a2 + 7;
      if ( !v77 )
        v79 = 1;
      if ( v79 )
        goto LABEL_181;
      v80 = a2[8];
      v81 = (char *)(v77 + 4);
      if ( !*(_DWORD *)(v80 + 12) )
        goto LABEL_181;
      appended = 1;
      do
      {
        if ( !hashtable_get((int)&v100, v81) )
        {
          ++v79;
          if ( appended == 1 )
          {
            appended = strbuffer_init(v99);
          }
          else
          {
            if ( appended )
              goto LABEL_157;
            appended = strbuffer_append_bytes(v99, ", ", 2u);
          }
          if ( !appended )
          {
            v85 = strlen(v81);
            appended = strbuffer_append_bytes(v99, v81, v85);
          }
        }
LABEL_157:
        if ( *a2 )
          break;
        v83 = *(int **)(v80 + 4);
        v84 = v83 == v78;
        if ( v83 != v78 )
          v84 = v83 == 0;
        v80 = *(_DWORD *)(v80 + 4);
        v81 = (char *)(v83 + 4);
        if ( v84 )
          break;
      }
      while ( v83[3] );
      if ( !v79 )
        goto LABEL_181;
      if ( appended )
        v90 = "<unknown>";
      else
        v90 = (const char *)v99[0];
      sub_101190((char *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v79, v90);
      v22 = -1;
      strbuffer_close((int)v99);
LABEL_39:
      v23 = ptr;
      if ( ptr != &v103 )
      {
        do
        {
          v24 = (_DWORD *)v23[5];
          v25 = (int *)v23[1];
          if ( v24 )
          {
            v26 = v24 + 1;
            if ( v24[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v27 = __ldrex(v26);
                v28 = v27 - 1;
              }
              while ( __strex(v28, v26) );
              if ( !v28 )
                json_delete(v24);
            }
          }
          off_190550(v23);
          v23 = v25;
        }
        while ( v25 != &v103 );
      }
      if ( v101 )
        off_190550(v101);
      return v22;
    default:
      LOWORD(v71) = (unsigned __int16)"Unexpected format character '%c'";
      LOWORD(v72) = (unsigned __int16)"<format>";
      *(_DWORD *)arg = v4;
      goto LABEL_121;
  }
}
