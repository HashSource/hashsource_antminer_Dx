_DWORD *__fastcall json_loads(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r6
  _BYTE *v6; // r0
  int v7; // r3
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  _DWORD *v12; // r0
  char arg[4]; // [sp+0h] [bp-54h] BYREF
  int v14; // [sp+4h] [bp-50h]
  _DWORD v15[2]; // [sp+8h] [bp-4Ch] BYREF
  char v16; // [sp+10h] [bp-44h]
  int v17; // [sp+18h] [bp-3Ch]
  int v18; // [sp+1Ch] [bp-38h]
  int v19; // [sp+20h] [bp-34h]
  int v20; // [sp+24h] [bp-30h]
  int v21; // [sp+2Ch] [bp-28h]
  void *ptr; // [sp+30h] [bp-24h]
  int v23; // [sp+34h] [bp-20h]
  int v24; // [sp+38h] [bp-1Ch]
  int v25; // [sp+3Ch] [bp-18h]
  int v26; // [sp+40h] [bp-14h]
  int v27; // [sp+44h] [bp-10h]
  void *v28; // [sp+48h] [bp-Ch]
  int v29; // [sp+4Ch] [bp-8h]

  v3 = a1;
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
    sub_D1AD8(a3, 0, 4, "wrong arguments");
    return v3;
  }
  v15[0] = sub_1FFAC;
  *(_DWORD *)arg = a1;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v15[1] = arg;
  v19 = 1;
  v24 = 16;
  v6 = off_12A258(0x10u);
  ptr = v6;
  if ( !v6 )
    return 0;
  *v6 = 0;
  v25 = a2;
  v26 = 0;
  v27 = -1;
  sub_2236C((int)v15, a3);
  v3 = (_DWORD *)(a2 & 4);
  if ( (a2 & 4) != 0 || (v27 & 0xFFFFFFDF) == 0x5B )
  {
    v3 = sub_22E08((int)v15, a2, a3);
    if ( v3 )
    {
      if ( (a2 & 2) != 0 )
      {
        v7 = v27;
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v21;
        goto LABEL_11;
      }
      sub_2236C((int)v15, a3);
      if ( !v27 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v21;
        goto LABEL_12;
      }
      sub_21104(a3, (int)v15, 7, "end of file expected");
      if ( v3[1] == -1 )
        goto LABEL_19;
      v9 = v3 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( v11 )
      {
LABEL_19:
        v3 = 0;
        v7 = v27;
        goto LABEL_11;
      }
      v12 = v3;
      v3 = 0;
      json_delete(v12);
    }
    v7 = v27;
  }
  else
  {
    sub_21104(a3, (int)v15, 8, "'[' or '{' expected");
    v7 = v27;
  }
LABEL_11:
  if ( v7 == 256 )
  {
    if ( v28 )
      off_12A254(v28);
    v28 = 0;
    v29 = 0;
  }
LABEL_12:
  if ( ptr )
    off_12A254(ptr);
  return v3;
}
