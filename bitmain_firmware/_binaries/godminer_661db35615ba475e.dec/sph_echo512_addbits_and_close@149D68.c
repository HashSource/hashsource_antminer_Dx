int __fastcall sph_echo512_addbits_and_close(int a1, char a2, int a3, int a4)
{
  int v4; // r12
  int v6; // r0
  int v8; // r3
  int v9; // r6
  int v10; // r7
  bool v11; // cf
  int v12; // r0
  int v13; // lr
  bool v14; // zf
  int v15; // lr
  unsigned int v16; // r7
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int *v21; // r6
  int *v22; // r12
  int v23; // r0
  int v24; // r1
  int *v25; // lr
  int v26; // r2
  int v27; // r3
  int *v28; // r12
  int result; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // [sp+0h] [bp-44h] BYREF
  int v34; // [sp+4h] [bp-40h]
  int v35; // [sp+8h] [bp-3Ch]
  int v36; // [sp+Ch] [bp-38h]
  char v37; // [sp+40h] [bp-4h] BYREF

  v4 = *(_DWORD *)(a1 + 128);
  v6 = *(_DWORD *)(a1 + 264);
  v8 = a3 + 8 * v4;
  v9 = *(_DWORD *)(a1 + 272);
  v10 = *(_DWORD *)(a1 + 276);
  v11 = __CFADD__(v8, v6);
  v12 = v8 + v6;
  v13 = v11;
  v14 = v13 == 0;
  *(_DWORD *)(a1 + 264) = v12;
  v15 = *(_DWORD *)(a1 + 268);
  if ( v14 )
  {
    v33 = v12;
    v34 = v15;
    v35 = v9;
    v36 = v10;
    if ( !v8 )
    {
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 268) = 0;
      *(_DWORD *)(a1 + 264) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 268) = v15 + 1;
    if ( v15 == -1 )
    {
      *(_DWORD *)(a1 + 272) = ++v9;
      if ( !v9 )
        *(_DWORD *)(a1 + 276) = ++v10;
    }
    v33 = v12;
    v34 = v15 + 1;
    v35 = v9;
    v36 = v10;
  }
  v16 = v4 + 1;
  *(_BYTE *)(a1 + v4) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(a1 + v4 + 1), 0, 127 - v4);
  if ( v16 > 0x6E )
  {
    sub_4DFFC((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    memset((void *)a1, 0, 0x80u);
  }
  *(_BYTE *)(a1 + 110) = 0;
  v17 = v33;
  v18 = v34;
  v19 = v35;
  v20 = v36;
  v21 = &v33;
  *(_BYTE *)(a1 + 111) = 2;
  *(_DWORD *)(a1 + 112) = v17;
  *(_DWORD *)(a1 + 116) = v18;
  *(_DWORD *)(a1 + 120) = v19;
  *(_DWORD *)(a1 + 124) = v20;
  sub_4DFFC((unsigned int *)a1);
  v22 = (int *)(a1 + 136);
  do
  {
    v23 = *v22;
    v22 += 4;
    v24 = *(v22 - 3);
    v25 = v21;
    v26 = *(v22 - 2);
    v21 += 4;
    v27 = *(v22 - 1);
    *v25 = v23;
    v25[1] = v24;
    v25[2] = v26;
    v25[3] = v27;
  }
  while ( v22 != (int *)(a1 + 200) );
  v28 = &v33;
  do
  {
    a4 += 16;
    result = *v28;
    v30 = v28[1];
    v31 = v28[2];
    v32 = v28[3];
    v28 += 4;
    *(_DWORD *)(a4 - 16) = result;
    *(_DWORD *)(a4 - 12) = v30;
    *(_DWORD *)(a4 - 8) = v31;
    *(_DWORD *)(a4 - 4) = v32;
  }
  while ( v28 != (int *)&v37 );
  *(_DWORD *)(a1 + 136) = 512;
  *(_DWORD *)(a1 + 152) = 512;
  *(_DWORD *)(a1 + 168) = 512;
  *(_DWORD *)(a1 + 184) = 512;
  *(_DWORD *)(a1 + 200) = 512;
  *(_DWORD *)(a1 + 216) = 512;
  *(_DWORD *)(a1 + 232) = 512;
  *(_DWORD *)(a1 + 248) = 512;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  return result;
}
