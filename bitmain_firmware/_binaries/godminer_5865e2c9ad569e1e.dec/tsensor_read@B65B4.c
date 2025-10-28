int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, unsigned int a5)
{
  int v7; // r0
  int v8; // r8
  int v10; // r2
  unsigned __int8 v11; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v12; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v14[4072]; // [sp+818h] [bp-1000h] BYREF

  v12 = a2;
  v11 = a3;
  if ( a1 > 0xF )
  {
    v8 = -2147482111;
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      171,
      "tsensor_read",
      12,
      155,
      100,
      v14);
    return v8;
  }
  v7 = sub_B5F18(a1, v12);
  if ( v7 == -2147482112 )
  {
    v8 = tsensor_open(a1, &v12, 1u);
    if ( v8 < 0 )
    {
      snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v12);
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      v10 = 164;
      goto LABEL_9;
    }
    v7 = sub_B5F18(a1, v12);
    if ( v7 == -2147482112 )
    {
      snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v12);
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
        171,
        "tsensor_read",
        12,
        171,
        100,
        v14);
      return v8;
    }
  }
  v8 = iic_read_reg(*(void **)&byte_18A948[68 * a1 + 8 + 8 * v7], &v11, 2, a4, a5);
  if ( v8 == a5 )
    return v8;
  v8 = -2147482112;
  snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v12, v11);
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, s);
  V_UNLOCK();
  v10 = 196;
LABEL_9:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    171,
    "tsensor_read",
    12,
    v10,
    100,
    v14);
  return v8;
}
