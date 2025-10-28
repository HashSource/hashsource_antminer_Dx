int __fastcall chain_reset_low(char a1)
{
  int result; // r0

  result = (1 << a1) | *(_DWORD *)(dword_3B52A4 + 52);
  *(_DWORD *)(dword_3B52A4 + 52) = result;
  return result;
}
