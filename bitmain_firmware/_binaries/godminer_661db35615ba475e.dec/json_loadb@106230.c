_DWORD *__fastcall json_loadb(int a1, int a2, int a3, int a4)
{
  _BYTE *v6; // r0
  _DWORD *v7; // r4
  int v8; // r3
  _DWORD *v10; // r0
  _DWORD v11[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v12[2]; // [sp+10h] [bp-48h] BYREF
  char v13; // [sp+18h] [bp-40h]
  int v14; // [sp+20h] [bp-38h]
  int v15; // [sp+24h] [bp-34h]
  int v16; // [sp+28h] [bp-30h]
  int v17; // [sp+2Ch] [bp-2Ch]
  int v18; // [sp+34h] [bp-24h]
  void *ptr; // [sp+38h] [bp-20h]
  int v20; // [sp+3Ch] [bp-1Ch]
  int v21; // [sp+40h] [bp-18h]
  int v22; // [sp+44h] [bp-14h]
  int v23; // [sp+48h] [bp-10h]
  int v24; // [sp+4Ch] [bp-Ch]
  void *v25; // [sp+50h] [bp-8h]
  int v26; // [sp+54h] [bp-4h]

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
    v7 = 0;
    sub_1022F4(a4, 0, 4, "wrong arguments");
    return v7;
  }
  v12[0] = sub_100834;
  v12[1] = v11;
  v11[0] = a1;
  v11[1] = a2;
  v11[2] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v16 = 1;
  v21 = 16;
  v6 = off_190780(0x10u);
  ptr = v6;
  if ( !v6 )
    return 0;
  *v6 = 0;
  v23 = 0;
  v22 = a3;
  v24 = -1;
  sub_1041EC((int)v12, a4);
  v7 = (_DWORD *)(a3 & 4);
  if ( (a3 & 4) != 0 || (v24 & 0xFFFFFFDF) == 0x5B )
  {
    v7 = sub_1052A4((int)v12, a3, a4);
    if ( !v7 )
    {
LABEL_21:
      v8 = v24;
      goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v8 = v24;
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v18;
      goto LABEL_11;
    }
    sub_1041EC((int)v12, a4);
    if ( !v24 )
    {
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v18;
      goto LABEL_12;
    }
    sub_1022F4(a4, v12, 7, "end of file expected");
    if ( v7[1] == -1 )
    {
      v7 = 0;
      goto LABEL_21;
    }
    v10 = v7;
    v7 = 0;
    sub_F8BC0(v10);
    v8 = v24;
  }
  else
  {
    sub_1022F4(a4, v12, 8, "'[' or '{' expected");
    v8 = v24;
  }
LABEL_11:
  if ( v8 == 256 )
  {
    if ( v25 )
      off_190550(v25);
    v25 = 0;
    v26 = 0;
  }
LABEL_12:
  if ( ptr )
    off_190550(ptr);
  return v7;
}
