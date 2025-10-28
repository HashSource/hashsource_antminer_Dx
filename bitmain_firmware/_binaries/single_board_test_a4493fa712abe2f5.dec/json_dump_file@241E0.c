size_t __fastcall json_dump_file(char *a1, char *filename, int a3)
{
  FILE *v5; // r0
  FILE *v6; // r6
  char *v7; // r0
  int v8; // r10
  unsigned int v9; // r11
  unsigned int v10; // r12
  int v11; // lr
  _DWORD *v12; // r3
  unsigned int v13; // r2
  char *v14; // r3
  const char *v15; // r0
  FILE *v16; // r3
  size_t v17; // r0
  size_t v18; // r8
  _DWORD *v19; // r5
  _DWORD *v20; // r0
  int *v21; // r7
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  char *v26; // r3
  int v27; // r3
  size_t v28; // r0
  unsigned int v29; // r0
  signed int v30; // r1
  size_t v31; // r0
  size_t v32; // r0
  const char *v33; // r3
  unsigned int v34; // r9
  size_t v35; // r10
  const char *v36; // r9
  const char *v37; // r7
  size_t v38; // r0
  size_t v39; // r10
  _DWORD *v40; // r0
  unsigned int v41; // r10
  _DWORD *v42; // r0
  unsigned int v43; // r5
  size_t v44; // r7
  size_t v45; // r0
  char *v46; // r0
  char *v47; // r9
  char *v48; // r3
  const char *v49; // r2
  _DWORD *v50; // r1
  char *v52; // r7
  _DWORD *v53; // r5
  size_t v54; // r0
  size_t v55; // r7
  char *v56; // [sp+10h] [bp-A4h]
  int v57; // [sp+10h] [bp-A4h]
  size_t v58; // [sp+14h] [bp-A0h]
  char *v59; // [sp+14h] [bp-A0h]
  const char *v60; // [sp+18h] [bp-9Ch]
  int v61; // [sp+18h] [bp-9Ch]
  unsigned int v62; // [sp+18h] [bp-9Ch]
  const char *v63; // [sp+20h] [bp-94h]
  char *v64; // [sp+20h] [bp-94h]
  size_t nmemb; // [sp+24h] [bp-90h]
  size_t nmemba; // [sp+24h] [bp-90h]
  int v67; // [sp+28h] [bp-8Ch]
  int v68; // [sp+2Ch] [bp-88h]
  char *v69; // [sp+2Ch] [bp-88h]
  int v70; // [sp+30h] [bp-84h] BYREF
  void *v71; // [sp+34h] [bp-80h]
  int v72; // [sp+38h] [bp-7Ch]
  int v73; // [sp+3Ch] [bp-78h] BYREF
  void *ptr; // [sp+40h] [bp-74h]
  _DWORD v75[2]; // [sp+44h] [bp-70h] BYREF
  char s[104]; // [sp+4Ch] [bp-68h] BYREF

  v5 = fopen(filename, "w");
  if ( !v5 )
    return -1;
  v6 = v5;
  if ( (a3 & 0x200) == 0 && (!a1 || *(_DWORD *)a1 > 1u)
    || (v70 = 0, v72 = 3, v7 = (char *)off_12A258(0x40u), (v71 = v7) == 0) )
  {
    v18 = -1;
    goto LABEL_27;
  }
  ptr = &v73;
  v8 = a3 & 0x10000;
  v73 = (int)&v73;
  v9 = a3 & 0xFFFEFFFF;
  v10 = 1 << v72;
  v75[0] = v75;
  v75[1] = v75;
  if ( 1 << v72 )
  {
    if ( v10 <= 4 )
    {
      v13 = 0;
    }
    else
    {
      v11 = 0;
      v12 = v7;
      v13 = ((v10 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v11 += 4;
        __pld(v12 + 59);
        *v12 = &v73;
        v12[1] = &v73;
        v12[2] = &v73;
        v12[3] = &v73;
        v12[4] = &v73;
        v12[5] = &v73;
        v12[6] = &v73;
        v12[7] = &v73;
        v12 += 8;
      }
      while ( v11 != v13 );
    }
    v14 = &v7[8 * v13];
    do
    {
      *((_DWORD *)v14 + 1) = &v73;
      v14 += 8;
      *(_DWORD *)&v7[8 * v13++] = &v73;
    }
    while ( v13 < v10 );
    if ( a1 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 0:
          goto LABEL_29;
        case 1:
          goto LABEL_36;
        case 2:
          goto LABEL_43;
        case 3:
          goto LABEL_44;
        case 4:
          goto LABEL_49;
        case 5:
          goto LABEL_51;
        case 6:
          goto LABEL_52;
        case 7:
          goto LABEL_14;
        default:
          goto LABEL_35;
      }
    }
    goto LABEL_35;
  }
  if ( !a1 )
  {
    v18 = -1;
LABEL_26:
    off_12A254(v7);
    goto LABEL_27;
  }
  switch ( *(_DWORD *)a1 )
  {
    case 0:
LABEL_29:
      v26 = ":";
      if ( (a3 & 0x20) == 0 )
        v26 = ": ";
      v56 = v26;
      if ( (a3 & 0x20) != 0 )
        v27 = 1;
      else
        v27 = 2;
      v58 = v27;
      v18 = sub_D1A38(&v70, a1, s);
      if ( v18 )
        goto LABEL_35;
      if ( *(_DWORD *)a1 || (v33 = (const char *)*((_DWORD *)a1 + 8), v63 = a1 + 28, v60 = v33, v33 == a1 + 28) )
      {
        if ( v8 )
          goto LABEL_106;
        if ( fwrite("{", 1u, 1u, v6) != 1 )
          goto LABEL_35;
        goto LABEL_102;
      }
      if ( v8 )
      {
        if ( !v33 )
          goto LABEL_106;
        goto LABEL_65;
      }
      if ( fwrite("{", 1u, 1u, v6) != 1 )
        goto LABEL_35;
      if ( !v60 )
      {
LABEL_102:
        hashtable_del(&v70, s);
        v45 = fwrite("}", 1u, 1u, v6);
        v18 = v45 - 1;
        if ( v45 != 1 )
          v18 = -1;
        goto LABEL_17;
      }
LABEL_65:
      v34 = a3 & 0x1F;
      if ( (a3 & 0x1F) != 0 )
      {
        if ( fwrite("\n", 1u, 1u, v6) != 1 )
          goto LABEL_35;
        do
        {
          v35 = v34;
          if ( v34 >= 0x20 )
            v35 = 32;
          if ( fwrite("                                ", v35, 1u, v6) != 1 )
            goto LABEL_35;
          v34 -= v35;
        }
        while ( v34 );
        v9 = a3 & 0xFFFEFFFF;
        v8 = a3 & 0x10000;
      }
      if ( (a3 & 0x80) == 0 )
      {
        v36 = v60;
        v67 = v8;
        while ( 1 )
        {
          if ( *(_DWORD *)a1 )
          {
            v37 = 0;
          }
          else
          {
            v37 = (const char *)*((_DWORD *)v36 + 1);
            if ( v63 == v37 )
              v37 = 0;
          }
          v38 = strlen(v36 + 16);
          sub_20128(
            (unsigned __int8 *)v36 + 16,
            v38,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20438,
            (int)v6,
            v9);
          v39 = fwrite(v56, v58, 1u, v6);
          if ( v39 != 1 )
            goto LABEL_35;
          v40 = (_DWORD *)*((_DWORD *)v36 + 3);
          v36 = v37;
          if ( sub_23BB0(v40, v9, 1, &v70, __SPAIR64__((unsigned int)v6, sub_20438)) )
            goto LABEL_35;
          if ( !v37 )
          {
            v8 = v67;
            if ( !sub_1FFC4(v9, 0, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)v6) )
              goto LABEL_131;
            goto LABEL_35;
          }
          if ( fwrite(",", v39, v39, v6) != 1
            || sub_1FFC4(v9, 1, 1, (int (__fastcall *)(char *, int, int))sub_20438, (int)v6) )
          {
            goto LABEL_35;
          }
        }
      }
      nmemba = (size_t)json_object_size(a1);
      v46 = (char *)jsonp_malloc((void *)(4 * nmemba));
      v47 = v46;
      if ( !v46 )
        goto LABEL_35;
      if ( *(_DWORD *)a1 )
      {
        *(_DWORD *)v46 = v60 + 16;
      }
      else
      {
        v48 = v46 - 4;
        v49 = v60;
        do
        {
          v50 = v49 + 16;
          v49 = (const char *)*((_DWORD *)v49 + 1);
          *((_DWORD *)v48 + 1) = v50;
          v48 += 4;
        }
        while ( v63 != v49 && v49 );
      }
      qsort(v46, nmemba, 4u, (__compar_fn_t)sub_20120);
      if ( nmemba )
      {
        v64 = v47 - 4;
        v62 = 0;
        v69 = a1;
        while ( 1 )
        {
          v52 = (char *)*((_DWORD *)v64 + 1);
          v64 += 4;
          v53 = (_DWORD *)json_object_get(v69, v52);
          v54 = strlen(v52);
          sub_20128(
            (unsigned __int8 *)v52,
            v54,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20438,
            (int)v6,
            v9);
          v55 = fwrite(v56, v58, 1u, v6);
          if ( v55 != 1 || sub_23BB0(v53, v9, 1, &v70, __SPAIR64__((unsigned int)v6, sub_20438)) )
            break;
          if ( nmemba - 1 > v62++ )
          {
            if ( fwrite(",", v55, v55, v6) != 1
              || sub_1FFC4(v9, 1, 1, (int (__fastcall *)(char *, int, int))sub_20438, (int)v6) )
            {
              break;
            }
          }
          else if ( sub_1FFC4(v9, 0, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)v6) )
          {
            break;
          }
          if ( nmemba == v62 )
            goto LABEL_130;
        }
        v18 = -1;
        jsonp_free(v47);
        goto LABEL_17;
      }
