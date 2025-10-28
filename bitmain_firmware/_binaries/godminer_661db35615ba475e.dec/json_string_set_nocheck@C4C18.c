int __fastcall json_string_set_nocheck(_DWORD *a1, const char *a2)
{
  size_t v4; // r0
  size_t v5; // r6
  _BYTE *v6; // r0
  _BYTE *v7; // r7
  void *v8; // r0

  if ( !a2 )
    return -1;
  v4 = strlen(a2);
  v5 = v4;
  if ( !a1 )
    return -1;
  if ( *a1 != 2 )
    return -1;
  v6 = off_190780(v4 + 1);
  v7 = v6;
  if ( !v6 )
    return -1;
  memcpy(v6, a2, v5);
  v7[v5] = 0;
  v8 = (void *)a1[2];
  if ( v8 )
    off_190550(v8);
  a1[2] = v7;
  a1[3] = v5;
  return 0;
}
