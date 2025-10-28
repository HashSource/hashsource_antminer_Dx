int __fastcall set_sensor_extern_mode_ckb(int a1)
{
  int (__fastcall *v2)(int, _DWORD *); // r3
  int v3; // r6
  _DWORD v5[2]; // [sp+0h] [bp-10h] BYREF
  int v6; // [sp+8h] [bp-8h]
  int v7; // [sp+Ch] [bp-4h]

  v5[0] = 26806532;
  v5[1] = 0;
  v6 = 0;
  v7 = 0;
  v2 = *(int (__fastcall **)(int, _DWORD *))(a1 + 140);
  LOBYTE(v6) = 1;
  HIWORD(v6) = 32;
  v3 = v2(a1, v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  if ( !v3 )
    *(_DWORD *)(a1 + 304) = 1;
  return 0;
}
