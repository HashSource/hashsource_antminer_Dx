int __fastcall sub_13144C(_DWORD *a1, int a2, int a3, unsigned int *a4, __int64 a5)
{
  int v7; // r9
  unsigned int v8; // r8
  char v10; // r10
  char *v11; // r12
  int v12; // r12
  int v13; // r7
  unsigned __int8 *v15; // r0
  unsigned int v16; // r0
  int v17; // r1
  const char *v18; // r3
  int v19; // r3
  char *v20; // r11
  const char *v21; // r6
  const char *v22; // r10
  size_t v23; // r0
  _DWORD *v24; // r0
  unsigned int v25; // r10
  int v26; // r6
  _DWORD *v27; // r0
  bool v28; // cc
  bool v29; // zf
  const char *v30; // r3
  char *v31; // r0
  _DWORD *v32; // r1
  char *v33; // r10
  char *v34; // r9
  unsigned int v35; // r7
  char *v36; // t1
  _DWORD *v37; // r10
  size_t v38; // r0
  int v39; // [sp+8h] [bp-94h]
  int v40; // [sp+8h] [bp-94h]
  char *v41; // [sp+Ch] [bp-90h]
  int v42; // [sp+Ch] [bp-90h]
  int v43; // [sp+Ch] [bp-90h]
  const char *v44; // [sp+10h] [bp-8Ch]
  const char *nmemb; // [sp+14h] [bp-88h]
  void *base; // [sp+18h] [bp-84h]
  int v47; // [sp+1Ch] [bp-80h]
  char *v48; // [sp+24h] [bp-78h]
  int v49; // [sp+28h] [bp-74h]
  char s[104]; // [sp+34h] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  v7 = a2 & 0x10000;
  v8 = a2 & 0xFFFEFFFF;
  v10 = a2;
  switch ( *a1 )
  {
    case 0:
      v11 = ":";
      if ( (a2 & 0x20) == 0 )
        v11 = ": ";
      v41 = v11;
      if ( (a2 & 0x20) != 0 )
        v12 = 1;
      else
        v12 = 2;
      v39 = v12;
      snprintf(s, 0xBu, "%p", a1);
      if ( hashtable_get((int)a4, s) )
        return -1;
      v13 = hashtable_set(a4, s, (int)dword_1A25D8);
      if ( v13 )
        return -1;
      if ( *a1 || (v18 = (const char *)a1[8], nmemb = (const char *)(a1 + 7), v44 = v18, v18 == (const char *)(a1 + 7)) )
      {
        if ( v7 )
          goto LABEL_62;
        if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)("{", 1, HIDWORD(a5)) )
          return -1;
LABEL_60:
        hashtable_del(a4, s);
        return ((int (__fastcall *)(char *, int, _DWORD))a5)("}", 1, HIDWORD(a5));
      }
      if ( v7 )
      {
        if ( v18 )
          goto LABEL_32;
LABEL_62:
        hashtable_del(a4, s);
        return v13;
      }
      if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)("{", 1, HIDWORD(a5)) )
        return -1;
      if ( !v44 )
        goto LABEL_60;
