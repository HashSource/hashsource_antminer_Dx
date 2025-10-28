int __fastcall top_init_kas(int a1)
{
  int v2; // r4
  char *v3; // r1
  int v4; // r1
  int v5; // r8
  int v6; // r4
  int v7; // r0
  int v8; // r1
  char v9; // r3
  int v10; // r1
  int v11; // r4
  unsigned __int16 *v12; // r8
  char *v13; // r3
  int v14; // r11
  unsigned __int16 *v15; // r5
  int v16; // r8
  int v17; // r1
  int v19; // [sp+4h] [bp-94h]
  unsigned __int16 *ptr; // [sp+34h] [bp-64h]
  char *s; // [sp+38h] [bp-60h]
  int v22; // [sp+44h] [bp-54h] BYREF
  _DWORD v23[4]; // [sp+48h] [bp-50h] BYREF
  _DWORD v24[7]; // [sp+58h] [bp-40h] BYREF
  int v25; // [sp+74h] [bp-24h]
  _DWORD v26[7]; // [sp+78h] [bp-20h] BYREF
  int v27; // [sp+94h] [bp-4h]
  char v28[4100]; // [sp+98h] [bp+0h] BYREF

  LOWORD(v2) = -12352;
  V_LOCK();
  LOWORD(v3) = 620;
  HIWORD(v3) = (unsigned int)" %lld" >> 16;
  V_INT((int)v24, v3, *(int *)(a1 + 232));
  HIWORD(v2) = (unsigned int)"" >> 16;
  logfmt_raw(v28, 0x1000u, 0, v25, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v25, v2, "top_init_kas");
  V_UNLOCK();
  LOWORD(v4) = -2504;
  HIWORD(v4) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v4, 170, "top_init_kas", 12, 1029, 60, v28);
  v5 = *(_DWORD *)(a1 + 312);
  v6 = *(_DWORD *)(a1 + 464);
  v7 = sub_12EA40(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v6 - 1 + (unsigned __int8)v5 != v8 );
    v6 = *(_DWORD *)(a1 + 464);
    v5 = *(_DWORD *)(a1 + 312);
  }
  v10 = v6;
  *(_DWORD *)(a1 + 404) = v7;
  v11 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 240))(a1, v10, v5);
  v23[0] = 0;
  v23[2] = 1;
  v23[1] = 0;
  v22 = 0;
  v23[3] = 0;
  v12 = (unsigned __int16 *)calloc(0x450u, 1u);
  ptr = v12;
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 268))(
    a1,
    v23,
    92,
    v12,
    &v22,
    v19,
    2000,
    0);
  if ( v22 > 0 )
  {
    LOWORD(v13) = 620;
    LOWORD(v14) = -12064;
    HIWORD(v13) = (unsigned int)" %lld" >> 16;
    s = v13;
    v15 = v12;
    do
    {
      while ( 1 )
      {
        v16 = v15[3];
        ++v11;
        if ( !v15[3] )
          break;
        v15 += 6;
        if ( v11 >= v22 )
          goto LABEL_10;
      }
      V_LOCK();
      v15 += 6;
      V_INT((int)v26, s, *(int *)(a1 + 232));
      HIWORD(v14) = (unsigned int)"k asic num failed" >> 16;
      logfmt_raw(
        v28,
        0x1000u,
        v16,
        v27,
        v26[0],
        v26[1],
        v26[2],
        v26[3],
        v26[4],
        v26[5],
        v26[6],
        v27,
        v14,
        *((unsigned __int8 *)v15 - 8),
        *(v15 - 3),
        *((_DWORD *)v15 - 3),
        *((_DWORD *)v15 - 3));
      V_UNLOCK();
      LOWORD(v17) = -21416;
      HIWORD(v17) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
      zlog(g_zc, v17, 149, "ChipSetting_get_chip_status_KAS_2380", 36, 1234, 20, v28);
    }
    while ( v11 < v22 );
  }
LABEL_10:
  free(ptr);
  set_core_enable_kas(a1, 23130);
  sub_845E4((int *)a1, 127);
  set_work_len_kas(a1);
  set_nonce_len_kas(a1);
  set_nonce_count_zero_kas(a1);
  set_nonce_overflow_kas(a1, 0);
  sub_85CBC((int *)a1);
  return 0;
}
