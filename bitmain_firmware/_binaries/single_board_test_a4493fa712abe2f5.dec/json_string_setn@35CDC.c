int __fastcall json_string_setn(_DWORD *a1, const void *a2, unsigned int a3)
{
  _BOOL4 v6; // r0
  int v7; // r6
  _BYTE *v8; // r0
  _BYTE *v9; // r8
  void *v10; // r0

  if ( !a2 )
    return -1;
  v6 = utf8_check_string((int)a2, a3) == 0;
  if ( a1 )
    v7 = v6;
  else
    v7 = 1;
  if ( v7 )
    return -1;
  if ( *a1 != 2 )
    return -1;
  if ( a3 == -1 )
    return -1;
  v8 = off_12A258(a3 + 1);
  v9 = v8;
  if ( !v8 )
    return -1;
  memcpy(v8, a2, a3);
  v9[a3] = 0;
  v10 = (void *)a1[2];
  if ( v10 )
    off_12A254(v10);
  a1[2] = v9;
  a1[3] = a3;
  return 0;
}
