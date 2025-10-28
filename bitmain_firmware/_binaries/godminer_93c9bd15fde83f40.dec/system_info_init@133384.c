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

  v1 = off_176C30[a1];
  if ( a1 > 9 )
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
    v4 = &asc_18A2B4[v2];
    byte_1AA700 = v3;
    pthread_mutex_lock(&stru_1A8A24);
    v5 = *(_DWORD *)&asc_18A2B4[v2 + 1264];
    logfmt_raw((char *)&v22, 0x1000u, 0, "algo %s fan_control_mode %d", v1, v5);
    v6 = v2 + 24;
    pthread_mutex_unlock(&stru_1A8A24);
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
    *(_DWORD *)&byte_1A4600 = *((_DWORD *)v4 + 309);
    *(_DWORD *)algn_1A4604 = v19;
    dword_1A4608 = v20;
    *(_DWORD *)&byte_1A460C = v21;
    v9 = *(_DWORD *)((char *)&all_algo_system_info + v6);
    v10 = *((_DWORD *)v4 + 316);
    v11 = *((float *)v4 + 317);
    v12 = *((float *)v4 + 318);
    v13 = *((_DWORD *)v4 + 319);
    dword_1A4610 = v7;
    dword_1A25A4 = v8;
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v25 = v13;
    dword_1A25A0 = v9;
    v14 = *((_DWORD *)v4 + 321);
    v15 = *((float *)v4 + 322);
    v16 = *((_DWORD *)v4 + 323);
    v26 = *((_DWORD *)v4 + 320);
    v27 = v14;
    v28 = v15;
    v29 = v16;
    v17 = *((_DWORD *)v4 + 324);
    dword_1A25A8 = v10;
    flt_1A25AC = v23;
    flt_1A25B0 = v24;
    dword_1A25B4 = v25;
    dword_1A25B8 = v26;
    dword_1A25BC = v14;
    flt_1A25C0 = v15;
    dword_1A25C4 = v16;
    dword_1A25C8 = v17;
    memset(&flt_1A45D0, 0, 0x2Cu);
    if ( v5 == 2 )
    {
      result = 0;
      dword_1A45E0 = -1056964608;
      flt_1A45D8 = (float)SLODWORD(flt_1A25C0);
      flt_1A45D4 = (float)SLODWORD(flt_1A25AC);
      flt_1A45D0 = (float)SLODWORD(flt_1A25B0);
      dword_1A45E4 = -1082130432;
      dword_1A45E8 = -1086324736;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
