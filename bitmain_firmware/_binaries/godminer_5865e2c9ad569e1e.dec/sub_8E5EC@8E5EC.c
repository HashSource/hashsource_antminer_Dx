int __fastcall sub_8E5EC(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  unsigned int v4; // r6
  int v5; // r7
  float v6; // s11
  int v7; // r10
  int v8; // r8
  int v9; // r9
  int v10; // r5
  float v11; // s15
  int v12; // r3
  int v13; // r1
  float v14; // s16
  float v15; // s17
  int v17; // r4
  __int64 v19; // [sp+38h] [bp-48h]
  int v22; // [sp+4Ch] [bp-34h]
  _DWORD v23[2]; // [sp+50h] [bp-30h] BYREF
  int v24; // [sp+58h] [bp-28h]
  int v25; // [sp+5Ch] [bp-24h]
  int v26; // [sp+60h] [bp-20h] BYREF
  int v27; // [sp+64h] [bp-1Ch]
  int v28; // [sp+68h] [bp-18h]
  int v29; // [sp+6Ch] [bp-14h]
  __int64 v30; // [sp+70h] [bp-10h]
  int v31; // [sp+78h] [bp-8h]
  int v32; // [sp+7Ch] [bp-4h]
  char v33[4100]; // [sp+80h] [bp+0h] BYREF

  v3 = 0;
  v24 = 0;
  v23[1] = 0;
  v25 = 0;
  v23[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v24) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v24) = 12;
  }
  else
  {
    HIWORD(v24) = v3;
  }
  v4 = -1068236443;
  v5 = 2;
  v22 = 2;
LABEL_8:
  v6 = (float)v5;
  v7 = 0;
  v8 = 0;
LABEL_9:
  v9 = v8 + 1;
  v10 = v8;
  while ( 1 )
  {
    v11 = (float)(v10 + 1);
    v12 = (int)(float)((float)((float)((float)((float)(v2 * (float)v9) * v11) * v6) / 25.0) * 100.0);
    v19 = 1374389535LL * v12;
    v13 = v12 / 100;
    if ( v12 % 100 > 50 )
      ++v13;
    if ( (unsigned int)(v13 - 16) <= 0xEA )
    {
      v14 = (float)((float)v13 * 25.0) / v6;
      if ( (v5 != 1 || v14 <= 3125.0) && v14 <= 3200.0 && v14 >= 2000.0 )
      {
        v4 = v10 & 7 | (v5 << 8) | 0xC0000000 | v7 | (v13 << 16) | ((v14 > 2400.0) << 28);
        v15 = (float)(v14 / (float)v9) / v11;
        if ( fabsf(v15 - v2) < 3.0 )
          break;
      }
    }
    if ( v10-- == 0 )
    {
      v7 += 16;
      ++v8;
      if ( v9 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v22 == 1 )
      {
        v23[0] = v4;
        V_LOCK();
        V_INT((int)&v26, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v33,
          0x1000u,
          0,
          v32,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          "set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          0,
          0,
          v2,
          v19);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/./backend/chip_setting.c",
          151,
          "ChipSetting_freq_LTC_1489",
          25,
          638,
          40,
          v33);
        goto LABEL_24;
      }
      v22 = 1;
      goto LABEL_8;
    }
  }
  v17 = v13;
  V_LOCK();
  logfmt_raw(
    v33,
    0x1000u,
    0,
    "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
    v2,
    v15,
    v14,
    v17,
    v5,
    v8,
    v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/./backend/chip_setting.c",
    151,
    "inferred_plldivider",
    19,
    538,
    20,
    v33);
  v23[0] = v4;
  V_LOCK();
  V_INT((int)&v26, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v33,
    0x1000u,
    0,
    v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v15,
    v2,
    v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/./backend/chip_setting.c",
    151,
    "ChipSetting_freq_LTC_1489",
    25,
    638,
    40,
    v33);
  if ( v15 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v23);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
