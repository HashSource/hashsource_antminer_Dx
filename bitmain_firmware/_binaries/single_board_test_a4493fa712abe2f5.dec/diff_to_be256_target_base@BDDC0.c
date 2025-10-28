unsigned int __fastcall diff_to_be256_target_base(unsigned int *a1)
{
  double v1; // d0
  unsigned __int64 v3; // r0
  unsigned int v4; // r10
  double v5; // r0
  double v6; // d8
  unsigned __int64 v7; // r0
  unsigned int v8; // r11
  unsigned int v9; // r9
  double v10; // r0
  double v11; // d8
  unsigned __int64 v12; // r0
  unsigned int v13; // r8
  unsigned int v14; // r7
  double v15; // r0
  unsigned __int64 v16; // r0
  unsigned int v17; // r3
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int result; // r0
  unsigned int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // [sp+14h] [bp-1008h]
  _DWORD v25[4]; // [sp+18h] [bp-1004h] BYREF
  unsigned int v26; // [sp+28h] [bp-FF4h]
  unsigned int v27; // [sp+2Ch] [bp-FF0h]
  unsigned int v28; // [sp+30h] [bp-FECh]
  unsigned int v29; // [sp+34h] [bp-FE8h]

  if ( v1 <= 0.0 )
  {
    pthread_mutex_lock(&stru_3B526C);
    v4 = 0xFFFF;
    logfmt_raw((char *)v25, 0x1000u, 0, "Diff zero passed to set_target");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/common/mining/base_common.c",
      65,
      "diff_to_be256_target_base",
      25,
      170,
      20,
      v25);
    v18 = 0;
    v19 = 0;
    v13 = 0;
    v14 = 0;
    v8 = 0;
    v9 = 0;
    v17 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(1.84464626e19 / v1);
    v24 = bswap32(v3);
    v4 = bswap32(HIDWORD(v3));
    LODWORD(v5) = sub_F7704(v3);
    v6 = 1.15790322e77 / v1 - v5 * 6.27710174e57;
    v7 = (unsigned __int64)(v6 * 2.93873588e-39);
    v8 = bswap32(HIDWORD(v7));
    v9 = bswap32(v7);
    LODWORD(v10) = sub_F7704(v7);
    v11 = v6 - v10 * 3.40282367e38;
    v12 = (unsigned __int64)(v11 * 5.42101086e-20);
    v13 = bswap32(HIDWORD(v12));
    v14 = bswap32(v12);
    LODWORD(v15) = sub_F7704(v12);
    v16 = (unsigned __int64)(v11 - v15 * 1.84467441e19);
    v17 = v24;
    v18 = bswap32(HIDWORD(v16));
    v19 = bswap32(v16);
  }
  v25[0] = v4;
  v25[1] = v17;
  v25[2] = v8;
  v25[3] = v9;
  v26 = v13;
  v27 = v14;
  v28 = v18;
  v29 = v19;
  *a1 = v4;
  a1[1] = v17;
  a1[2] = v8;
  a1[3] = v9;
  result = v26;
  v21 = v27;
  v22 = v28;
  v23 = v29;
  a1[4] = v26;
  a1[5] = v21;
  a1[6] = v22;
  a1[7] = v23;
  return result;
}
