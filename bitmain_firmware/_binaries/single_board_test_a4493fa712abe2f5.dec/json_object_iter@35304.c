_DWORD *__fastcall json_object_iter(_DWORD *a1)
{
  _DWORD *result; // r0

  if ( !a1 || *a1 )
    return 0;
  result = (_DWORD *)a1[8];
  if ( result == a1 + 7 )
    return 0;
  return result;
}
