int __fastcall sph_echo224_addbits_and_close(int a1, char a2, int a3, _DWORD *a4)
{
  int v5; // r5
  int v7; // r0
  __int64 v8; // r6
  int v9; // r3
  int v10; // r12
  bool v11; // cf
  int v12; // r0
  int v13; // lr
  int v14; // r1
  int v15; // r2
  int v17; // [sp+0h] [bp-24h]
  __int64 v18; // [sp+4h] [bp-20h]
  int v19; // [sp+Ch] [bp-18h]
  int v20; // [sp+Ch] [bp-18h]
  int v21; // [sp+10h] [bp-14h]
  int v22; // [sp+14h] [bp-10h]
  int v23; // [sp+18h] [bp-Ch]

  v5 = *(_DWORD *)(a1 + 192);
  v7 = *(_DWORD *)(a1 + 264);
  v8 = *(_QWORD *)(a1 + 268);
  v9 = a3 + 8 * v5;
  v10 = *(_DWORD *)(a1 + 276);
  v11 = __CFADD__(v9, v7);
  v12 = v9 + v7;
  v13 = v11;
  *(_DWORD *)(a1 + 264) = v12;
  if ( v13 )
  {
    LODWORD(v8) = v8 + 1;
    *(_DWORD *)(a1 + 268) = v8;
    if ( !(_DWORD)v8 )
    {
      *(_DWORD *)(a1 + 272) = ++HIDWORD(v8);
      if ( !HIDWORD(v8) )
        *(_DWORD *)(a1 + 276) = ++v10;
    }
    v17 = v12;
    v18 = v8;
    v19 = v10;
  }
  else
  {
    v17 = v12;
    v18 = v8;
    v19 = v10;
    if ( !v9 )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 268) = 0;
    }
  }
  *(_BYTE *)(a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(a1 + v5 + 1), 0, 191 - v5);
  if ( (unsigned int)(v5 + 1) > 0xAE )
  {
    sub_4597C((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    memset((void *)a1, 0, 0xC0u);
  }
  *(_BYTE *)(a1 + 174) = -32;
  *(_BYTE *)(a1 + 175) = 0;
  *(_DWORD *)(a1 + 176) = v17;
  *(_QWORD *)(a1 + 180) = v18;
  *(_DWORD *)(a1 + 188) = v19;
  sub_4597C((unsigned int *)a1);
  v20 = *(_DWORD *)(a1 + 212);
  v21 = *(_DWORD *)(a1 + 216);
  v22 = *(_DWORD *)(a1 + 220);
  v23 = *(_DWORD *)(a1 + 224);
  v14 = *(_DWORD *)(a1 + 204);
  v15 = *(_DWORD *)(a1 + 208);
  *a4 = *(_DWORD *)(a1 + 200);
  a4[1] = v14;
  a4[2] = v15;
  a4[3] = v20;
  a4[4] = v21;
  a4[5] = v22;
  a4[6] = v23;
  *(_DWORD *)(a1 + 200) = 224;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 216) = 224;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 224;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 248) = 224;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  return v21;
}
