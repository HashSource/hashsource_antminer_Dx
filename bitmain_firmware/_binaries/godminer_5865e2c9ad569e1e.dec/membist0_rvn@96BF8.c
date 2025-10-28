int __fastcall membist0_rvn(int a1)
{
  int v2; // r3
  int v3; // r1
  int *v4; // r8
  char *v5; // r4
  int *v6; // r10
  int v7; // r4
  int v8; // r1
  char *v9; // r4
  int v10; // r0
  char *v11; // r5
  int v12; // r1
  char *v13; // r4
  int v14; // r0
  char *v15; // r5
  int v16; // r1
  char *v17; // r4
  int v18; // r0
  int v19; // r8
  char *v20; // r5
  int v21; // r1
  _DWORD *v22; // r4
  int *v23; // r8
  int v24; // r3
  __int64 v25; // r0
  unsigned int v26; // r2
  int v27; // t1
  int v28; // r0
  int (**v29)(); // r0
  int v31; // r1
  char *v32; // [sp+30h] [bp-2E8h]
  int v33; // [sp+38h] [bp-2E0h]
  int v34; // [sp+3Ch] [bp-2DCh]
  char *ptr; // [sp+40h] [bp-2D8h]
  char *v36; // [sp+44h] [bp-2D4h]
  int *v37; // [sp+54h] [bp-2C4h]
  _DWORD v38[5]; // [sp+64h] [bp-2B4h] BYREF
  _DWORD v39[7]; // [sp+78h] [bp-2A0h] BYREF
  int v40; // [sp+94h] [bp-284h]
  _DWORD v41[7]; // [sp+98h] [bp-280h] BYREF
  int v42; // [sp+B4h] [bp-264h]
  _DWORD v43[7]; // [sp+B8h] [bp-260h] BYREF
  int v44; // [sp+D4h] [bp-244h]
  _DWORD v45[7]; // [sp+D8h] [bp-240h] BYREF
  int v46; // [sp+F4h] [bp-224h]
  _DWORD v47[7]; // [sp+F8h] [bp-220h] BYREF
  int v48; // [sp+114h] [bp-204h]
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  char v50[4100]; // [sp+318h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -11848;
  HIWORD(v2) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v50, 0x1000u, 0, v2, "membist0_rvn");
  V_UNLOCK();
  LOWORD(v3) = 6248;
  HIWORD(v3) = (unsigned int)"final pattern %08x" >> 16;
  v4 = &g_zc;
  zlog(g_zc, v3, 170, "membist0_rvn", 12, 568, 20, v50);
  LOWORD(v5) = 620;
  v38[0] = -2023406815;
  v38[1] = 1266163410;
  v38[2] = 2015285835;
  v38[3] = 517098360;
  HIWORD(v5) = (unsigned int)" %lld" >> 16;
  v32 = v5;
  LOWORD(v5) = -11100;
  v38[4] = -766805986;
  memset(s, 0, sizeof(s));
  v37 = v38;
  HIWORD(v5) = (unsigned int)"nter, membist_done: %u" >> 16;
  v36 = v5;
  v33 = 0;
  ptr = (char *)malloc(0x300u);
  do
  {
    V_LOCK();
    v6 = v4;
    V_INT((int)v39, v32, *(int *)(a1 + 232));
    v7 = *v37++;
    v34 = 0;
    logfmt_raw(
      v50,
      0x1000u,
      0,
      v40,
      v39[0],
      v39[1],
      v39[2],
      v39[3],
      v39[4],
      v39[5],
      v39[6],
      v40,
      "membist final pattern %08x",
      v7);
    V_UNLOCK();
    LOWORD(v8) = 6248;
    HIWORD(v8) = (unsigned int)"final pattern %08x" >> 16;
    zlog(*v4, v8, 170, "membist0_rvn", 12, 577, 60, v50);
    sub_92F0C(a1, 164, v7);
    do
    {
      sub_931E4(a1, v34, 28, 1);
      sub_931E4(a1, v34, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v9 = ptr;
      v10 = sub_934FC(a1, (unsigned __int16)v34, 161, ptr);
      if ( v10 > 0 )
      {
        v11 = &ptr[12 * v10];
        do
        {
          while ( (*(_DWORD *)v9 & 0x80) == 0 )
          {
            V_LOCK();
            v9 += 12;
            V_INT((int)v43, v32, *(int *)(a1 + 232));
            logfmt_raw(
              v50,
              0x1000u,
              0,
              v44,
              v43[0],
              v43[1],
              v43[2],
              v43[3],
              v43[4],
              v43[5],
              v43[6],
              v44,
              v36,
              (unsigned __int8)*(v9 - 8),
              (unsigned __int8)*(v9 - 4));
            V_UNLOCK();
            LOWORD(v12) = 6248;
            HIWORD(v12) = (unsigned int)"final pattern %08x" >> 16;
            zlog(*v6, v12, 170, "membist0_rvn", 12, 599, 100, v50);
            if ( v9 == v11 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v9 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v41, v32, *(int *)(a1 + 232));
            logfmt_raw(
              v50,
              0x1000u,
              0,
              v42,
              v41[0],
              v41[1],
              v41[2],
              v41[3],
              v41[4],
              v41[5],
              v41[6],
              v42,
              "chip %02x core %02x membist err cnt: %08x",
              (unsigned __int8)v9[4],
              (unsigned __int8)v9[8],
              bswap32(*(_DWORD *)v9));
            V_UNLOCK();
            LOWORD(v31) = 6248;
            HIWORD(v31) = (unsigned int)"final pattern %08x" >> 16;
            zlog(*v6, v31, 170, "membist0_rvn", 12, 593, 100, v50);
            s[16 * (unsigned __int8)v9[4] + v33] += bswap32(*(_DWORD *)v9) & 0x7FFFFF;
          }
          v9 += 12;
        }
        while ( v9 != v11 );
      }
LABEL_10:
      v13 = ptr;
      v14 = sub_934FC(a1, (unsigned __int16)v34, 162, ptr);
      if ( v14 > 0 )
      {
        v15 = &ptr[12 * v14];
        do
        {
          while ( (*(_DWORD *)v13 & 0xFFFFFF00) == 0 || (*(_DWORD *)v13 & 0x80) == 0 )
          {
            v13 += 12;
            if ( v13 == v15 )
              goto LABEL_16;
          }
          V_LOCK();
          v13 += 12;
          V_INT((int)v45, v32, *(int *)(a1 + 232));
          logfmt_raw(
            v50,
            0x1000u,
            0,
            v46,
            v45[0],
            v45[1],
            v45[2],
            v45[3],
            v45[4],
            v45[5],
            v45[6],
            v46,
            "chip %02x core %02x membist lost cnt: %08x",
            (unsigned __int8)*(v13 - 8),
            (unsigned __int8)*(v13 - 4),
            bswap32(*((_DWORD *)v13 - 3)));
          V_UNLOCK();
          LOWORD(v16) = 6248;
          HIWORD(v16) = (unsigned int)"final pattern %08x" >> 16;
          zlog(*v6, v16, 170, "membist0_rvn", 12, 608, 100, v50);
          s[16 * (unsigned __int8)*(v13 - 8) + v33] += bswap32(*((_DWORD *)v13 - 3)) & 0x7FFFFF;
        }
        while ( v13 != v15 );
      }
LABEL_16:
      v17 = ptr;
      v18 = sub_934FC(a1, (unsigned __int16)v34, 163, ptr);
      if ( v18 > 0 )
      {
        LOWORD(v19) = 6552;
        v20 = &ptr[12 * v18];
        do
        {
          while ( (*(_DWORD *)v17 & 0xFFFF00) == 0 || (*(_DWORD *)v17 & 0xC0) == 0 )
          {
            v17 += 12;
            if ( v20 == v17 )
              goto LABEL_22;
          }
          V_LOCK();
          v17 += 12;
          V_INT((int)v47, v32, *(int *)(a1 + 232));
          HIWORD(v19) = (unsigned int)"d dag size: %lld, crc error: %s" >> 16;
          logfmt_raw(
            v50,
            0x1000u,
            0,
            v48,
            v47[0],
            v47[1],
            v47[2],
            v47[3],
            v47[4],
            v47[5],
            v47[6],
            v48,
            v19,
            (unsigned __int8)*(v17 - 8),
            (unsigned __int8)*(v17 - 4),
            bswap32(*((_DWORD *)v17 - 3)));
          V_UNLOCK();
          LOWORD(v21) = 6248;
          HIWORD(v21) = (unsigned int)"final pattern %08x" >> 16;
          zlog(*v6, v21, 170, "membist0_rvn", 12, 618, 100, v50);
          s[16 * (unsigned __int8)*(v17 - 8) + v33] += bswap32(*((_DWORD *)v17 - 3)) & 0x7FFF;
        }
        while ( v20 != v17 );
      }
LABEL_22:
      ++v34;
    }
    while ( v34 != 8 );
    v4 = v6;
    ++v33;
  }
  while ( v33 != 5 );
  v22 = s;
  free(ptr);
  memset(v50, 0, 0x40u);
  v23 = v38;
  do
  {
    v24 = 0;
    v25 = 0;
    do
    {
      v26 = v22[16 * v24++];
      v25 += v26;
    }
    while ( v24 != 8 );
    v27 = *v23++;
    ++v22;
    v28 = sprintf(v50, "<mbist0 %08x> %lld", v27, v25);
  }
  while ( &s[5] != v22 );
  v29 = dev_ctrl(v28);
  ((void (__fastcall *)(_DWORD))v29[20])(*(_DWORD *)(a1 + 228));
  return 0;
}
