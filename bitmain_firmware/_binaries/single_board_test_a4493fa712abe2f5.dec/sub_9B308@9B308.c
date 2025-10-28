int sub_9B308()
{
  void *v0; // r4
  int result; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  char v5; // r4

  strcpy(byte_3B565C, "                ");
  v0 = &unk_104110;
  sprintf(byte_3B566D, " LEVEL: %d", dword_3B57B0 + 1);
  sprintf(&byte_3B566D[17], " NONCE: %.2f", flt_3B57A4);
  if ( !byte_3B57B4 )
    v0 = &unk_104124;
  result = *(_DWORD *)v0;
  v2 = *((_DWORD *)v0 + 1);
  v3 = *((_DWORD *)v0 + 2);
  v4 = *((_DWORD *)v0 + 3);
  v5 = *((_BYTE *)v0 + 16);
  *(_DWORD *)dword_3B568F = result;
  dword_3B5693 = v2;
  byte_3B569F = v5;
  dword_3B5697 = v3;
  dword_3B569B = v4;
  return result;
}
