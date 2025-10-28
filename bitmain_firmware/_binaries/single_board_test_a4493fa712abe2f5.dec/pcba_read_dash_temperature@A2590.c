int __fastcall pcba_read_dash_temperature(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int *v7; // r9
  int v8; // r4
  int i; // r5
  int v11; // r2
  void (__fastcall *v12)(_DWORD *, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3
  _DWORD *v13; // r4
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  void (__fastcall *v19)(_DWORD *, int *, int *, _DWORD, int, int, int, int); // r4
  int v20; // r2
  int result; // r0
  int v22; // [sp+14h] [bp-28h]
  int v26; // [sp+28h] [bp-14h] BYREF
  int v27; // [sp+2Ch] [bp-10h] BYREF
  int v28; // [sp+30h] [bp-Ch] BYREF
  int v29; // [sp+34h] [bp-8h] BYREF

  v7 = (int *)a1[49];
  *a2 = -150;
  *a3 = 150;
  *a4 = -150;
  *a5 = 150;
  v8 = v7[1];
  if ( v8 > 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v11 = *v7;
      v12 = (void (__fastcall *)(_DWORD *, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a1[22];
      v27 = 0;
      v22 = v11;
      v13 = (_DWORD *)(v11 + 20 * i + 4);
      v12(
        a1,
        &v29,
        &v27,
        *(_DWORD *)(v11 + 20 * i),
        *v13,
        *(_DWORD *)(v11 + 20 * i + 8),
        *(_DWORD *)(v11 + 20 * i + 12),
        *(_DWORD *)(v11 + 20 * i + 16));
      if ( v27 )
      {
        v14 = v29;
        ++*a6;
        if ( *a2 < v14 )
          *a2 = v14;
        if ( v14 < *a3 )
          *a3 = v14;
        gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 265784 + i] = v14;
      }
      v15 = *v13;
      v16 = v13[1];
      v17 = v13[2];
      v18 = v13[3];
      v19 = (void (__fastcall *)(_DWORD *, int *, int *, _DWORD, int, int, int, int))a1[23];
      v26 = 0;
      v19(a1, &v28, &v26, *(_DWORD *)(v22 + 20 * i), v15, v16, v17, v18);
      if ( v26 )
      {
        v20 = v28;
        ++*a7;
        if ( *a4 < v20 )
          *a4 = v20;
        if ( v20 < *a5 )
          *a5 = v20;
        gHistory_Result[265800 * dword_3B57B0 + 265788 + i] = v20;
      }
      v8 = v7[1];
    }
  }
  if ( *a6 != v8 )
    return -1;
  result = *a7 - v8;
  if ( *a7 != v8 )
    return -1;
  return result;
}
