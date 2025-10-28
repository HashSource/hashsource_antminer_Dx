int __fastcall setup_all_chip_ae(int a1)
{
  puts("setup_all_chip_ae");
  **(_DWORD **)(a1 + 280) = -1065336832;
  *(_DWORD *)(a1 + 224) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 132))(a1, *(_DWORD *)(a1 + 280), 4);
  sub_D3870(a1);
  sub_D37C4(a1);
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
