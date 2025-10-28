int __fastcall sub_A2D1C(int a1, __int16 a2, signed int nmemb, int a4)
{
  char *v8; // r7
  void (__fastcall *v9)(int, _DWORD *, signed int, char *, int *); // r11
  int v10; // r8
  int v11; // r12
  _WORD *v12; // lr
  unsigned __int8 *v13; // r2
  char v14; // r9
  int v15; // r0
  unsigned __int8 *v16; // r1
  int v17; // r3
  int v18; // t1
  int v19; // r3
  int v21; // r2
  __int16 v22; // r1
  int v23; // r3
  int v24; // [sp+14h] [bp-18h] BYREF
  _DWORD v25[2]; // [sp+18h] [bp-14h] BYREF
  __int16 v26; // [sp+20h] [bp-Ch]
  __int16 v27; // [sp+22h] [bp-Ah]
  int v28; // [sp+24h] [bp-8h]

  v8 = (char *)calloc(nmemb, 0xCu);
  v26 = 0;
  v27 = a2;
  v9 = *(void (__fastcall **)(int, _DWORD *, signed int, char *, int *))(a1 + 160);
  v25[0] = 0;
  v25[1] = 0;
  v28 = 0;
  LOBYTE(v26) = 1;
  v9(a1, v25, nmemb, v8, &v24);
  v10 = v24;
  if ( v24 > 0 )
  {
    v11 = 0;
    v12 = v8 + 90;
    do
    {
      while ( nmemb <= 0 )
      {
LABEL_16:
        ++v11;
        v12 += 6;
        if ( v11 == v10 )
          goto LABEL_17;
      }
      v13 = *(unsigned __int8 **)(a1 + 280);
      v14 = a4;
      v15 = *((unsigned __int8 *)v12 - 86);
      if ( a4 )
        v14 = 1;
      v16 = &v13[nmemb - 1];
      if ( *v13 == v15 )
        v17 = v14 & 1;
      else
        v17 = 0;
      if ( !v17 )
      {
        while ( v16 != v13 )
        {
          v18 = *++v13;
          if ( v18 == v15 )
            v19 = v14 & 1;
          else
            v19 = 0;
          if ( v19 )
            goto LABEL_18;
        }
        goto LABEL_16;
      }
LABEL_18:
      v21 = a4 + 8 * v11;
      *(_BYTE *)v21 = v15;
      v22 = *(v12 - 42);
      ++v11;
      v23 = *(_DWORD *)(v12 - 45);
      __pld(v12);
      v12 += 6;
      *(_BYTE *)(v21 + 1) = v22;
      *(_DWORD *)(v21 + 4) = v23;
    }
    while ( v11 != v10 );
  }
LABEL_17:
  free(v8);
  return v10;
}
