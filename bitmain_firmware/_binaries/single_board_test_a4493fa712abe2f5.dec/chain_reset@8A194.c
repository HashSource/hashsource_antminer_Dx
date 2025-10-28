int __fastcall chain_reset(char a1)
{
  int v1; // r4
  int result; // r0

  v1 = 1 << a1;
  *(_DWORD *)(dword_3B52A4 + 52) |= 1 << a1;
  result = usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  *(_DWORD *)(dword_3B52A4 + 52) &= ~v1;
  return result;
}
