int __fastcall fan_control_info_init(int a1, float a2, float a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_1A25A8 = a1;
  flt_1A25AC = a2;
  flt_1A25B0 = a3;
  dword_1A25B4 = a4;
  dword_1A25B8 = a5;
  dword_1A25BC = a6;
  flt_1A25C0 = a7;
  dword_1A25C4 = a8;
  dword_1A25C8 = a9;
  memset(&flt_1A45D0, 0, 0x2Cu);
  if ( dword_1A25A8 == 2 )
  {
    dword_1A45E0 = -1056964608;
    flt_1A45D8 = (float)SLODWORD(flt_1A25C0);
    flt_1A45D4 = (float)SLODWORD(flt_1A25AC);
    flt_1A45D0 = (float)SLODWORD(flt_1A25B0);
    dword_1A45E4 = -1082130432;
    dword_1A45E8 = -1086324736;
  }
  return 0;
}
