int __fastcall sph_echo256_close(int a1, _DWORD *a2)
{
  int v3; // r1
  int v5; // r3
  int v6; // r6
  bool v7; // cf
  int v8; // r3
  int v9; // r7
  int v10; // r0
  int v11; // r5
  int v12; // r0
  unsigned int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v18; // [sp+0h] [bp-20h]
  int v19; // [sp+4h] [bp-1Ch]
  int v20; // [sp+8h] [bp-18h]
  int v21; // [sp+Ch] [bp-14h]
  int v22; // [sp+10h] [bp-10h]
  int v23; // [sp+14h] [bp-Ch]
  int v24; // [sp+18h] [bp-8h]
  int v25; // [sp+1Ch] [bp-4h]

  v3 = *(_DWORD *)(a1 + 192);
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
    v18 = v8;
    v19 = v12;
    v20 = v11;
    v21 = v6;
  }
  else
  {
    v18 = v8;
    v19 = v10;
    v20 = v11;
    v21 = v6;
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
  memset((void *)(a1 + v3 + 1), 0, 191 - v3);
  if ( v13 > 0xAE )
  {
    sub_4597C((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    memset((void *)a1, 0, 0xC0u);
  }
  *(_BYTE *)(a1 + 175) = 1;
  *(_BYTE *)(a1 + 174) = 0;
  *(_DWORD *)(a1 + 176) = v18;
  *(_DWORD *)(a1 + 180) = v19;
  *(_DWORD *)(a1 + 184) = v20;
  *(_DWORD *)(a1 + 188) = v21;
  sub_4597C((unsigned int *)a1);
  v22 = *(_DWORD *)(a1 + 216);
  v23 = *(_DWORD *)(a1 + 220);
  v24 = *(_DWORD *)(a1 + 224);
  v25 = *(_DWORD *)(a1 + 228);
  v14 = *(_DWORD *)(a1 + 204);
  v15 = *(_DWORD *)(a1 + 208);
  v16 = *(_DWORD *)(a1 + 212);
  *a2 = *(_DWORD *)(a1 + 200);
  a2[1] = v14;
  a2[2] = v15;
  a2[3] = v16;
  a2[4] = v22;
  a2[5] = v23;
  a2[6] = v24;
  a2[7] = v25;
  *(_DWORD *)(a1 + 200) = 256;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 216) = 256;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 256;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 248) = 256;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  return v22;
}
