void __fastcall parse_config(_DWORD *a1)
{
  int v1; // s0
  int v2; // s1
  char **v3; // r4
  char *v5; // r10
  int v6; // r3
  int v7; // r1
  char *v8; // t1
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r3
  const char *v12; // r0
  char *v13; // r5
  int v14; // r0
  const char *v15; // r1
  int v16; // r11
  unsigned int i; // r10
  _DWORD *v18; // r0
  int v19; // r1
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v5) = 5188;
  v3 = &off_130A3C;
  HIWORD(v5) = (unsigned int)&unk_138FE0 >> 16;
  while ( 1 )
  {
    v9 = (_DWORD *)json_object_get(a1, v5);
    v10 = v9;
    if ( !v9 )
      goto LABEL_7;
    v11 = *v9;
    if ( v3[1] )
      break;
    if ( v11 != 5 )
      goto LABEL_7;
    parse_arg((int)v3[3], "");
    if ( &unk_130B4C == (_UNKNOWN *)v3 )
      return;
LABEL_8:
    v8 = v3[4];
    v3 += 4;
    v5 = v8;
    if ( !v8 )
      return;
  }
  if ( v11 != 2 )
  {
    switch ( v11 )
    {
      case 3:
        v14 = json_integer_value((int)v9);
        LOWORD(v15) = 820;
        HIWORD(v15) = (unsigned int)&unk_137EDC >> 16;
        sprintf(s, v15, v14);
        parse_arg((int)v3[3], s);
        break;
      case 4:
        json_real_value();
        sprintf(s, "%f", v1, v2);
        parse_arg((int)v3[3], s);
        break;
      case 1:
        LOWORD(v16) = 5196;
        for ( i = 0; (unsigned int)json_array_size(v10) > i; ++i )
        {
          v18 = json_array_get(v10, i);
          if ( !v18 )
            break;
          if ( *v18 )
          {
            V_LOCK();
            HIWORD(v16) = (unsigned int)&unk_138FE8 >> 16;
            logfmt_raw(s, 0x1000u, 0, v16, *v3);
            V_UNLOCK();
            LOWORD(v19) = 4264;
            HIWORD(v19) = (unsigned int)&unk_138C4C >> 16;
            zlog(g_zc, v19, 138, "parse_config", 12, 531, 100, s);
          }
          else
          {
            parse_config(v18);
          }
        }
        break;
      default:
        V_LOCK();
        LOWORD(v6) = 5224;
        HIWORD(v6) = (unsigned int)&unk_139004 >> 16;
        logfmt_raw(s, 0x1000u, 0, v6, v5);
        V_UNLOCK();
        LOWORD(v7) = 4264;
        HIWORD(v7) = (unsigned int)&unk_138C4C >> 16;
        zlog(g_zc, v7, 138, "parse_config", 12, 539, 100, s);
        break;
    }
LABEL_7:
    if ( &unk_130B4C == (_UNKNOWN *)v3 )
      return;
    goto LABEL_8;
  }
  v12 = (const char *)json_string_value(v9);
  v13 = _strdup(v12);
  if ( v13 )
  {
    parse_arg((int)v3[3], v13);
    free(v13);
    goto LABEL_7;
  }
}
