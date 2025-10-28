void *frontend_runtime_dash()
{
  int v0; // r12
  __int64 v1; // r2
  int v2; // r1
  int v3; // r0
  void *v4; // r0

  LOWORD(v0) = 4252;
  LOWORD(v1) = 5372;
  WORD2(v1) = 2996;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  WORD1(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v1) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v2) = 2748;
  LOWORD(v3) = -16580;
  dword_165A10 = v0;
  qword_165A14 = v1;
  HIWORD(v2) = (unsigned int)pre_stratum_connect >> 16;
  HIWORD(v3) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -20060;
  LOWORD(v1) = -19372;
  WORD2(v1) = -16532;
  dword_165A1C = v2;
  dword_165A20 = v3;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  WORD1(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3D054 >> 16;
  LOWORD(v2) = -9116;
  LOWORD(v3) = -12604;
  dword_165A24 = v0;
  HIWORD(v2) = (unsigned int)&loc_3ED60 >> 16;
  qword_165A28 = v1;
  HIWORD(v3) = (unsigned int)&loc_3DFBC >> 16;
  LOWORD(v0) = -18700;
  LOWORD(v1) = -17264;
  WORD2(v1) = -12496;
  dword_165A30 = v2;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_165A34 = v3;
  WORD1(v1) = (unsigned int)&loc_3CD78 >> 16;
  LOWORD(v2) = -13356;
  LOWORD(v3) = -20680;
  dword_165A38 = v0;
  HIWORD(v1) = (unsigned int)&loc_3E028 >> 16;
  qword_165A3C = v1;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  LOWORD(v0) = -22216;
  LOWORD(v1) = -22664;
  WORD2(v1) = -22816;
  HIWORD(v0) = (unsigned int)&locret_4FF98 >> 16;
  WORD1(v1) = (unsigned int)&loc_4FDD8 >> 16;
  HIWORD(v1) = (unsigned int)&loc_4FD40 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3DCC8 >> 16;
  dword_165A44 = v2;
  dword_165A48 = v3;
  *(_QWORD *)&dword_165A50 = v1;
  dword_165A4C = v0;
  v4 = calloc(1u, 0x54u);
  return memcpy(v4, &dword_165A10, 0x54u);
}
