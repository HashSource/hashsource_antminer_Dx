int __fastcall system_info_init(unsigned int a1)
{
  char *v1; // r4
  unsigned int v2; // r6
  char v3; // r2
  char *v4; // r5
  int v5; // r9
  unsigned int v6; // r6
  int v7; // r10
  int v8; // lr
  int v9; // r11
  int v10; // r0
  float v11; // r1
  float v12; // r2
  int v13; // r3
  int v14; // r1
  float v15; // r2
  int v16; // r3
  int v17; // r12
  int result; // r0
  int v19; // [sp+18h] [bp-1014h]
  int v20; // [sp+1Ch] [bp-1010h]
  int v21; // [sp+20h] [bp-100Ch]
  int v22; // [sp+28h] [bp-1004h] BYREF
  float v23; // [sp+2Ch] [bp-1000h]
  float v24; // [sp+30h] [bp-FFCh]
  int v25; // [sp+34h] [bp-FF8h]
  int v26; // [sp+38h] [bp-FF4h]
  int v27; // [sp+3Ch] [bp-FF0h]
  float v28; // [sp+40h] [bp-FECh]
  int v29; // [sp+44h] [bp-FE8h]

  v1 = off_17435C[a1];
  if ( a1 > 7 )
  {
    V_LOCK();
    logfmt_raw((char *)&v22, 0x1000u, 0, "%s, wrong algo %s!", "system_info_init", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      13,
      100,
      &v22);
    return -1;
  }
  else
  {
    v2 = 68 * a1;
    if ( a1 - 5 >= 3 )
      v3 = 10;
    else
      v3 = 4;
    v4 = &asc_175B68[v2];
    byte_195C84 = v3;
    pthread_mutex_lock(&stru_197BB8);
    v5 = *(_DWORD *)&asc_175B68[v2 + 1264];
    logfmt_raw((char *)&v22, 0x1000u, 0, "algo %s fan_control_mode %d", v1, v5);
    v6 = v2 + 24;
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      24,
      60,
      &v22);
    v19 = *((_DWORD *)v4 + 310);
    v20 = *((_DWORD *)v4 + 311);
    v21 = *((_DWORD *)v4 + 312);
    v7 = *((_DWORD *)v4 + 313);
    v8 = *(_DWORD *)((char *)&all_algo_system_info + v6 + 4);
    *(_DWORD *)&byte_195C8C = *((_DWORD *)v4 + 309);
    unk_195C90 = v19;
    dword_195C94 = v20;
    *(_DWORD *)&byte_195C98 = v21;
    v9 = *(_DWORD *)((char *)&all_algo_system_info + v6);
    v10 = *((_DWORD *)v4 + 316);
    v11 = *((float *)v4 + 317);
    v12 = *((float *)v4 + 318);
    v13 = *((_DWORD *)v4 + 319);
    dword_195C9C = v7;
    dword_18F4B4 = v8;
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v25 = v13;
    dword_18F4B0 = v9;
    v14 = *((_DWORD *)v4 + 321);
    v15 = *((float *)v4 + 322);
    v16 = *((_DWORD *)v4 + 323);
    v26 = *((_DWORD *)v4 + 320);
    v27 = v14;
    v28 = v15;
    v29 = v16;
    v17 = *((_DWORD *)v4 + 324);
    dword_18F48C = v10;
    flt_18F490 = v23;
    flt_18F494 = v24;
    dword_18F498 = v25;
    dword_18F49C = v26;
    dword_18F4A0 = v14;
    flt_18F4A4 = v15;
    dword_18F4A8 = v16;
    dword_18F4AC = v17;
    memset(&flt_191BE8, 0, 0x2Cu);
    if ( v5 == 2 )
    {
      result = 0;
      dword_191BF8 = -1056964608;
      flt_191BF0 = (float)SLODWORD(flt_18F4A4);
      flt_191BEC = (float)SLODWORD(flt_18F490);
      flt_191BE8 = (float)SLODWORD(flt_18F494);
      dword_191BFC = -1082130432;
      dword_191C00 = -1086324736;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
