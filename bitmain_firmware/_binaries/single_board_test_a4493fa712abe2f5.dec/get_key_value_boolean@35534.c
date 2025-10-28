int __fastcall get_key_value_boolean(_DWORD *a1, char *a2, _BYTE *a3)
{
  int result; // r0
  unsigned int v5; // r3
  unsigned int v6; // r2
  bool v7; // cf

  result = json_object_get(a1, a2);
  if ( result )
  {
    v5 = *(_DWORD *)result;
    v6 = *(_DWORD *)result - 5;
    v7 = *(_DWORD *)result != 5;
    if ( v6 > 1 )
    {
      result = 0;
    }
    else
    {
      result = 1;
      v5 = __clz(v5 - 5);
    }
    if ( v6 == 1 || !v7 )
      *a3 = v5 >> 5;
  }
  return result;
}
