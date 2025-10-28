int __fastcall start_mining_base(int a1)
{
  (*(void (**)(void))(a1 + 36))();
  off_12945C(*(_DWORD *)(a1 + 120));
  queue_clear(*(_DWORD *)(a1 + 628));
  *(_BYTE *)(a1 + 129) = 1;
  (*(void (__fastcall **)(int))(a1 + 40))(a1);
  *(_BYTE *)(a1 + 130) = 1;
  return 0;
}
