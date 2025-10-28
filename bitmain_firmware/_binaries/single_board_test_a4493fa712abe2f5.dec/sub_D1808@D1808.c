int __fastcall sub_D1808(int a1, unsigned __int8 a2, __int16 a3, int a4)
{
  int v4; // r4
  _DWORD v6[2]; // [sp+0h] [bp-10h] BYREF
  __int16 v7; // [sp+8h] [bp-8h]
  __int16 v8; // [sp+Ah] [bp-6h]
  int v9; // [sp+Ch] [bp-4h]

  v6[0] = a4;
  v7 = 1792;
  v6[1] = 0;
  v9 = a2;
  v8 = a3;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v6);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return v4;
}
