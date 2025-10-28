int __fastcall target_to_diff_vbk(int a1)
{
  int v1; // r2
  int result; // r0
  char v3; // r3
  unsigned int v4; // t1
  unsigned __int8 v5; // r1

  v1 = a1 - 1;
  result = 0;
  do
  {
    v4 = *(unsigned __int8 *)++v1;
    v3 = v4;
    v5 = result + 8;
    if ( v4 >> 7 )
      break;
    if ( (v3 & 0x40) != 0 )
      return (unsigned __int8)(result + 1);
    if ( (v3 & 0x20) != 0 )
      return (unsigned __int8)(result + 2);
    if ( (v3 & 0x10) != 0 )
      return (unsigned __int8)(result + 3);
    if ( (v3 & 8) != 0 )
      return (unsigned __int8)(result + 4);
    if ( (v3 & 4) != 0 )
      return (unsigned __int8)(result + 5);
    if ( (v3 & 2) != 0 )
      return (unsigned __int8)(result + 6);
    if ( (v3 & 1) != 0 )
      return (unsigned __int8)(result + 7);
    result = v5;
  }
  while ( v5 != 64 );
  return result;
}
