int __fastcall json_string_set(_DWORD *a1, char *s)
{
  size_t v4; // r7
  _BOOL4 v5; // r0
  int v6; // r6
  _BYTE *v7; // r0
  _BYTE *v8; // r8
  void *v9; // r0

  if ( !s )
    return -1;
  v4 = strlen(s);
  v5 = utf8_check_string((int)s, v4) == 0;
  if ( a1 )
    v6 = v5;
  else
    v6 = 1;
  if ( v6 )
    return -1;
  if ( *a1 != 2 )
    return -1;
  v7 = off_12A258(v4 + 1);
  v8 = v7;
  if ( !v7 )
    return -1;
  memcpy(v7, s, v4);
  v8[v4] = 0;
  v9 = (void *)a1[2];
  if ( v9 )
    off_12A254(v9);
  a1[2] = v8;
  a1[3] = v4;
  return 0;
}
