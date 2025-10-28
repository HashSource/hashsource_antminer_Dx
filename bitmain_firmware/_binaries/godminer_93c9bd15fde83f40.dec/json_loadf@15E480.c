_DWORD *__fastcall json_loadf(int a1, int a2, int a3)
{
  const char *v3; // r4
  _BYTE *v7; // r0
  _DWORD *v8; // r4
  int v9; // r3
  size_t v11; // r0
  _DWORD *v12; // r0
  char arg[4]; // [sp+0h] [bp-4Ch] BYREF
  int v14; // [sp+4h] [bp-48h]
  char v15; // [sp+8h] [bp-44h]
  int v16; // [sp+10h] [bp-3Ch]
  int v17; // [sp+14h] [bp-38h]
  int v18; // [sp+18h] [bp-34h]
  int v19; // [sp+1Ch] [bp-30h]
  int v20; // [sp+24h] [bp-28h]
  void *ptr; // [sp+28h] [bp-24h]
  int v22; // [sp+2Ch] [bp-20h]
  int v23; // [sp+30h] [bp-1Ch]
  int v24; // [sp+34h] [bp-18h]
  int v25; // [sp+38h] [bp-14h]
  int v26; // [sp+3Ch] [bp-10h]
  void *v27; // [sp+40h] [bp-Ch]
  int v28; // [sp+44h] [bp-8h]

  v3 = "<stdin>";
  if ( stdin != a1 )
    v3 = "<stream>";
  if ( a3 )
  {
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 4) = -1;
    v11 = strlen(v3);
    strncpy((char *)(a3 + 12), v3, v11 + 1);
  }
  if ( !a1 )
  {
    v8 = 0;
    sub_BF814(a3, 0, 4, "wrong arguments");
    return v8;
  }
  *(_DWORD *)arg = fgetc;
  v14 = a1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v18 = 1;
  v23 = 16;
  v7 = off_1A25E8(0x10u);
  ptr = v7;
  if ( !v7 )
    return 0;
  *v7 = 0;
  v25 = 0;
  v24 = a2;
  v26 = -1;
  sub_12FF30((int)arg, a3);
  v8 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v26 & 0xFFFFFFDF) == 0x5B )
  {
    v8 = sub_130F08((int)arg, a2, a3);
    if ( !v8 )
    {
LABEL_23:
      v9 = v26;
      goto LABEL_13;
    }
    if ( (a2 & 2) != 0 )
    {
      v9 = v26;
      if ( a3 )
        *(_DWORD *)(a3 + 8) = v20;
      goto LABEL_13;
    }
    sub_12FF30((int)arg, a3);
    if ( !v26 )
    {
      if ( a3 )
        *(_DWORD *)(a3 + 8) = v20;
      goto LABEL_14;
    }
    sub_12DF38(a3, arg, 7, "end of file expected");
    if ( v8[1] == -1 )
    {
      v8 = 0;
      goto LABEL_23;
    }
    v12 = v8;
    v8 = 0;
    sub_84ED0(v12);
    v9 = v26;
  }
  else
  {
    sub_12DF38(a3, arg, 8, "'[' or '{' expected");
    v9 = v26;
  }
LABEL_13:
  if ( v9 == 256 )
  {
    if ( v27 )
      off_1A25EC(v27);
    v27 = 0;
    v28 = 0;
  }
LABEL_14:
  if ( ptr )
    off_1A25EC(ptr);
  return v8;
}
