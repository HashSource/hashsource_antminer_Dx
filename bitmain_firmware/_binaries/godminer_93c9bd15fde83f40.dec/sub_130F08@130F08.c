_DWORD *__fastcall sub_130F08(int a1, int a2, int a3)
{
  int v4; // r1
  int v7; // r3
  int v8; // r2
  _DWORD *v9; // r5
  __int64 v11; // r8
  _DWORD *v12; // r0
  int v13; // r3
  void *v14; // r8
  size_t v15; // r2
  _DWORD *v16; // r0
  _BOOL4 v17; // r2
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v21; // r3
  _DWORD *v22; // r1
  int v23; // r3
  int v24; // r1
  int v25; // r3
  _DWORD *v26; // r0
  unsigned int *arg; // [sp+0h] [bp-Ch]
  _DWORD *v28; // [sp+4h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 56);
  v7 = v4 + 1;
  *(_DWORD *)(a1 + 56) = v4 + 1;
  if ( (unsigned int)(v4 + 1) > 0x800 )
  {
    v9 = 0;
    sub_12DF38(a3, (_DWORD *)a1, 2, "maximum parsing depth reached");
    return v9;
  }
  v8 = *(_DWORD *)(a1 + 60);
  if ( v8 == 257 )
  {
    v9 = json_integer(*(_QWORD *)(a1 + 64));
    goto LABEL_57;
  }
  if ( v8 <= 257 )
  {
    if ( v8 == 91 )
    {
      v9 = json_array();
      if ( !v9 )
        return 0;
      sub_12FF30(a1, a3);
      v21 = *(_DWORD *)(a1 + 60);
      if ( v21 != 93 )
      {
        if ( v21 )
        {
          while ( 1 )
          {
            v22 = sub_130F08(a1, a2, a3);
            if ( !v22 || json_array_append_new((int)v9, v22) )
              break;
            sub_12FF30(a1, a3);
            v23 = *(_DWORD *)(a1 + 60);
            if ( v23 != 44 )
            {
              if ( v23 == 93 )
                goto LABEL_62;
              goto LABEL_54;
            }
            sub_12FF30(a1, a3);
            if ( !*(_DWORD *)(a1 + 60) )
              goto LABEL_54;
          }
        }
        else
        {
LABEL_54:
          sub_12DF38(a3, (_DWORD *)a1, 8, "']' expected");
        }
        goto LABEL_37;
      }
    }
    else
    {
      if ( v8 <= 91 )
      {
        if ( v8 == -1 )
        {
          v9 = 0;
          sub_12DF38(a3, (_DWORD *)a1, 8, "invalid token");
          return v9;
        }
        goto LABEL_55;
      }
      if ( v8 != 123 )
      {
        if ( v8 == 256 )
        {
          v11 = *(_QWORD *)(a1 + 64);
          if ( (a2 & 0x10) != 0 )
          {
            if ( !(_DWORD)v11 )
            {
              *(_DWORD *)(a1 + 68) = 0;
              return 0;
            }
          }
          else if ( memchr((const void *)v11, 0, HIDWORD(v11)) )
          {
            v9 = 0;
            sub_12DF38(a3, (_DWORD *)a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
            return v9;
          }
          v12 = off_1A25E8(0x10u);
          if ( !v12 )
          {
            v9 = 0;
            jsonp_free((void *)v11);
            *(_DWORD *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 68) = 0;
            return v9;
          }
          v12[1] = 1;
          *((_QWORD *)v12 + 1) = v11;
          v9 = v12;
          *v12 = 2;
          v7 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          goto LABEL_10;
        }
        goto LABEL_55;
      }
      v9 = json_object();
      if ( !v9 )
        return 0;
      sub_12FF30(a1, a3);
      v13 = *(_DWORD *)(a1 + 60);
      if ( v13 != 125 )
      {
        if ( v13 == 256 )
        {
          v14 = *(void **)(a1 + 64);
          v15 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          if ( !v14 )
            return 0;
          arg = v9 + 2;
          while ( 1 )
          {
            if ( memchr(v14, 0, v15) )
            {
              jsonp_free(v14);
              sub_12DF38(a3, (_DWORD *)a1, 13, "NUL byte in object key not supported");
              goto LABEL_37;
            }
            if ( (a2 & 1) != 0 && json_object_get(v9, (char *)v14) )
            {
              jsonp_free(v14);
              sub_12DF38(a3, (_DWORD *)a1, 14, "duplicate object key");
              goto LABEL_37;
            }
            sub_12FF30(a1, a3);
            if ( *(_DWORD *)(a1 + 60) != 58 )
            {
              jsonp_free(v14);
              sub_12DF38(a3, (_DWORD *)a1, 8, "':' expected");
              goto LABEL_37;
            }
            sub_12FF30(a1, a3);
            v16 = sub_130F08(a1, a2, a3);
            if ( !v16 )
              goto LABEL_36;
            v17 = v9 == v16;
            if ( *v9 )
              v17 = 1;
            if ( v17 )
            {
              if ( v16[1] != -1 )
              {
                v18 = v16 + 1;
                __dmb(0xBu);
                do
                {
                  v19 = __ldrex(v18);
                  v20 = v19 - 1;
                }
                while ( __strex(v20, v18) );
                if ( !v20 )
                  json_delete(v16);
              }
LABEL_36:
              jsonp_free(v14);
              goto LABEL_37;
            }
            v28 = v16;
            if ( hashtable_set(arg, (char *)v14, (int)v16) )
            {
              if ( v28[1] != -1 )
                sub_84ED0(v28);
              goto LABEL_36;
            }
            off_1A25EC(v14);
            sub_12FF30(a1, a3);
            v25 = *(_DWORD *)(a1 + 60);
            if ( v25 != 44 )
              break;
            sub_12FF30(a1, a3);
            if ( *(_DWORD *)(a1 + 60) != 256 )
              goto LABEL_75;
            v14 = *(void **)(a1 + 64);
            v15 = *(_DWORD *)(a1 + 68);
            *(_DWORD *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 68) = 0;
            if ( !v14 )
              return 0;
          }
          if ( v25 == 125 )
            goto LABEL_62;
          sub_12DF38(a3, (_DWORD *)a1, 8, "'}' expected");
        }
        else
        {
LABEL_75:
          sub_12DF38(a3, (_DWORD *)a1, 8, "string or '}' expected", arg);
        }
LABEL_37:
        if ( v9[1] != -1 )
        {
          v26 = v9;
          v9 = 0;
          sub_84ED0(v26);
          return v9;
        }
        return 0;
      }
    }
LABEL_62:
    v7 = *(_DWORD *)(a1 + 56);
    goto LABEL_10;
  }
  if ( v8 == 259 )
  {
    v9 = dword_1A24DC;
    v24 = v4 + 1;
    goto LABEL_59;
  }
  if ( v8 < 259 )
  {
    v9 = json_real();
LABEL_57:
    if ( v9 )
    {
      v24 = *(_DWORD *)(a1 + 56);
LABEL_59:
      v7 = v24;
      goto LABEL_10;
    }
    return 0;
  }
  if ( v8 == 260 )
  {
    v9 = dword_1A24E4;
    goto LABEL_10;
  }
  if ( v8 != 261 )
  {
LABEL_55:
    v9 = 0;
    sub_12DF38(a3, (_DWORD *)a1, 8, "unexpected token");
    return v9;
  }
  v9 = dword_1A25D8;
LABEL_10:
  *(_DWORD *)(a1 + 56) = v7 - 1;
  return v9;
}
