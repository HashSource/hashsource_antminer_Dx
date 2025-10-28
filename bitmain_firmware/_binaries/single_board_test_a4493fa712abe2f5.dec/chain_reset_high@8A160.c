int __fastcall chain_reset_high(char a1)
{
  int result; // r0

  result = *(_DWORD *)(dword_3B52A4 + 52) & ~(1 << a1);
  *(_DWORD *)(dword_3B52A4 + 52) = result;
  return result;
}
