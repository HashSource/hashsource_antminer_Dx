int __fastcall get_key_value_array_real(_DWORD *a1, char *a2, void **a3, _DWORD *a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  void *v9; // r0
  int v10; // r7
  _QWORD *v11; // r0
  int *v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // t1

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
  v11 = malloc(8 * v10);
  *a3 = v11;
  if ( v11 )
  {
    v12 = (int *)v7[4];
    v13 = 0;
    v14 = *v12;
    if ( *v12 )
    {
      while ( 1 )
      {
        ++v13;
        if ( *(_DWORD *)v14 != 4 )
          break;
        *v11++ = *(_QWORD *)(v14 + 8);
        if ( v13 != v10 )
        {
          v15 = v12[1];
          ++v12;
          v14 = v15;
          if ( v15 )
            continue;
        }
        return 1;
      }
      printf("%s json is not double!\n", "get_key_value_array_real");
      return 0;
    }
    return 1;
  }
  printf("%s malloc failed!\n", "get_key_value_array_real");
  return 0;
}