LABEL_32:
      v47 = a3 + 1;
      v13 = sub_12C90C(v8, a3 + 1, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5));
      if ( v13 )
        return -1;
      v19 = *a1;
      if ( (v10 & 0x80) == 0 )
      {
        v20 = v41;
        v42 = a3;
        v21 = v44;
        while ( 1 )
        {
          if ( v19 )
          {
            v22 = 0;
          }
          else
          {
            v22 = (const char *)*((_DWORD *)v21 + 1);
            if ( nmemb == v22 )
              v22 = 0;
          }
          v23 = strlen(v21 + 16);
          sub_12CAFC((unsigned __int8 *)v21 + 16, v23, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5), v8);
          if ( ((int (__fastcall *)(char *, int, _DWORD))a5)(v20, v39, HIDWORD(a5)) )
            return -1;
          v24 = (_DWORD *)*((_DWORD *)v21 + 3);
          v21 = v22;
          if ( sub_13144C(v24, v8, v47, (int *)a4, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
            return -1;
          if ( !v22 )
          {
            v13 = 0;
            if ( !sub_12C90C(v8, v42, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
              goto LABEL_86;
            return -1;
          }
          if ( ((int (__fastcall *)(__int16 *, int, _DWORD))a5)(&word_170C70, 1, HIDWORD(a5))
            || sub_12C90C(v8, v47, 1, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            return -1;
          }
          v19 = *a1;
        }
      }
      v29 = v19 == 0;
      if ( v19 )
      {
        v30 = 0;
        nmemb = 0;
      }
      else
      {
        v30 = (const char *)a1[2];
      }
      if ( v29 )
        nmemb = v30;
      v31 = (char *)jsonp_malloc((void *)(4 * (_DWORD)v30));
      base = v31;
      if ( !v31 )
        return -1;
      v32 = v44;
      v33 = v31 - 4;
      v48 = v31 - 4;
      do
      {
        *((_DWORD *)v33 + 1) = v32 + 4;
        v33 += 4;
        v32 = json_object_iter_next(a1, (int)v32);
      }
      while ( v32 );
      qsort(base, (size_t)nmemb, 4u, (__compar_fn_t)sub_12C9BC);
      if ( nmemb )
      {
        v49 = v7;
        v34 = v48;
        v35 = 0;
        while ( 1 )
        {
          v36 = (char *)*((_DWORD *)v34 + 1);
          v34 += 4;
          v37 = (_DWORD *)json_object_get(a1, v36);
          v38 = strlen(v36);
          sub_12CAFC((unsigned __int8 *)v36, v38, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5), v8);
          if ( ((int (__fastcall *)(char *, int, _DWORD))a5)(v41, v39, HIDWORD(a5))
            || sub_13144C(v37, v8, v47, (int *)a4, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            break;
          }
          v28 = (unsigned int)(nmemb - 1) > v35++;
          if ( v28 )
          {
            if ( ((int (__fastcall *)(__int16 *, int, _DWORD))a5)(&word_170C70, 1, HIDWORD(a5))
              || sub_12C90C(v8, v47, 1, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
            {
              break;
            }
          }
          else if ( sub_12C90C(v8, a3, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            break;
          }
          if ( (const char *)v35 == nmemb )
          {
            v13 = 0;
            v7 = v49;
            goto LABEL_85;
          }
        }
        v13 = -1;
        jsonp_free(base);
      }
      else
      {
LABEL_85:
        jsonp_free(base);
LABEL_86:
        hashtable_del(a4, s);
        if ( !v7 )
          return ((int (__fastcall *)(char *, int, _DWORD))a5)("}", 1, HIDWORD(a5));
      }
      return v13;
    case 1:
      snprintf(s, 0xBu, "%p", a1);
      if ( hashtable_get((int)a4, s) )
        return -1;
      v13 = hashtable_set(a4, s, (int)dword_1A25D8);
      if ( v13 )
        return -1;
      if ( *a1 != 1 )
      {
        if ( v7 )
          goto LABEL_62;
        if ( ((int (__fastcall *)(const char *, int, _DWORD))a5)("[", 1, HIDWORD(a5)) )
          return -1;
        goto LABEL_18;
      }
      v40 = a1[3];
      if ( v7 )
      {
        if ( !a1[3] )
          goto LABEL_62;
      }
      else
      {
        if ( ((int (__fastcall *)(const char *))a5)("[") )
          return -1;
        if ( !v40 )
        {
LABEL_18:
          hashtable_del(a4, s);
          return ((int (__fastcall *)(const char *, int, _DWORD))a5)("]", 1, HIDWORD(a5));
        }
      }
      v25 = sub_12C90C(v8, a3 + 1, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5));
      if ( !v25 )
      {
        v43 = a3;
        v26 = a3 + 1;
        while ( 1 )
        {
          v27 = json_array_get(a1, v25);
          v13 = sub_13144C(v27, v8, v26, (int *)a4, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5));
          if ( v13 )
            break;
          v28 = v40 - 1 > v25++;
          if ( v28 )
          {
            if ( ((int (__fastcall *)(__int16 *, int, _DWORD))a5)(&word_170C70, 1, HIDWORD(a5))
              || sub_12C90C(v8, v26, 1, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
            {
              return -1;
            }
          }
          else if ( sub_12C90C(v8, v43, 0, (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5)) )
          {
            return -1;
          }
          if ( v25 == v40 )
          {
            hashtable_del(a4, s);
            if ( !v7 )
              return ((int (__fastcall *)(const char *, int, _DWORD))a5)("]", 1, HIDWORD(a5));
            return v13;
          }
        }
      }
      return -1;
    case 2:
      v15 = (unsigned __int8 *)json_string_value(a1);
      return sub_12CAFC(v15, a1[3], (int (__fastcall *)(char *, int, int))a5, SHIDWORD(a5), v8);
    case 3:
      v16 = snprintf(s, 0x64u, "%lld", *((_QWORD *)a1 + 1));
      if ( v16 > 0x63 )
        return -1;
      v17 = v16;
      return ((int (__fastcall *)(char *, int, _DWORD))a5)(s, v17, HIDWORD(a5));
    case 4:
      v17 = jsonp_dtostr(s, 0x64u, (unsigned __int16)a2 >> 11, *a1);
      if ( v17 < 0 )
        return -1;
      return ((int (__fastcall *)(char *, int, _DWORD))a5)(s, v17, HIDWORD(a5));
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
