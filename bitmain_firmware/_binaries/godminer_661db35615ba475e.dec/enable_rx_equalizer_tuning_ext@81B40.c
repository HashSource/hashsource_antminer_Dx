int __fastcall enable_rx_equalizer_tuning_ext(int a1, int a2, int a3)
{
  int v5; // r10
  char *v6; // r9
  int v7; // r3
  int v8; // r8
  char *v9; // r3
  int v10; // r9
  int v11; // r10
  __useconds_t v12; // r8
  int v13; // r6
  int v14; // r3
  _BOOL4 v15; // r4
  void (__fastcall *v16)(int, unsigned int *); // r3
  void (__fastcall *v17)(int, unsigned int *); // r3
  void (__fastcall *v18)(int, unsigned int *); // r3
  void (__fastcall *v19)(int, unsigned int *); // r2
  void (__fastcall *v20)(int, unsigned int *); // r2
  void (__fastcall *v21)(int, unsigned int *); // r2
  void (__fastcall *v22)(int, unsigned int *); // r2
  void (__fastcall *v23)(int, unsigned int *); // r2
  void (__fastcall *v24)(int, unsigned int *); // r2
  void (__fastcall *v25)(int, unsigned int *); // r2
  void (__fastcall *v26)(int, unsigned int *); // r2
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
  unsigned int v51; // [sp+18h] [bp-40h]
  __int16 v52; // [sp+1Ch] [bp-3Ch]
  unsigned int v53; // [sp+1Ch] [bp-3Ch]
  int v54; // [sp+20h] [bp-38h]
  int v55; // [sp+28h] [bp-30h]
  _WORD *v56; // [sp+34h] [bp-24h]
  int v57; // [sp+38h] [bp-20h]
  _DWORD v59[4]; // [sp+44h] [bp-14h] BYREF
  __int16 v60; // [sp+54h] [bp-4h] BYREF
  unsigned int v61; // [sp+58h] [bp+0h] BYREF
  int v62; // [sp+5Ch] [bp+4h]
  int v63; // [sp+60h] [bp+8h]
  int v64; // [sp+64h] [bp+Ch]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v61, 0x1000u, 0, "%s...", "enable_rx_equalizer_tuning_ext");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning_ext",
    30,
    3628,
    60,
    &v61);
  v59[1] = 100991489;
  v59[2] = 235735561;
  v59[3] = 134677248;
  v60 = 3851;
  if ( a2 )
  {
    v59[0] = 0;
    v55 = (unsigned __int8)(a2 - 1) + 1;
    v5 = a1;
    v6 = "ead_unregister_cancel";
    v7 = 0;
    do
    {
      v8 = (unsigned __int8)v7;
      v57 = 2 * v7;
      v56 = (_WORD *)((char *)v59 + 3);
      v9 = v6;
      v10 = v5;
      v11 = v8;
      v12 = (__useconds_t)v9;
      do
      {
        v13 = *((unsigned __int8 *)v56 + 1);
        v56 = (_WORD *)((char *)v56 + 1);
        v50 = 0;
        v14 = 0;
        do
        {
          v54 = (unsigned __int8)v14;
          v15 = (unsigned __int8)v14 <= 3u && v13 == 3;
          if ( !v15 && *(_BYTE *)(a3 + 8 * (v13 + v57) + v14) )
          {
            v62 = 0;
            v63 = 9437184;
            v64 = 0;
            v52 = (_WORD)v14 << 12;
            v61 = -4194305;
            v16 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v16(v10, &v61);
            usleep(v12);
            v63 = 0;
            v64 = 0;
            v62 = 0;
            v61 = v52 & 0xF000 | 0x80000001;
            v17 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            HIWORD(v63) = 145;
            v51 = v61;
            v17(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v18 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v61 = 0;
            v18(v10, &v61);
            usleep(v12);
            v63 = 0;
            v64 = 0;
            v19 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v52 & 0xF000 | 0x8000002F;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v19(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = -4194305;
            v20 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v20(v10, &v61);
            usleep(v12);
            v61 = v52 & 0xF000 | 0x80000001;
            v63 = 0;
            v64 = 0;
            v21 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v21(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = 0x400000;
            v62 = 0;
            v22 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v22(v10, &v61);
            usleep(v12);
            v23 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v52 & 0xF000 | 0x8000002F;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v23(v10, &v61);
            usleep(v12);
            v61 = -4194305;
            v63 = 0;
            v64 = 0;
            v24 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 144;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v24(v10, &v61);
            usleep(v12);
            v61 = v52 & 0xF000 | 0x80000001;
            v63 = 0;
            v64 = 0;
            v25 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v25(v10, &v61);
            usleep(v12);
            v63 = 0;
            v64 = 0;
            v26 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 144;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v61 = 0;
            v26(v10, &v61);
            usleep(v12);
            v61 = v52 & 0xF000 | 0x8000002F;
            v63 = 0;
            v64 = 0;
            v27 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v27(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = -2049;
            v62 = 0;
            v28 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v28(v10, &v61);
            usleep(v12);
            v29 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v52 & 0xF000 | 0x80000001;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v29(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = 2048;
            v62 = 0;
            v30 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v30(v10, &v61);
            usleep(v12);
            LOBYTE(v63) = 0;
            v64 = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            v61 = v52 & 0xF000 | 0x80000037;
            BYTE1(v63) = v11;
            v31 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            LOBYTE(v64) = v13;
            v31(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = -1073741825;
            v62 = 0;
            v32 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v32(v10, &v61);
            usleep(v12);
            v33 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v52 & 0xF000 | 0x80000001;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v33(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = 0x40000000;
            v62 = 0;
            v34 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v34(v10, &v61);
            usleep(v12);
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v61 = v52 & 0xF000 | 0x8000007E;
            v64 = (unsigned __int8)v13;
            (*(void (__fastcall **)(int, unsigned int *))(v10 + 144))(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = -16777217;
            v35 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v35(v10, &v61);
            usleep(v12);
            v36 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v52 & 0xF000 | 0x80000001;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v36(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v37 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v61 = 0;
            v37(v10, &v61);
            usleep(v12);
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v53 = v52 & 0xF000 | 0x80000098;
            v61 = v53;
            v64 = (unsigned __int8)v13;
            (*(void (__fastcall **)(int, unsigned int *))(v10 + 144))(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = -16777217;
            v38 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v38(v10, &v61);
            usleep(v12);
            v39 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v51;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v39(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v61 = 0x1000000;
            v62 = 0;
            v40 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v40(v10, &v61);
            usleep(v12);
            v61 = v53;
            v63 = 0;
            v64 = 0;
            v41 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v41(v10, &v61);
            usleep(v12);
            sub_136560(v10, v11, v13, v54);
            v61 = -16777217;
            v63 = 0;
            v64 = 0;
            v42 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            HIWORD(v63) = 144;
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v42(v10, &v61);
            usleep(v12);
            v43 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v51;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v43(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v44 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v61 = 0;
            v44(v10, &v61);
            usleep(v12);
            v45 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v53;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v45(v10, &v61);
            usleep(v12);
            v63 = 9437184;
            v64 = 0;
            v46 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v62 = 0;
            BYTE1(v63) = v11;
            LOBYTE(v64) = v13;
            v61 = 0;
            v46(v10, &v61);
            usleep(v12);
            v47 = *(void (__fastcall **)(int, unsigned int *))(v10 + 144);
            v61 = v51;
            LOBYTE(v63) = 0;
            HIWORD(v63) = 145;
            v62 = 0;
            BYTE1(v63) = v11;
            v64 = (unsigned __int8)v13;
            v47(v10, &v61);
            usleep(v12);
            sub_136350(v10, v11, v13, v54);
          }
          v14 = v50 + 1;
        }
        while ( v55 != ++v50 );
      }
      while ( (__int16 *)((char *)&v60 + 1) != v56 );
      v5 = v10;
      v6 = (char *)v12;
      v7 = ++v59[0];
    }
    while ( v59[0] != 8 );
  }
  return 0;
}
