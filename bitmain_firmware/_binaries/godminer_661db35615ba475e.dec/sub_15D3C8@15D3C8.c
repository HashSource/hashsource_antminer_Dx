int __fastcall sub_15D3C8(int a1, unsigned int a2)
{
  if ( !a2 )
    JUMPOUT(0x15DCDC);
  return divsi3_skip_div0_test(a1, a2);
}
