int __fastcall sub_67A20(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v7; // r6
  int v11; // r11
  int v12; // r3
  int v14; // r12
  unsigned int v15; // r6
  int v16; // r2
  char v17; // r3
  signed int v18; // r0
  unsigned int v19; // r1
  int v20; // r6
  int v21; // r5
  int v23; // r0
  char v24[4080]; // [sp+10h] [bp-1004h] BYREF

  v7 = a1[194];
  v11 = *(_BYTE *)(a2 + 9) & 0x7F;
  v12 = *(_DWORD *)(v7 + 8 * v11);
  v14 = *(_DWORD *)(v7 + 8 * v11 + 4);
  *(_DWORD *)a3 = v12;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v12;
  strcpy((char *)(a3 + 16), (const char *)(v7 + 32 * (v11 + 32)));
  v15 = v7 + 180 * (__int16)v11 + 5260;
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 3);
  v16 = *(_DWORD *)(v15 + 4);
  *(_DWORD *)(a3 + 53) = *(_DWORD *)v15;
  *(_DWORD *)(a3 + 57) = v16;
  LOBYTE(v16) = *(_BYTE *)(v15 + 10);
  *(_WORD *)(a3 + 61) = *(_WORD *)(v15 + 8);
  *(_BYTE *)(a3 + 63) = v16;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 4);
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 65) = v11;
  *(_BYTE *)(a3 + 64) = v17;
  v18 = *(unsigned __int8 *)(a2 + 3) / a1[97];
  if ( v18 >= (int)a1[74] )
  {
    v23 = rand();
    sub_1223AC(v23, a1[74]);
    *a6 = v19;
  }
  else
  {
    v19 = *(unsigned __int8 *)(a2 + 3) / a1[97];
    *a6 = v18;
  }
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(unsigned __int8 *)(a2 + 5) >> 6) + 4 * *(unsigned __int8 *)(a2 + 4);
  v20 = BM_CRC5((_BYTE *)(a2 + 2), 67);
  v21 = *(_BYTE *)(a2 + 10) & 0x1F;
  if ( v20 != v21 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "get nonce crc error calc value %04x expected value %04x", v20, v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      170,
      "packet_2_nonce_dcr",
      18,
      211,
      80,
      v24);
    while ( 1 )
      ;
  }
  *a5 = *(_DWORD *)(a3 + 48);
  *a4 = 1;
  return 0;
}
