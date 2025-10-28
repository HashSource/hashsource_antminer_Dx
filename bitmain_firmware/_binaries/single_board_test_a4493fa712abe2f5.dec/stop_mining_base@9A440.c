int __fastcall stop_mining_base(int a1)
{
  (*(void (**)(void))(a1 + 36))();
  off_12945C(*(_DWORD *)(a1 + 120));
  *(_BYTE *)(a1 + 129) = 0;
  *(_BYTE *)(a1 + 130) = 0;
  return 0;
}
