int __fastcall power_info_init(int a1, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)&byte_1A4600 = a1;
  *(_DWORD *)algn_1A4604 = a2;
  dword_1A4608 = a3;
  *(_DWORD *)&byte_1A460C = a4;
  dword_1A4610 = a5;
  return 0;
}
