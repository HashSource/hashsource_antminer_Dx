int __fastcall pcba_vbk_send(int a1, int *a2)
{
  size_t v4; // r2
  int *v5; // r1
  int v6; // r4
  _DWORD v8[30]; // [sp+0h] [bp-78h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = a2[22];
  v5 = a2 + 1;
  v6 = *a2;
  memset(&v8[22], 255, 24);
  v8[2] = v6;
  v8[3] = v6 >> 31;
  memcpy(&v8[4], v5, v4);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 20))(a1, v8);
}
