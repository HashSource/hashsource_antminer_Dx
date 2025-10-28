int set_phy_external_bist_result()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy err cnt> %ld", dword_1A3DF8);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost cnt> %ld", dword_1A3E00);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_1A3DF0);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_1A3DF4);
}
