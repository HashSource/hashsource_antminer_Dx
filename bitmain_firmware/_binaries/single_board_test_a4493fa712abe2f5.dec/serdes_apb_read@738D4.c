int __fastcall serdes_apb_read(_DWORD *a1, int a2, _BYTE *a3, unsigned int a4)
{
  int v5; // r4
  int v6; // r7
  void (__fastcall *v7)(_DWORD *, _DWORD *); // r3
  int v8; // r10
  int v9; // r0
  int v10; // r1
  int v11; // r2
  __int16 v12; // r3
  _BYTE *v13; // r3
  int v14; // r0
  _DWORD *v15; // r4
  int v16; // r5
  int v17; // r12
  int v18; // r1
  char *ptr; // [sp+1Ch] [bp-1030h]
  int v24; // [sp+34h] [bp-1018h]
  _BYTE v25[16]; // [sp+38h] [bp-1014h] BYREF
  _DWORD v26[2]; // [sp+48h] [bp-1004h] BYREF
  int v27; // [sp+50h] [bp-FFCh]
  int v28; // [sp+54h] [bp-FF8h]

  v5 = 1;
  v6 = (int)a3;
  v27 = 0;
  v28 = 0;
  v26[1] = 0;
  v7 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[36];
  HIWORD(v27) = 145;
  v26[0] = a4;
  v8 = 0;
  LOBYTE(v27) = 1;
  LOBYTE(v28) = (_BYTE)a3;
  v7(a1, v26);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v9 = (int)malloc(0x600u);
  ptr = (char *)v9;
  if ( v6 == 255 )
  {
    v24 = 14;
    v9 = 100991489;
    v10 = 235735561;
    v11 = 134677248;
    v12 = 3851;
    v5 = (int)v25;
  }
  else
  {
    v24 = 1;
  }
  if ( v6 == 255 )
  {
    *(_DWORD *)v5 = v9;
    *(_DWORD *)(v5 + 4) = v10;
    *(_DWORD *)(v5 + 8) = v11;
    *(_WORD *)(v5 + 12) = v12;
  }
  do
  {
    v13 = a3;
    if ( a3 == (_BYTE *)255 )
      v13 = v25;
    else
      LOWORD(v6) = (_WORD)a3;
    if ( a3 == (_BYTE *)255 )
      LOWORD(v6) = (unsigned __int8)v13[v8];
    v6 = (unsigned __int16)v6;
    v14 = sub_73570(a1, (unsigned __int16)v6, 145, ptr);
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
        pthread_mutex_lock(&stru_3B526C);
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
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "serdes_apb_read",
          15,
          865,
          100,
          v26);
      }
      while ( v15 != (_DWORD *)v16 );
LABEL_16:
      v6 = (unsigned __int16)v6;
    }
    sub_73570(a1, v6, 146, ptr);
    ++v8;
  }
  while ( v24 != v8 );
  free(ptr);
  return 0;
}
