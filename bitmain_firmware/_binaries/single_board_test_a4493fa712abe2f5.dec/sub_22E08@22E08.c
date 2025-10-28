_DWORD *__fastcall sub_22E08(int a1, int a2, int a3)
{
  unsigned int v5; // r3
  int v6; // r2
  _DWORD *v8; // r5
  __int64 v10; // kr00_8
  _DWORD *v11; // r0
  int v12; // r3
  unsigned int v13; // r7
  unsigned int v14; // r2
  unsigned __int64 v15; // kr08_8
  _DWORD *v16; // r0
  _BOOL4 v17; // r2
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  _DWORD *v21; // r0
  _DWORD *v22; // r7
  void *(*v23)(size_t); // r2
  int v24; // r0
  int v25; // r3
  int v26; // r3
  _DWORD *v27; // r0
  __int64 v28; // r6
  _DWORD *v29; // r0
  __int64 v30; // r6
  _DWORD *v31; // r0
  int v32; // r3
  _DWORD *v33; // r0
  unsigned int *arg; // [sp+0h] [bp-Ch]
  _DWORD *v35; // [sp+4h] [bp-8h]

  v5 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v5;
  if ( v5 > 0x800 )
  {
    v8 = 0;
    sub_21104(a3, a1, 2, "maximum parsing depth reached");
    return v8;
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 == 257 )
  {
    v28 = *(_QWORD *)(a1 + 64);
    v29 = off_12A258(0x10u);
    if ( v29 )
    {
      *v29 = 3;
      v8 = v29;
      v29[1] = 1;
      *((_QWORD *)v29 + 1) = v28;
      v5 = *(_DWORD *)(a1 + 56);
      goto LABEL_10;
    }
    return 0;
  }
  if ( v6 < 258 )
  {
    if ( v6 == 91 )
    {
      v21 = off_12A258(0x14u);
      v22 = v21;
      if ( !v21 )
        return 0;
      v21[3] = 0;
      v21[2] = 8;
      v8 = v21;
      v23 = off_12A258;
      *v21 = 1;
      v21[1] = 1;
      v24 = (int)v23(32);
      v8[4] = v24;
      if ( !v24 )
      {
        v8 = 0;
        jsonp_free(v22);
        return v8;
      }
      sub_2236C(a1, a3);
      v25 = *(_DWORD *)(a1 + 60);
      if ( v25 != 93 )
      {
        if ( v25 )
        {
          while ( 1 )
          {
            v27 = sub_22E08(a1, a2, a3);
            if ( !v27 || json_array_append_new((int)v22, v27) )
              break;
            sub_2236C(a1, a3);
            v26 = *(_DWORD *)(a1 + 60);
            if ( v26 != 44 )
            {
              if ( v26 != 93 )
                goto LABEL_74;
              goto LABEL_62;
            }
            sub_2236C(a1, a3);
            if ( !*(_DWORD *)(a1 + 60) )
              goto LABEL_74;
          }
        }
        else
        {
LABEL_74:
          sub_21104(a3, a1, 8, "']' expected");
        }
        if ( v22[1] != -1 )
        {
          v8 = 0;
          sub_A8E50(v22);
          return v8;
        }
        return 0;
      }
      goto LABEL_62;
    }
    if ( v6 <= 91 )
    {
      if ( v6 == -1 )
      {
        v8 = 0;
        sub_21104(a3, a1, 8, "invalid token");
        return v8;
      }
      goto LABEL_55;
    }
    if ( v6 != 123 )
    {
      if ( v6 == 256 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( (a2 & 0x10) != 0 )
        {
          if ( !(_DWORD)v10 )
          {
            *(_DWORD *)(a1 + 68) = 0;
            return 0;
          }
        }
        else if ( memchr((const void *)v10, 0, HIDWORD(v10)) )
        {
          v8 = 0;
          sub_21104(a3, a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
          return v8;
        }
        v11 = off_12A258(0x10u);
        if ( !v11 )
        {
          v8 = 0;
          jsonp_free((void *)v10);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          return v8;
        }
        v11[1] = 1;
        *((_QWORD *)v11 + 1) = v10;
        v8 = v11;
        *v11 = 2;
        v5 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        goto LABEL_10;
      }
      goto LABEL_55;
    }
    v8 = json_object();
    if ( v8 )
    {
      sub_2236C(a1, a3);
      v12 = *(_DWORD *)(a1 + 60);
      if ( v12 != 125 )
      {
        if ( v12 == 256 )
        {
          v13 = *(_DWORD *)(a1 + 64);
          v14 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          v15 = __PAIR64__(v14, v13);
          if ( !v13 )
            return 0;
          arg = v8 + 2;
          while ( 1 )
          {
            if ( memchr((const void *)v15, 0, HIDWORD(v15)) )
            {
              jsonp_free((void *)v15);
              sub_21104(a3, a1, 13, "NUL byte in object key not supported");
              goto LABEL_36;
            }
            if ( (a2 & 1) != 0 && json_object_get(v8, (char *)v15) )
            {
              jsonp_free((void *)v15);
              sub_21104(a3, a1, 14, "duplicate object key");
              goto LABEL_36;
            }
            sub_2236C(a1, a3);
            if ( *(_DWORD *)(a1 + 60) != 58 )
            {
              jsonp_free((void *)v15);
              sub_21104(a3, a1, 8, "':' expected");
              goto LABEL_36;
            }
            sub_2236C(a1, a3);
            v16 = sub_22E08(a1, a2, a3);
            if ( !v16 )
              goto LABEL_35;
            v17 = v8 == v16;
            if ( *v8 )
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
LABEL_35:
              jsonp_free((void *)v15);
              goto LABEL_36;
            }
            v35 = v16;
            if ( hashtable_set(arg, (char *)v15, (int)v16) )
            {
              if ( v35[1] != -1 )
                sub_A8E50(v35);
              goto LABEL_35;
            }
            off_12A254((void *)v15);
            sub_2236C(a1, a3);
            v32 = *(_DWORD *)(a1 + 60);
            if ( v32 != 44 )
              break;
            sub_2236C(a1, a3);
            if ( *(_DWORD *)(a1 + 60) != 256 )
              goto LABEL_75;
            v15 = *(_QWORD *)(a1 + 64);
            *(_DWORD *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 68) = 0;
            if ( !(_DWORD)v15 )
              return 0;
          }
          if ( v32 == 125 )
            goto LABEL_62;
          sub_21104(a3, a1, 8, "'}' expected");
        }
        else
        {
LABEL_75:
          sub_21104(a3, a1, 8, "string or '}' expected", arg);
        }
LABEL_36:
        if ( v8[1] != -1 )
        {
          v33 = v8;
          v8 = 0;
          sub_A8E50(v33);
          return v8;
        }
        return 0;
      }
LABEL_62:
      v5 = *(_DWORD *)(a1 + 56);
      goto LABEL_10;
    }
    return 0;
  }
  if ( v6 == 259 )
  {
    v8 = dword_12A260;
    goto LABEL_10;
  }
  if ( v6 <= 258 )
  {
    v30 = *(_QWORD *)(a1 + 64);
    v31 = off_12A258(0x10u);
    if ( v31 )
    {
      *v31 = 4;
      v8 = v31;
      v31[1] = 1;
      *((_QWORD *)v31 + 1) = v30;
      v5 = *(_DWORD *)(a1 + 56);
      goto LABEL_10;
    }
    return 0;
  }
  if ( v6 == 260 )
  {
    v8 = dword_12A268;
    goto LABEL_10;
  }
  if ( v6 != 261 )
  {
LABEL_55:
    v8 = 0;
    sub_21104(a3, a1, 8, "unexpected token");
    return v8;
  }
  v8 = &unk_12A270;
LABEL_10:
  *(_DWORD *)(a1 + 56) = v5 - 1;
  return v8;
}
