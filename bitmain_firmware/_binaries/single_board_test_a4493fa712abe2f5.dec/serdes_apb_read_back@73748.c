int __fastcall serdes_apb_read_back(_DWORD *a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // r6
  unsigned int v7; // r5
  void (__fastcall *v8)(_DWORD *, _DWORD *); // r3
  char *v9; // r7
  int v10; // r3
  int v11; // r0
  _DWORD *v12; // r4
  int v13; // r5
  int v14; // r12
  int v15; // r1
  int v16; // r0
  int v17; // r2
  char *v18; // r3
  char v19; // r5
  char v20; // r4
  unsigned int v21; // t1
  int v23; // [sp+18h] [bp-1024h]
  unsigned int v25; // [sp+20h] [bp-101Ch]
  unsigned int v27; // [sp+30h] [bp-100Ch]
  _DWORD v29[2]; // [sp+38h] [bp-1004h] BYREF
  int v30; // [sp+40h] [bp-FFCh]
  int v31; // [sp+44h] [bp-FF8h]

  v30 = 0;
  v31 = 0;
  LOWORD(v6) = 0;
  v29[1] = 0;
  v7 = a4 >> 12;
  v29[0] = a4;
  v8 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[36];
  HIWORD(v30) = 145;
  LOBYTE(v31) = a3;
  LOBYTE(v30) = 1;
  v25 = v7;
  v23 = 0;
  v8(a1, v29);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v9 = (char *)malloc(0x600u);
  if ( a3 == 255 )
    v10 = 16;
  else
    v10 = 1;
  v27 = v10;
  do
  {
    if ( a3 != 255 )
      LOWORD(v6) = a3;
    v11 = sub_73570(a1, (unsigned __int16)v6, 145, v9);
    if ( v11 > 0 )
    {
      v12 = v9 + 40;
      v13 = (int)&v9[12 * v11 + 40];
      do
      {
        while ( (*(v12 - 10) & 0x20) == 0 )
        {
          v12 += 3;
          if ( (_DWORD *)v13 == v12 )
            goto LABEL_12;
        }
        __pld(v12);
        pthread_mutex_lock(&stru_3B526C);
        v14 = *((unsigned __int8 *)v12 - 36);
        v15 = *(v12 - 10);
        v12 += 3;
        logfmt_raw(
          (char *)v29,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          v25,
          v14,
          *((unsigned __int8 *)v12 - 44),
          a4,
          v15);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "serdes_apb_read_back",
          20,
          899,
          20,
          v29);
      }
      while ( (_DWORD *)v13 != v12 );
    }
LABEL_12:
    v16 = sub_73570(a1, (unsigned __int16)v6, 146, v9);
    if ( v16 > 0 )
    {
      v17 = a5 + 8 * v23;
      v18 = v9;
      do
      {
        v19 = v18[4];
        v17 += 8;
        v20 = v18[8];
        v21 = *(_DWORD *)v18;
        v18 += 12;
        *(_BYTE *)(v17 - 8) = v19;
        *(_BYTE *)(v17 - 7) = v20;
        *(_DWORD *)(v17 - 4) = bswap32(v21);
      }
      while ( v18 != &v9[12 * v16] );
      v23 += v16;
    }
    v6 = (unsigned __int8)(v6 + 1);
  }
  while ( v27 > v6 );
  free(v9);
  return v23;
}
