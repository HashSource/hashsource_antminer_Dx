int __fastcall sub_64B58(_DWORD *a1)
{
  int v1; // r6
  int i; // r4
  int v4; // r1

  v1 = a1[74];
  if ( v1 > 0 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = i;
      sub_64A64(a1, v4);
    }
  }
  return 12;
}
