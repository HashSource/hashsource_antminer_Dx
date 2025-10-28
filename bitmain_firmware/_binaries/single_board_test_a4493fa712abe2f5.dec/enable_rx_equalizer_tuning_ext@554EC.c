int __fastcall enable_rx_equalizer_tuning_ext(int a1, int a2, int a3)
{
  int v5; // r10
  char *v6; // r9
  int v7; // r3
  int v8; // r8
  char *v9; // r3
  int v10; // r9
  __useconds_t v11; // r8
  int v12; // r5
  _BOOL4 v13; // r4
  void (__fastcall *v14)(int, unsigned int *); // r2
  void (__fastcall *v15)(int, unsigned int *); // r2
  void (__fastcall *v16)(int, unsigned int *); // r2
  void (__fastcall *v17)(int, unsigned int *); // r2
  void (__fastcall *v18)(int, unsigned int *); // r2
  void (__fastcall *v19)(int, unsigned int *); // r2
  void (__fastcall *v20)(int, unsigned int *); // r2
  void (__fastcall *v21)(int, unsigned int *); // r2
  void (__fastcall *v22)(int, unsigned int *); // r2
  void (__fastcall *v23)(int, unsigned int *); // r2
  void (__fastcall *v24)(int, unsigned int *); // r2
  void (__fastcall *v25)(int, unsigned int *); // r3
  void (__fastcall *v26)(int, unsigned int *); // r3
  void (__fastcall *v27)(int, unsigned int *); // r3
  void (__fastcall *v28)(int, unsigned int *); // r3
  void (__fastcall *v29)(int, unsigned int *); // r3
  void (__fastcall *v30)(int, unsigned int *); // r3
  void (__fastcall *v31)(int, unsigned int *); // r3
  void (__fastcall *v32)(int, unsigned int *); // r3
  void (__fastcall *v33)(int, unsigned int *); // r3
  void (__fastcall *v34)(int, unsigned int *); // r3
  void (__fastcall *v35)(int, unsigned int *); // r3
  void (__fastcall *v36)(int, unsigned int *); // r3
  void (__fastcall *v37)(int, unsigned int *); // r3
  void (__fastcall *v38)(int, unsigned int *); // r3
  void (__fastcall *v39)(int, unsigned int *); // r3
  void (__fastcall *v40)(int, unsigned int *); // r3
  void (__fastcall *v41)(int, unsigned int *); // r3
  void (__fastcall *v42)(int, unsigned int *); // r3
  void (__fastcall *v43)(int, unsigned int *); // r3
  void (__fastcall *v44)(int, unsigned int *); // r3
  void (__fastcall *v45)(int, unsigned int *); // r3
  void (__fastcall *v46)(int, unsigned int *); // r3
  void (__fastcall *v47)(int, unsigned int *); // r3
  int v50; // [sp+14h] [bp-44h]
  int v51; // [sp+28h] [bp-30h]
  _WORD *v52; // [sp+34h] [bp-24h]
  int v53; // [sp+38h] [bp-20h]
  _DWORD v55[4]; // [sp+44h] [bp-14h] BYREF
  __int16 v56; // [sp+54h] [bp-4h] BYREF
  unsigned int v57; // [sp+58h] [bp+0h] BYREF
  int v58; // [sp+5Ch] [bp+4h]
  int v59; // [sp+60h] [bp+8h]
  int v60; // [sp+64h] [bp+Ch]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v57, 0x1000u, 0, "%s...", "enable_rx_equalizer_tuning_ext");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "enable_rx_equalizer_tuning_ext",
    30,
    3628,
    60,
    &v57);
  v55[1] = 100991489;
  v55[2] = 235735561;
  v55[3] = 134677248;
  v56 = 3851;
  if ( a2 )
  {
    v55[0] = 0;
    v51 = (unsigned __int8)(a2 - 1) + 1;
    v5 = a1;
    v6 = "ic1704_voltage_clamp_ctrl";
    v7 = 0;
    do
    {
      v8 = (unsigned __int8)v7;
      v53 = 2 * v7;
      v52 = (_WORD *)((char *)v55 + 3);
      v9 = v6;
      v10 = v8;
      v11 = (__useconds_t)v9;
      do
      {
        v12 = *((unsigned __int8 *)v52 + 1);
        v52 = (_WORD *)((char *)v52 + 1);
        v50 = 0;
        do
        {
          v13 = (unsigned __int8)v50 <= 3u && v12 == 3;
          if ( !v13 && *(_BYTE *)(a3 + 8 * (v12 + v53) + v50) )
          {
            v59 = 0;
            v60 = 0;
            v58 = 0;
            v14 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = -4194305;
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            HIWORD(v59) = 144;
            v14(v5, &v57);
            usleep(v11);
            v59 = 0;
            v60 = 0;
            v58 = 0;
            BYTE1(v59) = v10;
            v15 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            LOBYTE(v60) = v12;
            HIWORD(v59) = 145;
            v15(v5, &v57);
            usleep(v11);
            v59 = 9437184;
            v60 = 0;
            v58 = 0;
            v16 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            v57 = 0;
            v16(v5, &v57);
            usleep(v11);
            v59 = 9502720;
            v60 = 0;
            v58 = 0;
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x8000002F;
            v17 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            v17(v5, &v57);
            usleep(v11);
            v57 = -4194305;
            v59 = 0;
            v18 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 144;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v18(v5, &v57);
            usleep(v11);
            v19 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v19(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            v60 = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            v57 = 0x400000;
            BYTE1(v59) = v10;
            v20 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v20(v5, &v57);
            usleep(v11);
            v21 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x8000002F;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v21(v5, &v57);
            usleep(v11);
            v57 = -4194305;
            v59 = 0;
            v22 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 144;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v22(v5, &v57);
            usleep(v11);
            v23 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v23(v5, &v57);
            usleep(v11);
            v24 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v59) = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v57 = 0;
            v24(v5, &v57);
            usleep(v11);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x8000002F;
            v59 = 0;
            v25 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v25(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            v60 = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            v57 = -2049;
            BYTE1(v59) = v10;
            v26 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v26(v5, &v57);
            usleep(v11);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            v59 = 0;
            v27 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v27(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            v60 = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            v57 = 2048;
            BYTE1(v59) = v10;
            v28 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v28(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v60 = 0;
            v58 = 0;
            BYTE1(v59) = v10;
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000037;
            v29 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v29(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            v60 = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            v57 = -1073741825;
            BYTE1(v59) = v10;
            v30 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v30(v5, &v57);
            usleep(v11);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            v59 = 0;
            v31 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v31(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            v60 = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            v57 = 0x40000000;
            BYTE1(v59) = v10;
            v32 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v32(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v60 = 0;
            v58 = 0;
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x8000007E;
            BYTE1(v59) = v10;
            v33 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v33(v5, &v57);
            usleep(v11);
            v59 = 9437184;
            v34 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v58 = 0;
            v57 = -16777217;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v34(v5, &v57);
            usleep(v11);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            v59 = 0;
            v35 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v35(v5, &v57);
            usleep(v11);
            v59 = 9437184;
            v60 = 0;
            v58 = 0;
            v36 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            v57 = 0;
            v36(v5, &v57);
            usleep(v11);
            v59 = 9502720;
            v60 = 0;
            v37 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000098;
            v58 = 0;
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            v37(v5, &v57);
            usleep(v11);
            v57 = -16777217;
            v59 = 0;
            v38 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 144;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v38(v5, &v57);
            usleep(v11);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            v59 = 0;
            v39 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v39(v5, &v57);
            usleep(v11);
            LOBYTE(v59) = 0;
            v60 = 0;
            HIWORD(v59) = 144;
            v58 = 0;
            v57 = 0x1000000;
            BYTE1(v59) = v10;
            v40 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            LOBYTE(v60) = v12;
            v40(v5, &v57);
            usleep(v11);
            v41 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000098;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v41(v5, &v57);
            usleep(v11);
            sub_BE26C(v5, v10, v12, (unsigned __int8)v50);
            v57 = -16777217;
            v59 = 0;
            v42 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            HIWORD(v59) = 144;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v42(v5, &v57);
            usleep(v11);
            v43 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v43(v5, &v57);
            usleep(v11);
            v59 = 9437184;
            v60 = 0;
            v58 = 0;
            v44 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            v57 = 0;
            v44(v5, &v57);
            usleep(v11);
            v45 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000098;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v45(v5, &v57);
            usleep(v11);
            v59 = 9437184;
            v60 = 0;
            v58 = 0;
            v46 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            BYTE1(v59) = v10;
            LOBYTE(v60) = v12;
            v57 = 0;
            v46(v5, &v57);
            usleep(v11);
            v47 = *(void (__fastcall **)(int, unsigned int *))(v5 + 144);
            v57 = (unsigned __int16)((_WORD)v50 << 12) | 0x80000001;
            LOBYTE(v59) = 0;
            HIWORD(v59) = 145;
            v58 = 0;
            BYTE1(v59) = v10;
            v60 = (unsigned __int8)v12;
            v47(v5, &v57);
            usleep(v11);
            sub_BE0CC(v5, v10, v12, (unsigned __int8)v50);
          }
        }
        while ( v51 != ++v50 );
      }
      while ( (__int16 *)((char *)&v56 + 1) != v52 );
      v6 = (char *)v11;
      v7 = ++v55[0];
    }
    while ( v55[0] != 8 );
  }
  return 0;
}
