int __fastcall sync_get_chip_reg_base(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r2
  char v9; // r7
  __int16 v10; // r6
  char v11; // r5
  int v12; // r7
  int *v13; // r11
  int v14; // r5
  int v15; // r10
  int v16; // r9
  int v17; // r8
  int v18; // r12
  int v19; // r6
  unsigned int v20; // r4
  int v21; // lr
  int v22; // r3
  int v23; // r0
  char v24; // r4
  char v25; // r2
  int v27; // r1
  bool v28; // zf
  _BYTE v33[2]; // [sp+18h] [bp-Ch] BYREF
  int v34; // [sp+1Ah] [bp-Ah] BYREF
  char v35; // [sp+1Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v8 = 0;
  v9 = *(_BYTE *)(a2 + 8);
  v34 = 0;
  v10 = *(_WORD *)(a2 + 10);
  v33[0] = 85;
  v11 = (16 * (v9 & 1)) | 2;
  v12 = 1;
  v34 = v11 & 0x1F | 0x40;
  v13 = &v34;
  HIBYTE(v34) = v10;
  v14 = (unsigned __int8)v34;
  v35 = 0;
  v15 = 1;
  v16 = 1;
  v17 = 1;
  v33[1] = -86;
  v18 = 1;
  BYTE1(v34) = 5;
  v19 = 32;
  v20 = 128;
  while ( 1 )
  {
    ++v8;
    v21 = (v14 & v20) != 0;
    v22 = (unsigned __int8)(v21 ^ v18);
    v20 >>= 1;
    v23 = (unsigned __int8)(v22 ^ v17);
    if ( v8 == 8 )
      break;
    if ( !--v19 )
      goto LABEL_8;
LABEL_4:
    v18 = v12;
    v17 = v16;
    v12 = v15;
    v16 = v22;
    v15 = v23;
  }
  --v19;
  v13 = (int *)((char *)v13 + 1);
  v8 = 0;
  v20 = 128;
  if ( v19 )
  {
    v14 = *(unsigned __int8 *)v13;
    goto LABEL_4;
  }
LABEL_8:
  if ( v12 )
    v24 = 24;
  else
    v24 = 8;
  if ( v12 )
    v25 = 16;
  else
    v25 = 0;
  if ( !v15 )
    v24 = v25;
  if ( v22 != v17 )
    v24 |= 4u;
  if ( v16 )
    v24 |= 2u;
  if ( v21 != v18 )
    v24 |= 1u;
  v35 = v35 & 0xE0 | v24 & 0x1F;
  send_command_packet(a1, v33, 7u);
  v27 = *(unsigned __int8 *)(a2 + 8);
  v28 = v27 == 0;
  if ( *(_BYTE *)(a2 + 8) )
    v27 = a3;
  if ( v28 )
    v27 = 1;
  return (*(int (__fastcall **)(int, int, int, int, int, int))(a1 + 156))(a1, v27, a4, a5, a7, a8);
}
