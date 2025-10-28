int __fastcall pcba_dash_send(int a1, _BYTE *a2)
{
  _BYTE *v4; // r1
  _BYTE *v5; // r3
  char v6; // r5
  char v7; // r4
  char v8; // r0
  char v9; // r2
  _BYTE v11[180]; // [sp+0h] [bp-B4h] BYREF

  memset(v11, 0, 0xB0u);
  memcpy(&v11[40], a2 + 4, 0x50u);
  v4 = a2;
  v5 = v11;
  do
  {
    v6 = v4[4];
    v5 += 4;
    v7 = v4[5];
    v4 += 4;
    v8 = v4[2];
    v9 = v4[3];
    v5[39] = v6;
    v5[38] = v7;
    v5[37] = v8;
    v5[36] = v9;
  }
  while ( v5 != &v11[80] );
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 20))(a1, v11);
}
