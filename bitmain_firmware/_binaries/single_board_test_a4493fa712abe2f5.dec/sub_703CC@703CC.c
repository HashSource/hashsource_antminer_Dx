int __fastcall sub_703CC(int a1, char a2, unsigned __int8 a3, __int16 a4, int a5)
{
  int (__fastcall *v5)(int, _DWORD *); // r5
  int v6; // r4
  _DWORD v8[2]; // [sp+0h] [bp-10h] BYREF
  char v9; // [sp+8h] [bp-8h]
  char v10; // [sp+9h] [bp-7h]
  __int16 v11; // [sp+Ah] [bp-6h]
  int v12; // [sp+Ch] [bp-4h]

  v9 = 0;
  v8[1] = 0;
  v10 = a2;
  v11 = a4;
  v12 = a3;
  v5 = *(int (__fastcall **)(int, _DWORD *))(a1 + 144);
  v8[0] = a5;
  v6 = v5(a1, v8);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return v6;
}
