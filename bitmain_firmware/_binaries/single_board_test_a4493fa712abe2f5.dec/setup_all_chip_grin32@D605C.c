int __fastcall setup_all_chip_grin32(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+0h] [bp-10h] BYREF
  __int16 v5; // [sp+8h] [bp-8h]
  __int16 v6; // [sp+Ah] [bp-6h]
  int v7; // [sp+Ch] [bp-4h]

  puts("setup_all_chip_grin32");
  **(_BYTE **)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 224) = 256;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 132))(a1, *(_DWORD *)(a1 + 280), 1);
  sub_BDA08((int *)a1);
  v4[1] = 0;
  v5 = 0;
  v4[0] = -2147483647;
  v6 = 22;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  v7 = 0;
  LOBYTE(v5) = 1;
  v2(a1, v4);
  sub_BD954(a1);
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
