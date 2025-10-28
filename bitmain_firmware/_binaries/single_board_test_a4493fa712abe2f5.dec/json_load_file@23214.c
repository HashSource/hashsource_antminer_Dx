_DWORD *__fastcall json_load_file(const char *a1, int a2, int a3)
{
  size_t v7; // r0
  FILE *v8; // r0
  FILE *v9; // r7
  const char *v10; // r5
  _BYTE *v11; // r0
  _DWORD *v12; // r5
  int v13; // r3
  size_t v14; // r0
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  _DWORD *v18; // r0
  int *v19; // r0
  char *v20; // r0
  _DWORD v21[2]; // [sp+8h] [bp-48h] BYREF
  char v22; // [sp+10h] [bp-40h]
  int v23; // [sp+18h] [bp-38h]
  int v24; // [sp+1Ch] [bp-34h]
  int v25; // [sp+20h] [bp-30h]
  int v26; // [sp+24h] [bp-2Ch]
  int v27; // [sp+2Ch] [bp-24h]
  void *ptr; // [sp+30h] [bp-20h]
  int v29; // [sp+34h] [bp-1Ch]
  int v30; // [sp+38h] [bp-18h]
  int v31; // [sp+3Ch] [bp-14h]
  int v32; // [sp+40h] [bp-10h]
  int v33; // [sp+44h] [bp-Ch]
  void *v34; // [sp+48h] [bp-8h]
  int v35; // [sp+4Ch] [bp-4h]

  if ( a3 )
  {
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 4) = -1;
    if ( !a1 )
    {
      *(_BYTE *)(a3 + 12) = 0;
LABEL_4:
      sub_D1AD8(a3, 0, 4, "wrong arguments");
      return 0;
    }
    v7 = strlen(a1);
    if ( v7 <= 0x4F )
    {
      strncpy((char *)(a3 + 12), a1, v7 + 1);
    }
    else
    {
      *(_WORD *)(a3 + 12) = 11822;
      *(_BYTE *)(a3 + 14) = 46;
      strncpy((char *)(a3 + 15), &a1[v7 - 76], 0x4Du);
    }
  }
  else if ( !a1 )
  {
    goto LABEL_4;
  }
  v8 = fopen(a1, "rb");
  v9 = v8;
  if ( !v8 )
  {
    v19 = _errno_location();
    v20 = strerror(*v19);
    sub_D1AD8(a3, 0, 3, "unable to open %s: %s", a1, v20);
    return 0;
  }
  v10 = "<stdin>";
  if ( v8 != (FILE *)stdin )
    v10 = "<stream>";
  if ( a3 )
  {
    *(_BYTE *)(a3 + 92) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 4) = -1;
    v14 = strlen(v10);
    strncpy((char *)(a3 + 12), v10, v14 + 1);
  }
  v25 = 1;
  v21[1] = v9;
  v21[0] = fgetc;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 16;
  v11 = off_12A258(0x10u);
  ptr = v11;
  if ( v11 )
  {
    *v11 = 0;
    v32 = 0;
    v33 = -1;
    v31 = a2;
    sub_2236C((int)v21, a3);
    v12 = (_DWORD *)(a2 & 4);
    if ( (a2 & 4) != 0 || (v33 & 0xFFFFFFDF) == 0x5B )
    {
      v12 = sub_22E08((int)v21, a2, a3);
      if ( v12 )
      {
        if ( (a2 & 2) != 0 )
        {
          v13 = v33;
          if ( a3 )
            *(_DWORD *)(a3 + 8) = v27;
          goto LABEL_21;
        }
        sub_2236C((int)v21, a3);
        if ( !v33 )
        {
          if ( a3 )
            *(_DWORD *)(a3 + 8) = v27;
          goto LABEL_22;
        }
        sub_21104(a3, (int)v21, 7, "end of file expected");
        if ( v12[1] == -1 )
          goto LABEL_30;
        v15 = v12 + 1;
        __dmb(0xBu);
        do
        {
          v16 = __ldrex(v15);
          v17 = v16 - 1;
        }
        while ( __strex(v17, v15) );
        if ( v17 )
        {
LABEL_30:
          v12 = 0;
          v13 = v33;
          goto LABEL_21;
        }
        v18 = v12;
        v12 = 0;
        json_delete(v18);
      }
      v13 = v33;
    }
    else
    {
      sub_21104(a3, (int)v21, 8, "'[' or '{' expected");
      v13 = v33;
    }
LABEL_21:
    if ( v13 == 256 )
    {
      if ( v34 )
        off_12A254(v34);
      v34 = 0;
      v35 = 0;
    }
LABEL_22:
    if ( ptr )
      off_12A254(ptr);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_24:
  fclose(v9);
  return v12;
}
