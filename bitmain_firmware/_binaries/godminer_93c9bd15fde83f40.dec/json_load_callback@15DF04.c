_DWORD *__fastcall json_load_callback(_DWORD *a1, int a2, int a3, int a4)
{
  _BYTE *v8; // r0
  int v9; // r3
  const char *v11; // r3
  _DWORD *v12; // r0
  const char *v13; // r3
  const char *v14; // r3
  char arg[4]; // [sp+0h] [bp-45Ch] BYREF
  _DWORD *v16; // [sp+4h] [bp-458h]
  char v17; // [sp+8h] [bp-454h]
  int v18; // [sp+10h] [bp-44Ch]
  int v19; // [sp+14h] [bp-448h]
  int v20; // [sp+18h] [bp-444h]
  int v21; // [sp+1Ch] [bp-440h]
  int v22; // [sp+24h] [bp-438h]
  void *ptr; // [sp+28h] [bp-434h]
  int v24; // [sp+2Ch] [bp-430h]
  int v25; // [sp+30h] [bp-42Ch]
  int v26; // [sp+34h] [bp-428h]
  int v27; // [sp+38h] [bp-424h]
  int v28; // [sp+3Ch] [bp-420h]
  void *v29; // [sp+40h] [bp-41Ch]
  int v30; // [sp+44h] [bp-418h]
  _DWORD s[261]; // [sp+48h] [bp-414h] BYREF

  memset(s, 0, 0x410u);
  s[259] = a2;
  s[258] = a1;
  if ( a4 )
  {
    *(_BYTE *)(a4 + 92) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)a4 = -1;
    strcpy((char *)(a4 + 12), "<callback>");
    *(_DWORD *)(a4 + 4) = -1;
  }
  if ( !a1 )
  {
    LOWORD(v13) = -14060;
    HIWORD(v13) = (unsigned int)"nce_eth, diff:%d" >> 16;
    sub_BF814(a4, 0, 4, v13);
    return a1;
  }
  v16 = s;
  *(_DWORD *)arg = 1424468;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v20 = 1;
  v25 = 16;
  v8 = (_BYTE *)off_1A25E8(16);
  ptr = v8;
  if ( !v8 )
    return 0;
  *v8 = 0;
  v27 = 0;
  v26 = a3;
  v28 = -1;
  sub_12FF30((int)arg, a4);
  a1 = (_DWORD *)(a3 & 4);
  if ( (a3 & 4) != 0 || (v28 & 0xFFFFFFDF) == 0x5B )
  {
    a1 = sub_130F08((int)arg, a3, a4);
    if ( !a1 )
    {
LABEL_21:
      v9 = v28;
      goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v9 = v28;
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v22;
      goto LABEL_11;
    }
    sub_12FF30((int)arg, a4);
    if ( !v28 )
    {
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v22;
      goto LABEL_12;
    }
    LOWORD(v11) = -14024;
    HIWORD(v11) = (unsigned int)"ICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a4, arg, 7, v11);
    if ( a1[1] == -1 )
    {
      a1 = 0;
      goto LABEL_21;
    }
    v12 = a1;
    a1 = 0;
    sub_84ED0(v12);
    v9 = v28;
  }
  else
  {
    LOWORD(v14) = -14044;
    HIWORD(v14) = (unsigned int)"iff %d ans diff %d TICKET_MASK_ETH %d" >> 16;
    sub_12DF38(a4, arg, 8, v14);
    v9 = v28;
  }
LABEL_11:
  if ( v9 == 256 )
  {
    if ( v29 )
      off_1A25EC(v29);
    v29 = 0;
    v30 = 0;
  }
LABEL_12:
  if ( ptr )
    off_1A25EC(ptr);
  return a1;
}
