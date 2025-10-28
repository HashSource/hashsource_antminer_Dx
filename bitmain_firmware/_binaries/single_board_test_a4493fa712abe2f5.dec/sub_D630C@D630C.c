int __fastcall sub_D630C(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v4; // r11
  int (__fastcall *v8)(int, int *); // r2
  int v10; // r4
  signed int v11; // r2
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r8
  int v14; // r6
  int v15; // r7
  signed int v17; // [sp+14h] [bp-20h]
  int v18; // [sp+1Ch] [bp-18h] BYREF
  int v19; // [sp+20h] [bp-14h] BYREF
  int v20; // [sp+24h] [bp-10h]
  int v21; // [sp+28h] [bp-Ch]
  int v22; // [sp+2Ch] [bp-8h]

  v4 = a4;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v19 = 26738944;
  BYTE1(v21) = a4;
  v8 = *(int (__fastcall **)(int, int *))(a1 + 140);
  HIWORD(v21) = 32;
  if ( v8(a1, &v19) )
    return 0;
  v10 = 0;
  usleep(0xC350u);
  v11 = *(_DWORD *)(a1 + 180);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( v11 >= 1 )
    v11 = 1;
  v22 = 0;
  v17 = v11;
  v12 = (unsigned __int8 *)calloc(v11, 0xCu);
  BYTE1(v21) = v4;
  v13 = v12;
  HIWORD(v21) = 32;
  (*(void (__fastcall **)(int, int *, signed int, unsigned __int8 *, int *))(a1 + 160))(a1, &v19, v17, v12, &v18);
  v14 = v18;
  if ( v18 == 1 )
  {
    if ( a4 == v13[4] )
    {
      v10 = v13[3];
      v15 = v18;
    }
    else
    {
      v15 = 0;
    }
    free(v13);
    if ( *(_DWORD *)(a1 + 304) == 1 )
      v10 -= 64;
    *a2 = v10;
    *a3 = v15;
    return 1;
  }
  else
  {
    free(v13);
    return v14;
  }
}
