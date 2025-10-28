_DWORD *__fastcall json_loads(int arg, int a2, int a3)
{
  _BYTE *v5; // r0
  _DWORD *v6; // r4
  int v7; // r3
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  _DWORD *v12; // r0
  char arga[4]; // [sp+0h] [bp-50h] BYREF
  int v14; // [sp+4h] [bp-4Ch]
  _DWORD v15[2]; // [sp+8h] [bp-48h] BYREF
  char v16; // [sp+10h] [bp-40h]
  int v17; // [sp+18h] [bp-38h]
  int v18; // [sp+1Ch] [bp-34h]
  int v19; // [sp+20h] [bp-30h]
  int v20; // [sp+24h] [bp-2Ch]
  int v21; // [sp+2Ch] [bp-24h]
  void *ptr; // [sp+30h] [bp-20h]
  int v23; // [sp+34h] [bp-1Ch]
  int v24; // [sp+38h] [bp-18h]
  int v25; // [sp+3Ch] [bp-14h]
  int v26; // [sp+40h] [bp-10h]
  int v27; // [sp+44h] [bp-Ch]
  void *v28; // [sp+48h] [bp-8h]
  int v29; // [sp+4Ch] [bp-4h]

  if ( a3 )
  {
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    strcpy((char *)(a3 + 12), "<string>");
    *(_DWORD *)(a3 + 4) = -1;
  }
  if ( !arg )
  {
    v6 = 0;
    sub_1022F4(a3, 0, 4, "wrong arguments");
    return v6;
  }
  v15[0] = sub_100858;
  *(_DWORD *)arga = arg;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v15[1] = arga;
  v19 = 1;
  v24 = 16;
  v5 = off_190780(0x10u);
  ptr = v5;
  if ( !v5 )
    return 0;
  *v5 = 0;
  v26 = 0;
  v25 = a2;
  v27 = -1;
  sub_1041EC((int)v15, a3);
  v6 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v27 & 0xFFFFFFDF) == 0x5B )
  {
    v6 = sub_1052A4((int)v15, a2, a3);
    if ( v6 )
    {
      if ( (a2 & 2) != 0 )
      {
        v7 = v27;
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v21;
        goto LABEL_11;
      }
      sub_1041EC((int)v15, a3);
      if ( !v27 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v21;
        goto LABEL_12;
      }
      sub_1022F4(a3, v15, 7, "end of file expected");
      if ( v6[1] == -1 )
        goto LABEL_20;
      v9 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( v11 )
      {
LABEL_20:
        v6 = 0;
        v7 = v27;
        goto LABEL_11;
      }
      v12 = v6;
      v6 = 0;
      json_delete(v12);
    }
    v7 = v27;
  }
  else
  {
    sub_1022F4(a3, v15, 8, "'[' or '{' expected");
    v7 = v27;
  }
LABEL_11:
  if ( v7 == 256 )
  {
    if ( v28 )
      off_190550(v28);
    v28 = 0;
    v29 = 0;
  }
LABEL_12:
  if ( ptr )
    off_190550(ptr);
  return v6;
}
