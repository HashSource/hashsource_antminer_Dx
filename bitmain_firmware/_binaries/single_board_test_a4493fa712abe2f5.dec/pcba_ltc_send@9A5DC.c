int __fastcall pcba_ltc_send(int a1, int a2)
{
  _BYTE *v4; // r3
  _BYTE *v5; // r2
  unsigned int v6; // r1
  char v7; // r1
  char v8; // t1
  char v9; // t1
  _BYTE v11[216]; // [sp+0h] [bp-D8h] BYREF

  memset(v11, 0, sizeof(v11));
  memcpy(&v11[72], (const void *)(a2 + 4), 0x50u);
  v4 = &v11[71];
  v5 = &v11[152];
  v6 = (bswap32(*(_DWORD *)(a2 + 84)) - 10) << 7;
  v11[75] = v6;
  v11[72] = HIBYTE(v6);
  v11[73] = BYTE2(v6);
  v11[74] = BYTE1(v6);
  do
  {
    v8 = *++v4;
    v7 = v8;
    v9 = *--v5;
    *v4 = v9;
    *v5 = v7;
  }
  while ( v4 != &v11[111] );
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 20))(a1, v11);
}
