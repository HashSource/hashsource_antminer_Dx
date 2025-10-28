void *frontend_runtime_eth()
{
  __int64 v0; // r2
  int v1; // r12
  int v2; // r1
  int v3; // r0
  void *v4; // r0

  dword_165AB8 = 200860;
  LOWORD(v0) = -16580;
  WORD2(v0) = -1172;
  dword_165ABC = 201980;
  WORD1(v0) = (unsigned int)&loc_3A8C0 >> 16;
  dword_165AC0 = 199604;
  HIWORD(v0) = (unsigned int)&loc_3E4F0 >> 16;
  dword_165AC4 = 199356;
  LOWORD(v1) = -772;
  LOWORD(v2) = -284;
  LOWORD(v3) = -2764;
  qword_165AC8 = v0;
  HIWORD(v1) = (unsigned int)&loc_3E680 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3E868 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3DEB8 >> 16;
  LOWORD(v0) = -2980;
  WORD2(v0) = -18700;
  dword_165AD0 = v1;
  dword_165AD4 = v2;
  WORD1(v0) = (unsigned int)&loc_3DDE0 >> 16;
  dword_165AD8 = v3;
  HIWORD(v0) = (unsigned int)&locret_3A078 >> 16;
  LOWORD(v1) = -2508;
  LOWORD(v2) = -1260;
  LOWORD(v3) = -20624;
  qword_165ADC = v0;
  HIWORD(v1) = (unsigned int)&loc_3DFB8 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3E498 >> 16;
  HIWORD(v3) = (unsigned int)&loc_48AE8 >> 16;
  LOWORD(v0) = -20644;
  WORD2(v0) = -20552;
  WORD1(v0) = (unsigned int)&loc_48AD4 >> 16;
  HIWORD(v0) = (unsigned int)&loc_48B30 >> 16;
  dword_165AE4 = v1;
  dword_165AEC = v2;
  dword_165AF4 = v3;
  *(_QWORD *)&dword_165AF8 = v0;
  dword_165AE8 = 0;
  dword_165AF0 = 0;
  v4 = calloc(1u, 0x54u);
  return memcpy(v4, &dword_165AB8, 0x54u);
}
