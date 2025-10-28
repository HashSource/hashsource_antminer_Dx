int dump_target_diff()
{
  int v0; // s0
  int v1; // s1
  int v2; // r3
  int v3; // r1
  int v5; // [sp+4h] [bp-100Ch]
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v2) = 17488;
  HIWORD(v2) = (unsigned int)": [\"GodMiner/1.0.0\", null]}" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v2, "dump_target_diff", v5, v0, v1);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v3) = 17324;
  HIWORD(v3) = (unsigned int)"nonce" >> 16;
  return zlog(g_zc, v3, 163, "dump_target_diff", 16, 19, 20, v6);
}
