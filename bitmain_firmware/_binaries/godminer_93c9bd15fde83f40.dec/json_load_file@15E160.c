_DWORD *__fastcall json_load_file(const char *a1, int a2, int a3)
{
  const char *v6; // r3
  _DWORD *v7; // r5
  size_t v8; // r0
  int v9; // r0
  FILE *v10; // r7
  const char *v11; // r5
  _BYTE *v12; // r0
  int v13; // r3
  const char *v15; // r3
  size_t v16; // r0
  _DWORD *v17; // r0
  int *v18; // r0
  char *v19; // r0
  const char *v20; // r3
  _DWORD v21[2]; // [sp+8h] [bp-48h] BYREF
  char v22; // [sp+10h] [bp-40h]
  int v23; // [sp+18h] [bp-38h]
  int v24; // [sp+1Ch] [bp-34h]
  int v25; // [sp+20h] [bp-30h]
  int v26; // [sp+24h] [bp-2Ch]
  int v27; // [sp+2Ch] [bp-24h]
  void *ptr; // [sp+30h] [bp-20h]
  int v29; // [sp+34h] [bp-1Ch]
  int v30; // [sp+38h] [bp-18h]
  int v31; // [sp+3Ch] [bp-14h]
  int v32; // [sp+40h] [bp-10h]
  int v33; // [sp+44h] [bp-Ch]
  void *v34; // [sp+48h] [bp-8h]
  int v35; // [sp+4Ch] [bp-4h]

  if ( !a3 )
  {
    if ( !a1 )
      goto LABEL_5;
LABEL_9:
    v9 = fopen64(a1, "rb");
    v10 = (FILE *)v9;
    if ( !v9 )
    {
      v18 = _errno_location();
      v7 = 0;
      v19 = strerror(*v18);
      sub_BF814(a3, 0, 3, "unable to open %s: %s", a1, v19);
      return v7;
    }
    v11 = "<stdin>";
    if ( v9 != stdin )
      v11 = "<stream>";
    if ( a3 )
    {
      *(_BYTE *)(a3 + 92) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)a3 = -1;
      *(_DWORD *)(a3 + 4) = -1;
      v16 = strlen(v11);
      strncpy((char *)(a3 + 12), v11, v16 + 1);
    }
    v25 = 1;
    v21[1] = v10;
    v21[0] = 133808;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v29 = 0;
    v30 = 16;
    v12 = (_BYTE *)off_1A25E8(16);
    ptr = v12;
    if ( !v12 )
    {
      v7 = 0;
LABEL_24:
      fclose(v10);
      return v7;
    }
    *v12 = 0;
    v32 = 0;
    v31 = a2;
    v33 = -1;
    sub_12FF30((int)v21, a3);
    v7 = (_DWORD *)(a2 & 4);
    if ( (a2 & 4) != 0 || (v33 & 0xFFFFFFDF) == 0x5B )
    {
      v7 = sub_130F08((int)v21, a2, a3);
      if ( !v7 )
      {
LABEL_33:
        v13 = v33;
        goto LABEL_21;
      }
      if ( (a2 & 2) != 0 )
      {
        v13 = v33;
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v27;
        goto LABEL_21;
      }
      sub_12FF30((int)v21, a3);
      if ( !v33 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v27;
        goto LABEL_22;
      }
      LOWORD(v15) = -14024;
      HIWORD(v15) = (unsigned int)"ICKET_MASK_ETH %d" >> 16;
      sub_12DF38(a3, v21, 7, v15);
      if ( v7[1] == -1 )
      {
        v7 = 0;
        goto LABEL_33;
      }
      v17 = v7;
      v7 = 0;
      sub_84ED0(v17);
      v13 = v33;
    }
    else
    {
      LOWORD(v20) = -14044;
      HIWORD(v20) = (unsigned int)"iff %d ans diff %d TICKET_MASK_ETH %d" >> 16;
      sub_12DF38(a3, v21, 8, v20);
      v13 = v33;
    }
LABEL_21:
    if ( v13 == 256 )
    {
      if ( v34 )
        off_1A25EC(v34);
      v34 = 0;
      v35 = 0;
    }
LABEL_22:
    if ( ptr )
      off_1A25EC(ptr);
    goto LABEL_24;
  }
  *(_BYTE *)(a3 + 92) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)a3 = -1;
  *(_DWORD *)(a3 + 4) = -1;
  if ( a1 )
  {
    v8 = strlen(a1);
    if ( v8 <= 0x4F )
    {
      strncpy((char *)(a3 + 12), a1, v8 + 1);
    }
    else
    {
      *(_WORD *)(a3 + 12) = 11822;
      *(_BYTE *)(a3 + 14) = 46;
      strncpy((char *)(a3 + 15), &a1[v8 - 76], 0x4Du);
    }
    goto LABEL_9;
  }
  *(_BYTE *)(a3 + 12) = 0;
LABEL_5:
  LOWORD(v6) = -14060;
  HIWORD(v6) = (unsigned int)"nce_eth, diff:%d" >> 16;
  v7 = 0;
  sub_BF814(a3, 0, 4, v6);
  return v7;
}
