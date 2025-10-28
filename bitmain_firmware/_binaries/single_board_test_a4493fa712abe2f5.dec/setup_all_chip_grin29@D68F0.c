int __fastcall setup_all_chip_grin29(int a1)
{
  puts("setup_all_chip_grin29");
  **(_DWORD **)(a1 + 280) = -1065336832;
  *(_DWORD *)(a1 + 224) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 132))(a1, *(_DWORD *)(a1 + 280), 4);
  sub_BD59C((int *)a1);
  sub_D6818(a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + 1));
  usleep(0x4E20u);
  sub_D6818(a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + 3));
  usleep(0x4E20u);
  sub_BD4EC(a1);
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
