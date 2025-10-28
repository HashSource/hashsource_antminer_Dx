int __fastcall set_onechip_to_lower_level_kas(int a1, int a2)
{
  char *v4; // r1
  int v5; // r4
  int v6; // r1
  int v7; // r3
  void (__fastcall *v8)(int, int *); // r2
  int v9; // r3
  void (__fastcall *v10)(int, int *); // r2
  _DWORD v12[7]; // [sp+28h] [bp-1020h] BYREF
  int v13; // [sp+44h] [bp-1004h]
  int v14; // [sp+48h] [bp-1000h] BYREF
  int v15; // [sp+4Ch] [bp-FFCh]
  int v16; // [sp+50h] [bp-FF8h]
  int v17; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v4) = 620;
  HIWORD(v4) = (unsigned int)" %lld" >> 16;
  V_INT((int)v12, v4, *(int *)(a1 + 232));
  LOWORD(v5) = -2112;
  HIWORD(v5) = (unsigned int)"dump_work_kda" >> 16;
  logfmt_raw((char *)&v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v5, a2);
  V_UNLOCK();
  LOWORD(v6) = -2504;
  HIWORD(v6) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v6, 170, "set_onechip_to_lower_level_kas", 30, 657, 40, &v14);
  v7 = *(_DWORD *)(a1 + 332);
  v16 = 4456448;
  v17 = 0;
  v15 = 0;
  v14 = 3;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 248);
  BYTE1(v16) = v7 * a2;
  v8(a1, &v14);
  v9 = *(_DWORD *)(a1 + 332);
  v16 = 655360;
  v17 = 255;
  v15 = 0;
  v14 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 252);
  BYTE1(v16) = v9 * a2;
  v10(a1, &v14);
  usleep((__useconds_t)&stru_13878.st_size);
  sub_845E4((int *)a1, 36);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 196))(a1, 0, a2);
  return 0;
}
