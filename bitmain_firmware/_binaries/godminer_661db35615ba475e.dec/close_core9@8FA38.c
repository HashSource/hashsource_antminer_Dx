int __fastcall close_core9(int a1)
{
  _DWORD v2[4]; // [sp+0h] [bp-10h] BYREF

  v2[2] = 851969;
  v2[3] = 9;
  v2[1] = 0;
  v2[0] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v2);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
