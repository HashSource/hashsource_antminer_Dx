int __fastcall work_2_packet_ae(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v5; // r6
  const char *v8; // r1
  int v9; // lr
  _DWORD *v10; // r12
  _DWORD *v11; // r12
  int v12; // r11
  int v13; // r10
  int v14; // lr
  _DWORD *v15; // r3
  int v16; // r1
  int v17; // r11
  int v18; // r10
  int v19; // lr
  int v20; // r2
  int v21; // r3
  int v22; // lr
  bool v23; // zf
  int v24; // r11
  int v25; // r10
  unsigned int v26; // r3
  int v27; // lr
  int v28; // lr
  char v29; // r11
  char v30; // lr
  char v31; // r3
  int v32; // r3
  int v33; // r2
  int v34; // r0
  char v35; // r3
  unsigned int v36; // r1
  unsigned __int8 *v37; // r0
  int v38; // t1
  unsigned __int16 v39; // r3

  v5 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 32;
  *(_BYTE *)(a3 + 1) = -86;
  v8 = (const char *)(a2 + 2);
  if ( *(_DWORD *)(a1 + 288) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 113920) + 32)), v8);
  v9 = a2[1];
  v10 = (_DWORD *)(v5 + 8 * *(unsigned __int8 *)(v5 + 113920));
  *v10 = *a2;
  v10[1] = v9;
  memset((void *)(a3 + 5), 0, 0x50u);
  v11 = a2 + 10;
  v12 = a2[11];
  v13 = a2[12];
  v14 = a2[13];
  v15 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 113920) + 232));
  *v15 = a2[10];
  v16 = a3 + 5;
  v15[1] = v12;
  v15[2] = v13;
  v15[3] = v14;
  v17 = a2[15];
  v18 = a2[16];
  v19 = a2[17];
  v15[4] = a2[14];
  v20 = 0;
  v15[5] = v17;
  v15[6] = v18;
  v15[7] = v19;
  do
  {
    v21 = *((unsigned __int8 *)v11 + v20);
    v22 = v20 + 1;
    v23 = v20 == 31;
    v24 = v20 + 2;
    LOBYTE(v25) = 65;
    v20 += 3;
    if ( v23 )
      v20 = v22;
    v26 = v21 << 16;
    if ( !v23 )
    {
      v27 = *((unsigned __int8 *)v11 + v22);
      if ( v24 > 31 )
      {
        v20 = v24;
        v25 = (unsigned __int8)aAbcdefghijklmn[0];
      }
      else
      {
        v25 = *((unsigned __int8 *)v11 + v24);
      }
      v28 = v27 << 8;
      v26 += v24 > 31 ? v28 : v25 + v28;
      if ( v24 <= 31 )
        LOBYTE(v25) = aAbcdefghijklmn[v26 & 0x3F];
    }
    v29 = aAbcdefghijklmn[(v26 >> 12) & 0x3F];
    v30 = aAbcdefghijklmn[v26 >> 18];
    v31 = aAbcdefghijklmn[(v26 >> 6) & 0x3F];
    v16 += 4;
    *(_BYTE *)(v16 - 1) = v25;
    *(_BYTE *)(v16 - 4) = v30;
    *(_BYTE *)(v16 - 3) = v29;
    *(_BYTE *)(v16 - 2) = v31;
  }
  while ( v20 <= 31 );
  *(_BYTE *)(a3 + 48) = 61;
  v32 = a2[19];
  *(_DWORD *)(a3 + 49) = a2[18];
  *(_DWORD *)(a3 + 53) = v32;
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 113920) + 11520), (const void *)(a3 + 5), 0x50u);
  v33 = *(unsigned __int8 *)(v5 + 113920);
  v34 = a2[34];
  *(_DWORD *)(v5 + 8 * (v33 + 768)) = a2[33];
  v35 = v33 + 1;
  v36 = 0xFFFF;
  *(_DWORD *)(v5 + 8 * (v33 + 768) + 4) = v34;
  *(_BYTE *)(a3 + 4) = v33;
  if ( (((_BYTE)v33 + 1) & 0x80) != 0 )
    v35 = 0;
  v37 = (unsigned __int8 *)(a3 + 2);
  *(_BYTE *)(v5 + 113920) = v35;
  *(_BYTE *)(a3 + 3) = 80;
  do
  {
    v38 = *v37++;
    v39 = crc_itu_t_table[v38 ^ (v36 >> 8)] ^ ((_WORD)v36 << 8);
    v36 = v39;
  }
  while ( v37 != (unsigned __int8 *)(a3 + 85) );
  *(_BYTE *)(a3 + 86) = v39;
  *(_BYTE *)(a3 + 85) = HIBYTE(v39);
  *a4 = 87;
  return 0;
}
