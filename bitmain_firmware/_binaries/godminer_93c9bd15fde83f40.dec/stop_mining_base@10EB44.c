int __fastcall stop_mining_base(int a1)
{
  (*(void (**)(void))(a1 + 48))();
  off_1A2B90(*(_DWORD *)(a1 + 132));
  *(_BYTE *)(a1 + 141) = 0;
  *(_BYTE *)(a1 + 142) = 0;
  return 0;
}
