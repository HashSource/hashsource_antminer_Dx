_DWORD *__fastcall json_loadfd(int a1, int a2, int a3)
{
  _BYTE *v6; // r0
  _DWORD *v7; // r4
  int v8; // r3
  const char *v10; // r3
  const char *v11; // r7
  size_t v12; // r0
  const char *v13; // r3
  _DWORD *v14; // r0
  const char *v15; // r3
  int v16; // [sp+4h] [bp-50h] BYREF
  _DWORD v17[2]; // [sp+8h] [bp-4Ch] BYREF
  char v18; // [sp+10h] [bp-44h]
  int v19; // [sp+18h] [bp-3Ch]
  int v20; // [sp+1Ch] [bp-38h]
  int v21; // [sp+20h] [bp-34h]
  int v22; // [sp+24h] [bp-30h]
  int v23; // [sp+2Ch] [bp-28h]
  void *ptr; // [sp+30h] [bp-24h]
  int v25; // [sp+34h] [bp-20h]
  int v26; // [sp+38h] [bp-1Ch]
  int v27; // [sp+3Ch] [bp-18h]
  int v28; // [sp+40h] [bp-14h]
  int v29; // [sp+44h] [bp-10h]
  void *v30; // [sp+48h] [bp-Ch]
  int v31; // [sp+4Ch] [bp-8h]

  v16 = a1;
  if ( !a1 )
  {
    if ( !a3 )
      goto LABEL_3;
    v11 = "<stdin>";
LABEL_22:
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 4) = -1;
    v12 = strlen(v11);
    strncpy((char *)(a3 + 12), v11, v12 + 1);
    if ( a1 < 0 )
      goto LABEL_16;
    goto LABEL_3;
  }
  if ( a3 )
  {
    v11 = "<stream>";
    goto LABEL_22;
  }
  if ( a1 < 0 )
  {
LABEL_16:
    LOWORD(v10) = -14060;
    HIWORD(v10) = (unsigned int)"nce_eth, diff:%d" >> 16;
    v7 = 0;
    sub_BF814(a3, 0, 4, v10);
    return v7;
  }
LABEL_3:
  v17[0] = 1424836;
  v17[1] = &v16;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0;
  v21 = 1;
  v26 = 16;
  v6 = (_BYTE *)off_1A25E8(16);
  ptr = v6;
  if ( !v6 )
    return 0;
  *v6 = 0;
  v28 = 0;
  v27 = a2;
  v29 = -1;
  sub_12FF30((int)v17, a3);
  v7 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v29 & 0xFFFFFFDF) == 0x5B )
  {
    v7 = sub_130F08((int)v17, a2, a3);
    if ( !v7 )
    {
LABEL_27:
      v8 = v29;
      goto LABEL_10;
    }
    if ( (a2 & 2) != 0 )
    {
      v8 = v29;
      if ( a3 )
        *(_DWORD *)(a3 + 8) = v23;
      goto LABEL_10;
    }
    sub_12FF30((int)v17, a3);
    if ( !v29 )
    {
      if ( a3 )
        *(_DWORD *)(a3 + 8) = v23;
      goto LABEL_11;
    }
    LOWORD(v13) = -14024;
    HIWORD(v13) = (unsigned int)"ICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a3, v17, 7, v13);
    if ( v7[1] == -1 )
    {
      v7 = 0;
      goto LABEL_27;
    }
    v14 = v7;
    v7 = 0;
    sub_84ED0(v14);
    v8 = v29;
  }
  else
  {
    LOWORD(v15) = -14044;
    HIWORD(v15) = (unsigned int)"iff %d ans diff %d TICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a3, v17, 8, v15);
    v8 = v29;
  }
LABEL_10:
  if ( v8 == 256 )
  {
    if ( v30 )
      off_1A25EC(v30);
    v30 = 0;
    v31 = 0;
  }
LABEL_11:
  if ( ptr )
    off_1A25EC(ptr);
  return v7;
}
