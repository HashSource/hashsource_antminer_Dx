int __fastcall serdes_apb_write_1_chip(int a1, char a2, char a3, int a4, unsigned int a5)
{
  void (__fastcall *v9)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  unsigned int v12; // [sp+0h] [bp-14h] BYREF
  int v13; // [sp+4h] [bp-10h]
  int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  v12 = a5;
  v14 = 9437184;
  v15 = 0;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v13 = 0;
  BYTE1(v14) = a2;
  LOBYTE(v15) = a3;
  v9(a1, &v12);
  usleep((__useconds_t)"ead_unregister_cancel");
  v14 = 0;
  v15 = 0;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v14) = 145;
  BYTE1(v14) = a2;
  v12 = a4 | 0x80000000;
  v13 = 0;
  LOBYTE(v15) = a3;
  v10(a1, &v12);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
