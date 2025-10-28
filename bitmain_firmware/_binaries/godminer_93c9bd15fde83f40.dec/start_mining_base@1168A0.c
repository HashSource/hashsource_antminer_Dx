int __fastcall start_mining_base(int a1)
{
  (*(void (**)(void))(a1 + 48))();
  off_1A2B90(*(_DWORD *)(a1 + 132));
  queue_clear(*(_DWORD *)(a1 + 656));
  *(_BYTE *)(a1 + 141) = 1;
  (*(void (__fastcall **)(int))(a1 + 52))(a1);
  *(_BYTE *)(a1 + 142) = 1;
  return 0;
}
