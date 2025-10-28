int __fastcall serdes_apb_read_back_1_chip(int a1, char a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r6
  char *v7; // r7
  int v8; // r3
  int v9; // r0
  _DWORD *v10; // r4
  int v11; // r5
  int v12; // r12
  int v13; // r1
  int v14; // r0
  int v15; // r2
  char *v16; // r3
  char v17; // lr
  char v18; // r12
  unsigned int v19; // t1
  int v21; // [sp+18h] [bp-1024h]
  unsigned int v24; // [sp+24h] [bp-1018h]
  unsigned int v26; // [sp+30h] [bp-100Ch]
  _DWORD var1004[1026]; // [sp+38h] [bp-1004h] BYREF

  var1004[2] = 9502721;
  LOWORD(v5) = 0;
  var1004[0] = a4;
  var1004[1] = 0;
  var1004[3] = (unsigned __int8)a3;
  v24 = a4 >> 12;
  v21 = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, var1004);
  usleep((__useconds_t)"ead_unregister_cancel");
  v7 = (char *)malloc(0x600u);
  if ( a3 == 255 )
    v8 = 16;
  else
    v8 = 1;
  v26 = v8;
  do
  {
    if ( a3 != 255 )
      LOWORD(v5) = a3;
    v9 = sub_9577C(a1, a2, (unsigned __int16)v5, 145, v7);
    if ( v9 > 0 )
    {
      v10 = v7 + 40;
      v11 = (int)&v7[12 * v9 + 40];
      do
      {
        while ( (*(v10 - 10) & 0x20) == 0 )
        {
          v10 += 3;
          if ( (_DWORD *)v11 == v10 )
            goto LABEL_12;
        }
        __pld(v10);
        pthread_mutex_lock(&stru_197BB8);
        v12 = *((unsigned __int8 *)v10 - 36);
        v13 = *(v10 - 10);
        v10 += 3;
        logfmt_raw(
          (char *)var1004,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          v24,
          v12,
          *((unsigned __int8 *)v10 - 44),
          a4,
          v13);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read_back_1_chip",
          27,
          942,
          20,
          var1004);
      }
      while ( (_DWORD *)v11 != v10 );
    }
LABEL_12:
    v14 = sub_9577C(a1, a2, (unsigned __int16)v5, 146, v7);
    if ( v14 > 0 )
    {
      v15 = a5 + 8 * v21;
      v16 = v7;
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
      while ( v16 != &v7[12 * v14] );
      v21 += v14;
    }
    v5 = (unsigned __int8)(v5 + 1);
  }
  while ( v26 > v5 );
  free(v7);
  return v21;
}
