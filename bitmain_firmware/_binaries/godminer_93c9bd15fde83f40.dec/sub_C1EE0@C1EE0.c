int __fastcall sub_C1EE0(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned __int16 v3; // r7
  int v5; // r9
  void (__fastcall *v6)(int, _DWORD *); // r3
  int *v7; // r3
  char *v8; // r10
  _BYTE *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _BYTE *v14; // r3
  int v15; // r0
  _DWORD *v16; // r4
  int v17; // r5
  int v18; // r12
  int v23; // [sp+2Ch] [bp-1018h]
  _BYTE v24[16]; // [sp+30h] [bp-1014h] BYREF
  _DWORD v25[2]; // [sp+40h] [bp-1004h] BYREF
  int v26; // [sp+48h] [bp-FFCh]
  int v27; // [sp+4Ch] [bp-FF8h]

  v25[0] = a3;
  v26 = 0;
  v27 = 0;
  v25[1] = 0;
  v5 = 0;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  HIWORD(v26) = 145;
  LOBYTE(v27) = (_BYTE)a2;
  LOBYTE(v26) = 1;
  v6(a1, v25);
  usleep((__useconds_t)&stru_18694.st_info);
  v8 = (char *)malloc(0x600u);
  if ( a2 == (_BYTE *)255 )
  {
    v7 = (int *)&unk_17C2FC;
    v23 = 14;
    v9 = v24;
  }
  else
  {
    v23 = 1;
  }
  if ( a2 == (_BYTE *)255 )
  {
    v10 = *v7;
    v11 = v7[1];
    v12 = v7[2];
    v13 = v7[3];
    *(_DWORD *)v9 = v10;
    *((_DWORD *)v9 + 1) = v11;
    *((_DWORD *)v9 + 2) = v12;
    *((_WORD *)v9 + 6) = v13;
  }
  do
  {
    v14 = a2;
    if ( a2 == (_BYTE *)255 )
      v14 = v24;
    else
      v3 = (unsigned __int16)a2;
    if ( a2 == (_BYTE *)255 )
      v3 = (unsigned __int8)v14[v5];
    v15 = sub_DF23C(a1, v3, 145, v8);
    if ( v15 > 0 )
    {
      v16 = v8 + 40;
      v17 = (int)&v8[12 * v15 + 40];
      do
      {
        while ( (*(v16 - 10) & 0x20) == 0 )
        {
          v16 += 3;
          if ( v16 == (_DWORD *)v17 )
            goto LABEL_16;
        }
        __pld(v16);
        pthread_mutex_lock(&stru_1A8A24);
        v18 = *((unsigned __int8 *)v16 - 36);
        v16 += 3;
        logfmt_raw(
          (char *)v25,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          a3 >> 12,
          v18,
          *((unsigned __int8 *)v16 - 44),
          a3,
          *(v16 - 13));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read",
          15,
          865,
          100,
          v25);
      }
      while ( v16 != (_DWORD *)v17 );
    }
LABEL_16:
    sub_DF23C(a1, v3, 146, v8);
    ++v5;
  }
  while ( v5 != v23 );
  free(v8);
  return 0;
}
