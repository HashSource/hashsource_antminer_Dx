int __fastcall base64_encode_nonce(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // r6
  unsigned int v4; // r5
  int result; // r0
  int v6; // r12
  int v7; // r1
  bool v8; // zf
  int v9; // r3
  int v10; // r5
  _BYTE *v11; // r7
  _BYTE *v12; // r6
  int v13; // r4
  unsigned int v14; // r3
  int v15; // r1
  char v16; // r4
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
    v8 = result == 7;
    v9 = (unsigned __int8)v19[result];
    v10 = result + 2;
    v11 = &v21[result + 1];
    v12 = &v21[result + 2];
    result += 3;
    LOBYTE(v13) = 65;
    if ( v8 )
      result = v7;
    v14 = v9 << 16;
    if ( !v8 )
    {
      if ( v10 > 7 )
      {
        result = v10;
        v13 = (unsigned __int8)aAbcdefghijklmn[0];
      }
      else
      {
        v13 = (unsigned __int8)*(v12 - 8);
      }
      v15 = (unsigned __int8)*(v11 - 8) << 8;
      if ( v10 > 7 )
        v14 += v15;
      else
        v14 += v13 + v15;
      if ( v10 <= 7 )
        LOBYTE(v13) = *((_BYTE *)&unk_18FFF8 + (v14 & 0x3F) + 1584);
    }
    *(_BYTE *)(v6 + 3) = v13;
    v16 = *((_BYTE *)&unk_18FFF8 + ((v14 >> 12) & 0x3F) + 1584);
    v17 = *((_BYTE *)&unk_18FFF8 + ((v14 >> 6) & 0x3F) + 1584);
    v18 = *((_BYTE *)&unk_18FFF8 + (v14 >> 18) + 1584);
    v6 += 4;
    *(_BYTE *)(v6 - 3) = v16;
    *(_BYTE *)(v6 - 2) = v17;
    *(_BYTE *)(v6 - 4) = v18;
  }
  while ( result <= 7 );
  *(_BYTE *)(a3 + 11) = 61;
  return result;
}
