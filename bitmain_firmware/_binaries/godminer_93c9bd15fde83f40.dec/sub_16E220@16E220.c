int __fastcall sub_16E220(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0x16EB34);
  return divsi3_skip_div0_test(a1, a2);
}
