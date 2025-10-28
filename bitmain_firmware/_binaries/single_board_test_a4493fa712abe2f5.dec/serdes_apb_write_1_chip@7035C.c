int __fastcall serdes_apb_write_1_chip(int a1, char a2, char a3, int a4, unsigned int a5)
{
  void (__fastcall *v8)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  unsigned int v12; // [sp+0h] [bp-10h] BYREF
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h]
  int v15; // [sp+Ch] [bp-4h]

  v14 = 9437184;
  v15 = 0;
  v13 = 0;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  BYTE1(v14) = a2;
  LOBYTE(v15) = a3;
  v12 = a5;
  v8(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v14 = 0;
  v12 = a4 | 0x80000000;
  v15 = 0;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v14) = 145;
  BYTE1(v14) = a2;
  v13 = 0;
  LOBYTE(v15) = a3;
  v10(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
