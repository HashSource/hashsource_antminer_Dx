int __fastcall sub_13415C(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // r11
  void (__fastcall *v6)(int, _DWORD *); // r3
  unsigned int v7; // r6
  char *v8; // r8
  int v9; // r3
  int v10; // r0
  _DWORD *v11; // r4
  int v12; // r5
  int v13; // r12
  int v14; // r0
  int v15; // r2
  char *v16; // r3
  char v17; // lr
  char v18; // r12
  unsigned int v19; // t1
  unsigned int v22; // [sp+20h] [bp-101Ch]
  unsigned int v24; // [sp+2Ch] [bp-1010h]
  _DWORD v27[3]; // [sp+38h] [bp-1004h] BYREF
  int v28; // [sp+44h] [bp-FF8h]

  v27[2] = 9502721;
  v28 = 0;
  v27[0] = a3;
  v4 = 0;
  v27[1] = 0;
  v22 = a3 >> 12;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v28) = a2;
  LOWORD(v7) = 0;
  v6(a1, v27);
  usleep((__useconds_t)"ead_unregister_cancel");
  v8 = (char *)malloc(0x600u);
  if ( a2 == 255 )
    v9 = 16;
  else
    v9 = 1;
  v24 = v9;
  do
  {
    if ( a2 != 255 )
      LOWORD(v7) = a2;
    v10 = sub_93DE0(a1, (unsigned __int16)v7, 145, v8);
    if ( v10 > 0 )
    {
      v11 = v8 + 40;
      v12 = (int)&v8[12 * v10 + 40];
      do
      {
        while ( (*(v11 - 10) & 0x20) == 0 )
        {
          v11 += 3;
          if ( (_DWORD *)v12 == v11 )
            goto LABEL_12;
        }
        __pld(v11);
        pthread_mutex_lock(&stru_197BB8);
        v13 = *((unsigned __int8 *)v11 - 36);
        v11 += 3;
        logfmt_raw(
          (char *)v27,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          v22,
          v13,
          *((unsigned __int8 *)v11 - 44),
          a3,
          *(v11 - 13));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read_back",
          20,
          899,
          20,
          v27);
      }
      while ( (_DWORD *)v12 != v11 );
    }
LABEL_12:
    v14 = sub_93DE0(a1, (unsigned __int16)v7, 146, v8);
    if ( v14 > 0 )
    {
      v15 = a4 + 8 * v4;
      v16 = v8;
      do
      {
        v17 = v16[4];
        v15 += 8;
        v18 = v16[8];
        v19 = *(_DWORD *)v16;
        v16 += 12;
        *(_BYTE *)(v15 - 8) = v17;
        *(_BYTE *)(v15 - 7) = v18;
        *(_DWORD *)(v15 - 4) = bswap32(v19);
      }
      while ( v16 != &v8[12 * v14] );
      v4 += v14;
    }
    v7 = (unsigned __int8)(v7 + 1);
  }
  while ( v7 < v24 );
  free(v8);
  return v4;
}
