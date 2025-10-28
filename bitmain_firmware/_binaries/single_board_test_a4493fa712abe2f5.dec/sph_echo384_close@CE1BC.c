int __fastcall sph_echo384_close(int a1, int a2)
{
  int v3; // r1
  int v5; // r3
  int v6; // r6
  bool v7; // cf
  int v8; // r3
  int v9; // r12
  int v10; // r0
  int v11; // r5
  int v12; // r0
  unsigned int v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int *v18; // r5
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int *v22; // r6
  int v23; // r2
  int v24; // r3
  int *v25; // r5
  int result; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // [sp+0h] [bp-44h] BYREF
  int v31; // [sp+4h] [bp-40h]
  int v32; // [sp+8h] [bp-3Ch]
  int v33; // [sp+Ch] [bp-38h]
  char v34; // [sp+30h] [bp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 128);
  v5 = *(_DWORD *)(a1 + 264);
  v6 = *(_DWORD *)(a1 + 276);
  v7 = __CFADD__(8 * v3, v5);
  v8 = 8 * v3 + v5;
  v9 = v7;
  *(_DWORD *)(a1 + 264) = v8;
  v11 = *(_DWORD *)(a1 + 272);
  v10 = *(_DWORD *)(a1 + 268);
  if ( v9 )
  {
    v12 = v10 + 1;
    *(_DWORD *)(a1 + 268) = v12;
    if ( !v12 )
    {
      *(_DWORD *)(a1 + 272) = ++v11;
      if ( !v11 )
        *(_DWORD *)(a1 + 276) = ++v6;
    }
    v30 = v8;
    v31 = v12;
    v32 = v11;
    v33 = v6;
  }
  else
  {
    v30 = v8;
    v31 = v10;
    v32 = v11;
    v33 = v6;
    if ( !(8 * v3) )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 268) = 0;
    }
  }
  v13 = v3 + 1;
  *(_BYTE *)(a1 + v3) = 0x80;
  memset((void *)(a1 + v3 + 1), 0, 127 - v3);
  if ( v13 > 0x6E )
  {
    sub_43064((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    memset((void *)a1, 0, 0x80u);
  }
  *(_BYTE *)(a1 + 110) = 0x80;
  v14 = v30;
  v15 = v31;
  v16 = v32;
  v17 = v33;
  v18 = (int *)(a1 + 136);
  *(_BYTE *)(a1 + 111) = 1;
  *(_DWORD *)(a1 + 112) = v14;
  *(_DWORD *)(a1 + 116) = v15;
  *(_DWORD *)(a1 + 120) = v16;
  *(_DWORD *)(a1 + 124) = v17;
  sub_43064((unsigned int *)a1);
  v19 = &v30;
  do
  {
    v20 = *v18;
    v18 += 4;
    v21 = *(v18 - 3);
    v22 = v19;
    v23 = *(v18 - 2);
    v19 += 4;
    v24 = *(v18 - 1);
    *v22 = v20;
    v22[1] = v21;
    v22[2] = v23;
    v22[3] = v24;
  }
  while ( v18 != (int *)(a1 + 184) );
  v25 = &v30;
  do
  {
    a2 += 16;
    result = *v25;
    v27 = v25[1];
    v28 = v25[2];
    v29 = v25[3];
    v25 += 4;
    *(_DWORD *)(a2 - 16) = result;
    *(_DWORD *)(a2 - 12) = v27;
    *(_DWORD *)(a2 - 8) = v28;
    *(_DWORD *)(a2 - 4) = v29;
  }
  while ( v25 != (int *)&v34 );
  *(_DWORD *)(a1 + 136) = 384;
  *(_DWORD *)(a1 + 152) = 384;
  *(_DWORD *)(a1 + 168) = 384;
  *(_DWORD *)(a1 + 184) = 384;
  *(_DWORD *)(a1 + 200) = 384;
  *(_DWORD *)(a1 + 216) = 384;
  *(_DWORD *)(a1 + 232) = 384;
  *(_DWORD *)(a1 + 248) = 384;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  return result;
}
