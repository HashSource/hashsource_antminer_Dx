int __fastcall serdes_apb_read(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int16 v4; // r7
  void (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r10
  int v8; // r0
  int v9; // r1
  int v10; // r2
  __int16 v11; // r3
  _BYTE *v12; // r12
  _BYTE *v13; // r3
  int v14; // r0
  _DWORD *v15; // r4
  int v16; // r5
  int v17; // r12
  int v18; // r1
  char *ptr; // [sp+18h] [bp-102Ch]
  int v24; // [sp+2Ch] [bp-1018h]
  _BYTE v25[16]; // [sp+30h] [bp-1014h] BYREF
  _DWORD v26[2]; // [sp+40h] [bp-1004h] BYREF
  int v27; // [sp+48h] [bp-FFCh]
  int v28; // [sp+4Ch] [bp-FF8h]

  v26[0] = a4;
  v27 = 0;
  v28 = (unsigned __int8)a3;
  v26[1] = 0;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  HIWORD(v27) = 145;
  LOBYTE(v27) = 1;
  v7 = 0;
  v6(a1, v26);
  usleep((__useconds_t)"ead_unregister_cancel");
  v8 = (int)malloc(0x600u);
  ptr = (char *)v8;
  if ( a3 == (_BYTE *)255 )
  {
    v24 = 14;
    v8 = 100991489;
    v9 = 235735561;
    v10 = 134677248;
    v11 = 3851;
    v12 = v25;
  }
  else
  {
    v24 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    *(_DWORD *)v12 = v8;
    *((_DWORD *)v12 + 1) = v9;
    *((_DWORD *)v12 + 2) = v10;
    *((_WORD *)v12 + 6) = v11;
  }
  do
  {
    v13 = a3;
    if ( a3 == (_BYTE *)255 )
      v13 = v25;
    else
      v4 = (unsigned __int16)a3;
    if ( a3 == (_BYTE *)255 )
      v4 = (unsigned __int8)v13[v7];
    v14 = sub_93DE0(a1, v4, 145, ptr);
    if ( v14 > 0 )
    {
      v15 = ptr + 40;
      v16 = (int)&ptr[12 * v14 + 40];
      do
      {
        while ( (*(v15 - 10) & 0x20) == 0 )
        {
          v15 += 3;
          if ( v15 == (_DWORD *)v16 )
            goto LABEL_16;
        }
        __pld(v15);
        pthread_mutex_lock(&stru_197BB8);
        v17 = *((unsigned __int8 *)v15 - 36);
        v18 = *(v15 - 10);
        v15 += 3;
        logfmt_raw(
          (char *)v26,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          a4 >> 12,
          v17,
          *((unsigned __int8 *)v15 - 44),
          a4,
          v18);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read",
          15,
          865,
          100,
          v26);
      }
      while ( v15 != (_DWORD *)v16 );
    }
LABEL_16:
    sub_93DE0(a1, v4, 146, ptr);
    ++v7;
  }
  while ( v24 != v7 );
  free(ptr);
  return 0;
}
