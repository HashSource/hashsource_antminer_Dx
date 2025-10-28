int __fastcall sub_C20C4(int a1, int a2, unsigned int a3, int a4)
{
  void (__fastcall *v4)(int, _DWORD *); // r3
  unsigned int v5; // r6
  char *v6; // r7
  int v7; // r3
  int v8; // r0
  _DWORD *v9; // r4
  int v10; // r5
  int v11; // r12
  int v12; // r0
  int v13; // r2
  char *v14; // r3
  char v15; // lr
  char v16; // r12
  unsigned int v17; // t1
  int v19; // [sp+18h] [bp-1024h]
  unsigned int v21; // [sp+20h] [bp-101Ch]
  unsigned int v24; // [sp+30h] [bp-100Ch]
  _DWORD v26[2]; // [sp+38h] [bp-1004h] BYREF
  int v27; // [sp+40h] [bp-FFCh]
  int v28; // [sp+44h] [bp-FF8h]

  v27 = 1;
  v28 = 0;
  v26[0] = a3;
  v26[1] = 0;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v28) = a2;
  HIWORD(v27) = 145;
  v21 = a3 >> 12;
  LOWORD(v5) = 0;
  v4(a1, v26);
  usleep((__useconds_t)&stru_18694.st_info);
  v6 = (char *)malloc(0x600u);
  v19 = 0;
  if ( a2 == 255 )
    v7 = 16;
  else
    v7 = 1;
  v24 = v7;
  do
  {
    if ( a2 != 255 )
      LOWORD(v5) = a2;
    v8 = sub_DF23C(a1, (unsigned __int16)v5, 145, v6);
    if ( v8 > 0 )
    {
      v9 = v6 + 40;
      v10 = (int)&v6[12 * v8 + 40];
      do
      {
        while ( (*(v9 - 10) & 0x20) == 0 )
        {
          v9 += 3;
          if ( (_DWORD *)v10 == v9 )
            goto LABEL_12;
        }
        __pld(v9);
        pthread_mutex_lock(&stru_1A8A24);
        v11 = *((unsigned __int8 *)v9 - 36);
        v9 += 3;
        logfmt_raw(
          (char *)v26,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          v21,
          v11,
          *((unsigned __int8 *)v9 - 44),
          a3,
          *(v9 - 13));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read_back",
          20,
          899,
          20,
          v26);
      }
      while ( (_DWORD *)v10 != v9 );
    }
LABEL_12:
    v12 = sub_DF23C(a1, (unsigned __int16)v5, 146, v6);
    if ( v12 > 0 )
    {
      v13 = a4 + 8 * v19;
      v14 = v6;
      do
      {
        v15 = v14[4];
        v13 += 8;
        v16 = v14[8];
        v17 = *(_DWORD *)v14;
        v14 += 12;
        *(_BYTE *)(v13 - 8) = v15;
        *(_BYTE *)(v13 - 7) = v16;
        *(_DWORD *)(v13 - 4) = bswap32(v17);
      }
      while ( v14 != &v6[12 * v12] );
      v19 += v12;
    }
    v5 = (unsigned __int8)(v5 + 1);
  }
  while ( v5 < v24 );
  free(v6);
  return v19;
}
