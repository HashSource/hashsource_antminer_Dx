int __fastcall sub_81F18(int a1, int a2)
{
  int v2; // r7
  int *v3; // r4
  int (__fastcall *v5)(int, int); // r3
  int v6; // t1
  int v7; // r1
  int result; // r0

  if ( a1 == 921 )
  {
    v2 = 256;
  }
  else
  {
    if ( a1 != 943 )
      return sub_81EA4(a1);
    v2 = 257;
  }
  v3 = (int *)&off_12B738;
  do
  {
    v6 = *v3++;
    v5 = (int (__fastcall *)(int, int))v6;
    v7 = a2;
    if ( a2 )
      v7 = 1;
    result = v2;
    if ( v5 )
      result = v5(v2, v7);
  }
  while ( v3 != &dword_12B74C );
  return result;
}
