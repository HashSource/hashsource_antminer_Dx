_DWORD *__fastcall json_load_callback(int a1, int a2, int a3, int a4)
{
  _BYTE *v8; // r0
  _DWORD *v9; // r6
  int v10; // r3
  _DWORD *v12; // r0
  char arg[4]; // [sp+0h] [bp-45Ch] BYREF
  _DWORD *v14; // [sp+4h] [bp-458h]
  char v15; // [sp+8h] [bp-454h]
  int v16; // [sp+10h] [bp-44Ch]
  int v17; // [sp+14h] [bp-448h]
  int v18; // [sp+18h] [bp-444h]
  int v19; // [sp+1Ch] [bp-440h]
  int v20; // [sp+24h] [bp-438h]
  void *ptr; // [sp+28h] [bp-434h]
  int v22; // [sp+2Ch] [bp-430h]
  int v23; // [sp+30h] [bp-42Ch]
  int v24; // [sp+34h] [bp-428h]
  int v25; // [sp+38h] [bp-424h]
  int v26; // [sp+3Ch] [bp-420h]
  void *v27; // [sp+40h] [bp-41Ch]
  int v28; // [sp+44h] [bp-418h]
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
    v9 = 0;
    sub_D1AD8(a4, 0, 4, "wrong arguments");
    return v9;
  }
  *(_DWORD *)arg = callback_get;
  v14 = s;
  v18 = 1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 16;
  v8 = off_12A258(0x10u);
  ptr = v8;
  if ( !v8 )
    return 0;
  *v8 = 0;
  v24 = a3;
  v25 = 0;
  v26 = -1;
  sub_2236C((int)arg, a4);
  v9 = (_DWORD *)(a3 & 4);
  if ( (a3 & 4) != 0 || (v26 & 0xFFFFFFDF) == 0x5B )
  {
    v9 = sub_22E08((int)arg, a3, a4);
    if ( !v9 )
    {
LABEL_20:
      v10 = v26;
      goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v10 = v26;
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v20;
      goto LABEL_11;
    }
    sub_2236C((int)arg, a4);
    if ( !v26 )
    {
      if ( a4 )
        *(_DWORD *)(a4 + 8) = v20;
      goto LABEL_12;
    }
    sub_21104(a4, (int)arg, 7, "end of file expected");
    if ( v9[1] == -1 )
    {
      v9 = 0;
      goto LABEL_20;
    }
    v12 = v9;
    v9 = 0;
    sub_A8E50(v12);
    v10 = v26;
  }
  else
  {
    sub_21104(a4, (int)arg, 8, "'[' or '{' expected");
    v10 = v26;
  }
LABEL_11:
  if ( v10 == 256 )
  {
    if ( v27 )
      off_12A254(v27);
    v27 = 0;
    v28 = 0;
  }
LABEL_12:
  if ( ptr )
    off_12A254(ptr);
  return v9;
}
