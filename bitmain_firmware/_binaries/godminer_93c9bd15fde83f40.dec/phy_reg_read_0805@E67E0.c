int __fastcall phy_reg_read_0805(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v4; // r7
  int v9; // r7
  __int16 v10; // r6
  int v11; // r7
  __int16 v12; // r6
  int v13; // r7
  __int16 v14; // r6
  int v15; // r9
  unsigned __int16 v16; // r6
  int v17; // r6
  __int16 v18; // r2
  int v19; // r7
  __int16 v20; // r6
  int v21; // r7
  unsigned __int16 v22; // r6
  unsigned int v23; // r9
  unsigned __int16 v24; // r6
  unsigned __int16 v25; // r11
  unsigned __int16 v26; // r7
  int v27; // r6
  unsigned __int16 v28; // r10
  int v29; // r2
  int v30; // r8
  unsigned __int16 v31; // r8
  unsigned __int16 v32; // r6
  int v34; // [sp+18h] [bp-100Ch]
  char v35[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v4) = -992;
  HIWORD(v4) = (unsigned int)"tum_show_message" >> 16;
  v34 = v4;
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, 1560680, v4, a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    v4 + 20,
    17,
    2952,
    60,
    v35);
  if ( a4 )
  {
    LOWORD(v9) = 0;
    do
    {
      v10 = (_WORD)v9 << 12;
      v9 = (unsigned __int16)(v9 + 1);
      sub_C1EE0(a1, a3, v10 & 0xF000 | 0x67);
      sub_C1EE0(a1, a3, v10 & 0xF000 | 0x96);
    }
    while ( v9 != a4 );
    LOWORD(v11) = 0;
    sub_C1EE0(a1, a3, 0x8051u);
    sub_C1EE0(a1, a3, 0x800Du);
    do
    {
      v12 = (_WORD)v11 << 12;
      v11 = (unsigned __int16)(v11 + 1);
      sub_C1EE0(a1, a3, v12 & 0xF000 | 0x43);
      sub_C1EE0(a1, a3, v12 & 0xF000 | 0x75);
      sub_C1EE0(a1, a3, v12 & 0xF000 | 0x76);
      sub_C1EE0(a1, a3, v12 & 0xF000 | 0xB0);
    }
    while ( v11 != a4 );
    LOWORD(v13) = 0;
    sub_C1EE0(a1, a3, 0x8030u);
    sub_C1EE0(a1, a3, 0x803Bu);
    sub_C1EE0(a1, a3, 0x8044u);
    sub_C1EE0(a1, a3, 0x8060u);
    sub_C1EE0(a1, a3, 0x8008u);
    sub_C1EE0(a1, a3, 0x803Eu);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_C1EE0(a1, a3, v14 & 0xF000 | 0x49);
      sub_C1EE0(a1, a3, v14 & 0xF000 | 0xF);
    }
    while ( v13 != a4 );
    sub_C1EE0(a1, a3, 0x805Fu);
    sub_C1EE0(a1, a3, 0x805Fu);
    sub_C1EE0(a1, a3, 0x803Eu);
    LOWORD(v15) = 0;
    do
    {
      v16 = (_WORD)v15 << 12;
      v15 = (unsigned __int16)(v15 + 1);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x16);
      sub_C1EE0(a1, a3, v16 | 0xA9);
      sub_C1EE0(a1, a3, v16 | 0xA9);
      sub_C1EE0(a1, a3, v16 | 0xA9);
      sub_C1EE0(a1, a3, v16 | 0xA9);
      sub_C1EE0(a1, a3, v16 | 0xAA);
      sub_C1EE0(a1, a3, v16 | 0xAA);
      sub_C1EE0(a1, a3, v16 | 0xAA);
      sub_C1EE0(a1, a3, v16 | 0xAA);
      sub_C1EE0(a1, a3, v16 | 0xAA);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0xAB);
      sub_C1EE0(a1, a3, v16 | 0x9F);
      sub_C1EE0(a1, a3, v16 | 0x9F);
      sub_C1EE0(a1, a3, v16 | 0xA0);
      sub_C1EE0(a1, a3, v16 | 0xA0);
      sub_C1EE0(a1, a3, v16 | 0xA0);
      sub_C1EE0(a1, a3, v16 | 0xA0);
      sub_C1EE0(a1, a3, v16 | 0xA1);
      sub_C1EE0(a1, a3, v16 | 0xA1);
      sub_C1EE0(a1, a3, v16 | 0x75);
      sub_C1EE0(a1, a3, v16 | 0x75);
      sub_C1EE0(a1, a3, v16 | 0x76);
      sub_C1EE0(a1, a3, v16 | 0x76);
      sub_C1EE0(a1, a3, v16 | 0x76);
      sub_C1EE0(a1, a3, v16 | 0x76);
      sub_C1EE0(a1, a3, v16 | 0x77);
      sub_C1EE0(a1, a3, v16 | 0x77);
      sub_C1EE0(a1, a3, v16 | 0x77);
      sub_C1EE0(a1, a3, v16 | 0x77);
      sub_C1EE0(a1, a3, v16 | 0x78);
      sub_C1EE0(a1, a3, v16 | 0x78);
      sub_C1EE0(a1, a3, v16 | 0x78);
      sub_C1EE0(a1, a3, v16 | 0x78);
      sub_C1EE0(a1, a3, v16 | 0x79);
      sub_C1EE0(a1, a3, v16 | 0x79);
      sub_C1EE0(a1, a3, v16 | 0x25);
      sub_C1EE0(a1, a3, v16 | 0x25);
      sub_C1EE0(a1, a3, v16 | 0x26);
      sub_C1EE0(a1, a3, v16 | 0x26);
      sub_C1EE0(a1, a3, v16 | 0x26);
      sub_C1EE0(a1, a3, v16 | 0x26);
      sub_C1EE0(a1, a3, v16 | 0x26);
      sub_C1EE0(a1, a3, v16 | 0x27);
      sub_C1EE0(a1, a3, v16 | 0x27);
      sub_C1EE0(a1, a3, v16 | 0x27);
      sub_C1EE0(a1, a3, v16 | 0x27);
      sub_C1EE0(a1, a3, v16 | 0x27);
      sub_C1EE0(a1, a3, v16 | 0x28);
      sub_C1EE0(a1, a3, v16 | 0x28);
      sub_C1EE0(a1, a3, v16 | 0x28);
      sub_C1EE0(a1, a3, v16 | 0x28);
      sub_C1EE0(a1, a3, v16 | 0x28);
      sub_C1EE0(a1, a3, v16 | 0x29);
      sub_C1EE0(a1, a3, v16 | 0x29);
      sub_C1EE0(a1, a3, v16 | 0x29);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x24);
      sub_C1EE0(a1, a3, v16 | 0x25);
      sub_C1EE0(a1, a3, v16 | 0x26);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x56);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x7C);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x89);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x95);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0xA2);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x12);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x4A);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x85);
      sub_C1EE0(a1, a3, v16 | 0x9F);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x11);
      sub_C1EE0(a1, a3, v16 & 0xF000 | 0x13);
    }
    while ( v15 != a4 );
    sub_C1EE0(a1, a3, 0x8008u);
    LOWORD(v17) = 0;
    sub_C1EE0(a1, a3, 0x8009u);
    sub_C1EE0(a1, a3, 0xA002u);
    sub_C1EE0(a1, a3, 0xA026u);
    do
    {
      v18 = (_WORD)v17 << 12;
      v17 = (unsigned __int16)(v17 + 1);
      sub_C1EE0(a1, a3, v18 & 0xF000 | 0xD);
    }
    while ( v17 != a4 );
    LOWORD(v19) = 0;
    sub_C1EE0(a1, a3, 0x801Bu);
    sub_C1EE0(a1, a3, 0x801Cu);
    sub_C1EE0(a1, a3, 0x803Cu);
    do
    {
      v20 = (_WORD)v19 << 12;
      v19 = (unsigned __int16)(v19 + 1);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x19);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x22);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x74);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0xA1);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x88);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x12);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x4A);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0x7E);
      sub_C1EE0(a1, a3, v20 & 0xF000 | 0xB6);
    }
    while ( v19 != a4 );
    LOWORD(v21) = 0;
    sub_C1EE0(a1, a3, 0x8002u);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_C1EE0(a1, a3, v22 & 0xF000 | 2);
      sub_C1EE0(a1, a3, v22 | 8);
      sub_C1EE0(a1, a3, v22 | 8);
      sub_C1EE0(a1, a3, v22 & 0xF000 | 3);
    }
    while ( v21 != a4 );
    LOWORD(v23) = 0;
    sub_C1EE0(a1, a3, 0x803Eu);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x1A);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x1D);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x1E);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x45);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x46);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x47);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x71);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 2);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x99);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x7F);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x13);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x14);
      sub_C1EE0(a1, a3, v24 | 0x11);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x15);
      sub_C1EE0(a1, a3, v24 | 0x11);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x16);
      sub_C1EE0(a1, a3, v24 | 0x17);
      sub_C1EE0(a1, a3, v24 | 0x17);
      sub_C1EE0(a1, a3, v24 | 0xA5);
      sub_C1EE0(a1, a3, v24 | 0xA5);
      sub_C1EE0(a1, a3, v24 | 0xA6);
      sub_C1EE0(a1, a3, v24 | 0xA6);
      sub_C1EE0(a1, a3, v24 | 0xA6);
      sub_C1EE0(a1, a3, v24 | 0xA6);
      sub_C1EE0(a1, a3, v24 | 0xA7);
      sub_C1EE0(a1, a3, v24 | 0xA7);
      sub_C1EE0(a1, a3, v24 | 0xA7);
      sub_C1EE0(a1, a3, v24 | 0xA7);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x4A);
      sub_C1EE0(a1, a3, v24 & 0xF000 | 0x90);
    }
    while ( v23 != a4 );
    v25 = 0;
    do
    {
      v26 = v25++ << 12;
      v27 = v26 | 1;
      v28 = v26 | 0x6A;
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0x4000000u);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0);
      sub_C1EE0(a1, a3, v26 | 0x6A);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0x4000000u);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0);
      sub_C1EE0(a1, a3, v26 | 0x6A);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      sub_BF774(a1, (char)a3, v26 | 0x3A, 0x4000000u);
      sub_BF774(a1, (char)a3, v27, 0xFBFFFFFF);
      v29 = v26 | 0x3A;
      v30 = v26 | 0x5F;
      v26 |= 0x98u;
      sub_BF774(a1, (char)a3, v29, 0);
      sub_C1EE0(a1, a3, v28);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0x80u);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0);
      sub_C1EE0(a1, a3, v26);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0x80u);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0);
      sub_C1EE0(a1, a3, v26);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0x80u);
      sub_BF774(a1, (char)a3, v27, 0xFFFFFF7F);
      sub_BF774(a1, (char)a3, v30, 0);
      sub_C1EE0(a1, a3, v26);
    }
    while ( v23 > v25 );
  }
  else
  {
    v23 = 0;
    sub_C1EE0(a1, a3, 0x8051u);
    sub_C1EE0(a1, a3, 0x800Du);
    sub_C1EE0(a1, a3, 0x8030u);
    sub_C1EE0(a1, a3, 0x803Bu);
    sub_C1EE0(a1, a3, 0x8044u);
    sub_C1EE0(a1, a3, 0x8060u);
    sub_C1EE0(a1, a3, 0x8008u);
    sub_C1EE0(a1, a3, 0x803Eu);
    sub_C1EE0(a1, a3, 0x805Fu);
    sub_C1EE0(a1, a3, 0x805Fu);
    sub_C1EE0(a1, a3, 0x803Eu);
    sub_C1EE0(a1, a3, 0x8008u);
    sub_C1EE0(a1, a3, 0x8009u);
    sub_C1EE0(a1, a3, 0xA002u);
    sub_C1EE0(a1, a3, 0xA026u);
    sub_C1EE0(a1, a3, 0x801Bu);
    sub_C1EE0(a1, a3, 0x801Cu);
    sub_C1EE0(a1, a3, 0x803Cu);
    sub_C1EE0(a1, a3, 0x8002u);
    sub_C1EE0(a1, a3, 0x803Eu);
  }
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_C1EE0(a1, a3, 0x805Fu);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_C1EE0(a1, a3, 0x805Fu);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_C1EE0(a1, a3, 0x805Fu);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -16777217);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_C1EE0(a1, a3, 0x8042u);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "%s change list 20210807", v34);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0805",
    17,
    3265,
    60,
    v35);
  sub_C1EE0(a1, a3, 0x8057u);
  sub_C1EE0(a1, a3, 0x8058u);
  sub_C1EE0(a1, a3, 0x8058u);
  sub_C1EE0(a1, a3, 0x8048u);
  sub_C1EE0(a1, a3, 0x804Cu);
  if ( v23 )
  {
    v31 = 0;
    do
    {
      v32 = v31++ << 12;
      sub_C1EE0(a1, a3, v32 | 0x11);
      sub_C1EE0(a1, a3, v32 | 0x11);
      sub_C1EE0(a1, a3, v32 | 0x9A);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x65);
      sub_C1EE0(a1, a3, v32 | 0x9A);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x27);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x96);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x7C);
      sub_C1EE0(a1, a3, v32 | 0xBE);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0xA6);
      sub_C1EE0(a1, a3, v32 | 0xBE);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x8B);
      sub_C1EE0(a1, a3, v32 | 0x8C);
      sub_C1EE0(a1, a3, v32 | 0x8C);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x46);
      sub_C1EE0(a1, a3, v32 | 0x4A);
      sub_C1EE0(a1, a3, v32 | 0x4A);
      sub_C1EE0(a1, a3, v32 | 0x4B);
      sub_C1EE0(a1, a3, v32 | 0x4B);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x56);
      sub_C1EE0(a1, a3, v32 | 0x4B);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x53);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x73);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x84);
      sub_C1EE0(a1, a3, v32 | 0x24);
      sub_C1EE0(a1, a3, v32 | 0x25);
      sub_C1EE0(a1, a3, v32 | 0xE);
      sub_C1EE0(a1, a3, v32 | 0xE);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x85);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x86);
      sub_C1EE0(a1, a3, v32 | 0x11);
      sub_C1EE0(a1, a3, v32 | 0x11);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0xF);
      sub_C1EE0(a1, a3, v32 | 0x91);
      sub_C1EE0(a1, a3, v32 | 0x77);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 2);
      sub_C1EE0(a1, a3, v32 | 0x91);
      sub_C1EE0(a1, a3, v32 | 0x77);
      sub_C1EE0(a1, a3, v32 | 0x24);
      sub_C1EE0(a1, a3, v32 | 0x25);
      sub_C1EE0(a1, a3, v32 | 0x60);
      sub_C1EE0(a1, a3, v32 | 0x60);
      sub_C1EE0(a1, a3, v32 | 0x24);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x41);
      sub_C1EE0(a1, a3, v32 | 0x7B);
      sub_C1EE0(a1, a3, v32 | 0x7B);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x88);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x89);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x94);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0x95);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0xA1);
      sub_C1EE0(a1, a3, v32 & 0xF000 | 0xA4);
      sub_C1EE0(a1, a3, v32 | 0x6E);
      sub_C1EE0(a1, a3, v32 | 0x6E);
      sub_BF774(a1, (char)a3, v32 & 0xF000 | 1, 0);
    }
    while ( v23 > v31 );
  }
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147442687);
  return 0;
}
