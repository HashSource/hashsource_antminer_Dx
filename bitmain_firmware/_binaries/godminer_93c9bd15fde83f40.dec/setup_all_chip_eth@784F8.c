int __fastcall setup_all_chip_eth(int a1)
{
  _DWORD *v2; // r3
  int result; // r0

  puts("setup_all_chip_eth");
  v2 = *(_DWORD **)(a1 + 296);
  v2[1] = 117835012;
  *v2 = 50462976;
  *(_DWORD *)(a1 + 240) = 1;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 144))(a1, *(_DWORD *)(a1 + 296), 8);
  sub_C1A38(a1);
  setup_clk(a1);
  set_debug_ctrl(a1, 19);
  sub_C1624(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
