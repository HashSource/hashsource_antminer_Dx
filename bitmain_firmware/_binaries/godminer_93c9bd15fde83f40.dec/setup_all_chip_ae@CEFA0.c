int __fastcall setup_all_chip_ae(int a1)
{
  int result; // r0

  puts("setup_all_chip_ae");
  **(_DWORD **)(a1 + 296) = -1065336832;
  *(_DWORD *)(a1 + 240) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 144))(a1, *(_DWORD *)(a1 + 296), 4);
  sub_C0678(a1);
  sub_C058C(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
