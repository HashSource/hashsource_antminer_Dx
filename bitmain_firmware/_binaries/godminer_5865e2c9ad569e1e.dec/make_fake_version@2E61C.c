int make_fake_version()
{
  int v0; // r3
  int v1; // r2
  const char *v2; // r1
  int v3; // r4
  int *v4; // r3
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char v9[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v0) = 6028;
  LOWORD(v1) = 5392;
  LOWORD(v2) = 28200;
  LOWORD(v3) = 16584;
  HIWORD(v0) = (unsigned int)"to pool" >> 16;
  HIWORD(v1) = (unsigned int)"etsocket SO_SNDTIMEO failed\n" >> 16;
  HIWORD(v2) = (unsigned int)"%s" >> 16;
  HIWORD(v3) = (unsigned int)&unk_173098 >> 16;
  sprintf(v9, v2, v1, v0);
  strcpy((char *)(v3 + 164), v9);
  LOWORD(v4) = 5404;
  v3 += 228;
  HIWORD(v4) = (unsigned int)"SNDTIMEO failed\n" >> 16;
  result = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  *(_DWORD *)v3 = result;
  *(_DWORD *)(v3 + 4) = v6;
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = v8;
  return result;
}
