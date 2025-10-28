int __fastcall close_core9(int a1)
{
  void (__fastcall *v1)(int, _DWORD *); // r3
  _DWORD v3[2]; // [sp+0h] [bp-14h] BYREF
  int v4; // [sp+8h] [bp-Ch]
  int v5; // [sp+Ch] [bp-8h]

  v4 = 851968;
  v5 = 9;
  v3[0] = 0;
  v3[1] = 0;
  v1 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v4) = 1;
  v1(a1, v3);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  return 0;
}
