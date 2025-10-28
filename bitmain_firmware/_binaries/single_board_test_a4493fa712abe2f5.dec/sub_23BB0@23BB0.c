int __fastcall sub_23BB0(_DWORD *a1, int a2, int a3, int *a4, __int64 a5)
{
  int v6; // r9
  unsigned int v7; // r8
  char v10; // r10
  char *v11; // r3
  int v12; // r3
  int v13; // r7
  unsigned int v15; // r0
  int v16; // r1
  _DWORD *v17; // r2
  int v18; // r6
  _DWORD *v19; // r7
  size_t v20; // r0
  _DWORD *v21; // r0
  unsigned int v22; // r10
  int v23; // r6
  _DWORD *v24; // r0
  bool v25; // cc
  size_t v26; // r3
  char *v27; // r0
  _DWORD *v28; // r1
  char *v29; // r10
  _DWORD *v30; // r11
  unsigned int v31; // r4
  char *v32; // r8
  unsigned int v33; // r7
  int v34; // r10
  char *v35; // t1
  _DWORD *v36; // r9
  size_t v37; // r0
  int v38; // [sp+Ch] [bp-98h]
  int v39; // [sp+Ch] [bp-98h]
  char *v40; // [sp+10h] [bp-94h]
  int v41; // [sp+10h] [bp-94h]
  _DWORD *v42; // [sp+14h] [bp-90h]
  size_t nmemb; // [sp+18h] [bp-8Ch]
  int v44; // [sp+1Ch] [bp-88h]
  int v45; // [sp+1Ch] [bp-88h]
  void *base; // [sp+20h] [bp-84h]
  int v47; // [sp+28h] [bp-7Ch]
  char *v48; // [sp+28h] [bp-7Ch]
  char s[104]; // [sp+3Ch] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  v6 = a2 & 0x10000;
  v7 = a2 & 0xFFFEFFFF;
  v10 = a2;
  switch ( *a1 )
  {
    case 0:
      v11 = ":";
      if ( (a2 & 0x20) == 0 )
        v11 = ": ";
      v40 = v11;
      if ( (a2 & 0x20) != 0 )
        v12 = 1;
      else
        v12 = 2;
      v38 = v12;
      v13 = sub_D1A38(a4, a1, s);
      if ( v13 )
        return -1;
      if ( *a1 || (v17 = (_DWORD *)a1[8], v42 = v17, v17 == a1 + 7) )
      {
        if ( v6 )
          goto LABEL_55;
        if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)("{", 1, HIDWORD(a5)) )
          return -1;
LABEL_53:
        hashtable_del(a4, s);
        return ((int (__fastcall *)(const char *, int, _DWORD))a5)("}", 1, HIDWORD(a5));
      }
      if ( v6 )
      {
        if ( v17 )
          goto LABEL_29;
LABEL_55:
        hashtable_del(a4, s);
        return v13;
      }
      if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)("{", 1, HIDWORD(a5)) )
        return -1;
      if ( !v42 )
        goto LABEL_53;
