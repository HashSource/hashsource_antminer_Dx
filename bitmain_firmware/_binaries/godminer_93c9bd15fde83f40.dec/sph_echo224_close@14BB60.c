int __fastcall sph_echo224_close(int a1, _DWORD *a2)
{
  int v3; // r1
  int v5; // r3
  bool v6; // cf
  int v7; // r3
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r12
  int v12; // lr
  unsigned int v13; // r5
  int v15; // [sp+0h] [bp-20h]
  int v16; // [sp+4h] [bp-1Ch]
  int v17; // [sp+4h] [bp-1Ch]
  int v18; // [sp+8h] [bp-18h]
  int v19; // [sp+8h] [bp-18h]
  int v20; // [sp+Ch] [bp-14h]
  int v21; // [sp+Ch] [bp-14h]
  int v22; // [sp+10h] [bp-10h]
  int v23; // [sp+14h] [bp-Ch]
  int v24; // [sp+18h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 192);
  v5 = *(_DWORD *)(a1 + 264);
  v6 = __CFADD__(8 * v3, v5);
  v7 = 8 * v3 + v5;
  v8 = v6;
  v9 = v8 == 0;
  *(_DWORD *)(a1 + 264) = v7;
  v10 = *(_DWORD *)(a1 + 268);
  v11 = *(_DWORD *)(a1 + 272);
  v12 = *(_DWORD *)(a1 + 276);
  if ( v9 )
  {
    v15 = v7;
    v16 = *(_DWORD *)(a1 + 268);
    v18 = *(_DWORD *)(a1 + 272);
    v20 = *(_DWORD *)(a1 + 276);
    if ( !(8 * v3) )
    {
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 268) = 0;
      *(_DWORD *)(a1 + 264) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 268) = v10 + 1;
    if ( v10 == -1 )
    {
      *(_DWORD *)(a1 + 272) = ++v11;
      if ( !v11 )
        *(_DWORD *)(a1 + 276) = ++v12;
    }
    v15 = v7;
    v16 = v10 + 1;
    v18 = v11;
    v20 = v12;
  }
  v13 = v3 + 1;
  *(_BYTE *)(a1 + v3) = 0x80;
  memset((void *)(a1 + v3 + 1), 0, 191 - v3);
  if ( v13 > 0xAE )
  {
    sub_426F0((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    memset((void *)a1, 0, 0xC0u);
  }
  *(_BYTE *)(a1 + 174) = -32;
  *(_BYTE *)(a1 + 175) = 0;
  *(_DWORD *)(a1 + 176) = v15;
  *(_DWORD *)(a1 + 180) = v16;
  *(_DWORD *)(a1 + 184) = v18;
  *(_DWORD *)(a1 + 188) = v20;
  sub_426F0((unsigned int *)a1);
  v17 = *(_DWORD *)(a1 + 204);
  v19 = *(_DWORD *)(a1 + 208);
  v21 = *(_DWORD *)(a1 + 212);
  v22 = *(_DWORD *)(a1 + 216);
  v23 = *(_DWORD *)(a1 + 220);
  v24 = *(_DWORD *)(a1 + 224);
  *a2 = *(_DWORD *)(a1 + 200);
  a2[1] = v17;
  a2[2] = v19;
  a2[3] = v21;
  a2[4] = v22;
  a2[5] = v23;
  a2[6] = v24;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 200) = 224;
  *(_DWORD *)(a1 + 216) = 224;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 224;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 248) = 224;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  return v22;
}
