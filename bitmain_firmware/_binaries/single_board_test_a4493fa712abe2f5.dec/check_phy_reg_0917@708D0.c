int __fastcall check_phy_reg_0917(_DWORD *a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r8
  unsigned __int16 v8; // r6
  __int16 v9; // r2
  unsigned __int16 v10; // r7
  unsigned __int16 v11; // r6
  unsigned int v12; // r9
  unsigned __int16 v13; // r7
  unsigned __int16 v14; // r6
  unsigned __int16 v15; // r6
  __int16 v16; // r2
  unsigned __int16 v17; // r7
  __int16 v18; // r6
  unsigned __int16 v19; // r7
  __int16 v20; // r6
  unsigned __int16 v21; // r7
  unsigned __int16 v22; // r6
  unsigned int v23; // r7
  __int16 v24; // r6
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r6
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // r6
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r6
  unsigned __int16 v31; // r9
  unsigned __int16 v32; // r6
  unsigned __int16 v33; // r8
  __int16 v34; // r6
  unsigned __int16 v35; // r8
  __int16 v36; // r6
  char v38[4100]; // [sp+10h] [bp+0h] BYREF

  v7 = a4;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v38, 0x1000u, 0, "%s chip_id %02x core_id %02x", "check_phy_reg_0917", a2, a3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_phy_reg_0917",
    18,
    1259,
    60,
    v38);
  if ( v7 )
  {
    v8 = 0;
    do
    {
      v9 = v8++ << 12;
      sub_D469C(a1, a3, v9 & 0xF000 | 0x6E);
    }
    while ( v8 != v7 );
    v10 = 0;
    sub_D469C(a1, a3, 0xB03Fu);
    sub_D469C(a1, a3, 0xC03Fu);
    sub_D469C(a1, a3, 0xB03Eu);
    sub_D469C(a1, a3, 0xC03Eu);
    sub_D469C(a1, a3, 0xB03Fu);
    sub_D469C(a1, a3, 0xC03Fu);
    do
    {
      v11 = v10++ << 12;
      v12 = v11 | 0x6E;
      sub_D469C(a1, a3, v12);
      sub_D469C(a1, a3, v11 & 0xF000 | 0x6F);
      sub_D469C(a1, a3, v12);
      sub_D469C(a1, a3, v12);
    }
    while ( v10 != v7 );
    v13 = 0;
    sub_D469C(a1, a3, 0xB002u);
    sub_D469C(a1, a3, 0xB002u);
    sub_D469C(a1, a3, 0xB003u);
    sub_D469C(a1, a3, 0xC003u);
    sub_D469C(a1, a3, 0xB005u);
    sub_D469C(a1, a3, 0xC005u);
    sub_D469C(a1, a3, 0xB006u);
    sub_D469C(a1, a3, 0xC006u);
    do
    {
      v14 = v13++ << 12;
      sub_D469C(a1, a3, v14 & 0xF000 | 0x2A);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x2F);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x30);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x19);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x1B);
      sub_D469C(a1, a3, v14 | 0x1A);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x1D);
      sub_D469C(a1, a3, v14 | 0x1A);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x47);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x12);
      sub_D469C(a1, a3, v14 & 0xF000 | 0x4A);
    }
    while ( v13 != v7 );
    v15 = 0;
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x8009u);
    do
    {
      v16 = v15++ << 12;
      sub_D469C(a1, a3, v16 & 0xF000 | 0x20);
    }
    while ( v15 != v7 );
    v17 = 0;
    sub_D469C(a1, a3, 0x803Eu);
    do
    {
      v18 = v17++ << 12;
      sub_D469C(a1, a3, v18 & 0xF000 | 0x7E);
      sub_D469C(a1, a3, v18 & 0xF000 | 0xB6);
    }
    while ( v17 != v7 );
    v19 = 0;
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Fu);
    sub_D469C(a1, a3, 0x8041u);
    sub_D469C(a1, a3, 0x8002u);
    do
    {
      v20 = v19++ << 12;
      sub_D469C(a1, a3, v20 & 0xF000 | 2);
      sub_D469C(a1, a3, v20 & 0xF000 | 8);
      sub_D469C(a1, a3, v20 & 0xF000 | 3);
    }
    while ( v19 != v7 );
    v21 = 0;
    sub_D469C(a1, a3, 0x803Eu);
    sub_D469C(a1, a3, 0x8002u);
    sub_D469C(a1, a3, 0x8048u);
    sub_D469C(a1, a3, 0x804Cu);
    sub_D469C(a1, a3, 0x800Cu);
    do
    {
      v22 = v21++ << 12;
      sub_D469C(a1, a3, v22 & 0xF000 | 0x96);
      sub_D469C(a1, a3, v22 & 0xF000 | 0x7C);
      sub_D469C(a1, a3, v22 | 0xBE);
      sub_D469C(a1, a3, v22 & 0xF000 | 0xA6);
      sub_D469C(a1, a3, v22 | 0xBE);
      sub_D469C(a1, a3, v22 & 0xF000 | 0x8B);
      sub_D469C(a1, a3, v22 | 0x8C);
      sub_D469C(a1, a3, v22 | 0x8C);
      sub_D469C(a1, a3, v22 & 0xF000 | 2);
      sub_D469C(a1, a3, v22 & 0xF000 | 0x69);
      sub_D469C(a1, a3, v22 & 0xF000 | 0x48);
    }
    while ( v21 != v7 );
    LOWORD(v23) = 0;
    sub_D469C(a1, a3, 0x8002u);
    sub_D469C(a1, a3, 0x803Cu);
    sub_D469C(a1, a3, 0x801Bu);
    sub_D469C(a1, a3, 0x801Cu);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_D469C(a1, a3, v24 & 0xF000 | 0x19);
      sub_D469C(a1, a3, v24 & 0xF000 | 0x22);
      sub_D469C(a1, a3, v24 & 0xF000 | 0x74);
    }
    while ( (unsigned __int16)v23 != v7 );
    v25 = 0;
    sub_D469C(a1, a3, 0x8014u);
    do
    {
      v26 = v25++ << 12;
      sub_D469C(a1, a3, v26 & 0xF000 | 6);
      sub_D469C(a1, a3, v26 & 0xF000 | 2);
      sub_D469C(a1, a3, v26 | 0x50);
      sub_D469C(a1, a3, v26 & 0xF000 | 5);
      sub_D469C(a1, a3, v26 & 0xF000 | 0xA);
      sub_D469C(a1, a3, v26 | 0x50);
      sub_D469C(a1, a3, v26 & 0xF000 | 0xAF);
      sub_D469C(a1, a3, v26 | 0x9D);
      sub_D469C(a1, a3, v26 | 0x9D);
      sub_D469C(a1, a3, v26 | 0x9C);
      sub_D469C(a1, a3, v26 | 0x9C);
      sub_D469C(a1, a3, v26 & 0xF000 | 0x9E);
      sub_D469C(a1, a3, v26 & 0xF000 | 0x9F);
      sub_D469C(a1, a3, v26 & 0xF000 | 0x96);
      sub_D469C(a1, a3, v26 | 0x97);
      sub_D469C(a1, a3, v26 | 0x97);
      sub_D469C(a1, a3, v26 & 0xF000 | 0x98);
    }
    while ( (unsigned __int16)v23 > (unsigned int)v25 );
  }
  else
  {
    v23 = 0;
    sub_D469C(a1, a3, 0xB03Fu);
    sub_D469C(a1, a3, 0xC03Fu);
    sub_D469C(a1, a3, 0xB03Eu);
    sub_D469C(a1, a3, 0xC03Eu);
    sub_D469C(a1, a3, 0xB03Fu);
    sub_D469C(a1, a3, 0xC03Fu);
    sub_D469C(a1, a3, 0xB002u);
    sub_D469C(a1, a3, 0xB002u);
    sub_D469C(a1, a3, 0xB003u);
    sub_D469C(a1, a3, 0xC003u);
    sub_D469C(a1, a3, 0xB005u);
    sub_D469C(a1, a3, 0xC005u);
    sub_D469C(a1, a3, 0xB006u);
    sub_D469C(a1, a3, 0xC006u);
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x8009u);
    sub_D469C(a1, a3, 0x803Eu);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Du);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Eu);
    sub_D469C(a1, a3, 0x805Fu);
    sub_D469C(a1, a3, 0x8041u);
    sub_D469C(a1, a3, 0x8002u);
    sub_D469C(a1, a3, 0x803Eu);
    sub_D469C(a1, a3, 0x8002u);
    sub_D469C(a1, a3, 0x8048u);
    sub_D469C(a1, a3, 0x804Cu);
    sub_D469C(a1, a3, 0x800Cu);
    sub_D469C(a1, a3, 0x8002u);
    sub_D469C(a1, a3, 0x803Cu);
    sub_D469C(a1, a3, 0x801Bu);
    sub_D469C(a1, a3, 0x801Cu);
    sub_D469C(a1, a3, 0x8014u);
  }
  sub_D469C(a1, a3, 0xB03Bu);
  sub_D469C(a1, a3, 0xC03Bu);
  sub_D469C(a1, a3, 0xB03Cu);
  sub_D469C(a1, a3, 0xC03Cu);
  sub_D469C(a1, a3, 0xB03Cu);
  sub_D469C(a1, a3, 0xC03Cu);
  sub_D469C(a1, a3, 0xB03Cu);
  sub_D469C(a1, a3, 0xC03Cu);
  sub_D469C(a1, a3, 0xB03Du);
  sub_D469C(a1, a3, 0xC03Du);
  sub_D469C(a1, a3, 0xB03Du);
  sub_D469C(a1, a3, 0xC03Du);
  sub_D469C(a1, a3, 0xB03Du);
  sub_D469C(a1, a3, 0xC03Du);
  sub_D469C(a1, a3, 0xB01Cu);
  sub_D469C(a1, a3, 0xC01Cu);
  sub_D469C(a1, a3, 0xB01Cu);
  sub_D469C(a1, a3, 0xC01Cu);
  sub_D469C(a1, a3, 0xB01Du);
  sub_D469C(a1, a3, 0xC01Du);
  sub_D469C(a1, a3, 0xB01Du);
  sub_D469C(a1, a3, 0xC01Du);
  sub_D469C(a1, a3, 0xB01Du);
  sub_D469C(a1, a3, 0xC01Du);
  sub_D469C(a1, a3, 0xB01Du);
  sub_D469C(a1, a3, 0xC01Du);
  sub_D469C(a1, a3, 0xB01Eu);
  sub_D469C(a1, a3, 0xC01Eu);
  sub_D469C(a1, a3, 0xB01Eu);
  sub_D469C(a1, a3, 0xC01Eu);
  if ( v23 )
  {
    v27 = 0;
    do
    {
      v28 = v27++ << 12;
      sub_D469C(a1, a3, v28 | 0xA);
      sub_D469C(a1, a3, v28 | 0xA);
      sub_D469C(a1, a3, v28 & 0xF000 | 9);
      sub_D469C(a1, a3, v28 | 0x12);
      sub_D469C(a1, a3, v28 | 0x12);
      sub_D469C(a1, a3, v28 & 0xF000 | 0x13);
    }
    while ( v23 > v27 );
  }
  sub_D469C(a1, a3, 0xA005u);
  sub_D469C(a1, a3, 0xA007u);
  sub_D469C(a1, a3, 0xB025u);
  sub_D469C(a1, a3, 0xC025u);
  sub_D469C(a1, a3, 0xB025u);
  sub_D469C(a1, a3, 0xC025u);
  sub_D469C(a1, a3, 0xB028u);
  sub_D469C(a1, a3, 0xC028u);
  sub_D469C(a1, a3, 0xB029u);
  sub_D469C(a1, a3, 0xC029u);
  sub_D469C(a1, a3, 0xB029u);
  sub_D469C(a1, a3, 0xC029u);
  sub_D469C(a1, a3, 0xB029u);
  sub_D469C(a1, a3, 0xC029u);
  sub_D469C(a1, a3, 0xB02Du);
  sub_D469C(a1, a3, 0xC02Du);
  sub_D469C(a1, a3, 0xB02Du);
  sub_D469C(a1, a3, 0xC02Du);
  if ( v23 )
  {
    v29 = 0;
    do
    {
      v30 = v29++ << 12;
      sub_D469C(a1, a3, v30 & 0xF000 | 8);
      sub_D469C(a1, a3, v30 & 0xF000 | 0x6B);
      sub_D469C(a1, a3, v30 & 0xF000 | 0x9D);
      sub_D469C(a1, a3, v30 & 0xF000 | 0x9E);
      sub_D469C(a1, a3, v30 | 0x6A);
      sub_D469C(a1, a3, v30 & 0xF000 | 0x50);
      sub_D469C(a1, a3, v30 | 0x6A);
      sub_D469C(a1, a3, v30 & 0xF000 | 0x53);
    }
    while ( v23 > v29 );
    v31 = 0;
    sub_D469C(a1, a3, 0x803Du);
    sub_D469C(a1, a3, 0x803Du);
    do
    {
      v32 = v31++ << 12;
      sub_D469C(a1, a3, v32 | 0x46);
      sub_D469C(a1, a3, v32 | 0x46);
      sub_D469C(a1, a3, v32 | 0x47);
      sub_D469C(a1, a3, v32 | 0x47);
      sub_D469C(a1, a3, v32 | 0x47);
      sub_D469C(a1, a3, v32 | 0x47);
      sub_D469C(a1, a3, v32 | 0x47);
      sub_D469C(a1, a3, v32 | 0x48);
      sub_D469C(a1, a3, v32 | 0x48);
      sub_D469C(a1, a3, v32 | 0x48);
      sub_D469C(a1, a3, v32 | 0x48);
      sub_D469C(a1, a3, v32 | 0x48);
      sub_D469C(a1, a3, v32 | 0x49);
      sub_D469C(a1, a3, v32 | 0x49);
      sub_D469C(a1, a3, v32 | 0x49);
      sub_D469C(a1, a3, v32 | 0x49);
      sub_D469C(a1, a3, v32 | 0x49);
      sub_D469C(a1, a3, v32 | 0x4A);
      sub_D469C(a1, a3, v32 | 0x4A);
      sub_D469C(a1, a3, v32 | 0x4A);
      sub_D469C(a1, a3, v32 | 0x27);
      sub_D469C(a1, a3, v32 | 0x27);
      sub_D469C(a1, a3, v32 | 0x28);
      sub_D469C(a1, a3, v32 | 0x28);
      sub_D469C(a1, a3, v32 | 0x28);
      sub_D469C(a1, a3, v32 | 0x28);
      sub_D469C(a1, a3, v32 | 0x29);
      sub_D469C(a1, a3, v32 | 0x29);
      sub_D469C(a1, a3, v32 | 0x29);
      sub_D469C(a1, a3, v32 | 0x2A);
      sub_D469C(a1, a3, v32 | 0x2A);
      sub_D469C(a1, a3, v32 | 0x2B);
      sub_D469C(a1, a3, v32 | 0x2B);
      sub_D469C(a1, a3, v32 | 0x2B);
      sub_D469C(a1, a3, v32 | 0x2B);
      sub_D469C(a1, a3, v32 & 0xF000 | 0x2C);
      sub_D469C(a1, a3, v32 & 0xF000 | 0x67);
      sub_D469C(a1, a3, v32 & 0xF000 | 0x96);
    }
    while ( v23 > v31 );
    v33 = 0;
    sub_D469C(a1, a3, 0x8051u);
    sub_D469C(a1, a3, 0x800Du);
    do
    {
      v34 = v33++ << 12;
      sub_D469C(a1, a3, v34 & 0xF000 | 0x43);
      sub_D469C(a1, a3, v34 & 0xF000 | 0x75);
      sub_D469C(a1, a3, v34 & 0xF000 | 0x76);
      sub_D469C(a1, a3, v34 & 0xF000 | 0xB0);
    }
    while ( v23 > v33 );
    v35 = 0;
    sub_D469C(a1, a3, 0x8030u);
    sub_D469C(a1, a3, 0x803Bu);
    sub_D469C(a1, a3, 0x8044u);
    sub_D469C(a1, a3, 0x8060u);
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x803Eu);
    do
    {
      v36 = v35++ << 12;
      sub_D469C(a1, a3, v36 & 0xF000 | 0x49);
      sub_D469C(a1, a3, v36 & 0xF000 | 0xF);
      sub_D469C(a1, a3, v36 & 0xF000 | 0x96);
    }
    while ( v23 > v35 );
    return 0;
  }
  else
  {
    sub_D469C(a1, a3, 0x803Du);
    sub_D469C(a1, a3, 0x803Du);
    sub_D469C(a1, a3, 0x8051u);
    sub_D469C(a1, a3, 0x800Du);
    sub_D469C(a1, a3, 0x8030u);
    sub_D469C(a1, a3, 0x803Bu);
    sub_D469C(a1, a3, 0x8044u);
    sub_D469C(a1, a3, 0x8060u);
    sub_D469C(a1, a3, 0x8008u);
    sub_D469C(a1, a3, 0x803Eu);
    return 0;
  }
}
