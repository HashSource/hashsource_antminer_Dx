unsigned int *__fastcall json_vpack_ex(int a1, int a2, _BYTE *a3, size_t *a4)
{
  unsigned int *v5; // r4
  size_t *v7; // [sp+Ch] [bp-54h] BYREF
  _DWORD v8[9]; // [sp+10h] [bp-50h] BYREF
  int v9; // [sp+34h] [bp-2Ch]
  int v10; // [sp+38h] [bp-28h]
  int v11; // [sp+3Ch] [bp-24h]
  int v12; // [sp+40h] [bp-20h]
  int v13; // [sp+44h] [bp-1Ch]
  int v14; // [sp+48h] [bp-18h]
  int v15; // [sp+4Ch] [bp-14h]
  int v16; // [sp+50h] [bp-10h]
  int v17; // [sp+54h] [bp-Ch]
  int v18; // [sp+58h] [bp-8h]
  int v19; // [sp+5Ch] [bp-4h]

  if ( a3 && *a3 )
  {
    if ( a1 )
    {
      *(_BYTE *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 12) = 0;
      *(_DWORD *)a1 = -1;
      *(_DWORD *)(a1 + 4) = -1;
    }
    v15 = a2;
    v14 = a1;
    v8[0] = a3;
    v8[1] = a3;
    memset(&v8[2], 0, 28);
    v10 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v9 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v16 = 1;
    sub_205D8(v8);
    v7 = a4;
    v5 = sub_217FC((int)v8, &v7);
    if ( v5 )
    {
      sub_205D8(v8);
      if ( (_BYTE)v9 )
      {
        if ( v5[1] != -1 )
          sub_A8E50(v5);
        v5 = 0;
        sub_204B8((int)v8, "<format>", 9, "Garbage after format string");
      }
    }
    return v5;
  }
  else
  {
    if ( a1 )
    {
      *(_BYTE *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = -1;
      strcpy((char *)(a1 + 12), "<format>");
      *(_DWORD *)(a1 + 4) = -1;
    }
    jsonp_error_set(a1, -1, -1, 0, 4, "NULL or empty format string");
    return 0;
  }
}
