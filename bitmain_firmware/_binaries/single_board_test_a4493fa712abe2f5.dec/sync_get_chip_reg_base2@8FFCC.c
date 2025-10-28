int __fastcall sync_get_chip_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r2
  char v8; // r12
  __int16 v9; // r5
  char v10; // r4
  int v11; // r12
  int *v12; // r6
  int v13; // r4
  int v14; // r11
  int v15; // r10
  int v16; // r9
  int v17; // lr
  int v18; // r5
  unsigned int v19; // r0
  int v20; // r8
  int v21; // r3
  int v22; // r1
  char v23; // r4
  char v24; // r2
  int v25; // r1
  _BYTE v30[2]; // [sp+18h] [bp-Ch] BYREF
  int v31; // [sp+1Ah] [bp-Ah] BYREF
  char v32; // [sp+1Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 8);
  v31 = 0;
  v9 = *(_WORD *)(a2 + 10);
  v30[0] = 85;
  v10 = (16 * (v8 & 1)) | 2;
  v11 = 1;
  v31 = v10 & 0x1F | 0x40;
  v12 = &v31;
  HIBYTE(v31) = v9;
  v13 = (unsigned __int8)v31;
  v32 = 0;
  v14 = 1;
  v15 = 1;
  v16 = 1;
  v30[1] = -86;
  v17 = 1;
  BYTE1(v31) = 5;
  v18 = 32;
  v19 = 128;
  while ( 1 )
  {
    ++v7;
    v20 = (v13 & v19) != 0;
    v21 = (unsigned __int8)(v20 ^ v17);
    v19 >>= 1;
    v22 = (unsigned __int8)(v21 ^ v16);
    if ( v7 == 8 )
      break;
    if ( !--v18 )
      goto LABEL_8;
LABEL_4:
    v17 = v11;
    v16 = v15;
    v11 = v14;
    v15 = v21;
    v14 = v22;
  }
  --v18;
  v12 = (int *)((char *)v12 + 1);
  v7 = 0;
  v19 = 128;
  if ( v18 )
  {
    v13 = *(unsigned __int8 *)v12;
    goto LABEL_4;
  }
LABEL_8:
  if ( v11 )
    v23 = 24;
  else
    v23 = 8;
  if ( v11 )
    v24 = 16;
  else
    v24 = 0;
  if ( !v14 )
    v23 = v24;
  if ( v21 != v16 )
    v23 |= 4u;
  if ( v15 )
    v23 |= 2u;
  if ( v20 != v17 )
    v23 |= 1u;
  v32 = v32 & 0xE0 | v23 & 0x1F;
  send_command_packet(a1, v30, 7u);
  v25 = a3;
  if ( !*(_BYTE *)(a2 + 8) )
    v25 = 1;
  if ( *(_BYTE *)(a1 + 128) )
    return sub_8FE60(a1, v25, a4, a5, a6);
  else
    return 4;
}
