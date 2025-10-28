int __fastcall json_string_set(_DWORD *a1, const char *a2)
{
  size_t v4; // r7
  _BOOL4 v5; // r0
  _BYTE *v7; // r0
  _BYTE *v8; // r8
  void *v9; // r0

  if ( !a2 )
    return -1;
  v4 = strlen(a2);
  v5 = utf8_check_string((int)a2, v4) == 0;
  if ( !a1 || v5 )
    return -1;
  if ( *a1 != 2 )
    return -1;
  v7 = (_BYTE *)off_1A25E8(v4 + 1);
  v8 = v7;
  if ( !v7 )
    return -1;
  memcpy(v7, a2, v4);
  v8[v4] = 0;
  v9 = (void *)a1[2];
  if ( v9 )
    off_1A25EC(v9);
  a1[2] = v8;
  a1[3] = v4;
  return 0;
}
