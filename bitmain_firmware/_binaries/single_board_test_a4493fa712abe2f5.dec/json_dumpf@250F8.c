size_t __fastcall json_dumpf(char *a1, FILE *a2, int a3)
{
  char *v6; // r0
  int v7; // r11
  unsigned int v8; // r10
  unsigned int v9; // r12
  int v10; // lr
  _DWORD *v11; // r3
  unsigned int v12; // r2
  char *v13; // r3
  const char *v14; // r0
  FILE *v15; // r3
  size_t v16; // r0
  size_t v17; // r8
  _DWORD *v18; // r5
  _DWORD *v19; // r0
  int *v20; // r6
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  char *v25; // r3
  int v26; // r3
  size_t v27; // r0
  unsigned int v28; // r0
  FILE *v29; // r3
  signed int v30; // r1
  size_t v31; // r0
  size_t v32; // r0
  char *v33; // r3
  unsigned int v34; // r9
  size_t v35; // r10
  char *v36; // r8
  char *v37; // r11
  char *v38; // r5
  size_t v39; // r0
  unsigned int v40; // r6
  size_t v41; // r8
  unsigned int v42; // r8
  size_t v43; // r9
  unsigned int v44; // r11
  _DWORD *v45; // r0
  unsigned int v46; // r5
  size_t v47; // r6
  size_t v48; // r0
  char *v49; // r0
  char *v50; // r9
  char *v51; // r3
  char *v52; // r2
  char *v53; // r1
  char *v55; // r6
  _DWORD *v56; // r5
  size_t v57; // r0
  size_t v58; // r6
  char *v59; // [sp+14h] [bp-B0h]
  int v60; // [sp+14h] [bp-B0h]
  size_t v61; // [sp+18h] [bp-ACh]
  int v62; // [sp+18h] [bp-ACh]
  int v63; // [sp+1Ch] [bp-A8h]
  char *v64; // [sp+1Ch] [bp-A8h]
  unsigned int v65; // [sp+1Ch] [bp-A8h]
  char *v66; // [sp+20h] [bp-A4h]
  char *v67; // [sp+20h] [bp-A4h]
  char *v68; // [sp+28h] [bp-9Ch]
  int v69; // [sp+28h] [bp-9Ch]
  size_t nmemb; // [sp+2Ch] [bp-98h]
  size_t nmemba; // [sp+2Ch] [bp-98h]
  void *v72; // [sp+30h] [bp-94h]
  char *v73; // [sp+30h] [bp-94h]
  int v74; // [sp+38h] [bp-8Ch]
  int v75; // [sp+40h] [bp-84h] BYREF
  void *v76; // [sp+44h] [bp-80h]
  int v77; // [sp+48h] [bp-7Ch]
  int v78; // [sp+4Ch] [bp-78h] BYREF
  void *ptr; // [sp+50h] [bp-74h]
  _DWORD v80[2]; // [sp+54h] [bp-70h] BYREF
  char s[104]; // [sp+5Ch] [bp-68h] BYREF

  if ( (a3 & 0x200) == 0 && (!a1 || *(_DWORD *)a1 > 1u) )
    return -1;
  v75 = 0;
  v77 = 3;
  v6 = (char *)off_12A258(0x40u);
  v76 = v6;
  if ( !v6 )
    return -1;
  ptr = &v78;
  v7 = a3 & 0x10000;
  v78 = (int)&v78;
  v8 = a3 & 0xFFFEFFFF;
  v9 = 1 << v77;
  v80[0] = v80;
  v80[1] = v80;
  if ( 1 << v77 )
  {
    if ( v9 <= 4 )
    {
      v12 = 0;
    }
    else
    {
      v10 = 0;
      v11 = v6;
      v12 = ((v9 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v10 += 4;
        __pld(v11 + 59);
        *v11 = &v78;
        v11[1] = &v78;
        v11[2] = &v78;
        v11[3] = &v78;
        v11[4] = &v78;
        v11[5] = &v78;
        v11[6] = &v78;
        v11[7] = &v78;
        v11 += 8;
      }
      while ( v10 != v12 );
    }
    v13 = &v6[8 * v12];
    do
    {
      *((_DWORD *)v13 + 1) = &v78;
      v13 += 8;
      *(_DWORD *)&v6[8 * v12++] = &v78;
    }
    while ( v12 < v9 );
    if ( a1 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 0:
          goto LABEL_27;
        case 1:
          goto LABEL_34;
        case 2:
          goto LABEL_41;
        case 3:
          goto LABEL_42;
        case 4:
          goto LABEL_47;
        case 5:
          goto LABEL_49;
        case 6:
          goto LABEL_50;
        case 7:
          goto LABEL_13;
        default:
          goto LABEL_33;
      }
    }
    goto LABEL_33;
  }
  if ( !a1 )
  {
    v17 = -1;
LABEL_25:
    off_12A254(v6);
    return v17;
  }
  switch ( *(_DWORD *)a1 )
  {
    case 0:
LABEL_27:
      v25 = ":";
      v63 = a3 & 0x20;
      if ( (a3 & 0x20) == 0 )
        v25 = ": ";
      v59 = v25;
      if ( (a3 & 0x20) != 0 )
        v26 = 1;
      else
        v26 = 2;
      v61 = v26;
      v17 = sub_D1A38(&v75, a1, s);
      if ( v17 )
        goto LABEL_33;
      if ( *(_DWORD *)a1 || (v33 = (char *)*((_DWORD *)a1 + 8), v68 = a1 + 28, v66 = v33, v33 == a1 + 28) )
      {
        if ( v7 )
          goto LABEL_116;
        if ( fwrite("{", 1u, 1u, a2) != 1 )
          goto LABEL_33;
        goto LABEL_112;
      }
      if ( v7 )
      {
        if ( !v33 )
          goto LABEL_116;
        goto LABEL_62;
      }
      if ( fwrite("{", 1u, 1u, a2) != 1 )
        goto LABEL_33;
      if ( !v66 )
      {
LABEL_112:
        hashtable_del(&v75, s);
        v48 = fwrite("}", 1u, 1u, a2);
        v17 = v48 - 1;
        if ( v48 != 1 )
          v17 = -1;
        goto LABEL_16;
      }
LABEL_62:
      nmemb = a3 & 0x1F;
      if ( (a3 & 0x1F) != 0 )
      {
        if ( fwrite("\n", 1u, 1u, a2) != 1 )
          goto LABEL_33;
        v34 = a3 & 0x1F;
        do
        {
          v35 = v34;
          if ( v34 >= 0x20 )
            v35 = 32;
          if ( fwrite("                                ", v35, 1u, a2) != 1 )
            goto LABEL_33;
          v34 -= v35;
        }
        while ( v34 );
        v7 = a3 & 0x10000;
        v8 = a3 & 0xFFFEFFFF;
      }
      if ( (a3 & 0x80) == 0 )
      {
        v36 = v66;
        v74 = v7;
        v37 = a1;
        while ( 1 )
        {
          if ( *(_DWORD *)v37 )
          {
            v38 = 0;
          }
          else
          {
            v38 = (char *)*((_DWORD *)v36 + 1);
            if ( v68 == v38 )
              v38 = 0;
          }
          v39 = strlen(v36 + 16);
          sub_20128(
            (unsigned __int8 *)v36 + 16,
            v39,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20438,
            (int)a2,
            v8);
          if ( fwrite(v59, v61, 1u, a2) != 1
            || sub_23BB0(*((_DWORD **)v36 + 3), v8, 1, &v75, __SPAIR64__((unsigned int)a2, sub_20438)) )
          {
            goto LABEL_33;
          }
          if ( !v38 )
          {
            v7 = v74;
            v17 = 0;
            if ( !sub_1FFC4(v8, 0, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)a2) )
              goto LABEL_145;
            goto LABEL_33;
          }
          if ( fwrite(",", 1u, 1u, a2) != 1 )
            goto LABEL_33;
          v40 = nmemb;
          if ( nmemb )
          {
            if ( fwrite("\n", 1u, 1u, a2) != 1 )
              goto LABEL_33;
            while ( 1 )
            {
              v41 = v40;
              if ( v40 >= 0x20 )
                v41 = 32;
              if ( fwrite("                                ", v41, 1u, a2) != 1 )
                goto LABEL_33;
              v40 -= v41;
              if ( !v40 )
                goto LABEL_85;
            }
          }
          if ( v63 )
          {
LABEL_85:
            v36 = v38;
          }
          else
          {
            if ( sub_20438(" ", 1u, a2) )
              goto LABEL_33;
            v36 = v38;
          }
        }
      }
      nmemba = (size_t)json_object_size(a1);
      v49 = (char *)jsonp_malloc((void *)(4 * nmemba));
      v50 = v49;
      if ( !v49 )
        goto LABEL_33;
      if ( *(_DWORD *)a1 )
      {
        *(_DWORD *)v49 = v66 + 16;
      }
      else
      {
        v51 = v49 - 4;
        v52 = v66;
        do
        {
          v53 = v52 + 16;
          v52 = (char *)*((_DWORD *)v52 + 1);
          *((_DWORD *)v51 + 1) = v53;
          v51 += 4;
        }
        while ( v68 != v52 && v52 );
      }
      qsort(v49, nmemba, 4u, (__compar_fn_t)sub_20120);
      if ( nmemba )
      {
        v67 = v50 - 4;
        v65 = 0;
        v73 = a1;
        while ( 1 )
        {
          v55 = (char *)*((_DWORD *)v67 + 1);
          v67 += 4;
          v56 = (_DWORD *)json_object_get(v73, v55);
          v57 = strlen(v55);
          sub_20128(
            (unsigned __int8 *)v55,
            v57,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20438,
            (int)a2,
            v8);
          v58 = fwrite(v59, v61, 1u, a2);
          if ( v58 != 1 || sub_23BB0(v56, v8, 1, &v75, __SPAIR64__((unsigned int)a2, sub_20438)) )
            break;
          if ( nmemba - 1 > v65++ )
          {
            if ( fwrite(",", v58, v58, a2) != 1
              || sub_1FFC4(v8, 1, 1, (int (__fastcall *)(char *, int, int))sub_20438, (int)a2) )
            {
              break;
            }
          }
          else if ( sub_1FFC4(v8, 0, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)a2) )
          {
            break;
          }
          if ( nmemba == v65 )
            goto LABEL_144;
        }
        v17 = -1;
        jsonp_free(v50);
        goto LABEL_16;
      }
