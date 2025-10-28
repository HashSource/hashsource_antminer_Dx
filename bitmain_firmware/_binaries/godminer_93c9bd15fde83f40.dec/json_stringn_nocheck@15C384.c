_DWORD *__fastcall json_stringn_nocheck(const void *a1, size_t a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r7
  _DWORD *result; // r0

  if ( !a1 )
    return 0;
  if ( a2 == -1 )
    return 0;
  v4 = (_BYTE *)off_1A25E8(a2 + 1);
  v5 = v4;
  if ( !v4 )
    return 0;
  memcpy(v4, a1, a2);
  v5[a2] = 0;
  result = (_DWORD *)off_1A25E8(16);
  if ( result )
  {
    result[2] = v5;
    result[3] = a2;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    off_1A25EC(v5);
    return 0;
  }
  return result;
}
