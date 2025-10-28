int __fastcall set_check_asic_voltage(int a1)
{
  int v2; // r3
  int v3; // r1
  int result; // r0
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -31880;
  HIWORD(v2) = (unsigned int)"ain power fw version: %04x" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = -32236;
  HIWORD(v3) = (unsigned int)"age power is not inited" >> 16;
  zlog(g_zc, v3, 149, "set_check_asic_voltage", 22, 549, 40, v7);
  if ( a1 )
    result = set_voltage_by_steps(dword_17524C, (unsigned __int8)byte_175238);
  else
    result = set_voltage(dword_17524C, (unsigned __int8)byte_175238);
  if ( result )
  {
    V_LOCK();
    LOWORD(v5) = -31856;
    HIWORD(v5) = (unsigned int)"4x" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = -32236;
    HIWORD(v6) = (unsigned int)"age power is not inited" >> 16;
    zlog(g_zc, v6, 149, "set_check_asic_voltage", 22, 557, 100, v7);
    return -1;
  }
  return result;
}
