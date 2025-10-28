int __fastcall get_key_value_array_interger(_DWORD *a1, char *a2, void **a3, _DWORD *a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  void *v9; // r0
  int v10; // r0
  char *v11; // r0
  int v12; // r2
  char *v13; // r0
  int v14; // r5
  _DWORD *v15; // r3
  _DWORD *v16; // t1

  v6 = (_DWORD *)json_object_get(a1, a2);
  v7 = v6;
  if ( !v6 || *v6 != 1 )
    return 0;
  v9 = *a3;
  *a4 = v7[3];
  if ( v9 )
  {
    free(v9);
    *a3 = 0;
  }
  if ( *v7 != 1 )
    return 1;
  v10 = v7[3];
  if ( !v10 )
    return 1;
  v11 = (char *)malloc(4 * v10);
  *a3 = v11;
  if ( v11 )
  {
    v12 = v7[4];
    v13 = v11 - 4;
    v14 = 0;
    v15 = *(_DWORD **)v12;
    if ( *(_DWORD *)v12 )
    {
      while ( *v15 == 3 )
      {
        *((_DWORD *)v13 + 1) = v15[2];
        v13 += 4;
        if ( *v7 == 1 && (unsigned int)++v14 < v7[3] )
        {
          v16 = *(_DWORD **)(v12 + 4);
          v12 += 4;
          v15 = v16;
          if ( v16 )
            continue;
        }
        return 1;
      }
      printf("%s json is not integer!\n", "get_key_value_array_interger");
      return 0;
    }
    return 1;
  }
  printf("%s malloc failed!\n", "get_key_value_array_interger");
  return 0;
}
