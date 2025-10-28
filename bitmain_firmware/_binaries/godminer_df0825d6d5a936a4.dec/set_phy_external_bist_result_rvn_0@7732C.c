int set_phy_external_bist_result_rvn_0()
{
  const char *v0; // r1
  const char *v1; // r1
  char v3[132]; // [sp+0h] [bp-84h] BYREF

  memset(v3, 0, 0x80u);
  sprintf(v3, "<phy bist err cnt> %lld", dword_176DF0, dword_176DF4);
  memset(v3, 0, 0x80u);
  sprintf(v3, "<phy bist lost cnt> %lld", dword_176DF8, dword_176DFC);
  memset(v3, 0, 0x80u);
  LOWORD(v0) = 3908;
  HIWORD(v0) = (unsigned int)&unk_14D9F8 >> 16;
  sprintf(v3, v0, dword_176DE8);
  memset(v3, 0, 0x80u);
  LOWORD(v1) = 3932;
  HIWORD(v1) = (unsigned int)&unk_14DA10 >> 16;
  return sprintf(v3, v1, dword_176DEC);
}
