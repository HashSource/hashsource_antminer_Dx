int __fastcall load_patterns(_DWORD *a1)
{
  _BYTE *v1; // r3

  v1 = (_BYTE *)a1[5];
  if ( *v1 == 80 && v1[1] == 84 && v1[2] == 49 && !v1[3] || get_all_works(a1) )
    return 1;
  printf("get_all_works failed!");
  return 0;
}