LABEL_29:
      v44 = a3 + 1;
      v13 = sub_1FFC4(v7, a3 + 1, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5));
      if ( v13 )
        return -1;
      if ( (v10 & 0x80) == 0 )
      {
        v47 = a3;
        v18 = (int)v42;
        while ( 1 )
        {
          v19 = json_object_iter_next(a1, v18);
          v20 = strlen((const char *)(v18 + 16));
          sub_20128(
            (unsigned __int8 *)(v18 + 16),
            v20,
            (int (__fastcall *)(unsigned __int8 *, int, int))a5,
            SHIDWORD(a5),
            v7);
          if ( ((int (__fastcall *)(char *, int, _DWORD))a5)(v40, v38, HIDWORD(a5)) )
            return -1;
          v21 = *(_DWORD **)(v18 + 12);
          v18 = (int)v19;
          if ( sub_23BB0(v21, v7, v44, a4, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
            return -1;
          if ( !v19 )
          {
            v13 = 0;
            if ( !sub_1FFC4(v7, v47, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
              goto LABEL_76;
            return -1;
          }
          if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)(",", 1, HIDWORD(a5))
            || sub_1FFC4(v7, v44, 1, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            return -1;
          }
        }
      }
      if ( *a1 )
      {
        nmemb = 0;
        v26 = 0;
      }
      else
      {
        v26 = a1[2];
        nmemb = v26;
      }
      v27 = (char *)jsonp_malloc((void *)(4 * v26));
      base = v27;
      if ( !v27 )
        return -1;
      v28 = v42;
      v29 = v27 - 4;
      v48 = v27 - 4;
      do
      {
        *((_DWORD *)v29 + 1) = v28 + 4;
        v29 += 4;
        v28 = json_object_iter_next(a1, (int)v28);
      }
      while ( v28 );
      qsort(base, nmemb, 4u, (__compar_fn_t)sub_20120);
      if ( nmemb )
      {
        v30 = a1;
        v31 = v7;
        v32 = v48;
        v33 = 0;
        v34 = a3 + 1;
        v45 = v6;
        while ( 1 )
        {
          v35 = (char *)*((_DWORD *)v32 + 1);
          v32 += 4;
          v36 = (_DWORD *)json_object_get(v30, v35);
          v37 = strlen(v35);
          sub_20128((unsigned __int8 *)v35, v37, (int (__fastcall *)(unsigned __int8 *, int, int))a5, SHIDWORD(a5), v31);
          if ( ((int (__fastcall *)(char *, int, _DWORD))a5)(v40, v38, HIDWORD(a5))
            || sub_23BB0(v36, v31, v34, a4, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            break;
          }
          v25 = nmemb - 1 > v33++;
          if ( v25 )
          {
            if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)(",", 1, HIDWORD(a5))
              || sub_1FFC4(v31, v34, 1, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
            {
              break;
            }
          }
          else if ( sub_1FFC4(v31, a3, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            break;
          }
          if ( v33 == nmemb )
          {
            v6 = v45;
            v13 = 0;
            goto LABEL_75;
          }
        }
        v13 = -1;
        jsonp_free(base);
      }
      else
      {
LABEL_75:
        jsonp_free(base);
LABEL_76:
        hashtable_del(a4, s);
        if ( !v6 )
          return ((int (__fastcall *)(const char *, int, _DWORD))a5)("}", 1, HIDWORD(a5));
      }
      return v13;
    case 1:
      v13 = sub_D1A38(a4, a1, s);
      if ( v13 )
        return -1;
      if ( *a1 != 1 )
      {
        if ( v6 )
          goto LABEL_55;
        if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)("[", 1, HIDWORD(a5)) )
          return -1;
        goto LABEL_16;
      }
      v39 = a1[3];
      if ( v6 )
      {
        if ( !a1[3] )
          goto LABEL_55;
      }
      else
      {
        if ( ((int (__fastcall *)(const char *))a5)("[") )
          return -1;
        if ( !v39 )
        {
LABEL_16:
          hashtable_del(a4, s);
          return ((int (__fastcall *)(__int16 *, int, _DWORD))a5)(&word_106544, 1, HIDWORD(a5));
        }
      }
      if ( !sub_1FFC4(v7, a3 + 1, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
      {
        v41 = a3;
        v22 = 0;
        v23 = a3 + 1;
        while ( 1 )
        {
          v24 = json_array_get(a1, v22);
          v13 = sub_23BB0(v24, v7, v23, a4, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5));
          if ( v13 )
            break;
          v25 = v39 - 1 > v22++;
          if ( v25 )
          {
            if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)(",", 1, HIDWORD(a5))
              || sub_1FFC4(v7, v23, 1, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
            {
              return -1;
            }
          }
          else if ( sub_1FFC4(v7, v41, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            return -1;
          }
          if ( v22 == v39 )
          {
            hashtable_del(a4, s);
            if ( !v6 )
              return ((int (__fastcall *)(__int16 *, int, _DWORD))a5)(&word_106544, 1, HIDWORD(a5));
            return v13;
          }
        }
      }
      return -1;
    case 2:
      return sub_20128(
               (unsigned __int8 *)a1[2],
               a1[3],
               (int (__fastcall *)(unsigned __int8 *, int, int))a5,
               SHIDWORD(a5),
               v7);
    case 3:
      v15 = snprintf(s, 0x64u, "%lld", *((_QWORD *)a1 + 1));
      if ( v15 > 0x63 )
        return -1;
      return ((int (__fastcall *)(char *, unsigned int, _DWORD))a5)(s, v15, HIDWORD(a5));
    case 4:
      v16 = jsonp_dtostr(s, 0x64u, (unsigned __int16)a2 >> 11);
      if ( v16 < 0 )
        return -1;
      return ((int (__fastcall *)(char *, int, _DWORD))a5)(s, v16, HIDWORD(a5));
    case 5:
      return ((int (__fastcall *)(const char *, int, _DWORD))a5)("true", 4, HIDWORD(a5));
    case 6:
      return ((int (__fastcall *)(const char *, int, _DWORD))a5)("false", 5, HIDWORD(a5));
    case 7:
      return ((int (__fastcall *)(const char *, int, _DWORD))a5)("null", 4, HIDWORD(a5));
    default:
      return -1;
  }
}