LABEL_130:
      jsonp_free(v47);
LABEL_131:
      hashtable_del(&v70, s);
      if ( !v8 )
        v18 = sub_20438("}", 1u, v6);
LABEL_17:
      v19 = ptr;
      if ( ptr != &v73 )
      {
        do
        {
          v20 = (_DWORD *)v19[5];
          v21 = (int *)v19[1];
          if ( v20 )
          {
            v22 = v20 + 1;
            if ( v20[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v23 = __ldrex(v22);
                v24 = v23 - 1;
              }
              while ( __strex(v24, v22) );
              if ( !v24 )
                json_delete(v20);
            }
          }
          off_12A254(v19);
          v19 = v21;
        }
        while ( v21 != &v73 );
      }
LABEL_25:
      v7 = (char *)v71;
      if ( v71 )
        goto LABEL_26;
LABEL_27:
      if ( fclose(v6) )
        return -1;
      return v18;
    case 1:
LABEL_36:
      v18 = sub_D1A38(&v70, a1, s);
      if ( v18 )
        goto LABEL_35;
      if ( *(_DWORD *)a1 != 1 )
      {
        if ( !v8 )
        {
          if ( fwrite("[", 1u, 1u, v6) != 1 )
            goto LABEL_35;
LABEL_40:
          hashtable_del(&v70, s);
          v28 = fwrite(&word_106544, 1u, 1u, v6);
          v18 = v28 - 1;
          if ( v28 != 1 )
            v18 = -1;
          goto LABEL_17;
        }
LABEL_106:
        hashtable_del(&v70, s);
        goto LABEL_17;
      }
      v57 = *((_DWORD *)a1 + 3);
      if ( v8 )
      {
        if ( !*((_DWORD *)a1 + 3) )
          goto LABEL_106;
      }
      else
      {
        if ( fwrite("[", 1u, 1u, v6) != 1 )
          goto LABEL_35;
        if ( !v57 )
          goto LABEL_40;
      }
      if ( sub_1FFC4(a3, 1, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)v6) )
        goto LABEL_35;
      v68 = a3 & 0x10000;
      v41 = 0;
      v61 = a3 & 0x1F;
      nmemb = a3 & 0x20;
      v59 = a1;
      while ( 1 )
      {
        v42 = json_array_get(v59, v41);
        v18 = sub_23BB0(v42, v9, 1, &v70, __SPAIR64__((unsigned int)v6, sub_20438));
        if ( v18 )
          goto LABEL_35;
        if ( v57 - 1 <= v41 )
        {
          if ( sub_1FFC4(v9, 0, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)v6) )
            goto LABEL_35;
        }
        else
        {
          if ( fwrite(",", 1u, 1u, v6) != 1 )
            goto LABEL_35;
          v43 = v61;
          if ( v61 )
          {
            if ( fwrite("\n", 1u, 1u, v6) != 1 )
              goto LABEL_35;
            while ( 1 )
            {
              v44 = v43;
              if ( v43 >= 0x20 )
                v44 = 32;
              if ( fwrite("                                ", v44, 1u, v6) != 1 )
                break;
              v43 -= v44;
              if ( !v43 )
                goto LABEL_97;
            }
LABEL_35:
            v18 = -1;
            goto LABEL_17;
          }
          if ( !nmemb && sub_20438(" ", 1u, v6) )
            goto LABEL_35;
        }
