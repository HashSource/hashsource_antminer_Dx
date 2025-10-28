int __fastcall softreset_all_chip_kas(int a1)
{
  char *v2; // r1
  int v3; // r5
  int v4; // r5
  int v5; // r1
  int v6; // r3
  int v7; // r1
  unsigned int v8; // r0
  int (**v9)(); // r0
  int (**v10)(); // r0
  int v12; // [sp+20h] [bp-102Ch]
  _DWORD v13[7]; // [sp+28h] [bp-1024h] BYREF
  int v14; // [sp+44h] [bp-1008h]
  int v15; // [sp+48h] [bp-1004h] BYREF
  int v16; // [sp+4Ch] [bp-1000h]
  int v17; // [sp+50h] [bp-FFCh]
  int v18; // [sp+54h] [bp-FF8h]
  int v19; // [sp+58h] [bp-FF4h]
  int v20; // [sp+5Ch] [bp-FF0h]
  int v21; // [sp+60h] [bp-FECh]
  int v22; // [sp+64h] [bp-FE8h]
  int v23; // [sp+68h] [bp-FE4h]
  int v24; // [sp+6Ch] [bp-FE0h]
  int v25; // [sp+70h] [bp-FDCh]
  int v26; // [sp+74h] [bp-FD8h]
  int v27; // [sp+78h] [bp-FD4h]
  __int16 v28; // [sp+7Ch] [bp-FD0h]

  V_LOCK();
  LOWORD(v2) = 620;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  V_INT((int)v13, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -2184;
  HIWORD(v3) = (unsigned int)"et_KDA_2110" >> 16;
  v12 = v3;
  v4 = 10;
  logfmt_raw((char *)&v15, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v12);
  V_UNLOCK();
  LOWORD(v5) = -2504;
  HIWORD(v5) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v5, 170, "softreset_all_chip_kas", 22, 623, 40, &v15);
  V_LOCK();
  LOWORD(v6) = -21264;
  HIWORD(v6) = (unsigned int)"%s, work count %d" >> 16;
  logfmt_raw((char *)&v15, 0x1000u, 0, v6, "ChipSetting_software_reset_KAS_2380", 68);
  V_UNLOCK();
  LOWORD(v7) = -21416;
  HIWORD(v7) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(g_zc, v7, 149, "ChipSetting_software_reset_KAS_2380", 35, 125, 20, &v15);
  v17 = 4456449;
  v18 = 0;
  v15 = 3;
  v16 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v15);
  do
  {
    usleep((__useconds_t)&stru_18698.st_size);
    v15 = 53520981;
    v16 = -1996423168;
    v17 = 1568885659;
    v18 = -2022340884;
    v19 = 739994112;
    v20 = 2023104256;
    v21 = 504402544;
    v22 = 232286627;
    v23 = 1496646687;
    v24 = 295890251;
    v25 = 1890778236;
    v26 = 60442;
    v27 = 0;
    v28 = 13171;
    v8 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 912));
    do
    {
      v9 = dev_ctrl(v8);
      v8 = ((int (__fastcall *)(_DWORD))v9[17])(*(_DWORD *)(a1 + 228));
    }
    while ( v8 <= 0x35 );
    v10 = dev_ctrl(v8);
    ((void (__fastcall *)(_DWORD, int *, int))v10[13])(*(_DWORD *)(a1 + 228), &v15, 54);
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 912));
    --v4;
  }
  while ( v4 );
  sub_844D0(a1, 10, 0);
  sub_845E4((int *)a1, 127);
  return 0;
}
