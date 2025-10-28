_DWORD *__fastcall json_loadf(int a1, int a2, int a3)
{
  const char *v3; // r4
  _BYTE *v7; // r0
  _DWORD *v8; // r4
  int v9; // r3
  size_t v11; // r0
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v15; // r0
  char arg[4]; // [sp+0h] [bp-4Ch] BYREF
  int v17; // [sp+4h] [bp-48h]
  char v18; // [sp+8h] [bp-44h]
  int v19; // [sp+10h] [bp-3Ch]
  int v20; // [sp+14h] [bp-38h]
  int v21; // [sp+18h] [bp-34h]
  int v22; // [sp+1Ch] [bp-30h]
  int v23; // [sp+24h] [bp-28h]
  void *ptr; // [sp+28h] [bp-24h]
  int v25; // [sp+2Ch] [bp-20h]
  int v26; // [sp+30h] [bp-1Ch]
  int v27; // [sp+34h] [bp-18h]
  int v28; // [sp+38h] [bp-14h]
  int v29; // [sp+3Ch] [bp-10h]
  void *v30; // [sp+40h] [bp-Ch]
  int v31; // [sp+44h] [bp-8h]

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
    sub_1022F4(a3, 0, 4, "wrong arguments");
    return v8;
  }
  *(_DWORD *)arg = fgetc;
  v17 = a1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0;
  v21 = 1;
  v26 = 16;
  v7 = off_190780(0x10u);
  ptr = v7;
  if ( !v7 )
    return 0;
  *v7 = 0;
  v28 = 0;
  v27 = a2;
  v29 = -1;
  sub_1041EC((int)arg, a3);
  v8 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v29 & 0xFFFFFFDF) == 0x5B )
  {
    v8 = sub_1052A4((int)arg, a2, a3);
    if ( v8 )
    {
      if ( (a2 & 2) != 0 )
      {
        v9 = v29;
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v23;
        goto LABEL_13;
      }
      sub_1041EC((int)arg, a3);
      if ( !v29 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v23;
        goto LABEL_14;
      }
      sub_1022F4(a3, arg, 7, "end of file expected");
      if ( v8[1] == -1 )
        goto LABEL_22;
      v12 = v8 + 1;
      __dmb(0xBu);
      do
      {
        v13 = __ldrex(v12);
        v14 = v13 - 1;
      }
      while ( __strex(v14, v12) );
      if ( v14 )
      {
LABEL_22:
        v8 = 0;
        v9 = v29;
        goto LABEL_13;
      }
      v15 = v8;
      v8 = 0;
      json_delete(v15);
    }
    v9 = v29;
  }
  else
  {
    sub_1022F4(a3, arg, 8, "'[' or '{' expected");
    v9 = v29;
  }
LABEL_13:
  if ( v9 == 256 )
  {
    if ( v30 )
      off_190550(v30);
    v30 = 0;
    v31 = 0;
  }
LABEL_14:
  if ( ptr )
    off_190550(ptr);
  return v8;
}
