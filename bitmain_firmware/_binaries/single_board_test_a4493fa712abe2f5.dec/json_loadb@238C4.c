_DWORD *__fastcall json_loadb(int a1, int a2, int a3, int a4)
{
  _BYTE *v6; // r0
  _DWORD *v7; // r6
  int v8; // r3
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  _DWORD *v13; // r0
  _DWORD v14[3]; // [sp+4h] [bp-58h] BYREF
  _DWORD v15[2]; // [sp+10h] [bp-4Ch] BYREF
  char v16; // [sp+18h] [bp-44h]
  int v17; // [sp+20h] [bp-3Ch]
  int v18; // [sp+24h] [bp-38h]
  int v19; // [sp+28h] [bp-34h]
  int v20; // [sp+2Ch] [bp-30h]
  int v21; // [sp+34h] [bp-28h]
  void *ptr; // [sp+38h] [bp-24h]
  int v23; // [sp+3Ch] [bp-20h]
  int v24; // [sp+40h] [bp-1Ch]
  int v25; // [sp+44h] [bp-18h]
  int v26; // [sp+48h] [bp-14h]
  int v27; // [sp+4Ch] [bp-10h]
  void *v28; // [sp+50h] [bp-Ch]
  int v29; // [sp+54h] [bp-8h]

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
    sub_D1AD8(a4, 0, 4, "wrong arguments");
    return v7;
  }
  v14[0] = a1;
  v15[0] = sub_1FF90;
  v15[1] = v14;
  v14[1] = a2;
  v14[2] = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v19 = 1;
  v24 = 16;
  v6 = off_12A258(0x10u);
  ptr = v6;
  if ( !v6 )
    return 0;
  *v6 = 0;
  v25 = a3;
  v26 = 0;
  v27 = -1;
  sub_2236C((int)v15, a4);
  v7 = (_DWORD *)(a3 & 4);
  if ( (a3 & 4) != 0 || (v27 & 0xFFFFFFDF) == 0x5B )
  {
    v7 = sub_22E08((int)v15, a3, a4);
    if ( v7 )
    {
      if ( (a3 & 2) != 0 )
      {
        v8 = v27;
        if ( a4 )
          *(_DWORD *)(a4 + 8) = v21;
        goto LABEL_11;
      }
      sub_2236C((int)v15, a4);
      if ( !v27 )
      {
        if ( a4 )
          *(_DWORD *)(a4 + 8) = v21;
        goto LABEL_12;
      }
      sub_21104(a4, (int)v15, 7, "end of file expected");
      if ( v7[1] == -1 )
        goto LABEL_19;
      v10 = v7 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( v12 )
      {
LABEL_19:
        v7 = 0;
        v8 = v27;
        goto LABEL_11;
      }
      v13 = v7;
      v7 = 0;
      json_delete(v13);
    }
    v8 = v27;
  }
  else
  {
    sub_21104(a4, (int)v15, 8, "'[' or '{' expected");
    v8 = v27;
  }
LABEL_11:
  if ( v8 == 256 )
  {
    if ( v28 )
      off_12A254(v28);
    v28 = 0;
    v29 = 0;
  }
LABEL_12:
  if ( ptr )
    off_12A254(ptr);
  return v7;
}
