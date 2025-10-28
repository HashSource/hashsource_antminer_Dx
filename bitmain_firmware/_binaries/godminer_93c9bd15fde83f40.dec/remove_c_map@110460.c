int __fastcall remove_c_map(int *a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void **v4; // r5
  void **v5; // r5

  if ( !a1 )
    return 501;
  v2 = remove_c_rb(*a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = (void **)v2[4];
    free(*v4);
    free(v4);
    v5 = (void **)v3[5];
    free(*v5);
    free(v5);
    free(v3);
  }
  return 0;
}
