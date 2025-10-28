int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  _DWORD *v7; // r11
  int v8; // r5
  int v9; // r10
  int v10; // r7
  int v11; // r3
  int v12; // r7
  int v13; // r7
  int v15; // r0
  int v16; // r7
  int v17; // [sp+14h] [bp-1810h]
  unsigned __int8 v18; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  unsigned int v20; // [sp+820h] [bp-1004h] BYREF
  __int16 v21; // [sp+824h] [bp-1000h]
  char v22; // [sp+826h] [bp-FFEh]
  char v23; // [sp+827h] [bp-FFDh]

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v20, 0x1000u, 0, s);
    V_UNLOCK();
    v13 = -2147483391;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "eeprom_read",
      11,
      117,
      100,
      &v20);
    return v13;
  }
  v7 = &dword_12C11C[2 * a1];
  if ( !v7[1] )
  {
    v17 = a3;
    v20 = a1;
    v21 = 0;
    v23 = a1;
    v22 = 10;
    v15 = iic_init((int)&v20);
    v16 = v15;
    if ( v15 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      V_LOCK();
      logfmt_raw((char *)&v20, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        80,
        "eeprom_read",
        11,
        122,
        100,
        &v20);
      return v16;
    }
    dword_12C11C[2 * a1] = v15;
    v7[1] = 1;
    a3 = v17;
  }
  if ( !a4 )
  {
LABEL_8:
    v13 = 0;
    usleep((__useconds_t)&loc_7A120);
    return v13;
  }
  v8 = a3;
  v9 = a4 + a3;
  while ( 1 )
  {
    v18 = a2;
    v10 = dword_12C11C[2 * a1];
    if ( pthread_mutex_lock(&stru_3B5254) )
      break;
    v11 = v8++;
    v12 = i2c_read_reg(v10, &v18, 1, v11, 1);
    pthread_mutex_unlock(&stru_3B5254);
    ++a2;
    if ( v12 != 1 )
      goto LABEL_12;
    if ( v9 == v8 )
      goto LABEL_8;
  }
  strcpy(s, "failed to i2c lock\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v20, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
    81,
    "iic_read_reg",
    12,
    124,
    100,
    &v20);
LABEL_12:
  snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v18);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v20, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    80,
    "eeprom_read",
    11,
    132,
    100,
    &v20);
  return -2147483392;
}
