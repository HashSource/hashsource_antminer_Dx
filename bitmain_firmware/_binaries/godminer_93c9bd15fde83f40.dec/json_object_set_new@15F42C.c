int __fastcall json_object_set_new(_DWORD *a1, char *a2, _DWORD *a3)
{
  size_t v6; // r0
  int result; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  _BOOL4 v11; // r3

  if ( !a2 || (v6 = strlen(a2), !utf8_check_string((int)a2, v6)) )
  {
    if ( !a3 )
      return -1;
    goto LABEL_4;
  }
  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_4;
  v11 = a1 == a3;
  if ( *a1 )
    v11 = 1;
  if ( v11 )
  {
LABEL_4:
    if ( a3[1] != -1 )
    {
      v8 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v9 = __ldrex(v8);
        v10 = v9 - 1;
      }
      while ( __strex(v10, v8) );
      if ( !v10 )
      {
        json_delete(a3);
        return -1;
      }
    }
    return -1;
  }
  result = hashtable_set(a1 + 2, a2, (int)a3);
  if ( result )
  {
    if ( a3[1] != -1 )
      sub_84ED0(a3);
    return -1;
  }
  return result;
}
