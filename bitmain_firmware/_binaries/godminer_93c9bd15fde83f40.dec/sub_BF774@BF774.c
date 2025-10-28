int __fastcall sub_BF774(int a1, char a2, int a3, unsigned int a4)
{
  unsigned int v6; // r7
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v8)(int, unsigned int *); // r3
  unsigned int v10; // [sp+0h] [bp-14h] BYREF
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v12 = 9437184;
  v10 = a4;
  v13 = 0;
  v6 = a3 | 0x80000000;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  v11 = 0;
  LOBYTE(v13) = a2;
  LOBYTE(v12) = 1;
  v7(a1, &v10);
  usleep((__useconds_t)&stru_18694.st_info);
  v12 = 0;
  v13 = 0;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  HIWORD(v12) = 145;
  LOBYTE(v12) = 1;
  v10 = v6;
  v11 = 0;
  LOBYTE(v13) = a2;
  v8(a1, &v10);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
