int __fastcall stop_mining_eth(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  int v4; // [sp+0h] [bp-10h] BYREF
  int v5; // [sp+4h] [bp-Ch]
  int v6; // [sp+8h] [bp-8h]
  int v7; // [sp+Ch] [bp-4h]

  (*(void (**)(void))(a1 + 48))();
  off_1A2B90(*(_DWORD *)(a1 + 132));
  *(_BYTE *)(a1 + 141) = 0;
  *(_BYTE *)(a1 + 142) = 0;
  set_ticketmask(a1, 63);
  v5 = 0;
  v7 = 0;
  v6 = 5373953;
  v4 = 9;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v4);
  usleep((__useconds_t)&stru_18694.st_info);
  v6 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v6) = 12;
  v4 = 2;
  v7 = 255;
  LOBYTE(v6) = 1;
  v5 = 0;
  v2(a1, &v4);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
