void *machine_runtime_ctrl_zec_1746()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v3; // r1
  int v4; // r2
  _DWORD v6[28]; // [sp+0h] [bp-74h] BYREF

  memset(&v6[4], 0, 0x58u);
  v0 = calloc(1u, 0x70u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = -26520;
    LOWORD(v3) = -26512;
    HIWORD(v2) = (unsigned int)set_cur_seed_rvn >> 16;
    HIWORD(v3) = (unsigned int)&loc_4CA08 >> 16;
    LOWORD(v4) = 31608;
    v6[0] = v2;
    LOWORD(v2) = 31976;
    HIWORD(v4) = (unsigned int)&locret_4AB50 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4ACC0 >> 16;
    v6[1] = v3;
    LOWORD(v3) = 31564;
    v6[2] = v4;
    HIWORD(v3) = (unsigned int)&loc_4AB24 >> 16;
    LOWORD(v4) = -25456;
    v6[3] = v2;
    LOWORD(v2) = 29420;
    HIWORD(v4) = (unsigned int)&loc_4CE28 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4A2C4 >> 16;
    v6[6] = v3;
    v6[7] = v4;
    v6[8] = v2;
    LOWORD(v4) = -31232;
    LOWORD(v2) = -29860;
    HIWORD(v4) = (unsigned int)&loc_4B788 >> 16;
    HIWORD(v2) = (unsigned int)&loc_4BCE4 >> 16;
    v6[9] = set_frequency_with_voltage_zec;
    LOWORD(v3) = -29648;
    v6[10] = v4;
    HIWORD(v3) = (unsigned int)&loc_4BDB8 >> 16;
    LOWORD(v4) = -32172;
    v6[11] = v2;
    LOWORD(v2) = 29912;
    HIWORD(v4) = (unsigned int)&loc_4B3DC >> 16;
    HIWORD(v2) = (unsigned int)&dbl_4A4B0 >> 16;
    v6[12] = v3;
    v6[13] = v4;
    v6[14] = v2;
    v6[19] = 3000000;
    v6[18] = "ync_get_dag_node_base";
    v6[23] = &loc_30D40;
    v6[27] = 1215804;
    v6[26] = 1065353216;
    v6[24] = 1147207680;
    v6[17] = 255;
    v6[20] = 22;
    v6[22] = 1350;
    memcpy(v0, v6, 0x70u);
  }
  else
  {
    printf("invalid pointer(%s)!\n", 1215164);
  }
  return v1;
}
