int __fastcall fan_control_info_init(int a1, float a2, float a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_18F48C = a1;
  flt_18F490 = a2;
  flt_18F494 = a3;
  dword_18F498 = a4;
  dword_18F49C = a5;
  dword_18F4A0 = a6;
  flt_18F4A4 = a7;
  dword_18F4A8 = a8;
  dword_18F4AC = a9;
  memset(&flt_191BE8, 0, 0x2Cu);
  if ( dword_18F48C == 2 )
  {
    dword_191BF8 = -1056964608;
    flt_191BF0 = (float)SLODWORD(flt_18F4A4);
    flt_191BEC = (float)SLODWORD(flt_18F490);
    flt_191BE8 = (float)SLODWORD(flt_18F494);
    dword_191BFC = -1082130432;
    dword_191C00 = -1086324736;
  }
  return 0;
}
