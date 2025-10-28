int __fastcall json_object_set_new_nocheck(_DWORD *a1, char *a2, _DWORD *a3)
{
  bool v3; // zf
  int result; // r0
  _BOOL4 v6; // r3
  unsigned int *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2

  if ( !a3 )
    return -1;
  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  if ( v3 )
    goto LABEL_20;
  v6 = a3 == a1;
  if ( *a1 )
    v6 = 1;
  if ( v6 )
  {
LABEL_20:
    if ( a3[1] != -1 )
    {
      v10 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        goto LABEL_17;
    }
    return -1;
  }
  result = hashtable_set(a1 + 2, a2, (int)a3);
  if ( result )
  {
    if ( a3[1] != -1 )
    {
      v7 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v8 = __ldrex(v7);
        v9 = v8 - 1;
      }
      while ( __strex(v9, v7) );
      if ( !v9 )
      {
LABEL_17:
        json_delete(a3);
        return -1;
      }
    }
    return -1;
  }
  return result;
}
