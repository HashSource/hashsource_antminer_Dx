int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r5
  unsigned int v16; // r3
  int v17; // r11
  int v18; // r10
  _BYTE *v19; // r5
  unsigned __int8 *v20; // r4
  int v21; // r12
  int v22; // t1
  int v23; // t1
  unsigned int v24; // r2
  unsigned int v25; // r3
  int v27; // r3
  int v28; // r1
  int v29; // r3
  int v30; // r1
  int v31; // r3
  int v32; // r1
  unsigned int v33; // [sp+14h] [bp-10E0h]
  _BYTE v34[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v36[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 800);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v33 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)(v4 + v2 + 5271);
  v8 = *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v6;
  s[37] = v8;
  s[38] = v9;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  s[39] = *v7;
  s[40] = v10;
  s[41] = v11;
  s[42] = v12;
  v13 = v7[5];
  s[43] = v7[4];
  s[44] = v13;
  decred_hash((int)v34, (char *)s);
  v14 = target_to_diff_dcr((int)v34);
  v15 = v14;
  if ( v14 <= 0x26 )
  {
    V_LOCK();
    LOWORD(v31) = -15588;
    HIWORD(v31) = (unsigned int)"misc_ctrl_ETH" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v31, v15, *(unsigned __int8 *)(a2 + 64), 39);
    V_UNLOCK();
    LOWORD(v32) = -15760;
    HIWORD(v32) = (unsigned int)"04x expected value %04x" >> 16;
    zlog(g_zc, v32, 170, "check_nonce_dcr", 15, 580, 20, v36);
    return 2;
  }
  else
  {
    v16 = *(unsigned __int8 *)(a2 + 64);
    if ( v16 == v14 )
    {
      if ( v33 > v16 )
      {
LABEL_10:
        V_LOCK();
        LOWORD(v27) = -19736;
        HIWORD(v27) = (unsigned int)"%04x" >> 16;
        logfmt_raw(v36, 0x1000u, 0, v27, *(unsigned __int8 *)(a2 + 64), v33);
        V_UNLOCK();
        LOWORD(v28) = -15760;
        HIWORD(v28) = (unsigned int)"04x expected value %04x" >> 16;
        zlog(g_zc, v28, 170, "check_nonce_dcr", 15, 598, 20, v36);
        return 1;
      }
    }
    else if ( v33 > v14 )
    {
      V_LOCK();
      LOWORD(v29) = -19780;
      HIWORD(v29) = (unsigned int)"ce crc error calc value %04x expected value %04x" >> 16;
      logfmt_raw(v36, 0x1000u, 0, v29, v15, *(unsigned __int8 *)(a2 + 64), v33);
      V_UNLOCK();
      LOWORD(v30) = -15760;
      HIWORD(v30) = (unsigned int)"04x expected value %04x" >> 16;
      zlog(g_zc, v30, 170, "check_nonce_dcr", 15, 585, 40, v36);
      return 3;
    }
    LOWORD(v17) = -15524;
    LOWORD(v18) = -15760;
    v19 = s;
    v20 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
    do
    {
      V_LOCK();
      v22 = (unsigned __int8)*--v19;
      v21 = v22;
      HIWORD(v17) = (unsigned int)"core_status_ETH" >> 16;
      v23 = *--v20;
      logfmt_raw(v36, 0x1000u, 0, v17, v21, v23);
      V_UNLOCK();
      HIWORD(v18) = (unsigned int)"04x expected value %04x" >> 16;
      zlog(g_zc, v18, 170, "fulltest_dcr", 12, 495, 20, v36);
      v24 = (unsigned __int8)*v19;
      v25 = *v20;
      if ( v24 < v25 )
        break;
      if ( v24 > v25 )
        goto LABEL_10;
    }
    while ( v34 != v19 );
    return 0;
  }
}
