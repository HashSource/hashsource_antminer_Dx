int __fastcall pcba_ckb_send(int a1, int a2)
{
  int *v2; // r4
  _BYTE *v3; // r7
  int *v4; // r6
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r3
  char v11; // r1
  _BYTE v13[128]; // [sp+0h] [bp-28h] BYREF

  v2 = (int *)(a2 + 4);
  v3 = &v13[40];
  v4 = (int *)(a2 + 52);
  memset(v13, 0, sizeof(v13));
  do
  {
    v6 = *v2;
    v2 += 4;
    v7 = *(v2 - 3);
    v8 = v3;
    v9 = *(v2 - 2);
    v3 += 16;
    v10 = *(v2 - 1);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v9;
    v8[3] = v10;
  }
  while ( v2 != v4 );
  sub_F712C(v13[83], *(_DWORD *)(a1 + 224));
  v13[83] = v11;
  memset(&v13[92], 255, 0x20u);
  return (*(int (__fastcall **)(int, _BYTE *))(a1 + 20))(a1, v13);
}
