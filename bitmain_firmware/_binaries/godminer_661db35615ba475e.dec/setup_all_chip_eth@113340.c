int __fastcall setup_all_chip_eth(int a1)
{
  _DWORD *v2; // r3
  int result; // r0

  puts("setup_all_chip_eth");
  v2 = *(_DWORD **)(a1 + 280);
  v2[1] = 117835012;
  *v2 = 50462976;
  *(_DWORD *)(a1 + 224) = 1;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 132))(a1, *(_DWORD *)(a1 + 280), 8);
  sub_133ACC(a1);
  setup_clk(a1);
  set_debug_ctrl(a1, 19);
  sub_1336C0(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
