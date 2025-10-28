int __fastcall sync_get_chip_reg_base(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r2
  char v10; // r5
  __int16 v11; // r4
  char v12; // lr
  int v13; // r5
  int *v14; // r11
  int v15; // lr
  int v16; // r10
  int v17; // r9
  int v18; // r8
  int v19; // r6
  int v20; // r4
  unsigned int v21; // r12
  int v22; // r7
  int v23; // r3
  int v24; // r0
  char v25; // r12
  int v27; // r1
  bool v28; // zf
  _BYTE v32[2]; // [sp+18h] [bp-Ch] BYREF
  int v33; // [sp+1Ah] [bp-Ah] BYREF
  char v34; // [sp+1Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 140) )
    return 4;
  v9 = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v33 = 0;
  v11 = *(_WORD *)(a2 + 10);
  v32[0] = 85;
  v12 = (16 * (v10 & 1)) | 2;
  v13 = 1;
  v33 = v12 & 0x1F | 0x40;
  v14 = &v33;
  HIBYTE(v33) = v11;
  v15 = (unsigned __int8)v33;
  v34 = 0;
  v16 = 1;
  v17 = 1;
  v18 = 1;
  v32[1] = -86;
  v19 = 1;
  BYTE1(v33) = 5;
  v20 = 32;
  v21 = 128;
  while ( 1 )
  {
    ++v9;
    v22 = (v15 & v21) != 0;
    v23 = (unsigned __int8)(v22 ^ v19);
    v21 >>= 1;
    v24 = (unsigned __int8)(v23 ^ v18);
    if ( v9 == 8 )
      break;
    if ( !--v20 )
      goto LABEL_9;
LABEL_5:
    v19 = v13;
    v18 = v17;
    v13 = v16;
    v17 = v23;
    v16 = v24;
  }
  --v20;
  v9 = 0;
  v21 = 128;
  v14 = (int *)((char *)v14 + 1);
  if ( v20 )
  {
    v15 = *(unsigned __int8 *)v14;
    goto LABEL_5;
  }
LABEL_9:
  if ( v13 )
    v25 = 24;
  else
    v25 = 8;
  if ( v13 )
    LOBYTE(v13) = 16;
  if ( !v16 )
    v25 = v13;
  if ( v23 != v18 )
    v25 |= 4u;
  if ( v17 )
    v25 |= 2u;
  if ( v22 != v19 )
    v25 |= 1u;
  v34 = v34 & 0xE0 | v25 & 0x1F;
  send_command_packet(a1, v32, 7u);
  v27 = *(unsigned __int8 *)(a2 + 8);
  v28 = v27 == 0;
  if ( *(_BYTE *)(a2 + 8) )
    v27 = a3;
  if ( v28 )
    v27 = 1;
  return (*(int (__fastcall **)(int, int, int, int, int, int))(a1 + 168))(a1, v27, a4, a5, a7, a8);
}
