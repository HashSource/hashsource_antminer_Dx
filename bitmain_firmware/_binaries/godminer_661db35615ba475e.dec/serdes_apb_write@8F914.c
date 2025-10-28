int __fastcall serdes_apb_write(int a1, int a2, char a3, int a4, unsigned int a5)
{
  void (__fastcall *v8)(int, unsigned int *); // r3
  void (__fastcall *v9)(int, unsigned int *); // r3
  unsigned int v11; // [sp+0h] [bp-14h] BYREF
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]
  int v14; // [sp+Ch] [bp-8h]

  v11 = a5;
  v13 = 9437184;
  v14 = 0;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v12 = 0;
  LOBYTE(v14) = a3;
  LOBYTE(v13) = 1;
  v8(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = 0;
  v14 = 0;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v13) = 145;
  LOBYTE(v13) = 1;
  v11 = a4 | 0x80000000;
  v12 = 0;
  LOBYTE(v14) = a3;
  v9(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
