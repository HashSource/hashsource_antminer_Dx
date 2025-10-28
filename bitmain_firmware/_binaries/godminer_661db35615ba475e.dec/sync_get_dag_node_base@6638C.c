int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r7
  char v8; // r6
  unsigned int v9; // r2
  _WORD *v10; // r10
  int v11; // r0
  __int16 v12; // r2
  int v13; // lr
  char v14; // r3
  int v15; // r12
  int v16; // r9
  int v17; // r8
  int v18; // r11
  int v19; // r7
  int v20; // r4
  int v21; // r0
  unsigned int v22; // r1
  unsigned __int8 *v23; // r5
  int v24; // r6
  int v25; // r3
  int v26; // r2
  char v27; // r2
  int v28; // r1
  int v33; // [sp+14h] [bp-18h]
  _BYTE v34[2]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v35[7]; // [sp+1Eh] [bp-Eh]
  char v36; // [sp+25h] [bp-7h]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v7 = *(_BYTE *)(a2 + 8);
  *(_DWORD *)v35 = 0;
  v8 = *(_BYTE *)(a2 + 9);
  v9 = bswap32(*(_DWORD *)(a2 + 4));
  v36 = 0;
  v35[0] = (16 * (v7 & 1)) & 0x19 | 0x46;
  v35[2] = v8;
  *(_DWORD *)&v35[3] = v9;
  v35[1] = 8;
  v34[0] = 85;
  v34[1] = -86;
  v10 = calloc(8u, 1u);
  v11 = *(_DWORD *)v35;
  v12 = *(_WORD *)&v35[4];
  v13 = 1;
  v14 = v35[6];
  v15 = 0;
  v10[3] = 0;
  v16 = (unsigned __int8)v11;
  *(_DWORD *)v10 = v11;
  v33 = a2;
  v17 = 1;
  v10[2] = v12;
  v18 = 1;
  *((_BYTE *)v10 + 6) = v14;
  v19 = 1;
  v20 = 1;
  v21 = 64;
  v22 = 128;
  v23 = (unsigned __int8 *)v10;
  while ( 1 )
  {
    ++v15;
    v24 = (v16 & v22) != 0;
    v25 = (unsigned __int8)(v24 ^ v20);
    v22 >>= 1;
    v26 = (unsigned __int8)(v25 ^ v19);
    if ( v15 == 8 )
      break;
    if ( !--v21 )
      goto LABEL_8;
LABEL_4:
    v20 = v13;
    v19 = v18;
    v13 = v17;
    v18 = v25;
    v17 = v26;
  }
  --v21;
  v15 = 0;
  v22 = 128;
  ++v23;
  if ( v21 )
  {
    v16 = *v23;
    goto LABEL_4;
  }
LABEL_8:
  if ( v13 )
    v27 = 24;
  else
    v27 = 8;
  if ( v13 )
    LOBYTE(v13) = 16;
  if ( !v17 )
    v27 = v13;
  if ( v25 != v19 )
    v27 |= 4u;
  if ( v18 )
    v27 |= 2u;
  if ( v24 != v20 )
    v27 |= 1u;
  v36 = v36 & 0xE0 | v27 & 0x1F;
  free(v10);
  send_command_packet(a1, v34, 0xAu);
  v28 = a3;
  if ( !*(_BYTE *)(v33 + 8) )
    v28 = 1;
  if ( *(_BYTE *)(a1 + 128) )
    return sub_66150(a1, v28, a4, a5, a6);
  else
    return 4;
}
