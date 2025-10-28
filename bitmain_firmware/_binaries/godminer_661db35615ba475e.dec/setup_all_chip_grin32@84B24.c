int __fastcall setup_all_chip_grin32(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  int result; // r0
  _DWORD v4[2]; // [sp+0h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  puts("setup_all_chip_grin32");
  **(_BYTE **)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 224) = 256;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 132))(a1, *(_DWORD *)(a1 + 280), 1);
  sub_4AA58(a1);
  v5 = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  LOBYTE(v5) = 1;
  HIWORD(v5) = 22;
  v4[0] = -2147483647;
  v4[1] = 0;
  v6 = 0;
  v2(a1, v4);
  sub_4A96C(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
