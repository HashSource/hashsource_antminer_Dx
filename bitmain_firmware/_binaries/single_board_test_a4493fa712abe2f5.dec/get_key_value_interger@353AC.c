int __fastcall get_key_value_interger(_DWORD *a1, char *a2, _DWORD *a3)
{
  int result; // r0
  int v5; // r3
  bool v6; // zf

  result = json_object_get(a1, a2);
  if ( result )
  {
    v5 = *(_DWORD *)result;
    v6 = *(_DWORD *)result == 3;
    if ( *(_DWORD *)result == 3 )
      v5 = *(_DWORD *)(result + 8);
    else
      result = 0;
    if ( v6 )
    {
      *a3 = v5;
      return 1;
    }
  }
  return result;
}
