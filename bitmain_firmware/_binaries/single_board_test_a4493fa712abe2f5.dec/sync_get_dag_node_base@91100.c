int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // lr
  char v8; // r12
  unsigned int v9; // r2
  int v10; // r4
  int v11; // r5
  int v12; // r8
  _WORD *v13; // r10
  int v14; // r0
  __int16 v15; // r2
  char v16; // r3
  int v17; // r11
  int v18; // lr
  int v19; // r9
  int v20; // r6
  int v21; // r0
  unsigned int v22; // r1
  unsigned __int8 *v23; // r7
  int v24; // r12
  int v25; // r3
  int v26; // r2
  char v27; // r2
  char v28; // r1
  int v29; // r1
  int v34; // [sp+14h] [bp-18h]
  _BYTE v35[2]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v36[7]; // [sp+1Eh] [bp-Eh]
  char v37; // [sp+25h] [bp-7h]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v7 = *(_BYTE *)(a2 + 8);
  *(_DWORD *)v36 = 0;
  v8 = *(_BYTE *)(a2 + 9);
  v9 = bswap32(*(_DWORD *)(a2 + 4));
  v37 = 0;
  v36[0] = (16 * (v7 & 1)) & 0x19 | 0x46;
  v36[2] = v8;
  *(_DWORD *)&v36[3] = v9;
  v36[1] = 8;
  v10 = 0;
  v35[0] = 85;
  v11 = 1;
  v35[1] = -86;
  v12 = 1;
  v13 = calloc(8u, 1u);
  v14 = *(_DWORD *)v36;
  v15 = *(_WORD *)&v36[4];
  v16 = v36[6];
  v17 = 1;
  v13[3] = 0;
  v18 = 1;
  v19 = (unsigned __int8)v14;
  *(_DWORD *)v13 = v14;
  v34 = a2;
  v20 = 1;
  v13[2] = v15;
  v21 = 64;
  *((_BYTE *)v13 + 6) = v16;
  v22 = 128;
  v23 = (unsigned __int8 *)v13;
  while ( 1 )
  {
    ++v10;
    v24 = (v19 & v22) != 0;
    v25 = (unsigned __int8)(v24 ^ v20);
    v22 >>= 1;
    v26 = (unsigned __int8)(v25 ^ v18);
    if ( v10 == 8 )
      break;
    if ( !--v21 )
      goto LABEL_8;
LABEL_4:
    v20 = v11;
    v18 = v17;
    v11 = v12;
    v17 = v25;
    v12 = v26;
  }
  --v21;
  ++v23;
  v10 = 0;
  v22 = 128;
  if ( v21 )
  {
    v19 = *v23;
    goto LABEL_4;
  }
LABEL_8:
  if ( v11 )
    v27 = 24;
  else
    v27 = 8;
  if ( v11 )
    v28 = 16;
  else
    v28 = 0;
  if ( !v12 )
    v27 = v28;
  if ( v25 != v18 )
    v27 |= 4u;
  if ( v17 )
    v27 |= 2u;
  if ( v24 != v20 )
    v27 |= 1u;
  v37 = v37 & 0xE0 | v27 & 0x1F;
  free(v13);
  send_command_packet(a1, v35, 0xAu);
  v29 = a3;
  if ( !*(_BYTE *)(v34 + 8) )
    v29 = 1;
  if ( *(_BYTE *)(a1 + 128) )
    return sub_90F58(a1, v29, a4, a5, a6);
  else
    return 4;
}
