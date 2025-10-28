char *__fastcall json_dumps(_DWORD *a1, int a2)
{
  char *v4; // r0
  char *v5; // r4
  int v6; // r12
  int v7; // r8
  char *v8; // r0
  int v9; // r10
  unsigned int v10; // r9
  unsigned int v11; // lr
  _DWORD *v12; // r3
  unsigned int v13; // r2
  char *v14; // r3
  int appended; // r8
  char *v16; // r6
  size_t v17; // r7
  char *v18; // r0
  _DWORD *v20; // r6
  _DWORD *v21; // r0
  int *v22; // r7
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  char *v26; // r3
  int v27; // r3
  size_t v28; // r0
  signed int v29; // r2
  const char *v30; // r3
  const char *v31; // r8
  const char *v32; // r6
  size_t v33; // r0
  _DWORD *v34; // r0
  unsigned int v35; // r6
  _DWORD *v36; // r0
  bool v37; // cc
  char *v38; // r0
  _DWORD *v39; // r1
  char *v40; // r6
  unsigned int v41; // r6
  char *v42; // r8
  size_t v43; // r0
  size_t v44; // [sp+10h] [bp-BCh]
  int v45; // [sp+10h] [bp-BCh]
  char *v46; // [sp+14h] [bp-B8h]
  const char *v47; // [sp+1Ch] [bp-B0h]
  int v48; // [sp+1Ch] [bp-B0h]
  void *base; // [sp+20h] [bp-ACh]
  size_t nmemb; // [sp+24h] [bp-A8h]
  char *v51; // [sp+28h] [bp-A4h]
  int v52; // [sp+2Ch] [bp-A0h]
  _DWORD *v53; // [sp+2Ch] [bp-A0h]
  char *s[3]; // [sp+3Ch] [bp-90h] BYREF
  int v55; // [sp+48h] [bp-84h] BYREF
  void *ptr; // [sp+4Ch] [bp-80h]
  int v57; // [sp+50h] [bp-7Ch]
  int v58; // [sp+54h] [bp-78h] BYREF
  void *v59; // [sp+58h] [bp-74h]
  _DWORD v60[2]; // [sp+5Ch] [bp-70h] BYREF
  char src[104]; // [sp+64h] [bp-68h] BYREF

  s[2] = (char *)16;
  s[1] = 0;
  v4 = (char *)off_12A258(0x10u);
  v5 = v4;
  s[0] = v4;
  if ( !v4 )
    return v5;
  v6 = a2 & 0x200;
  *v4 = 0;
  if ( (a2 & 0x200) != 0 )
  {
LABEL_5:
    v7 = 0;
    v57 = 3;
    v55 = 0;
    v8 = (char *)off_12A258(0x40u);
    v6 = (int)v8;
    ptr = v8;
    if ( v8 )
    {
      v59 = &v58;
      v9 = a2 & 0x10000;
      v58 = (int)&v58;
      v10 = a2 & 0xFFFEFFFF;
      v11 = 1 << v57;
      v60[0] = v60;
      v60[1] = v60;
      if ( 1 << v57 )
      {
        if ( v11 <= 4 )
        {
          v13 = 0;
        }
        else
        {
          v12 = v8;
          v13 = ((v11 - 5) & 0xFFFFFFFC) + 4;
          do
          {
            v7 += 4;
            __pld(v12 + 59);
            *v12 = &v58;
            v12[1] = &v58;
            v12[2] = &v58;
            v12[3] = &v58;
            v12[4] = &v58;
            v12[5] = &v58;
            v12[6] = &v58;
            v12[7] = &v58;
            v12 += 8;
          }
          while ( v7 != v13 );
        }
        v14 = &v8[8 * v13];
        do
        {
          *((_DWORD *)v14 + 1) = &v58;
          v14 += 8;
          *(_DWORD *)&v8[8 * v13++] = &v58;
        }
        while ( v11 > v13 );
        if ( a1 )
        {
          switch ( *a1 )
          {
            case 0:
              goto LABEL_33;
            case 1:
              goto LABEL_40;
            case 2:
              goto LABEL_46;
            case 3:
              goto LABEL_47;
            case 4:
              goto LABEL_49;
            case 5:
              goto LABEL_51;
            case 6:
              goto LABEL_52;
            case 7:
              goto LABEL_23;
            default:
              goto LABEL_39;
          }
        }
        goto LABEL_39;
      }
      if ( !a1 )
      {
        v5 = 0;
        off_12A254(v8);
LABEL_75:
        v16 = s[0];
        goto LABEL_20;
      }
      switch ( *a1 )
      {
        case 0:
LABEL_33:
          v26 = ":";
          if ( (a2 & 0x20) == 0 )
            v26 = ": ";
          v46 = v26;
          if ( (a2 & 0x20) != 0 )
            v27 = 1;
          else
            v27 = 2;
          v44 = v27;
          appended = sub_D1A38(&v55, a1, src);
          if ( appended )
            goto LABEL_39;
          if ( *a1 || (v30 = (const char *)a1[8], v47 = v30, v30 == (const char *)(a1 + 7)) )
          {
            if ( v9 )
              goto LABEL_114;
            if ( strbuffer_append_bytes((const void **)s, "{", 1u) )
              goto LABEL_39;
            goto LABEL_91;
          }
          if ( !v9 )
          {
            if ( strbuffer_append_bytes((const void **)s, "{", 1u) )
              goto LABEL_39;
            if ( v47 )
            {
LABEL_62:
              appended = sub_1FFC4(a2, 1, 0, (int (__fastcall *)(char *, int, int))((char *)sub_20060 + 1), (int)s);
              if ( appended )
                goto LABEL_39;
              if ( (a2 & 0x80) == 0 )
              {
                v31 = v47;
                v52 = a2 & 0x10000;
                while ( 1 )
                {
                  if ( *a1 )
                  {
                    v32 = 0;
                  }
                  else
                  {
                    v32 = (const char *)*((_DWORD *)v31 + 1);
                    if ( a1 + 7 == (_DWORD *)v32 )
                      v32 = 0;
                  }
                  v33 = strlen(v31 + 16);
                  sub_20128(
                    (unsigned __int8 *)v31 + 16,
                    v33,
                    (int (__fastcall *)(unsigned __int8 *, int, int))sub_20060,
                    (int)s,
                    v10);
                  if ( strbuffer_append_bytes((const void **)s, v46, v44) )
                    goto LABEL_39;
                  v34 = (_DWORD *)*((_DWORD *)v31 + 3);
                  v31 = v32;
                  if ( sub_23BB0(v34, v10, 1, &v55, __SPAIR64__(s, sub_20060)) )
                    goto LABEL_39;
                  if ( !v32 )
                    break;
                  if ( strbuffer_append_bytes((const void **)s, ",", 1u)
                    || sub_1FFC4(v10, 1, 1, (int (__fastcall *)(char *, int, int))sub_20060, (int)s) )
                  {
                    goto LABEL_39;
                  }
                }
                appended = 0;
                v9 = v52;
                if ( sub_1FFC4(v10, 0, 0, (int (__fastcall *)(char *, int, int))sub_20060, (int)s) )
                  goto LABEL_39;
LABEL_119:
                hashtable_del(&v55, src);
                if ( v9 )
                  goto LABEL_24;
LABEL_92:
                appended = strbuffer_append_bytes((const void **)s, "}", 1u);
                goto LABEL_24;
              }
              nmemb = (size_t)json_object_size(a1);
              v38 = (char *)jsonp_malloc((void *)(4 * nmemb));
              base = v38;
              if ( v38 )
              {
                v39 = v47;
                v40 = v38 - 4;
                v51 = v38 - 4;
                do
                {
                  *((_DWORD *)v40 + 1) = v39 + 4;
                  v40 += 4;
                  v39 = json_object_iter_next(a1, (int)v39);
                }
                while ( v39 );
                qsort(base, nmemb, 4u, (__compar_fn_t)sub_20120);
                if ( !nmemb )
                {
LABEL_118:
                  jsonp_free(base);
                  goto LABEL_119;
                }
                v41 = 0;
                while ( 1 )
                {
                  v42 = (char *)*((_DWORD *)v51 + 1);
                  v51 += 4;
                  v53 = (_DWORD *)json_object_get(a1, v42);
                  v43 = strlen(v42);
                  sub_20128(
                    (unsigned __int8 *)v42,
                    v43,
                    (int (__fastcall *)(unsigned __int8 *, int, int))sub_20060,
                    (int)s,
                    v10);
                  if ( strbuffer_append_bytes((const void **)s, v46, v44)
                    || sub_23BB0(v53, v10, 1, &v55, __SPAIR64__(s, sub_20060)) )
                  {
                    break;
                  }
                  v37 = nmemb - 1 > v41++;
                  if ( v37 )
                  {
                    if ( strbuffer_append_bytes((const void **)s, ",", 1u)
                      || sub_1FFC4(v10, 1, 1, (int (__fastcall *)(char *, int, int))sub_20060, (int)s) )
                    {
                      break;
                    }
                  }
                  else if ( sub_1FFC4(v10, 0, 0, (int (__fastcall *)(char *, int, int))sub_20060, (int)s) )
                  {
                    break;
                  }
                  if ( nmemb == v41 )
                  {
                    appended = 0;
                    goto LABEL_118;
                  }
                }
                appended = -1;
                jsonp_free(base);
LABEL_24:
                v20 = v59;
                if ( v59 != &v58 )
                {
                  do
                  {
                    v21 = (_DWORD *)v20[5];
                    v22 = (int *)v20[1];
                    if ( v21 )
                    {
                      v23 = v21 + 1;
                      if ( v21[1] != -1 )
                      {
                        __dmb(0xBu);
                        do
                        {
                          v24 = __ldrex(v23);
                          v25 = v24 - 1;
                        }
                        while ( __strex(v25, v23) );
                        if ( !v25 )
                          json_delete(v21);
                      }
                    }
                    off_12A254(v20);
                    v20 = v22;
                  }
                  while ( v22 != &v58 );
                }
LABEL_15:
                if ( ptr )
                  off_12A254(ptr);
                v16 = s[0];
                v5 = 0;
                if ( appended )
                  goto LABEL_20;
                v17 = strlen(s[0]);
                v18 = (char *)off_12A258(v17 + 1);
                v5 = v18;
                if ( v18 )
                {
                  memcpy(v18, v16, v17);
                  v5[v17] = 0;
                  v16 = s[0];
                  goto LABEL_20;
                }
                goto LABEL_75;
              }
LABEL_39:
              appended = -1;
              goto LABEL_24;
            }
LABEL_91:
            hashtable_del(&v55, src);
            goto LABEL_92;
          }
          if ( v30 )
            goto LABEL_62;
          goto LABEL_114;
        case 1:
LABEL_40:
          appended = sub_D1A38(&v55, a1, src);
          if ( appended )
            goto LABEL_39;
          if ( *a1 != 1 )
          {
            if ( v9 )
              goto LABEL_114;
            if ( strbuffer_append_bytes((const void **)s, "[", 1u) )
              goto LABEL_39;
LABEL_44:
            hashtable_del(&v55, src);
            goto LABEL_45;
          }
          v45 = a1[3];
          if ( v9 )
          {
            if ( !a1[3] )
            {
LABEL_114:
              hashtable_del(&v55, src);
              goto LABEL_24;
            }
          }
          else
          {
            if ( strbuffer_append_bytes((const void **)s, "[", 1u) )
              goto LABEL_39;
            if ( !v45 )
              goto LABEL_44;
          }
          if ( sub_1FFC4(a2, 1, 0, (int (__fastcall *)(char *, int, int))((char *)sub_20060 + 1), (int)s) )
            goto LABEL_39;
          v48 = a2 & 0x10000;
          v35 = 0;
          do
          {
            v36 = json_array_get(a1, v35);
            if ( sub_23BB0(v36, v10, 1, &v55, __SPAIR64__(s, sub_20060)) )
              goto LABEL_39;
            v37 = v45 - 1 > v35++;
            if ( v37 )
            {
              if ( strbuffer_append_bytes((const void **)s, ",", 1u)
                || sub_1FFC4(v10, 1, 1, (int (__fastcall *)(char *, int, int))sub_20060, (int)s) )
              {
                goto LABEL_39;
              }
            }
            else if ( sub_1FFC4(v10, 0, 0, (int (__fastcall *)(char *, int, int))sub_20060, (int)s) )
            {
              goto LABEL_39;
            }
          }
          while ( v35 != v45 );
          appended = 0;
          hashtable_del(&v55, src);
          if ( v48 )
            goto LABEL_24;
LABEL_45:
          appended = strbuffer_append_bytes((const void **)s, &word_106544, 1u);
          goto LABEL_24;
        case 2:
LABEL_46:
          appended = sub_20128(
                       (unsigned __int8 *)a1[2],
                       a1[3],
                       (int (__fastcall *)(unsigned __int8 *, int, int))sub_20060,
                       (int)s,
                       a2 & 0xFFFEFFFF);
          goto LABEL_24;
        case 3:
LABEL_47:
          v28 = snprintf(src, 0x64u, "%lld", *((_QWORD *)a1 + 1));
          if ( v28 > 0x63 )
            goto LABEL_39;
          appended = strbuffer_append_bytes((const void **)s, src, v28);
          goto LABEL_24;
        case 4:
LABEL_49:
          v29 = jsonp_dtostr(src, 0x64u, (unsigned __int16)a2 >> 11);
          if ( v29 < 0 )
            goto LABEL_39;
          appended = strbuffer_append_bytes((const void **)s, src, v29);
          goto LABEL_24;
        case 5:
LABEL_51:
          appended = strbuffer_append_bytes((const void **)s, "true", 4u);
          goto LABEL_24;
        case 6:
LABEL_52:
          appended = strbuffer_append_bytes((const void **)s, "false", 5u);
          goto LABEL_24;
        case 7:
LABEL_23:
          appended = strbuffer_append_bytes((const void **)s, "null", 4u);
          goto LABEL_24;
        default:
          appended = -1;
          goto LABEL_15;
      }
    }
LABEL_56:
    v5 = (char *)v6;
    v16 = s[0];
    goto LABEL_20;
  }
  if ( a1 )
  {
    if ( *a1 > 1u )
      goto LABEL_56;
    goto LABEL_5;
  }
  v5 = 0;
  v16 = s[0];
LABEL_20:
  if ( v16 )
    off_12A254(v16);
  return v5;
}
