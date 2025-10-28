_DWORD *__fastcall json_load_file(const char *a1, int a2, int a3)
{
  _DWORD *v6; // r5
  size_t v7; // r0
  int v8; // r0
  FILE *v9; // r7
  const char *v10; // r5
  _BYTE *v11; // r0
  int v12; // r3
  size_t v14; // r0
  _DWORD *v15; // r0
  int *v16; // r0
  char *v17; // r0
  _DWORD v18[2]; // [sp+8h] [bp-48h] BYREF
  char v19; // [sp+10h] [bp-40h]
  int v20; // [sp+18h] [bp-38h]
  int v21; // [sp+1Ch] [bp-34h]
  int v22; // [sp+20h] [bp-30h]
  int v23; // [sp+24h] [bp-2Ch]
  int v24; // [sp+2Ch] [bp-24h]
  void *ptr; // [sp+30h] [bp-20h]
  int v26; // [sp+34h] [bp-1Ch]
  int v27; // [sp+38h] [bp-18h]
  int v28; // [sp+3Ch] [bp-14h]
  int v29; // [sp+40h] [bp-10h]
  int v30; // [sp+44h] [bp-Ch]
  void *v31; // [sp+48h] [bp-8h]
  int v32; // [sp+4Ch] [bp-4h]

  if ( !a3 )
  {
    if ( !a1 )
      goto LABEL_5;
LABEL_9:
    v8 = fopen64(a1, "rb");
    v9 = (FILE *)v8;
    if ( !v8 )
    {
      v16 = _errno_location();
      v6 = 0;
      v17 = strerror(*v16);
      sub_1022F4(a3, 0, 3, "unable to open %s: %s", a1, v17);
      return v6;
    }
    v10 = "<stdin>";
    if ( v8 != stdin )
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
    v22 = 1;
    v18[1] = v9;
    v18[0] = fgetc;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 16;
    v11 = off_190780(0x10u);
    ptr = v11;
    if ( !v11 )
    {
      v6 = 0;
LABEL_24:
      fclose(v9);
      return v6;
    }
    *v11 = 0;
    v29 = 0;
    v28 = a2;
    v30 = -1;
    sub_1041EC((int)v18, a3);
    v6 = (_DWORD *)(a2 & 4);
    if ( (a2 & 4) != 0 || (v30 & 0xFFFFFFDF) == 0x5B )
    {
      v6 = sub_1052A4((int)v18, a2, a3);
      if ( !v6 )
      {
LABEL_33:
        v12 = v30;
        goto LABEL_21;
      }
      if ( (a2 & 2) != 0 )
      {
        v12 = v30;
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v24;
        goto LABEL_21;
      }
      sub_1041EC((int)v18, a3);
      if ( !v30 )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = v24;
        goto LABEL_22;
      }
      sub_1022F4(a3, v18, 7, "end of file expected");
      if ( v6[1] == -1 )
      {
        v6 = 0;
        goto LABEL_33;
      }
      v15 = v6;
      v6 = 0;
      sub_F8BC0(v15);
      v12 = v30;
    }
    else
    {
      sub_1022F4(a3, v18, 8, "'[' or '{' expected");
      v12 = v30;
    }
LABEL_21:
    if ( v12 == 256 )
    {
      if ( v31 )
        off_190550(v31);
      v31 = 0;
      v32 = 0;
    }
LABEL_22:
    if ( ptr )
      off_190550(ptr);
    goto LABEL_24;
  }
  *(_BYTE *)(a3 + 92) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)a3 = -1;
  *(_DWORD *)(a3 + 4) = -1;
  if ( a1 )
  {
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
    goto LABEL_9;
  }
  *(_BYTE *)(a3 + 12) = 0;
LABEL_5:
  v6 = 0;
  sub_1022F4(a3, 0, 4, "wrong arguments");
  return v6;
}