LABEL_144:
      jsonp_free(v50);
LABEL_145:
      hashtable_del(&v75, s);
      if ( !v7 )
        v17 = sub_20438("}", 1u, a2);
LABEL_16:
      v18 = ptr;
      if ( ptr != &v78 )
      {
        do
        {
          v19 = (_DWORD *)v18[5];
          v20 = (int *)v18[1];
          if ( v19 )
          {
            v21 = v19 + 1;
            if ( v19[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v22 = __ldrex(v21);
                v23 = v22 - 1;
              }
              while ( __strex(v23, v21) );
              if ( !v23 )
                json_delete(v19);
            }
          }
          off_12A254(v18);
          v18 = v20;
        }
        while ( v20 != &v78 );
      }
LABEL_24:
      v6 = (char *)v76;
      if ( v76 )
        goto LABEL_25;
      return v17;
    case 1:
LABEL_34:
      v17 = sub_D1A38(&v75, a1, s);
      if ( v17 )
        goto LABEL_33;
      if ( *(_DWORD *)a1 != 1 )
      {
        if ( !v7 )
        {
          if ( fwrite("[", 1u, 1u, a2) != 1 )
            goto LABEL_33;
LABEL_38:
          hashtable_del(&v75, s);
          v27 = fwrite(&word_106544, 1u, 1u, a2);
          v17 = v27 - 1;
          if ( v27 != 1 )
            v17 = -1;
          goto LABEL_16;
        }
LABEL_116:
        hashtable_del(&v75, s);
        goto LABEL_16;
      }
      v60 = *((_DWORD *)a1 + 3);
      if ( v7 )
      {
        if ( !*((_DWORD *)a1 + 3) )
          goto LABEL_116;
      }
      else
      {
        if ( fwrite("[", 1u, 1u, a2) != 1 )
          goto LABEL_33;
        if ( !v60 )
          goto LABEL_38;
      }
      v62 = a3 & 0x1F;
      if ( (a3 & 0x1F) != 0 )
      {
        if ( fwrite("\n", 1u, 1u, a2) != 1 )
          goto LABEL_33;
        v42 = a3 & 0x1F;
        do
        {
          v43 = v42;
          if ( v42 >= 0x20 )
            v43 = 32;
          if ( fwrite("                                ", v43, 1u, a2) != 1 )
            goto LABEL_33;
          v42 -= v43;
        }
        while ( v42 );
        v7 = a3 & 0x10000;
      }
      v72 = (void *)v7;
      v44 = 0;
      v69 = a3 & 0x20;
      v64 = a1;
      while ( 1 )
      {
        v45 = json_array_get(v64, v44);
        v17 = sub_23BB0(v45, v8, 1, &v75, __SPAIR64__((unsigned int)a2, sub_20438));
        if ( v17 )
          goto LABEL_33;
        if ( v44 >= v60 - 1 )
        {
          if ( sub_1FFC4(v8, 0, 0, (int (__fastcall *)(char *, int, int))sub_20438, (int)a2) )
            goto LABEL_33;
        }
        else
        {
          if ( fwrite(",", 1u, 1u, a2) != 1 )
            goto LABEL_33;
          v46 = v62;
          if ( v62 )
          {
            if ( fwrite("\n", 1u, 1u, a2) != 1 )
              goto LABEL_33;
            while ( 1 )
            {
              v47 = v46;
              if ( v46 >= 0x20 )
                v47 = 32;
              if ( fwrite("                                ", v47, 1u, a2) != 1 )
                break;
              v46 -= v47;
              if ( !v46 )
                goto LABEL_107;
            }
LABEL_33:
            v17 = -1;
            goto LABEL_16;
          }
          if ( !v69 && sub_20438(" ", 1u, a2) )
            goto LABEL_33;
        }
LABEL_107:
        if ( ++v44 == v60 )
        {
          hashtable_del(&v75, s);
          if ( !v72 )
            v17 = sub_20438(&word_106544, 1u, a2);
          goto LABEL_16;
        }
      }
    case 2:
