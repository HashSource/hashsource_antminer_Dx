int get_working_voltage()
{
  int v0; // r4
  int v2; // r1
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (unsigned __int8)byte_175238;
  if ( byte_175238 )
    return dword_175244;
  V_LOCK();
  LOWORD(v2) = 5552;
  HIWORD(v2) = (unsigned int)"algo %d, %s" >> 16;
  LOWORD(v3) = 4784;
  HIWORD(v3) = (unsigned int)"ch" >> 16;
  logfmt_raw(v5, 0x1000u, v0, v3, v2);
  V_UNLOCK();
  LOWORD(v4) = -32236;
  HIWORD(v4) = (unsigned int)"age power is not inited" >> 16;
  zlog(g_zc, v4, 149, "get_working_voltage", 19, 507, 100, v5);
  return -1;
}
