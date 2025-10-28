int __fastcall setup_all_chip_grin29(int a1)
{
  int result; // r0

  puts("setup_all_chip_grin29");
  **(_DWORD **)(a1 + 280) = -1065336832;
  *(_DWORD *)(a1 + 224) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 132))(a1, *(_DWORD *)(a1 + 280), 4);
  sub_4A484(a1);
  sub_10C2AC(a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + 1));
  usleep(0x4E20u);
  sub_10C2AC(a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + 3));
  usleep(0x4E20u);
  sub_4A39C(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
