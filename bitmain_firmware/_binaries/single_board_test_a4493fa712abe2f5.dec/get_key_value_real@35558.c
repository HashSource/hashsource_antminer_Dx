int __fastcall get_key_value_real(_DWORD *a1, char *a2, _QWORD *a3)
{
  int result; // r0

  result = json_object_get(a1, a2);
  if ( result )
  {
    if ( *(_DWORD *)result == 4 )
    {
      *a3 = *(_QWORD *)(result + 8);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
