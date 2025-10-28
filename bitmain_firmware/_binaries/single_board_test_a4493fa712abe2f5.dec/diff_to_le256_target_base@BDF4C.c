int __fastcall diff_to_le256_target_base(int a1)
{
  double v1; // d0
  __int64 v3; // r8
  double v4; // r0
  double v5; // d8
  int v6; // r11
  __int64 v7; // kr00_8
  double v8; // r0
  double v9; // d8
  __int64 v10; // kr08_8
  double v11; // r0
  unsigned __int64 v12; // r0
  int v13; // r3
  int result; // r0
  int v15; // r1
  __int64 v16; // r2
  _QWORD v17[2]; // [sp+18h] [bp-1004h] BYREF
  int v18; // [sp+28h] [bp-FF4h]
  int v19; // [sp+2Ch] [bp-FF0h]
  __int64 v20; // [sp+30h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)v17, 0x1000u, 0, "Diff zero passed to set_target");
    v3 = 0xFFFF000000000000LL;
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/common/mining/base_common.c",
      65,
      "diff_to_le256_target_base",
      25,
      58,
      20,
      v17);
    v12 = 0;
    v13 = 0;
    v6 = 0;
    v10 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(1.84464626e19 / v1);
    LODWORD(v4) = sub_F7704(v3);
    v5 = 1.15790322e77 / v1 - v4 * 6.27710174e57;
    v7 = (unsigned __int64)(v5 * 2.93873588e-39);
    v6 = HIDWORD(v7);
    LODWORD(v8) = sub_F7704(v7);
    v9 = v5 - v8 * 3.40282367e38;
    v10 = (unsigned __int64)(v9 * 5.42101086e-20);
    LODWORD(v11) = sub_F7704(v10);
    v12 = (unsigned __int64)(v9 - v11 * 1.84467441e19);
    v13 = v7;
  }
  v20 = v3;
  v18 = v13;
  v19 = v6;
  v17[1] = v10;
  v17[0] = v12;
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v10;
  result = v18;
  v15 = v19;
  v16 = v20;
  *(_DWORD *)(a1 + 16) = v18;
  *(_DWORD *)(a1 + 20) = v15;
  *(_QWORD *)(a1 + 24) = v16;
  return result;
}
