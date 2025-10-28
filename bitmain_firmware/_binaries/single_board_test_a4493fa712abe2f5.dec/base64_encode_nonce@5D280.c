int __fastcall base64_encode_nonce(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r7
  int result; // r0
  int v6; // r4
  int v7; // r1
  _BYTE *v8; // r3
  bool v9; // zf
  _BYTE *v10; // lr
  int v11; // r6
  char v12; // r7
  unsigned int v13; // r3
  bool v14; // cc
  int v15; // r1
  char v16; // r6
  char v17; // r1
  char v18; // r3
  _BYTE v19[4]; // [sp+0h] [bp-Ch]
  int v20; // [sp+4h] [bp-8h]
  _BYTE v21[4]; // [sp+8h] [bp-4h] BYREF

  v3 = a1 >> 8;
  v4 = HIBYTE(a1);
  v19[0] = a1;
  v20 = a2;
  v19[2] = BYTE2(a1);
  result = 0;
  v19[1] = v3;
  v6 = a3;
  v19[3] = v4;
  do
  {
    v7 = result + 1;
    v8 = &v21[result];
    v9 = result == 7;
    v10 = &v21[result + 1];
    v11 = result + 2;
    v12 = 65;
    result += 3;
    v13 = (unsigned __int8)*(v8 - 8) << 16;
    if ( v9 )
    {
      result = v7;
    }
    else
    {
      v14 = v11 <= 7;
      if ( v11 > 7 )
      {
        result = v11;
        v12 = aAbcdefghijklmn[0];
      }
      else
      {
        v11 = (unsigned __int8)v19[v11];
      }
      v15 = (unsigned __int8)*(v10 - 8) << 8;
      if ( v14 )
        v13 += v11 + v15;
      else
        v13 += v15;
      if ( v14 )
        v12 = *((_BYTE *)&unk_FCBB0 + (v13 & 0x3F) + 272);
    }
    v16 = *((_BYTE *)&unk_FCBB0 + ((v13 >> 12) & 0x3F) + 272);
    v17 = *((_BYTE *)&unk_FCBB0 + ((v13 >> 6) & 0x3F) + 272);
    v18 = *((_BYTE *)&unk_FCBB0 + (v13 >> 18) + 272);
    v6 += 4;
    *(_BYTE *)(v6 - 1) = v12;
    *(_BYTE *)(v6 - 3) = v16;
    *(_BYTE *)(v6 - 2) = v17;
    *(_BYTE *)(v6 - 4) = v18;
  }
  while ( result <= 7 );
  *(_BYTE *)(a3 + 11) = 61;
  return result;
}
