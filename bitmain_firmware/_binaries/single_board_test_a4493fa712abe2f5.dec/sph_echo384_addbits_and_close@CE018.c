int __fastcall sph_echo384_addbits_and_close(int a1, char a2, int a3, int a4)
{
  int v5; // r5
  int v7; // r0
  int v8; // r7
  int v9; // r12
  int v10; // r3
  int v11; // lr
  bool v12; // cf
  int v13; // r0
  int v14; // r8
  int v15; // r7
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int *v20; // r5
  int *v21; // r12
  int v22; // r0
  int v23; // r1
  int *v24; // r7
  int v25; // r2
  int v26; // r3
  int *v27; // r5
  int result; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // [sp+0h] [bp-40h] BYREF
  int v33; // [sp+4h] [bp-3Ch]
  int v34; // [sp+8h] [bp-38h]
  int v35; // [sp+Ch] [bp-34h]
  char v36; // [sp+30h] [bp-10h] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 264);
  v9 = *(_DWORD *)(a1 + 272);
  v8 = *(_DWORD *)(a1 + 268);
  v10 = a3 + 8 * v5;
  v11 = *(_DWORD *)(a1 + 276);
  v12 = __CFADD__(v10, v7);
  v13 = v10 + v7;
  v14 = v12;
  *(_DWORD *)(a1 + 264) = v13;
  if ( v14 )
  {
    v15 = v8 + 1;
    *(_DWORD *)(a1 + 268) = v15;
    if ( !v15 )
    {
      *(_DWORD *)(a1 + 272) = ++v9;
      if ( !v9 )
        *(_DWORD *)(a1 + 276) = ++v11;
    }
    v32 = v13;
    v33 = v15;
    v34 = v9;
    v35 = v11;
  }
  else
  {
    v32 = v13;
    v33 = v8;
    v34 = v9;
    v35 = v11;
    if ( !v10 )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 268) = 0;
    }
  }
  *(_BYTE *)(a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(a1 + v5 + 1), 0, 127 - v5);
  if ( (unsigned int)(v5 + 1) > 0x6E )
  {
    sub_43064((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    memset((void *)a1, 0, 0x80u);
  }
  *(_BYTE *)(a1 + 110) = 0x80;
  v16 = v32;
  v17 = v33;
  v18 = v34;
  v19 = v35;
  v20 = (int *)(a1 + 136);
  *(_BYTE *)(a1 + 111) = 1;
  *(_DWORD *)(a1 + 112) = v16;
  *(_DWORD *)(a1 + 116) = v17;
  *(_DWORD *)(a1 + 120) = v18;
  *(_DWORD *)(a1 + 124) = v19;
  sub_43064((unsigned int *)a1);
  v21 = &v32;
  do
  {
    v22 = *v20;
    v20 += 4;
    v23 = *(v20 - 3);
    v24 = v21;
    v25 = *(v20 - 2);
    v21 += 4;
    v26 = *(v20 - 1);
    *v24 = v22;
    v24[1] = v23;
    v24[2] = v25;
    v24[3] = v26;
  }
  while ( v20 != (int *)(a1 + 184) );
  v27 = &v32;
  do
  {
    a4 += 16;
    result = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v31 = v27[3];
    v27 += 4;
    *(_DWORD *)(a4 - 16) = result;
    *(_DWORD *)(a4 - 12) = v29;
    *(_DWORD *)(a4 - 8) = v30;
    *(_DWORD *)(a4 - 4) = v31;
  }
  while ( v27 != (int *)&v36 );
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
