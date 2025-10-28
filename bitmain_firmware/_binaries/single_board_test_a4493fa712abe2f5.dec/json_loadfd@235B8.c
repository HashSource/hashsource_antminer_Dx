_DWORD *__fastcall json_loadfd(int a1, int a2, int a3)
{
  _BYTE *v6; // r0
  _DWORD *v7; // r4
  int v8; // r3
  const char *v10; // r7
  size_t v11; // r0
  _DWORD *v12; // r0
  int v13; // [sp+4h] [bp-50h] BYREF
  _DWORD v14[2]; // [sp+8h] [bp-4Ch] BYREF
  char v15; // [sp+10h] [bp-44h]
  int v16; // [sp+18h] [bp-3Ch]
  int v17; // [sp+1Ch] [bp-38h]
  int v18; // [sp+20h] [bp-34h]
  int v19; // [sp+24h] [bp-30h]
  int v20; // [sp+2Ch] [bp-28h]
  void *ptr; // [sp+30h] [bp-24h]
  int v22; // [sp+34h] [bp-20h]
  int v23; // [sp+38h] [bp-1Ch]
  int v24; // [sp+3Ch] [bp-18h]
  int v25; // [sp+40h] [bp-14h]
  int v26; // [sp+44h] [bp-10h]
  void *v27; // [sp+48h] [bp-Ch]
  int v28; // [sp+4Ch] [bp-8h]

  v13 = a1;
  if ( !a1 )
  {
    if ( !a3 )
      goto LABEL_3;
    v10 = "<stdin>";
LABEL_21:
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 4) = -1;
    v11 = strlen(v10);
    strncpy((char *)(a3 + 12), v10, v11 + 1);
    if ( a1 < 0 )
      goto LABEL_16;
    goto LABEL_3;
  }
  if ( a3 )
  {
    v10 = "<stream>";
    goto LABEL_21;
  }
  if ( a1 < 0 )
  {
LABEL_16:
    v7 = 0;
    sub_D1AD8(a3, 0, 4, "wrong arguments");
    return v7;
  }
LABEL_3:
  v14[0] = sub_200FC;
  v14[1] = &v13;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v18 = 1;
  v23 = 16;
  v6 = off_12A258(0x10u);
  ptr = v6;
  if ( !v6 )
    return 0;
  *v6 = 0;
  v25 = 0;
  v26 = -1;
  v24 = a2;
  sub_2236C((int)v14, a3);
  v7 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v26 & 0xFFFFFFDF) == 0x5B )
  {
    v7 = sub_22E08((int)v14, a2, a3);
    if ( !v7 )
    {
LABEL_26:
      v8 = v26;
      goto LABEL_10;
    }
    if ( (a2 & 2) != 0 )
    {
      v8 = v26;
      if ( a3 )
        *(_DWORD *)(a3 + 8) = v20;
      goto LABEL_10;
    }
    sub_2236C((int)v14, a3);
    if ( !v26 )
    {
      if ( a3 )
        *(_DWORD *)(a3 + 8) = v20;
      goto LABEL_11;
    }
    sub_21104(a3, (int)v14, 7, "end of file expected");
    if ( v7[1] == -1 )
    {
      v7 = 0;
      goto LABEL_26;
    }
    v12 = v7;
    v7 = 0;
    sub_A8E50(v12);
    v8 = v26;
  }
  else
  {
    sub_21104(a3, (int)v14, 8, "'[' or '{' expected");
    v8 = v26;
  }
LABEL_10:
  if ( v8 == 256 )
  {
    if ( v27 )
      off_12A254(v27);
    v27 = 0;
    v28 = 0;
  }
LABEL_11:
  if ( ptr )
    off_12A254(ptr);
  return v7;
}
