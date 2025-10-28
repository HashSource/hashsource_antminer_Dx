int __fastcall phy_reg_read_0805(_DWORD *a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // r7
  __int16 v9; // r6
  unsigned __int16 v10; // r7
  __int16 v11; // r6
  unsigned __int16 v12; // r7
  __int16 v13; // r6
  int v14; // r9
  unsigned __int16 v15; // r6
  unsigned __int16 v16; // r6
  __int16 v17; // r2
  unsigned __int16 v18; // r7
  __int16 v19; // r6
  unsigned __int16 v20; // r7
  unsigned __int16 v21; // r6
  unsigned int v22; // r9
  unsigned __int16 v23; // r6
  unsigned __int16 v24; // r11
  unsigned __int16 v25; // r7
  int v26; // r6
  unsigned __int16 v27; // r10
  int v28; // r2
  int v29; // r8
  unsigned __int16 v30; // r8
  unsigned __int16 v31; // r6
  char v33[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, "%s chip_id %02x core_id %02x", "phy_reg_read_0805", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "phy_reg_read_0805",
    17,
    2952,
    60,
    v33);
  if ( a4 )
  {
    v8 = 0;
    do
    {
      v9 = v8++ << 12;
      sub_D469C(a1, a3, v9 & 0xF000 | 0x67);
      sub_D469C(a1, a3, v9 & 0xF000 | 0x96);
    }
    while ( v8 != a4 );
    v10 = 0;
    sub_D469C(a1, a3, 0x8051u);
    sub_D469C(a1, a3, 0x800Du);
    do
    {
      v11 = v10++ << 12;
      sub_D469C(a1, a3, v11 & 0xF000 | 0x43);
      sub_D469C(a1, a3, v11 & 0xF000 | 0x75);
      sub_D469C(a1, a3, v11 & 0xF000 | 0x76);
      sub_D469C(a1, a3, v11 & 0xF000 | 0xB0);
    }
    while ( v10 != a4 );
    v12 = 0;
    sub_D469C(a1, a3, 0x8030u);
    sub_D469C(a1, a3, 0x803Bu);
    sub_D469C(a1, a3, 0x8044u);
    sub_D469C(a1, a3, 0x8060u);
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x803Eu);
    do
    {
      v13 = v12++ << 12;
      sub_D469C(a1, a3, v13 & 0xF000 | 0x49);
      sub_D469C(a1, a3, v13 & 0xF000 | 0xF);
    }
    while ( v12 != a4 );
    sub_D469C(a1, a3, 0x805Fu);
    sub_D469C(a1, a3, 0x805Fu);
    sub_D469C(a1, a3, 0x803Eu);
    LOWORD(v14) = 0;
    do
    {
      v15 = (_WORD)v14 << 12;
      v14 = (unsigned __int16)(v14 + 1);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x16);
      sub_D469C(a1, a3, v15 | 0xA9);
      sub_D469C(a1, a3, v15 | 0xA9);
      sub_D469C(a1, a3, v15 | 0xA9);
      sub_D469C(a1, a3, v15 | 0xA9);
      sub_D469C(a1, a3, v15 | 0xAA);
      sub_D469C(a1, a3, v15 | 0xAA);
      sub_D469C(a1, a3, v15 | 0xAA);
      sub_D469C(a1, a3, v15 | 0xAA);
      sub_D469C(a1, a3, v15 | 0xAA);
      sub_D469C(a1, a3, v15 & 0xF000 | 0xAB);
      sub_D469C(a1, a3, v15 | 0x9F);
      sub_D469C(a1, a3, v15 | 0x9F);
      sub_D469C(a1, a3, v15 | 0xA0);
      sub_D469C(a1, a3, v15 | 0xA0);
      sub_D469C(a1, a3, v15 | 0xA0);
      sub_D469C(a1, a3, v15 | 0xA0);
      sub_D469C(a1, a3, v15 | 0xA1);
      sub_D469C(a1, a3, v15 | 0xA1);
      sub_D469C(a1, a3, v15 | 0x75);
      sub_D469C(a1, a3, v15 | 0x75);
      sub_D469C(a1, a3, v15 | 0x76);
      sub_D469C(a1, a3, v15 | 0x76);
      sub_D469C(a1, a3, v15 | 0x76);
      sub_D469C(a1, a3, v15 | 0x76);
      sub_D469C(a1, a3, v15 | 0x77);
      sub_D469C(a1, a3, v15 | 0x77);
      sub_D469C(a1, a3, v15 | 0x77);
      sub_D469C(a1, a3, v15 | 0x77);
      sub_D469C(a1, a3, v15 | 0x78);
      sub_D469C(a1, a3, v15 | 0x78);
      sub_D469C(a1, a3, v15 | 0x78);
      sub_D469C(a1, a3, v15 | 0x78);
      sub_D469C(a1, a3, v15 | 0x79);
      sub_D469C(a1, a3, v15 | 0x79);
      sub_D469C(a1, a3, v15 | 0x25);
      sub_D469C(a1, a3, v15 | 0x25);
      sub_D469C(a1, a3, v15 | 0x26);
      sub_D469C(a1, a3, v15 | 0x26);
      sub_D469C(a1, a3, v15 | 0x26);
      sub_D469C(a1, a3, v15 | 0x26);
      sub_D469C(a1, a3, v15 | 0x26);
      sub_D469C(a1, a3, v15 | 0x27);
      sub_D469C(a1, a3, v15 | 0x27);
      sub_D469C(a1, a3, v15 | 0x27);
      sub_D469C(a1, a3, v15 | 0x27);
      sub_D469C(a1, a3, v15 | 0x27);
      sub_D469C(a1, a3, v15 | 0x28);
      sub_D469C(a1, a3, v15 | 0x28);
      sub_D469C(a1, a3, v15 | 0x28);
      sub_D469C(a1, a3, v15 | 0x28);
      sub_D469C(a1, a3, v15 | 0x28);
      sub_D469C(a1, a3, v15 | 0x29);
      sub_D469C(a1, a3, v15 | 0x29);
      sub_D469C(a1, a3, v15 | 0x29);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x24);
      sub_D469C(a1, a3, v15 | 0x25);
      sub_D469C(a1, a3, v15 | 0x26);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x56);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x7C);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x89);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x95);
      sub_D469C(a1, a3, v15 & 0xF000 | 0xA2);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x12);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x4A);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x85);
      sub_D469C(a1, a3, v15 | 0x9F);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x11);
      sub_D469C(a1, a3, v15 & 0xF000 | 0x13);
    }
    while ( v14 != a4 );
    sub_D469C(a1, a3, 0x8008u);
    v16 = 0;
    sub_D469C(a1, a3, 0x8009u);
    sub_D469C(a1, a3, 0xA002u);
    sub_D469C(a1, a3, 0xA026u);
    do
    {
      v17 = v16++ << 12;
      sub_D469C(a1, a3, v17 & 0xF000 | 0xD);
    }
    while ( v16 != a4 );
    v18 = 0;
    sub_D469C(a1, a3, 0x801Bu);
    sub_D469C(a1, a3, 0x801Cu);
    sub_D469C(a1, a3, 0x803Cu);
    do
    {
      v19 = v18++ << 12;
      sub_D469C(a1, a3, v19 & 0xF000 | 0x19);
      sub_D469C(a1, a3, v19 & 0xF000 | 0x22);
      sub_D469C(a1, a3, v19 & 0xF000 | 0x74);
      sub_D469C(a1, a3, v19 & 0xF000 | 0xA1);
      sub_D469C(a1, a3, v19 & 0xF000 | 0x88);
      sub_D469C(a1, a3, v19 & 0xF000 | 0x12);
      sub_D469C(a1, a3, v19 & 0xF000 | 0x4A);
      sub_D469C(a1, a3, v19 & 0xF000 | 0x7E);
      sub_D469C(a1, a3, v19 & 0xF000 | 0xB6);
    }
    while ( v18 != a4 );
    v20 = 0;
    sub_D469C(a1, a3, 0x8002u);
    do
    {
      v21 = v20++ << 12;
      sub_D469C(a1, a3, v21 & 0xF000 | 2);
      sub_D469C(a1, a3, v21 | 8);
      sub_D469C(a1, a3, v21 | 8);
      sub_D469C(a1, a3, v21 & 0xF000 | 3);
    }
    while ( v20 != a4 );
    LOWORD(v22) = 0;
    sub_D469C(a1, a3, 0x803Eu);
    do
    {
      v23 = (_WORD)v22 << 12;
      v22 = (unsigned __int16)(v22 + 1);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x1A);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x1D);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x1E);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x45);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x46);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x47);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x71);
      sub_D469C(a1, a3, v23 & 0xF000 | 2);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x99);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x7F);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x13);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x14);
      sub_D469C(a1, a3, v23 | 0x11);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x15);
      sub_D469C(a1, a3, v23 | 0x11);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x16);
      sub_D469C(a1, a3, v23 | 0x17);
      sub_D469C(a1, a3, v23 | 0x17);
      sub_D469C(a1, a3, v23 | 0xA5);
      sub_D469C(a1, a3, v23 | 0xA5);
      sub_D469C(a1, a3, v23 | 0xA6);
      sub_D469C(a1, a3, v23 | 0xA6);
      sub_D469C(a1, a3, v23 | 0xA6);
      sub_D469C(a1, a3, v23 | 0xA6);
      sub_D469C(a1, a3, v23 | 0xA7);
      sub_D469C(a1, a3, v23 | 0xA7);
      sub_D469C(a1, a3, v23 | 0xA7);
      sub_D469C(a1, a3, v23 | 0xA7);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x4A);
      sub_D469C(a1, a3, v23 & 0xF000 | 0x90);
    }
    while ( v22 != a4 );
    v24 = 0;
    do
    {
      v25 = v24++ << 12;
      v26 = v25 | 1;
      v27 = v25 | 0x6A;
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0x4000000u);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0);
      sub_D469C(a1, a3, v25 | 0x6A);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0x4000000u);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0);
      sub_D469C(a1, a3, v25 | 0x6A);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      sub_D19C4((int)a1, (char)a3, v25 | 0x3A, 0x4000000u);
      sub_D19C4((int)a1, (char)a3, v26, 0xFBFFFFFF);
      v28 = v25 | 0x3A;
      v29 = v25 | 0x5F;
      v25 |= 0x98u;
      sub_D19C4((int)a1, (char)a3, v28, 0);
      sub_D469C(a1, a3, v27);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0x80u);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0);
      sub_D469C(a1, a3, v25);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0x80u);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0);
      sub_D469C(a1, a3, v25);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0x80u);
      sub_D19C4((int)a1, (char)a3, v26, 0xFFFFFF7F);
      sub_D19C4((int)a1, (char)a3, v29, 0);
      sub_D469C(a1, a3, v25);
    }
    while ( v22 > v24 );
  }
  else
  {
    v22 = 0;
    sub_D469C(a1, a3, 0x8051u);
    sub_D469C(a1, a3, 0x800Du);
    sub_D469C(a1, a3, 0x8030u);
    sub_D469C(a1, a3, 0x803Bu);
    sub_D469C(a1, a3, 0x8044u);
    sub_D469C(a1, a3, 0x8060u);
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x803Eu);
    sub_D469C(a1, a3, 0x805Fu);
    sub_D469C(a1, a3, 0x805Fu);
    sub_D469C(a1, a3, 0x803Eu);
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x8009u);
    sub_D469C(a1, a3, 0xA002u);
    sub_D469C(a1, a3, 0xA026u);
    sub_D469C(a1, a3, 0x801Bu);
    sub_D469C(a1, a3, 0x801Cu);
    sub_D469C(a1, a3, 0x803Cu);
    sub_D469C(a1, a3, 0x8002u);
    sub_D469C(a1, a3, 0x803Eu);
  }
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_D469C(a1, a3, 0x805Fu);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_D469C(a1, a3, 0x805Fu);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -67108865);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450815);
  sub_D469C(a1, a3, 0x805Fu);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_70324((int)a1, (unsigned __int8)a3, 144, -16777217);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450813);
  sub_D469C(a1, a3, 0x8042u);
  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, "%s change list 20210807", "phy_reg_read_0805");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "phy_reg_read_0805",
    17,
    3265,
    60,
    v33);
  sub_D469C(a1, a3, 0x8057u);
  sub_D469C(a1, a3, 0x8058u);
  sub_D469C(a1, a3, 0x8058u);
  sub_D469C(a1, a3, 0x8048u);
  sub_D469C(a1, a3, 0x804Cu);
  if ( v22 )
  {
    v30 = 0;
    do
    {
      v31 = v30++ << 12;
      sub_D469C(a1, a3, v31 | 0x11);
      sub_D469C(a1, a3, v31 | 0x11);
      sub_D469C(a1, a3, v31 | 0x9A);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x65);
      sub_D469C(a1, a3, v31 | 0x9A);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x27);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x96);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x7C);
      sub_D469C(a1, a3, v31 | 0xBE);
      sub_D469C(a1, a3, v31 & 0xF000 | 0xA6);
      sub_D469C(a1, a3, v31 | 0xBE);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x8B);
      sub_D469C(a1, a3, v31 | 0x8C);
      sub_D469C(a1, a3, v31 | 0x8C);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x46);
      sub_D469C(a1, a3, v31 | 0x4A);
      sub_D469C(a1, a3, v31 | 0x4A);
      sub_D469C(a1, a3, v31 | 0x4B);
      sub_D469C(a1, a3, v31 | 0x4B);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x56);
      sub_D469C(a1, a3, v31 | 0x4B);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x53);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x73);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x84);
      sub_D469C(a1, a3, v31 | 0x24);
      sub_D469C(a1, a3, v31 | 0x25);
      sub_D469C(a1, a3, v31 | 0xE);
      sub_D469C(a1, a3, v31 | 0xE);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x85);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x86);
      sub_D469C(a1, a3, v31 | 0x11);
      sub_D469C(a1, a3, v31 | 0x11);
      sub_D469C(a1, a3, v31 & 0xF000 | 0xF);
      sub_D469C(a1, a3, v31 | 0x91);
      sub_D469C(a1, a3, v31 | 0x77);
      sub_D469C(a1, a3, v31 & 0xF000 | 2);
      sub_D469C(a1, a3, v31 | 0x91);
      sub_D469C(a1, a3, v31 | 0x77);
      sub_D469C(a1, a3, v31 | 0x24);
      sub_D469C(a1, a3, v31 | 0x25);
      sub_D469C(a1, a3, v31 | 0x60);
      sub_D469C(a1, a3, v31 | 0x60);
      sub_D469C(a1, a3, v31 | 0x24);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x41);
      sub_D469C(a1, a3, v31 | 0x7B);
      sub_D469C(a1, a3, v31 | 0x7B);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x88);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x89);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x94);
      sub_D469C(a1, a3, v31 & 0xF000 | 0x95);
      sub_D469C(a1, a3, v31 & 0xF000 | 0xA1);
      sub_D469C(a1, a3, v31 & 0xF000 | 0xA4);
      sub_D469C(a1, a3, v31 | 0x6E);
      sub_D469C(a1, a3, v31 | 0x6E);
      sub_D19C4((int)a1, (char)a3, v31 & 0xF000 | 1, 0);
    }
    while ( v22 > v30 );
  }
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147450879);
  sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 145, -2147442687);
  return 0;
}
