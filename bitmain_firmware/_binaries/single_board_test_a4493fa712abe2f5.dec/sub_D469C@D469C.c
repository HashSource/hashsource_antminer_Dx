int __fastcall sub_D469C(_DWORD *a1, _BYTE *a2, unsigned int a3)
{
  int v3; // r7
  int v4; // r4
  void (__fastcall *v6)(_DWORD *, _DWORD *); // r3
  int v7; // r9
  int *v8; // r3
  char *v9; // r10
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _BYTE *v14; // r3
  int v15; // r0
  _DWORD *v16; // r4
  int v17; // r5
  int v18; // r12
  int v23; // [sp+34h] [bp-1018h]
  _BYTE v24[16]; // [sp+38h] [bp-1014h] BYREF
  _DWORD v25[2]; // [sp+48h] [bp-1004h] BYREF
  int v26; // [sp+50h] [bp-FFCh]
  int v27; // [sp+54h] [bp-FF8h]

  v4 = 1;
  v26 = 0;
  v27 = 0;
  v25[1] = 0;
  v6 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[36];
  HIWORD(v26) = 145;
  v7 = 0;
  v25[0] = a3;
  LOBYTE(v26) = 1;
  LOBYTE(v27) = (_BYTE)a2;
  v6(a1, v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v9 = (char *)malloc(0x600u);
  if ( a2 == (_BYTE *)255 )
  {
    v8 = (int *)&unk_10D2AC;
    v23 = 14;
    v4 = (int)v24;
  }
  else
  {
    v23 = 1;
  }
  if ( a2 == (_BYTE *)255 )
  {
    v10 = *v8;
    v11 = v8[1];
    v12 = v8[2];
    v13 = v8[3];
    *(_DWORD *)v4 = v10;
    *(_DWORD *)(v4 + 4) = v11;
    *(_DWORD *)(v4 + 8) = v12;
    *(_WORD *)(v4 + 12) = v13;
  }
  do
  {
    v14 = a2;
    if ( a2 == (_BYTE *)255 )
      v14 = v24;
    else
      LOWORD(v3) = (_WORD)a2;
    if ( a2 == (_BYTE *)255 )
      LOWORD(v3) = (unsigned __int8)v14[v7];
    v3 = (unsigned __int16)v3;
    v15 = sub_73570(a1, (unsigned __int16)v3, 145, v9);
    if ( v15 > 0 )
    {
      v16 = v9 + 40;
      v17 = (int)&v9[12 * v15 + 40];
      do
      {
        while ( (*(v16 - 10) & 0x20) == 0 )
        {
          v16 += 3;
          if ( v16 == (_DWORD *)v17 )
            goto LABEL_16;
        }
        __pld(v16);
        pthread_mutex_lock(&stru_3B526C);
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
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "serdes_apb_read",
          15,
          865,
          100,
          v25);
      }
      while ( v16 != (_DWORD *)v17 );
LABEL_16:
      v3 = (unsigned __int16)v3;
    }
    sub_73570(a1, v3, 146, v9);
    ++v7;
  }
  while ( v7 != v23 );
  free(v9);
  return 0;
}
