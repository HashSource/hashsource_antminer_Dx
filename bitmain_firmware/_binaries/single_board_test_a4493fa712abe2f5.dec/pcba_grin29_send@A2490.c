int __fastcall pcba_grin29_send(int a1, int a2)
{
  int (__fastcall *v4)(int, int *); // r7
  int v5; // r2
  int v7; // [sp+0h] [bp-114h] BYREF
  int v8; // [sp+8h] [bp-10Ch]
  int v9; // [sp+Ch] [bp-108h]
  _BYTE dest[238]; // [sp+10h] [bp-104h] BYREF
  int v11; // [sp+FEh] [bp-16h]
  int v12; // [sp+102h] [bp-12h]
  __int16 v13; // [sp+106h] [bp-Eh]
  __int16 v14; // [sp+108h] [bp-Ch]
  __int16 v15; // [sp+10Ah] [bp-Ah]
  __int16 v16; // [sp+10Ch] [bp-8h]

  v8 = *(_DWORD *)a2;
  v9 = v8 >> 31;
  memcpy(dest, (const void *)(a2 + 4), sizeof(dest));
  v4 = *(int (__fastcall **)(int, int *))(a1 + 20);
  v5 = ((__PAIR64__(
           *(unsigned __int8 *)(a2 + 245)
         + (((*(unsigned __int8 *)(a2 + 248) << 8)
           + (unsigned __int64)(*(unsigned __int8 *)(a2 + 247) << 16)
           + *(unsigned __int8 *)(a2 + 249)
           + (*(unsigned __int8 *)(a2 + 246) << 24)) >> 32),
           (*(unsigned __int8 *)(a2 + 248) << 8)
         + (*(unsigned __int8 *)(a2 + 247) << 16)
         + *(unsigned __int8 *)(a2 + 249)
         + (*(unsigned __int8 *)(a2 + 246) << 24))
       + __PAIR64__(*(unsigned __int8 *)(a2 + 244) << 8, 0)
       + __PAIR64__(*(unsigned __int8 *)(a2 + 243) << 16, 0)) >> 32)
     + (*(unsigned __int8 *)(a2 + 242) << 24);
  v11 = (*(unsigned __int8 *)(a2 + 248) << 8)
      + (*(unsigned __int8 *)(a2 + 247) << 16)
      + *(unsigned __int8 *)(a2 + 249)
      + (*(unsigned __int8 *)(a2 + 246) << 24);
  v12 = v5;
  v14 = -1;
  v13 = -1;
  v15 = -1;
  v16 = -1;
  return v4(a1, &v7);
}
