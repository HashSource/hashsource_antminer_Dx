void *machine_runtime_ctrl_rvn_2020_0()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r1
  int v4; // r2
  _DWORD v6[28]; // [sp+0h] [bp-70h] BYREF

  memset(&v6[4], 0, 0x58u);
  v0 = calloc(1u, 0x70u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -26832;
    LOWORD(v3) = -26832;
    HIWORD(v2) = (unsigned int)&loc_4EC34 >> 16;
    HIWORD(v3) = (unsigned int)&loc_4EC34 >> 16;
    LOWORD(v4) = 31608;
    v6[0] = v2;
    LOWORD(v2) = 31976;
    HIWORD(v4) = (unsigned int)&loc_4C554 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4C6C4 >> 16;
    v6[1] = v3;
    LOWORD(v3) = 32584;
    v6[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_4C924 >> 16;
    LOWORD(v4) = 29420;
    v6[3] = v2;
    LOWORD(v2) = 32616;
    HIWORD(v4) = (unsigned int)&loc_4BCC8 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4C944 >> 16;
    v6[7] = v3;
    v6[8] = v4;
    v6[9] = v2;
    LOWORD(v4) = -29860;
    LOWORD(v2) = -29648;
    HIWORD(v4) = (unsigned int)&loc_4DDE8 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4DEBC >> 16;
    v6[10] = start_mining_base;
    LOWORD(v3) = -32172;
    v6[11] = v4;
    HIWORD(v3) = (unsigned int)&loc_4CEAC >> 16;
    LOWORD(v4) = 29912;
    v6[12] = v2;
    HIWORD(v4) = (unsigned int)&loc_4BEB4 >> 16;
    v6[13] = v3;
    v6[14] = v4;
    v6[27] = 1215816;
    v6[17] = 35;
    v6[24] = 1145569280;
    v6[26] = 1065353216;
    v6[18] = 9600;
    v6[19] = 9600;
    v6[20] = 20;
    v6[22] = 1480;
    memcpy(v0, v6, 0x70u);
  }
  else
  {
    printf("invalid pointer(%s)!\n", 1215164);
  }
  return v1;
}
