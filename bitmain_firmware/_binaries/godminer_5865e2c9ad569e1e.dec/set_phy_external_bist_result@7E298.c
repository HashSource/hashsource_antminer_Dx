int set_phy_external_bist_result()
{
  const char *v0; // r1
  const char *v1; // r1
  const char *v2; // r1
  const char *v3; // r1
  char v5[128]; // [sp+0h] [bp-80h] BYREF

  memset(v5, 0, sizeof(v5));
  LOWORD(v0) = -6240;
  HIWORD(v0) = (unsigned int)"phy_external_bist_init" >> 16;
  sprintf(v5, v0, 0, 0);
  memset(v5, 0, sizeof(v5));
  LOWORD(v1) = -6220;
  HIWORD(v1) = (unsigned int)"it" >> 16;
  sprintf(v5, v1, 0, 0);
  memset(v5, 0, sizeof(v5));
  LOWORD(v2) = -6200;
  HIWORD(v2) = (unsigned int)"t_init" >> 16;
  sprintf(v5, v2, 0);
  memset(v5, 0, sizeof(v5));
  LOWORD(v3) = -6176;
  HIWORD(v3) = (unsigned int)" %s handshake failed!" >> 16;
  return sprintf(v5, v3, 0);
}