LABEL_41:
      v17 = sub_20128(
              *((unsigned __int8 **)a1 + 2),
              *((_DWORD *)a1 + 3),
              (int (__fastcall *)(unsigned __int8 *, int, int))sub_20438,
              (int)a2,
              a3 & 0xFFFEFFFF);
      goto LABEL_16;
    case 3:
LABEL_42:
      v28 = snprintf(s, 0x64u, "%lld", *((_QWORD *)a1 + 1));
      if ( v28 > 0x63 )
        goto LABEL_33;
      v29 = a2;
      v30 = v28;
      goto LABEL_44;
    case 4:
LABEL_47:
      v30 = jsonp_dtostr(s, 0x64u, (unsigned __int16)a3 >> 11);
      if ( v30 < 0 )
        goto LABEL_33;
      v29 = a2;
LABEL_44:
      v31 = fwrite(s, v30, 1u, v29);
      v17 = v31 - 1;
      if ( v31 != 1 )
        v17 = -1;
      goto LABEL_16;
    case 5:
LABEL_49:
      v14 = "true";
      v15 = a2;
      goto LABEL_14;
    case 6:
LABEL_50:
      v32 = fwrite("false", 5u, 1u, a2);
      v17 = v32 - 1;
      if ( v32 != 1 )
        v17 = -1;
      goto LABEL_16;
    case 7:
LABEL_13:
      v14 = "null";
      v15 = a2;
LABEL_14:
      v16 = fwrite(v14, 4u, 1u, v15);
      v17 = v16 - 1;
      if ( v16 != 1 )
        v17 = -1;
      goto LABEL_16;
    default:
      v17 = -1;
      goto LABEL_24;
  }
}
