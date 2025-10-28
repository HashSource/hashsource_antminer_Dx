int __fastcall chain_reset(char a1)
{
  int v1; // r4
  int result; // r0

  v1 = 1 << a1;
  *(_DWORD *)(dword_197C8C + 52) |= 1 << a1;
  result = usleep((__useconds_t)"ead_unregister_cancel");
  *(_DWORD *)(dword_197C8C + 52) &= ~v1;
  return result;
}
