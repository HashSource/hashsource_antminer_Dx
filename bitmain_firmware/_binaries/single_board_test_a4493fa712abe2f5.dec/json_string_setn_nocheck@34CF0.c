int __fastcall json_string_setn_nocheck(_DWORD *a1, const void *a2, size_t a3)
{
  _BYTE *v7; // r0
  _BYTE *v8; // r8
  void *v9; // r0

  if ( !a1 )
    return -1;
  if ( *a1 != 2 || a2 == 0 )
    return -1;
  if ( a3 == -1 )
    return -1;
  v7 = off_12A258(a3 + 1);
  v8 = v7;
  if ( !v7 )
    return -1;
  memcpy(v7, a2, a3);
  v8[a3] = 0;
  v9 = (void *)a1[2];
  if ( v9 )
    off_12A254(v9);
  a1[2] = v8;
  a1[3] = a3;
  return 0;
}
