int __fastcall json_vunpack_ex(int *a1, int a2, int a3, _BYTE *a4, _QWORD **a5)
{
  int v7; // r5
  _QWORD **v9; // [sp+Ch] [bp-58h] BYREF
  _DWORD v10[9]; // [sp+10h] [bp-54h] BYREF
  int v11; // [sp+34h] [bp-30h]
  int v12; // [sp+38h] [bp-2Ch]
  int v13; // [sp+3Ch] [bp-28h]
  int v14; // [sp+40h] [bp-24h]
  int v15; // [sp+44h] [bp-20h]
  int v16; // [sp+48h] [bp-1Ch]
  int v17; // [sp+4Ch] [bp-18h]
  int v18; // [sp+50h] [bp-14h]
  int v19; // [sp+54h] [bp-10h]
  int v20; // [sp+58h] [bp-Ch]
  int v21; // [sp+5Ch] [bp-8h]

  if ( a1 )
  {
    if ( a4 && *a4 )
    {
      if ( a2 )
      {
        *(_BYTE *)(a2 + 92) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_BYTE *)(a2 + 12) = 0;
        *(_DWORD *)a2 = -1;
        *(_DWORD *)(a2 + 4) = -1;
      }
      v17 = a3;
      v10[0] = a4;
      v10[1] = a4;
      memset(&v10[2], 0, 28);
      v12 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v11 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v18 = 1;
      v16 = a2;
      sub_205D8(v10);
      v9 = a5;
      v7 = sub_39528((int)v10, a1, &v9);
      if ( v7 )
      {
        return -1;
      }
      else
      {
        sub_205D8(v10);
        if ( (_BYTE)v11 )
        {
          sub_204B8((int)v10, "<format>", 9, "Garbage after format string");
          return -1;
        }
      }
    }
    else
    {
      if ( a2 )
      {
        *(_BYTE *)(a2 + 92) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)a2 = -1;
        strcpy((char *)(a2 + 12), "<format>");
        *(_DWORD *)(a2 + 4) = -1;
      }
      v7 = -1;
      jsonp_error_set(a2, -1, -1, 0, 4, "NULL or empty format string");
    }
  }
  else
  {
    v7 = -1;
    jsonp_error_init((char *)a2, "<root>");
    jsonp_error_set(a2, -1, -1, 0, 12, "NULL root value");
  }
  return v7;
}
