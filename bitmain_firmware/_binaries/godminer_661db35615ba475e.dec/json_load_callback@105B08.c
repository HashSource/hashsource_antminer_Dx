_DWORD *__fastcall json_load_callback(_DWORD *a1, int a2, int a3, int a4)
{
  _BYTE *v8; // r0
  int v9; // r3
  _DWORD *v11; // r0
  char arg[4]; // [sp+0h] [bp-45Ch] BYREF
  _DWORD *v13; // [sp+4h] [bp-458h]
  char v14; // [sp+8h] [bp-454h]
  int v15; // [sp+10h] [bp-44Ch]
  int v16; // [sp+14h] [bp-448h]
  int v17; // [sp+18h] [bp-444h]
  int v18; // [sp+1Ch] [bp-440h]
  int v19; // [sp+24h] [bp-438h]
  void *ptr; // [sp+28h] [bp-434h]
  int v21; // [sp+2Ch] [bp-430h]
  int v22; // [sp+30h] [bp-42Ch]
  int v23; // [sp+34h] [bp-428h]
  int v24; // [sp+38h] [bp-424h]
  int v25; // [sp+3Ch] [bp-420h]
  void *v26; // [sp+40h] [bp-41Ch]
  int v27; // [sp+44h] [bp-418h]
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
    sub_1022F4(a4, 0, 4, "wrong arguments");
    return a1;
  }
  v13 = s;
  *(_DWORD *)arg = sub_1007D8;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v17 = 1;
  v22 = 16;
  v8 = off_190780(0x10u);
  ptr = v8;
  if ( !v8 )
    return 0;
  *v8 = 0;
  v24 = 0;
  v23 = a3;
  v25 = -1;
  sub_1041EC((int)arg, a4);
  a1 = (_DWORD *)(a3 & 4);
  if ( (a3 & 4) != 0 || (v25 & 0xFFFFFFDF) == 0x5B )
  {
    a1 = sub_1052A4((int)arg, a3, a4);
    if ( !a1 )
    {
LABEL_21:
      v9 = v25;
      goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v9 = v25;
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v19;
      goto LABEL_11;
    }
    sub_1041EC((int)arg, a4);
    if ( !v25 )
    {
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v19;
      goto LABEL_12;
    }
    sub_1022F4(a4, arg, 7, "end of file expected");
    if ( a1[1] == -1 )
    {
      a1 = 0;
      goto LABEL_21;
    }
    v11 = a1;
    a1 = 0;
    sub_F8BC0(v11);
    v9 = v25;
  }
  else
  {
    sub_1022F4(a4, arg, 8, "'[' or '{' expected");
    v9 = v25;
  }
LABEL_11:
  if ( v9 == 256 )
  {
    if ( v26 )
      off_190550(v26);
    v26 = 0;
    v27 = 0;
  }
LABEL_12:
  if ( ptr )
    off_190550(ptr);
  return a1;
}
