int __fastcall read_rx_debug_reg2(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v4; // r6
  __int16 v7; // r3
  void (__fastcall *v8)(int, unsigned int *); // r2
  void (__fastcall *v9)(int, unsigned int *); // r2
  void (__fastcall *v10)(int, unsigned int *); // r2
  void (__fastcall *v11)(int, unsigned int *); // r2
  void (__fastcall *v12)(int, unsigned int *); // r2
  void (__fastcall *v13)(int, unsigned int *); // r2
  void (__fastcall *v14)(int, unsigned int *); // r2
  void (__fastcall *v15)(int, unsigned int *); // r2
  void (__fastcall *v16)(int, unsigned int *); // r2
  void (__fastcall *v17)(int, unsigned int *); // r2
  void (__fastcall *v18)(int, unsigned int *); // r2
  void (__fastcall *v19)(int, unsigned int *); // r2
  unsigned int v20; // r2
  void (__fastcall *v21)(int, unsigned int *); // r2
  void (__fastcall *v22)(int, unsigned int *); // r2
  void (__fastcall *v23)(int, unsigned int *); // r2
  void (__fastcall *v24)(int, unsigned int *); // r2
  void (__fastcall *v25)(int, unsigned int *); // r2
  void (__fastcall *v26)(int, unsigned int *); // r2
  void (__fastcall *v27)(int, unsigned int *); // r2
  void (__fastcall *v28)(int, unsigned int *); // r2
  void (__fastcall *v29)(int, unsigned int *); // r2
  void (__fastcall *v30)(int, unsigned int *); // r2
  void (__fastcall *v31)(int, unsigned int *); // r2
  void (__fastcall *v32)(int, unsigned int *); // r2
  void (__fastcall *v33)(int, unsigned int *); // r2
  void (__fastcall *v34)(int, unsigned int *); // r2
  void (__fastcall *v35)(int, unsigned int *); // r2
  void (__fastcall *v36)(int, unsigned int *); // r2
  void (__fastcall *v37)(int, unsigned int *); // r2
  void (__fastcall *v38)(int, unsigned int *); // r2
  void (__fastcall *v39)(int, unsigned int *); // r2
  void (__fastcall *v40)(int, unsigned int *); // r2
  void (__fastcall *v41)(int, unsigned int *); // r2
  void (__fastcall *v42)(int, unsigned int *); // r2
  void (__fastcall *v43)(int, unsigned int *); // r2
  void (__fastcall *v44)(int, unsigned int *); // r2
  void (__fastcall *v45)(int, unsigned int *); // r2
  void (__fastcall *v46)(int, unsigned int *); // r3
  unsigned int v48; // [sp+14h] [bp-1018h]
  unsigned int v49; // [sp+18h] [bp-1014h]
  unsigned __int16 v50; // [sp+1Ch] [bp-1010h]
  unsigned int v51; // [sp+1Ch] [bp-1010h]
  unsigned __int16 v52; // [sp+20h] [bp-100Ch]
  int v53; // [sp+24h] [bp-1008h]
  unsigned int v54; // [sp+28h] [bp-1004h] BYREF
  int v55; // [sp+2Ch] [bp-1000h]
  int v56; // [sp+30h] [bp-FFCh]
  int v57; // [sp+34h] [bp-FF8h]

  v4 = a4;
  v53 = a4;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v54, 0x1000u, 0, "%s...", "read_rx_debug_reg2");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_rx_debug_reg2",
    18,
    9255,
    60,
    &v54);
  if ( v4 )
  {
    v7 = 0;
    v52 = 0;
    do
    {
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v50 = v7 << 12;
      v54 = -9;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      HIWORD(v56) = 144;
      v8(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v57 = 0;
      v55 = 0;
      v56 = 9502721;
      v48 = v50 & 0xF000 | 0x80000001;
      v54 = v48;
      v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v57) = (_BYTE)a3;
      v9(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v10(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 9502720;
      v57 = 0;
      v54 = v50 & 0xF000 | 0x80000016;
      v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v49 = v54;
      v11(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v12(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = v48;
      v56 = 0;
      v57 = 0;
      v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 145;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v13(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = 8;
      v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v14(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v50 & 0xF000 | 0x80000016;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v15(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v16(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = v48;
      v56 = 0;
      v57 = 0;
      v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 145;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v17(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v18(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v50 & 0xF000 | 0x80000016;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v19(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v20 = v50 | 0x1A;
      v51 = v20;
      sub_133F78(a1, a3, v20);
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v21(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = v48;
      v56 = 0;
      v57 = 0;
      v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 145;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v22(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v23(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v49;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v24(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v25(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = v48;
      v56 = 0;
      v57 = 0;
      v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 145;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v26(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = 8;
      v27 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v27(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v28 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v49;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v28(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v29 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v29(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = v48;
      v56 = 0;
      v57 = 0;
      v30 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 145;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v30(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v31 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v31(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v32 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v49;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v32(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      sub_133F78(a1, a3, v51);
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v33 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v33(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v48;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v34(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v35 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v35(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v36 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v49;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v36(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v54 = -9;
      v37 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v37(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v38 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v48;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v38(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = 8;
      v56 = 0;
      v57 = 0;
      v39 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      HIWORD(v56) = 144;
      v39(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v40 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v49;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v40(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v54 = -9;
      v55 = 0;
      v41 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v56 = 9437185;
      v57 = (unsigned __int8)a3;
      v41(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v42 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v48;
      v55 = 0;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v42(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 0;
      v57 = 0;
      v43 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      v55 = 0;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v54 = 0;
      v43(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v55 = 0;
      v44 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v54 = v49;
      v56 = 9502721;
      v57 = (unsigned __int8)a3;
      v44(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      sub_133F78(a1, a3, v51);
      v55 = 0;
      v54 = 0;
      v56 = 0;
      v57 = 0;
      v45 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v56) = 144;
      LOBYTE(v56) = 1;
      LOBYTE(v57) = (_BYTE)a3;
      v45(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v56 = 9502720;
      v54 = v48;
      v46 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v55 = 0;
      LOBYTE(v56) = 1;
      v57 = (unsigned __int8)a3;
      v46(a1, &v54);
      usleep((__useconds_t)"ead_unregister_cancel");
      v7 = ++v52;
    }
    while ( v52 != v53 );
  }
  return 0;
}
