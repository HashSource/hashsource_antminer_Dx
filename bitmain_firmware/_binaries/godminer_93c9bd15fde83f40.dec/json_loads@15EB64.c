_DWORD *__fastcall json_loads(int arg, int a2, int a3)
{
  int *v6; // r3
  int v7; // r0
  int v8; // r1
  char v9; // lr
  _BYTE *v10; // r0
  _DWORD *v11; // r4
  int v12; // r3
  const char *v14; // r3
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  _DWORD *v18; // r0
  const char *v19; // r3
  const char *v20; // r3
  char arga[4]; // [sp+0h] [bp-50h] BYREF
  int v22; // [sp+4h] [bp-4Ch]
  _DWORD v23[2]; // [sp+8h] [bp-48h] BYREF
  char v24; // [sp+10h] [bp-40h]
  int v25; // [sp+18h] [bp-38h]
  int v26; // [sp+1Ch] [bp-34h]
  int v27; // [sp+20h] [bp-30h]
  int v28; // [sp+24h] [bp-2Ch]
  int v29; // [sp+2Ch] [bp-24h]
  void *ptr; // [sp+30h] [bp-20h]
  int v31; // [sp+34h] [bp-1Ch]
  int v32; // [sp+38h] [bp-18h]
  int v33; // [sp+3Ch] [bp-14h]
  int v34; // [sp+40h] [bp-10h]
  int v35; // [sp+44h] [bp-Ch]
  void *v36; // [sp+48h] [bp-8h]
  int v37; // [sp+4Ch] [bp-4h]

  if ( a3 )
  {
    LOWORD(v6) = -14072;
    HIWORD(v6) = (unsigned int)"%s core_id %02x" >> 16;
    *(_BYTE *)(a3 + 92) = 0;
    v7 = *v6;
    v8 = v6[1];
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    v9 = *((_BYTE *)v6 + 8);
    *(_DWORD *)(a3 + 12) = v7;
    *(_DWORD *)(a3 + 4) = -1;
    *(_BYTE *)(a3 + 20) = v9;
    *(_DWORD *)(a3 + 16) = v8;
  }
  if ( !arg )
  {
    LOWORD(v19) = -14060;
    HIWORD(v19) = (unsigned int)"nce_eth, diff:%d" >> 16;
    v11 = 0;
    sub_BF814(a3, 0, 4, v19);
    return v11;
  }
  v23[0] = 1231080;
  *(_DWORD *)arga = arg;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v23[1] = arga;
  v27 = 1;
  v32 = 16;
  v10 = (_BYTE *)off_1A25E8(16);
  ptr = v10;
  if ( !v10 )
    return 0;
  *v10 = 0;
  v34 = 0;
  v33 = a2;
  v35 = -1;
  sub_12FF30((int)v23, a3);
  v11 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v35 & 0xFFFFFFDF) == 0x5B )
  {
    v11 = sub_130F08((int)v23, a2, a3);
    if ( v11 )
    {
      if ( (a2 & 2) != 0 )
      {
        v12 = v35;
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v29;
        goto LABEL_11;
      }
      sub_12FF30((int)v23, a3);
      if ( !v35 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v29;
        goto LABEL_12;
      }
      LOWORD(v14) = -14024;
      HIWORD(v14) = (unsigned int)"ICKET_MASK_ETH %d" >> 16;
      sub_12DF38(a3, v23, 7, v14);
      if ( v11[1] == -1 )
        goto LABEL_20;
      v15 = v11 + 1;
      __dmb(0xBu);
      do
      {
        v16 = __ldrex(v15);
        v17 = v16 - 1;
      }
      while ( __strex(v17, v15) );
      if ( v17 )
      {
LABEL_20:
        v11 = 0;
        v12 = v35;
        goto LABEL_11;
      }
      v18 = v11;
      v11 = 0;
      json_delete(v18);
    }
    v12 = v35;
  }
  else
  {
    LOWORD(v20) = -14044;
    HIWORD(v20) = (unsigned int)"iff %d ans diff %d TICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a3, v23, 8, v20);
    v12 = v35;
  }
LABEL_11:
  if ( v12 == 256 )
  {
    if ( v36 )
      off_1A25EC(v36);
    v36 = 0;
    v37 = 0;
  }
LABEL_12:
  if ( ptr )
    off_1A25EC(ptr);
  return v11;
}
