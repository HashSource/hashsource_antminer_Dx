int __fastcall enable_core_clk(int a1)
{
  _DWORD v2[2]; // [sp+0h] [bp-14h] BYREF
  char v3; // [sp+8h] [bp-Ch]
  char v4; // [sp+9h] [bp-Bh]
  __int16 v5; // [sp+Ah] [bp-Ah]
  int v6; // [sp+Ch] [bp-8h]

  v2[1] = 0;
  v4 = 0;
  v6 = 0;
  v2[0] = -2147483647;
  v3 = 1;
  v5 = 22;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v2);
}
