_DWORD *__fastcall json_loadb(int a1, int a2, int a3, int a4)
{
  _BYTE *v6; // r0
  _DWORD *v7; // r4
  int v8; // r3
  const char *v10; // r3
  _DWORD *v11; // r0
  const char *v12; // r3
  const char *v13; // r3
  _DWORD v14[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v15[2]; // [sp+10h] [bp-48h] BYREF
  char v16; // [sp+18h] [bp-40h]
  int v17; // [sp+20h] [bp-38h]
  int v18; // [sp+24h] [bp-34h]
  int v19; // [sp+28h] [bp-30h]
  int v20; // [sp+2Ch] [bp-2Ch]
  int v21; // [sp+34h] [bp-24h]
  void *ptr; // [sp+38h] [bp-20h]
  int v23; // [sp+3Ch] [bp-1Ch]
  int v24; // [sp+40h] [bp-18h]
  int v25; // [sp+44h] [bp-14h]
  int v26; // [sp+48h] [bp-10h]
  int v27; // [sp+4Ch] [bp-Ch]
  void *v28; // [sp+50h] [bp-8h]
  int v29; // [sp+54h] [bp-4h]

  if ( a4 )
  {
    *(_BYTE *)(a4 + 92) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)a4 = -1;
    strcpy((char *)(a4 + 12), "<buffer>");
    *(_DWORD *)(a4 + 4) = -1;
  }
  if ( !a1 )
  {
    LOWORD(v12) = -14060;
    HIWORD(v12) = (unsigned int)"nce_eth, diff:%d" >> 16;
    v7 = 0;
    sub_BF814(a4, 0, 4, v12);
    return v7;
  }
  v15[0] = 1424560;
  v15[1] = v14;
  v14[0] = a1;
  v14[1] = a2;
  v14[2] = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v19 = 1;
  v24 = 16;
  v6 = (_BYTE *)off_1A25E8(16);
  ptr = v6;
  if ( !v6 )
    return 0;
  *v6 = 0;
  v26 = 0;
  v25 = a3;
  v27 = -1;
  sub_12FF30((int)v15, a4);
  v7 = (_DWORD *)(a3 & 4);
  if ( (a3 & 4) != 0 || (v27 & 0xFFFFFFDF) == 0x5B )
  {
    v7 = sub_130F08((int)v15, a3, a4);
    if ( !v7 )
    {
LABEL_21:
      v8 = v27;
      goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v8 = v27;
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v21;
      goto LABEL_11;
    }
    sub_12FF30((int)v15, a4);
    if ( !v27 )
    {
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v21;
      goto LABEL_12;
    }
    LOWORD(v10) = -14024;
    HIWORD(v10) = (unsigned int)"ICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a4, v15, 7, v10);
    if ( v7[1] == -1 )
    {
      v7 = 0;
      goto LABEL_21;
    }
    v11 = v7;
    v7 = 0;
    sub_84ED0(v11);
    v8 = v27;
  }
  else
  {
    LOWORD(v13) = -14044;
    HIWORD(v13) = (unsigned int)"iff %d ans diff %d TICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a4, v15, 8, v13);
    v8 = v27;
  }
LABEL_11:
  if ( v8 == 256 )
  {
    if ( v28 )
      off_1A25EC(v28);
    v28 = 0;
    v29 = 0;
  }
LABEL_12:
  if ( ptr )
    off_1A25EC(ptr);
  return v7;
}
