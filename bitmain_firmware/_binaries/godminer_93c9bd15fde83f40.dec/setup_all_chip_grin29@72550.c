int __fastcall setup_all_chip_grin29(int a1)
{
  int result; // r0

  puts("setup_all_chip_grin29");
  **(_DWORD **)(a1 + 296) = -1065336832;
  *(_DWORD *)(a1 + 240) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 144))(a1, *(_DWORD *)(a1 + 296), 4);
  sub_957DC(a1);
  sub_7243C(a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + 1));
  usleep(0x4E20u);
  sub_7243C(a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + 3));
  usleep(0x4E20u);
  sub_956F4(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
