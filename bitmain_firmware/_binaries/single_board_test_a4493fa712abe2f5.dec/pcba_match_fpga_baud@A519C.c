int __fastcall pcba_match_fpga_baud(int a1, int a2)
{
  size_t v4; // r6
  int *v5; // r8
  int v6; // t1
  void *v7; // r9
  int v8; // r11
  int v10; // [sp+4h] [bp-48h]
  int v11; // [sp+1Ch] [bp-30h]
  int v12; // [sp+24h] [bp-28h] BYREF
  _DWORD v13[4]; // [sp+28h] [bp-24h] BYREF
  _DWORD v14[5]; // [sp+38h] [bp-14h] BYREF

  v4 = *(_DWORD *)(a1 + 180);
  v5 = v13;
  v13[0] = "acket_eth";
  v13[1] = 460800;
  v13[2] = 921600;
  v13[3] = 3125000;
  while ( 1 )
  {
    v6 = *v5++;
    v11 = v6;
    (*(void (__fastcall **)(int))(a2 + 16))(v6);
    usleep((__useconds_t)&loc_7A120);
    v7 = calloc(v4, 0xCu);
    v14[2] = 1;
    v14[0] = 0;
    v14[1] = 0;
    v14[3] = 0;
    (*(void (__fastcall **)(int, _DWORD *, size_t, void *, int *, int, int, _DWORD))(a1 + 160))(
      a1,
      v14,
      v4,
      v7,
      &v12,
      v10,
      2000,
      0);
    v8 = v12;
    free(v7);
    if ( v4 == v8 )
      break;
    if ( v14 == v5 )
    {
      printf("%s not match baudrate\n", "pcba_match_fpga_baud");
      return 0;
    }
  }
  printf("current baudrate %d bps\n", v11);
  return 1;
}
