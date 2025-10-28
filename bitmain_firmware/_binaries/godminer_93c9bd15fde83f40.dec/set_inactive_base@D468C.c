int __fastcall set_inactive_base(int a1)
{
  int v1; // r2
  int v2; // r4
  unsigned __int8 *v3; // r10
  int v4; // r9
  int v5; // r8
  int v6; // r7
  int v7; // r5
  int v8; // lr
  unsigned int v9; // r12
  int v10; // r11
  int v11; // r6
  int v12; // r3
  int v13; // r1
  char v14; // r12
  int v16; // [sp+0h] [bp-30h] BYREF
  __int16 v17; // [sp+4h] [bp-2Ch]
  char v18; // [sp+6h] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 140) )
    return 4;
  v1 = 0;
  v2 = 1;
  v17 = 0;
  v3 = (unsigned __int8 *)&v16 + 2;
  v18 = 0;
  v4 = 1;
  v16 = 89369173;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  v8 = 32;
  v9 = 128;
  v10 = 83;
  while ( 1 )
  {
    ++v1;
    v11 = (v10 & v9) != 0;
    v12 = (unsigned __int8)(v11 ^ v7);
    v9 >>= 1;
    v13 = (unsigned __int8)(v12 ^ v6);
    if ( v1 == 8 )
      break;
    if ( !--v8 )
      goto LABEL_8;
LABEL_4:
    v7 = v2;
    v6 = v5;
    v2 = v4;
    v5 = v12;
    v4 = v13;
  }
  --v8;
  v1 = 0;
  v9 = 128;
  ++v3;
  if ( v8 )
  {
    v10 = *v3;
    goto LABEL_4;
  }
LABEL_8:
  if ( v2 )
    v14 = 24;
  else
    v14 = 8;
  if ( v2 )
    LOBYTE(v2) = 16;
  if ( !v4 )
    v14 = v2;
  if ( v12 != v6 )
    v14 |= 4u;
  if ( v5 )
    v14 |= 2u;
  if ( v11 != v7 )
    v14 |= 1u;
  v18 = v18 & 0xE0 | v14 & 0x1F;
  send_command_packet(a1, &v16, 7u);
  return 0;
}
