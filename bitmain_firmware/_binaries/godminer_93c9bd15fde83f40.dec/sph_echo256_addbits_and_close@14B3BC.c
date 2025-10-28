int __fastcall sph_echo256_addbits_and_close(int a1, char a2, int a3, _DWORD *a4)
{
  int v4; // r12
  int v6; // r0
  int v8; // r3
  int v9; // r5
  int v10; // r6
  bool v11; // cf
  int v12; // r0
  int v13; // lr
  bool v14; // zf
  int v15; // lr
  unsigned int v16; // r5
  int v18; // [sp+0h] [bp-20h]
  int v19; // [sp+4h] [bp-1Ch]
  int v20; // [sp+4h] [bp-1Ch]
  int v21; // [sp+8h] [bp-18h]
  int v22; // [sp+8h] [bp-18h]
  int v23; // [sp+Ch] [bp-14h]
  int v24; // [sp+Ch] [bp-14h]
  int v25; // [sp+10h] [bp-10h]
  int v26; // [sp+14h] [bp-Ch]
  int v27; // [sp+18h] [bp-8h]
  int v28; // [sp+1Ch] [bp-4h]

  v4 = *(_DWORD *)(a1 + 192);
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
    v18 = v12;
    v19 = *(_DWORD *)(a1 + 268);
    v21 = v9;
    v23 = v10;
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
    v18 = v12;
    v19 = v15 + 1;
    v21 = v9;
    v23 = v10;
  }
  v16 = v4 + 1;
  *(_BYTE *)(a1 + v4) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(a1 + v4 + 1), 0, 191 - v4);
  if ( v16 > 0xAE )
  {
    sub_426F0((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    memset((void *)a1, 0, 0xC0u);
  }
  *(_BYTE *)(a1 + 175) = 1;
  *(_BYTE *)(a1 + 174) = 0;
  *(_DWORD *)(a1 + 176) = v18;
  *(_DWORD *)(a1 + 180) = v19;
  *(_DWORD *)(a1 + 184) = v21;
  *(_DWORD *)(a1 + 188) = v23;
  sub_426F0((unsigned int *)a1);
  v20 = *(_DWORD *)(a1 + 204);
  v22 = *(_DWORD *)(a1 + 208);
  v24 = *(_DWORD *)(a1 + 212);
  v25 = *(_DWORD *)(a1 + 216);
  v26 = *(_DWORD *)(a1 + 220);
  v27 = *(_DWORD *)(a1 + 224);
  v28 = *(_DWORD *)(a1 + 228);
  *a4 = *(_DWORD *)(a1 + 200);
  a4[1] = v20;
  a4[2] = v22;
  a4[3] = v24;
  a4[4] = v25;
  a4[5] = v26;
  a4[6] = v27;
  a4[7] = v28;
  *(_DWORD *)(a1 + 200) = 256;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 216) = 256;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 256;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 248) = 256;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  return v25;
}