LABEL_97:
        if ( ++v41 == v57 )
        {
          hashtable_del(&v70, s);
          if ( !v68 )
            v18 = sub_20438(&word_106544, 1u, v6);
          goto LABEL_17;
        }
      }
    case 2:
LABEL_43:
      v18 = sub_20128(
              *((unsigned __int8 **)a1 + 2),
              *((_DWORD *)a1 + 3),
              (int (__fastcall *)(unsigned __int8 *, int, int))sub_20438,
              (int)v6,
              a3 & 0xFFFEFFFF);
      goto LABEL_17;
    case 3:
LABEL_44:
      v29 = snprintf(s, 0x64u, "%lld", *((_QWORD *)a1 + 1));
      if ( v29 > 0x63 )
        goto LABEL_35;
      v30 = v29;
      goto LABEL_46;
    case 4:
LABEL_49:
      v30 = jsonp_dtostr(s, 0x64u, (unsigned __int16)a3 >> 11);
      if ( v30 < 0 )
        goto LABEL_35;
LABEL_46:
      v31 = fwrite(s, v30, 1u, v6);
      v18 = v31 - 1;
      if ( v31 != 1 )
        v18 = -1;
      goto LABEL_17;
    case 5:
LABEL_51:
      v15 = "true";
      v16 = v6;
      goto LABEL_15;
    case 6:
LABEL_52:
      v32 = fwrite("false", 5u, 1u, v6);
      v18 = v32 - 1;
      if ( v32 != 1 )
        v18 = -1;
      goto LABEL_17;
    case 7:
LABEL_14:
      v15 = "null";
      v16 = v6;
LABEL_15:
      v17 = fwrite(v15, 4u, 1u, v16);
      v18 = v17 - 1;
      if ( v17 != 1 )
        v18 = -1;
      goto LABEL_17;
    default:
      v18 = -1;
      goto LABEL_25;
  }
}
