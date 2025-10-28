int __fastcall pcba_read_fpga_temperature(
        int a1,
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
  int v11; // r7
  void (__fastcall *v12)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r11
  _DWORD *v13; // r4
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r2
  int result; // r0
  int v24; // [sp+20h] [bp-14h] BYREF
  int v25; // [sp+24h] [bp-10h] BYREF
  int v26; // [sp+28h] [bp-Ch] BYREF
  int v27; // [sp+2Ch] [bp-8h] BYREF

  v7 = *(int **)(a1 + 196);
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
      v12 = *(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 88);
      v25 = 0;
      v13 = (_DWORD *)(v11 + 20 * i + 4);
      v12(
        a1,
        &v27,
        &v25,
        *(_DWORD *)(v11 + 20 * i),
        *v13,
        *(_DWORD *)(v11 + 20 * i + 8),
        *(_DWORD *)(v11 + 20 * i + 12),
        *(_DWORD *)(v11 + 20 * i + 16));
      if ( v25 )
      {
        v14 = v27;
        ++*a6;
        if ( *a2 < v14 )
          *a2 = v14;
        if ( v14 < *a3 )
          *a3 = v14;
      }
      v15 = *v13;
      v16 = *(_DWORD *)(v11 + 20 * i + 8);
      v17 = *(_DWORD *)(v11 + 20 * i + 12);
      v18 = *(_DWORD *)(v11 + 20 * i + 16);
      v24 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int))(a1 + 92))(
        a1,
        &v26,
        &v24,
        *(_DWORD *)(v11 + 20 * i),
        v15,
        v16,
        v17,
        v18);
      if ( v24 )
      {
        v19 = v26;
        ++*a7;
        if ( *a4 < v19 )
          *a4 = v19;
        if ( v19 < *a5 )
          *a5 = v19;
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
