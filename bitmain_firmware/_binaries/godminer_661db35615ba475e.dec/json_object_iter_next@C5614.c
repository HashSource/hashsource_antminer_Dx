_DWORD *__fastcall json_object_iter_next(_DWORD *a1, int a2)
{
  _BOOL4 v3; // r3
  _DWORD *result; // r0

  if ( !a1 )
    return 0;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 )
    return 0;
  result = *(_DWORD **)(a2 + 4);
  if ( result == a1 + 7 )
    return 0;
  return result;
}
