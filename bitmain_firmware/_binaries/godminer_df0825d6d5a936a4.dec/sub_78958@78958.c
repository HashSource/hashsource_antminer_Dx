int __fastcall sub_78958(_DWORD *a1, int a2)
{
  char v3; // r2
  void (__fastcall *v4)(_DWORD *, _DWORD *, int, unsigned __int16 *, int *); // r6
  unsigned int v6; // r6
  int v8; // [sp+18h] [bp-1020h] BYREF
  unsigned __int16 v9; // [sp+1Ch] [bp-101Ch] BYREF
  unsigned __int8 v10; // [sp+20h] [bp-1018h]
  unsigned __int16 v11; // [sp+22h] [bp-1016h]
  _DWORD v12[2]; // [sp+28h] [bp-1010h] BYREF
  int v13; // [sp+30h] [bp-1008h]
  int v14; // [sp+34h] [bp-1004h]
  char v15[4096]; // [sp+38h] [bp-1000h] BYREF

  v3 = a1[97] * a2;
  v13 = 0;
  v4 = (void (__fastcall *)(_DWORD *, _DWORD *, int, unsigned __int16 *, int *))a1[63];
  BYTE1(v13) = v3;
  v12[1] = 0;
  v14 = 0;
  v12[0] = 0;
  v8 = 0;
  v4(a1, v12, 1, &v9, &v8);
  v6 = v9;
  V_LOCK();
  logfmt_raw(
    v15,
    0x1000u,
    0,
    "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
    (unsigned __int16)__rev16(v6),
    a1[72],
    a2,
    v11,
    v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_godminer-new/backend/chip_setting.c",
           149,
           "ChipSetting_get_addr_one_by_one_HNS_2130",
           40,
           36,
           40,
           v15);
}
