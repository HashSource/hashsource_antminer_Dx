int __fastcall set_hardware_type(int a1)
{
  int v1; // r3
  bool v2; // zf
  int result; // r0

  if ( !platform_inited )
    return sub_85D40();
  v1 = *(_DWORD *)dword_3B52A4;
  if ( a1 )
  {
    v2 = a1 == 1;
    result = 0;
    if ( v2 )
      v1 |= 0x80000000;
    *(_DWORD *)dword_3B52A4 = v1;
  }
  else
  {
    *(_DWORD *)dword_3B52A4 = v1 & 0x7FFFFFFF;
    return 0;
  }
  return result;
}
