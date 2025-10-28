int __fastcall sub_F7148(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0xF7A5C);
  return divsi3_skip_div0_test(a1, a2);
}
