int __fastcall remove_c_map(int *a1, int a2)
{
  int result; // r0
  _DWORD *v3; // r4
  void **v4; // r5
  void **v5; // r5

  if ( !a1 )
    return 501;
  result = (int)remove_c_rb(*a1, a2);
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = *(void ***)(result + 16);
    free(*v4);
    free(v4);
    v5 = (void **)v3[5];
    free(*v5);
    free(v5);
    free(v3);
    return 0;
  }
  return result;
}
