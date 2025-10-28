int __fastcall sub_A3CE0(int a1, int a2)
{
  int v2; // r4
  char v4[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  *(_QWORD *)a1 = 0x2423161403020100LL;
  *(_BYTE *)(a1 + 8) = 45;
  if ( a2 == 3 )
  {
    *(_DWORD *)(a1 + 28) = 16843121;
    *(_DWORD *)(a1 + 32) = 17629713;
    v2 = 1;
    qmemcpy((void *)(a1 + 9), "MNRSTUVWXZ\\^`abcd", 17);
    *(_WORD *)(a1 + 36) = 8201;
  }
  else
  {
    v2 = 0;
    *(_BYTE *)(a1 + 29) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    *(_BYTE *)(a1 + 35) = 1;
    *(_BYTE *)(a1 + 32) = 17;
    *(_BYTE *)(a1 + 33) = 2;
    *(_BYTE *)(a1 + 34) = 13;
    *(_BYTE *)(a1 + 37) = 32;
  }
  *(_WORD *)(a1 + 38) = 1025;
  *(_WORD *)(a1 + 40) = 257;
  *(_WORD *)(a1 + 42) = 257;
  *(_WORD *)(a1 + 44) = 257;
  *(_WORD *)(a1 + 50) = 257;
  *(_WORD *)(a1 + 52) = 257;
  *(_WORD *)(a1 + 46) = 514;
  *(_WORD *)(a1 + 48) = 514;
  *(_WORD *)(a1 + 54) = 264;
  if ( !v2 )
  {
    strcpy(v4, "This FMT is not supported");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "init_eeprom_fmt_info",
      20,
      434,
      100,
      v5);
  }
  return v2;
}
