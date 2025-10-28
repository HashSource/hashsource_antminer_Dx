int __fastcall set_voltage_by_steps(int a1, int a2)
{
  int v3; // r3
  int v4; // r1
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v9; // r1
  int v10; // r3
  int v11; // r1
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a2 )
  {
    V_LOCK();
    LOWORD(v9) = 5552;
    HIWORD(v9) = (unsigned int)"algo %d, %s" >> 16;
    LOWORD(v10) = 4784;
    HIWORD(v10) = (unsigned int)"ch" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v10, v9);
    V_UNLOCK();
    LOWORD(v11) = -32236;
    HIWORD(v11) = (unsigned int)"age power is not inited" >> 16;
    zlog(g_zc, v11, 149, "set_voltage_by_steps", 20, 460, 100, v12);
    return -1;
  }
  V_LOCK();
  LOWORD(v3) = -31908;
  HIWORD(v3) = (unsigned int)"o slow OR pic adc wrong" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v3, a1);
  V_UNLOCK();
  LOWORD(v4) = -32236;
  HIWORD(v4) = (unsigned int)"age power is not inited" >> 16;
  zlog(g_zc, v4, 149, "set_voltage_by_steps", 20, 464, 40, v12);
  if ( byte_175238 )
    v5 = dword_175254;
  else
    v5 = sub_559F8();
  v6 = a1 - v5;
  if ( a1 != v5 )
  {
    if ( a1 - v5 < 0 )
    {
      v7 = -10;
      if ( (int)abs32(v6) <= 10 )
      {
LABEL_11:
        if ( a1 != v5 )
          sub_55AFC(a1);
        return 0;
      }
    }
    else
    {
      v7 = 10;
      if ( (int)abs32(v6) <= 10 )
        goto LABEL_11;
    }
    do
    {
      v5 += v7;
      v6 -= v7;
      sub_55AFC(v5);
    }
    while ( (int)abs32(v6) > 10 );
    goto LABEL_11;
  }
  return 0;
}
