int __fastcall get_theory_hashrate_eth(int a1, _QWORD *a2)
{
  __int64 v3; // r2

  if ( *(_BYTE *)(a1 + 252) )
  {
    v3 = *(_QWORD *)(a1 + 264);
    *a2 = v3;
    return 0;
  }
  else
  {
    *a2 = 0x41D1F39696969697LL;
    return 0;
  }
}
