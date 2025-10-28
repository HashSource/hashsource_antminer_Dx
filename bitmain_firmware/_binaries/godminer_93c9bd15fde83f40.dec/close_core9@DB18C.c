int __fastcall close_core9(int a1)
{
  _DWORD v2[4]; // [sp+0h] [bp-10h] BYREF

  v2[2] = 851969;
  v2[3] = 9;
  v2[1] = 0;
  v2[0] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v2);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep(0x2710u);
  return 0;
}
