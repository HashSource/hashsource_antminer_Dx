int __fastcall le256_target_to_diff_base(int a1)
{
  int v1; // r2
  int v2; // r1
  char v3; // r3
  unsigned int v4; // t1

  v1 = 0;
  v2 = a1 + 32;
  while ( 1 )
  {
    v4 = *(unsigned __int8 *)--v2;
    v3 = v4;
    if ( v4 >> 7 )
      return v1;
    if ( (v3 & 0x40) != 0 )
      return (unsigned __int8)(v1 + 1);
    if ( (v3 & 0x20) != 0 )
      return (unsigned __int8)(v1 + 2);
    if ( (v3 & 0x10) != 0 )
      return (unsigned __int8)(v1 + 3);
    if ( (v3 & 8) != 0 )
      return (unsigned __int8)(v1 + 4);
    if ( (v3 & 4) != 0 )
      return (unsigned __int8)(v1 + 5);
    if ( (v3 & 2) != 0 )
      return (unsigned __int8)(v1 + 6);
    if ( (v3 & 1) != 0 )
      break;
    v1 = (unsigned __int8)(v1 + 8);
    if ( a1 == v2 )
      return v1;
  }
  return (unsigned __int8)(v1 + 7);
}
