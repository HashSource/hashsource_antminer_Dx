int __fastcall get_work_by_key(_DWORD *a1, char *a2, char *a3, int a4)
{
  int v4; // r4
  int result; // r0
  char *v8; // r6
  size_t v9; // r0
  _BOOL4 v10; // r4

  v4 = 1;
  if ( !a4 )
    return v4;
  result = json_object_get(a1, a2);
  if ( result )
  {
    if ( *(_DWORD *)result != 2 )
      return 0;
    result = *(_DWORD *)(result + 8);
    if ( result )
    {
      v8 = _strdup((const char *)result);
      v9 = strlen(v8);
      v10 = v9 == 2 * a4 && s2hex(a3, (unsigned __int8 *)v8, v9) == a4;
      free(v8);
      return v10;
    }
  }
  return result;
}
