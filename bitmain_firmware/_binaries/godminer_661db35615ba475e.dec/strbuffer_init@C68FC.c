int __fastcall strbuffer_init(_DWORD *a1)
{
  int (*v2)(void); // r3
  _BYTE *v3; // r0

  v2 = (int (*)(void))off_190780;
  a1[2] = 16;
  a1[1] = 0;
  v3 = (_BYTE *)v2();
  *a1 = v3;
  if ( !v3 )
    return -1;
  *v3 = 0;
  return 0;
}
