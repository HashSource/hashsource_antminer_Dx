int __fastcall read_rx_debug_reg2(_DWORD *a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  __int16 v6; // r3
  unsigned __int16 v7; // r2
  void (__fastcall *v8)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v9)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v10)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v11)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v12)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v13)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v14)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v15)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v16)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v17)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v18)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v19)(_DWORD *, unsigned int *); // r3
  unsigned int v20; // r2
  void (__fastcall *v21)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v22)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v23)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v24)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v25)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v26)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v27)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v28)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v29)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v30)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v31)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v32)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v33)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v34)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v35)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v36)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v37)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v38)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v39)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v40)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v41)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v42)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v43)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v44)(_DWORD *, unsigned int *); // r2
  void (__fastcall *v45)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v46)(_DWORD *, unsigned int *); // r3
  unsigned int v48; // [sp+14h] [bp-1018h]
  unsigned int v49; // [sp+18h] [bp-1014h]
  unsigned __int16 v50; // [sp+1Ch] [bp-1010h]
  unsigned int v51; // [sp+1Ch] [bp-1010h]
  unsigned __int16 i; // [sp+20h] [bp-100Ch]
  int v53; // [sp+24h] [bp-1008h]
  unsigned int v54; // [sp+28h] [bp-1004h] BYREF
  int v55; // [sp+2Ch] [bp-1000h]
  int v56; // [sp+30h] [bp-FFCh]
  int v57; // [sp+34h] [bp-FF8h]

  v53 = a4;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v54, 0x1000u, 0, "%s...", "read_rx_debug_reg2");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "read_rx_debug_reg2",
    18,
    9255,
    60,
    &v54);
  if ( v53 )
  {
    v6 = 0;
    for ( i = 0; i != v53; v6 = ++i )
    {
      v55 = 0;
      v56 = 0;
      v7 = v6 << 12;
      v57 = 0;
      v8 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v50 = v7;
      v54 = -9;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      HIWORD(v56) = 144;
      v8(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 9502720;
      v57 = 0;
      v9 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      LOBYTE(v56) = 1;
      v54 = v50 & 0xF000 | 0x80000001;
      LOBYTE(v57) = (_BYTE)a3;
      v48 = v54;
      v9(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v10 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v10(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 9502720;
      v57 = 0;
      v11 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v50 & 0xF000 | 0x80000016;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v49 = v54;
      v11(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v12 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v12(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v13 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v50 & 0xF000 | 0x80000001;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v13(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = 8;
      v14 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v14(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v15 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v50 & 0xF000 | 0x80000016;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v15(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v16 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v16(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v17 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v50 & 0xF000 | 0x80000001;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v17(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v18 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v18(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v19 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 145;
      v54 = v50 & 0xF000 | 0x80000016;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v19(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v20 = v50 | 0x1A;
      v51 = v20;
      sub_D469C(a1, a3, v20);
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v21 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v21(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v22 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v48;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v22(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v23 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v23(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v24 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v49;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v24(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v25 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v25(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v26 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v48;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v26(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = 8;
      v27 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v27(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v28 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v49;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v28(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v29 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v29(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v30 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v48;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v30(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v31 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v31(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v32 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 145;
      v54 = v49;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v32(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      sub_D469C(a1, a3, v51);
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v33 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v33(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v34 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v48;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v34(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v35 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v35(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v36 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v49;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v36(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v37 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v37(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v38 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v48;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v38(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = 8;
      v39 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v39(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v40 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v49;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v40(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v41 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v41(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 9502720;
      v57 = 0;
      v54 = v48;
      v42 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v42(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v43 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v43(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v44 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 145;
      v54 = v49;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v44(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      sub_D469C(a1, a3, v51);
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v45 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v45(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v46 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
      v54 = v48;
      HIWORD(v56) = 145;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v46(a1, &v54);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    }
  }
  return 0;
}
