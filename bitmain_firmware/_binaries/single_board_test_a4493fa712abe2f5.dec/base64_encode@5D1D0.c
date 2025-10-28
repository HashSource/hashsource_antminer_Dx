int __fastcall base64_encode(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r6
  bool v7; // cc
  int v8; // r7
  char v9; // lr
  unsigned int v10; // r3
  int v11; // r6
  bool v12; // cc
  int v13; // r6
  char v14; // r7
  char v15; // r6
  char v16; // r3
  int v17; // r2
  int v18; // r3

  if ( a3 > 0 )
  {
    v3 = result;
    v4 = 0;
    do
    {
      v5 = *(unsigned __int8 *)(a2 + v4);
      v6 = v4 + 1;
      v7 = a3 <= v4 + 1;
      v8 = v4 + 2;
      v9 = 65;
      v4 += 3;
      if ( v7 )
        v4 = v6;
      v10 = v5 << 16;
      if ( !v7 )
      {
        v11 = *(unsigned __int8 *)(a2 + v6);
        v12 = a3 <= v8;
        if ( a3 <= v8 )
        {
          v4 = v8;
          v9 = aAbcdefghijklmn[0];
        }
        else
        {
          v8 = *(unsigned __int8 *)(a2 + v8);
        }
        v13 = v11 << 8;
        v10 += v12 ? v13 : v8 + v13;
        if ( !v12 )
          v9 = *((_BYTE *)&unk_FCBB0 + (v10 & 0x3F) + 272);
      }
      v14 = *((_BYTE *)&unk_FCBB0 + ((v10 >> 12) & 0x3F) + 272);
      v15 = *((_BYTE *)&unk_FCBB0 + ((v10 >> 6) & 0x3F) + 272);
      v16 = *((_BYTE *)&unk_FCBB0 + (v10 >> 18) + 272);
      v3 += 4;
      *(_BYTE *)(v3 - 1) = v9;
      *(_BYTE *)(v3 - 3) = v14;
      *(_BYTE *)(v3 - 2) = v15;
      *(_BYTE *)(v3 - 4) = v16;
    }
    while ( v4 < a3 );
  }
  v17 = 8 * a3;
  v18 = v17 / 6;
  if ( v17 != 6 * (v17 / 6) )
    ++v18;
  *(_BYTE *)(result + v18) = 61;
  return result;
}
