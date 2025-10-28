void *frontend_runtime_hns()
{
  int v0; // r12
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  LOWORD(v0) = 4252;
  LOWORD(v1) = 5372;
  LOWORD(v2) = 2996;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v2) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v3) = 2748;
  LOWORD(v4) = -16580;
  dword_165B4C = v0;
  dword_165B50 = v1;
  HIWORD(v3) = (unsigned int)pre_stratum_connect >> 16;
  dword_165B54 = v2;
  HIWORD(v4) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -20060;
  LOWORD(v1) = -19372;
  LOWORD(v2) = 756;
  dword_165B58 = v3;
  dword_165B5C = v4;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v2) = (unsigned int)&loc_42058 >> 16;
  LOWORD(v3) = 2220;
  LOWORD(v4) = 700;
  dword_165B60 = v0;
  HIWORD(v3) = (unsigned int)&loc_42614 >> 16;
  dword_165B64 = v1;
  HIWORD(v4) = (unsigned int)&loc_42020 >> 16;
  dword_165B68 = v2;
  LOWORD(v0) = -18700;
  LOWORD(v1) = -17264;
  LOWORD(v2) = 2480;
  dword_165B6C = v3;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_165B70 = v4;
  HIWORD(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v2) = (unsigned int)&loc_42718 >> 16;
  LOWORD(v3) = 1468;
  LOWORD(v4) = -20680;
  dword_165B74 = v0;
  dword_165B78 = v1;
  HIWORD(v3) = (unsigned int)&loc_42320 >> 16;
  dword_165B7C = v2;
  HIWORD(v4) = (unsigned int)&loc_3BF28 >> 16;
  dword_165B80 = v3;
  dword_165B84 = v4;
  *(_QWORD *)&dword_165B8C = 0x4B5640004B550LL;
  dword_165B88 = 308672;
  v5 = calloc(1u, 0x54u);
  return memcpy(v5, &dword_165B4C, 0x54u);
}
