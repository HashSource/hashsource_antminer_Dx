int godminer_register_status_monitor()
{
  int v0; // r12
  int v1; // r1
  int v2; // lr
  int v3; // r3
  int v4; // r0
  int v5; // r2
  int v6; // r12
  int v7; // r1

  v0 = dword_1A45B8;
  v1 = dword_1A4170;
  LOWORD(v2) = 20164;
  v3 = *(_DWORD *)(dword_1A45B8 + 1024);
  HIWORD(v2) = (unsigned int)&loc_23CE4 >> 16;
  LOWORD(v4) = 20984;
  v5 = dword_1A45B4;
  HIWORD(v4) = (unsigned int)&loc_24018 >> 16;
  *(_DWORD *)(dword_1A45B8 + 4 * v3) = v2;
  *(_DWORD *)(v0 + 1024) = v3 + 1;
  LOWORD(v3) = 21384;
  v6 = *(_DWORD *)(v1 + 1024);
  HIWORD(v3) = (unsigned int)&loc_241A8 >> 16;
  *(_DWORD *)(v1 + 4 * v6) = v4;
  *(_DWORD *)(v1 + 1024) = v6 + 1;
  v7 = *(_DWORD *)(v5 + 1024);
  *(_DWORD *)(v5 + 4 * v7) = v3;
  *(_DWORD *)(v5 + 1024) = v7 + 1;
  return v7 + 1;
}
