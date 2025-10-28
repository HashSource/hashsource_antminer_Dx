int *__fastcall get_key_value_string(_DWORD *a1, char *a2, void **a3)
{
  int *v4; // r0
  int *v5; // r4
  const char *v7; // r0
  int v8; // r3

  v4 = (int *)json_object_get(a1, a2);
  v5 = v4;
  if ( !v4 )
    return v5;
  if ( *v4 != 2 )
    return 0;
  v7 = (const char *)v4[2];
  if ( !v7 )
    return 0;
  if ( *a3 )
  {
    free(*a3);
    v8 = *v5;
    v7 = 0;
    *a3 = 0;
    if ( v8 == 2 )
      v7 = (const char *)v5[2];
  }
  *a3 = _strdup(v7);
  return (int *)1;
}
