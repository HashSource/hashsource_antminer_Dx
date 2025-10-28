_DWORD *__fastcall sub_C479C(int a1, int a2, int a3)
{
  _BYTE *v4; // r0
  _DWORD *v5; // r4
  void *v6; // r0
  char arg[4]; // [sp+0h] [bp-50h] BYREF
  int v9; // [sp+4h] [bp-4Ch]
  _DWORD v10[2]; // [sp+8h] [bp-48h] BYREF
  char v11; // [sp+10h] [bp-40h]
  int v12; // [sp+18h] [bp-38h]
  int v13; // [sp+1Ch] [bp-34h]
  int v14; // [sp+20h] [bp-30h]
  int v15; // [sp+24h] [bp-2Ch]
  int v16; // [sp+2Ch] [bp-24h]
  void *ptr; // [sp+30h] [bp-20h]
  int v18; // [sp+34h] [bp-1Ch]
  int v19; // [sp+38h] [bp-18h]
  int v20; // [sp+3Ch] [bp-14h]
  int v21; // [sp+40h] [bp-10h]
  int v22; // [sp+44h] [bp-Ch]
  void *v23; // [sp+48h] [bp-8h]
  int v24; // [sp+4Ch] [bp-4h]

  if ( a3 )
  {
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    strcpy((char *)(a3 + 12), "<string>");
    *(_DWORD *)(a3 + 4) = -1;
  }
  if ( !a1 )
  {
    v5 = 0;
    sub_BF814(a3, 0, 4, "wrong arguments");
    return v5;
  }
  v10[0] = sub_12C8E8;
  *(_DWORD *)arg = a1;
  v9 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v10[1] = arg;
  v14 = 1;
  v19 = 16;
  v4 = off_1A25E8(0x10u);
  ptr = v4;
  if ( !v4 )
    return 0;
  *v4 = 0;
  v22 = -1;
  v20 = 0;
  v21 = 0;
  sub_12FF30((int)v10, a3);
  if ( (v22 & 0xFFFFFFDF) == 0x5B )
  {
    v5 = sub_130F08((int)v10, 0, a3);
    if ( v5 )
    {
      sub_12FF30((int)v10, a3);
      if ( !v22 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v16;
        goto LABEL_10;
      }
      sub_12DF38(a3, v10, 7, "end of file expected");
      if ( v5[1] != -1 )
        sub_84ED0(v5);
    }
  }
  else
  {
    sub_12DF38(a3, v10, 8, "'[' or '{' expected");
  }
  if ( v22 == 256 )
  {
    if ( v23 )
      off_1A25EC(v23);
    v6 = ptr;
    v23 = 0;
    v5 = 0;
    v24 = 0;
    if ( ptr )
      goto LABEL_11;
    return v5;
  }
  v5 = 0;
LABEL_10:
  v6 = ptr;
  if ( ptr )
LABEL_11:
    off_1A25EC(v6);
  return v5;
}
