int __fastcall target_to_diff_ckb(int a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r0
  char v4; // r3
  unsigned int v5; // t1

  v1 = a1 - 1;
  v2 = 0;
  v3 = a1 + 31;
  while ( 1 )
  {
    v5 = *(unsigned __int8 *)++v1;
    v4 = v5;
    if ( v5 >> 7 )
      return v2;
    if ( (v4 & 0x40) != 0 )
      return (unsigned __int8)(v2 + 1);
    if ( (v4 & 0x20) != 0 )
      return (unsigned __int8)(v2 + 2);
    if ( (v4 & 0x10) != 0 )
      return (unsigned __int8)(v2 + 3);
    if ( (v4 & 8) != 0 )
      return (unsigned __int8)(v2 + 4);
    if ( (v4 & 4) != 0 )
      return (unsigned __int8)(v2 + 5);
    if ( (v4 & 2) != 0 )
      return (unsigned __int8)(v2 + 6);
    if ( (v4 & 1) != 0 )
      break;
    v2 = (unsigned __int8)(v2 + 8);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned __int8)(v2 + 7);
}
