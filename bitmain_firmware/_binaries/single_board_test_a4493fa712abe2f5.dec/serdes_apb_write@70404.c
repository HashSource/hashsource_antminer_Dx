int __fastcall serdes_apb_write(int a1, int a2, char a3, int a4, unsigned int a5)
{
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v9)(int, unsigned int *); // r3
  unsigned int v11; // [sp+0h] [bp-10h] BYREF
  int v12; // [sp+4h] [bp-Ch]
  int v13; // [sp+8h] [bp-8h]
  int v14; // [sp+Ch] [bp-4h]

  v13 = 9437184;
  v14 = 0;
  v12 = 0;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v14) = a3;
  v11 = a5;
  LOBYTE(v13) = 1;
  v7(a1, &v11);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v13 = 0;
  v11 = a4 | 0x80000000;
  v14 = 0;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v13) = 145;
  LOBYTE(v13) = 1;
  v12 = 0;
  LOBYTE(v14) = a3;
  v9(a1, &v11);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
