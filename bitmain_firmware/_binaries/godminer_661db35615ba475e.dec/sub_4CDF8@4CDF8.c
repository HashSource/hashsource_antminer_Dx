__int64 __fastcall sub_4CDF8(int a1, int a2)
{
  char v3; // r9
  unsigned int v4; // r10
  unsigned int v5; // r6
  _QWORD *v6; // r4
  int v7; // r7
  int v8; // r0
  __int64 v9; // r0
  int v10; // r12
  __int64 v11; // r0
  int v12; // r12
  __int64 v13; // r0
  int v14; // r12
  unsigned int v15; // r2
  _QWORD *v16; // r6
  __int64 v17; // kr00_8
  int v18; // r0
  _QWORD v20[64]; // [sp+0h] [bp-200h] BYREF

  v3 = a2;
  v4 = a2 & 0xFFFFFFC0;
  memset(v20, 0, sizeof(v20));
  v5 = v4 + 1;
  v6 = &v20[5];
  v7 = 0;
  (*(void (**)(void))(*(_DWORD *)(a1 + 92) + 84))();
  do
  {
    v8 = *(_DWORD *)(a1 + 92);
    __pld(v6);
    v7 += 4;
    v6 += 4;
    (*(void (**)(void))(v8 + 80))();
    v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))();
    v10 = *(_DWORD *)(a1 + 92);
    *(v6 - 9) = v9;
    (*(void (__fastcall **)(int, _DWORD, unsigned int, _DWORD))(v10 + 80))(v10, *(_DWORD *)(v10 + 80), v5, 0);
    v11 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))();
    v12 = *(_DWORD *)(a1 + 92);
    *(v6 - 8) = v11;
    (*(void (__fastcall **)(int, _DWORD, unsigned int, _DWORD))(v12 + 80))(v12, *(_DWORD *)(v12 + 80), v5 + 1, 0);
    v13 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))();
    v14 = *(_DWORD *)(a1 + 92);
    v15 = v5 + 2;
    *(v6 - 7) = v13;
    v5 += 4;
    (*(void (__fastcall **)(int, _DWORD, unsigned int, _DWORD))(v14 + 80))(v14, *(_DWORD *)(v14 + 80), v15, 0);
    *(v6 - 6) = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))();
  }
  while ( v7 != 60 );
  v16 = &v20[59];
  v17 = v4 + 60;
  do
  {
    (*(void (**)(void))(*(_DWORD *)(a1 + 92) + 80))();
    v16[1] = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))();
    ++v16;
    ++v17;
  }
  while ( v16 != &v20[62] );
  (*(void (**)(void))(*(_DWORD *)(a1 + 92) + 80))();
  v18 = *(_DWORD *)(a1 + 92);
  v20[63] = 0;
  return ((__int64 (*)(void))*(_DWORD *)(v18 + 76))() ^ v20[v3 & 0x3F];
}
