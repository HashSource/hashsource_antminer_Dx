int __fastcall sph_echo256_addbits_and_close(int a1, char a2, int a3, _DWORD *a4)
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
  int v16; // r3
  int v18; // [sp+0h] [bp-20h]
  __int64 v19; // [sp+4h] [bp-1Ch]
  int v20; // [sp+Ch] [bp-14h]
  int v21; // [sp+10h] [bp-10h]
  int v22; // [sp+14h] [bp-Ch]
  int v23; // [sp+18h] [bp-8h]
  int v24; // [sp+1Ch] [bp-4h]

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
    v18 = v12;
    v19 = v8;
    v20 = v10;
  }
  else
  {
    v18 = v12;
    v19 = v8;
    v20 = v10;
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
  *(_BYTE *)(a1 + 175) = 1;
  *(_BYTE *)(a1 + 174) = 0;
  *(_DWORD *)(a1 + 176) = v18;
  *(_QWORD *)(a1 + 180) = v19;
  *(_DWORD *)(a1 + 188) = v20;
  sub_4597C((unsigned int *)a1);
  v21 = *(_DWORD *)(a1 + 216);
  v22 = *(_DWORD *)(a1 + 220);
  v23 = *(_DWORD *)(a1 + 224);
  v24 = *(_DWORD *)(a1 + 228);
  v14 = *(_DWORD *)(a1 + 204);
  v15 = *(_DWORD *)(a1 + 208);
  v16 = *(_DWORD *)(a1 + 212);
  *a4 = *(_DWORD *)(a1 + 200);
  a4[1] = v14;
  a4[2] = v15;
  a4[3] = v16;
  a4[4] = v21;
  a4[5] = v22;
  a4[6] = v23;
  a4[7] = v24;
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
  return v21;
}
