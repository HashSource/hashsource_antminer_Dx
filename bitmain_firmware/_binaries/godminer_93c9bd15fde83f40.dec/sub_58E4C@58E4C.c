int __fastcall sub_58E4C(_DWORD *a1, double *a2)
{
  int v4; // r2
  int v5; // r9
  int v6; // r0
  int *v7; // r12
  double *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // t1
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  void (__fastcall *v23)(_DWORD *, _DWORD *); // r4
  unsigned int v24; // lr
  _DWORD v26[22]; // [sp+4h] [bp-60h] BYREF
  char v27; // [sp+5Ch] [bp-8h]

  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  a1[76] = 1;
  v7 = (int *)(a2 + 1);
  v6 = *((_DWORD *)a2 + 2);
  v8 = a2;
  v26[0] = v4;
  v9 = *((_DWORD *)a2 + 3);
  v10 = v7[2];
  v11 = v7[3];
  v26[1] = v5;
  v26[20] = 0;
  v26[4] = v6;
  v26[5] = v9;
  v26[6] = v10;
  v26[7] = v11;
  v12 = v7[5];
  v13 = v7[6];
  v14 = v7[7];
  v26[8] = v7[4];
  v26[9] = v12;
  v26[10] = v13;
  v26[11] = v14;
  v15 = *((_DWORD *)v8 + 74);
  v8 += 37;
  v16 = *((_DWORD *)v8 + 1);
  v17 = *((_DWORD *)v8 + 2);
  v18 = *((_DWORD *)v8 + 3);
  v26[21] = dword_1A3FEC | (a1[33] << 28);
  v26[12] = v15;
  v26[13] = v16;
  v26[14] = v17;
  v26[15] = v18;
  v19 = *((_DWORD *)v8 + 4);
  v20 = *((_DWORD *)v8 + 5);
  v21 = *((_DWORD *)v8 + 6);
  v22 = *((_DWORD *)v8 + 7);
  v23 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[6];
  v24 = (unsigned int)a2[45];
  v26[16] = v19;
  v26[17] = v20;
  v26[18] = v21;
  v26[19] = v22;
  v27 = v24;
  v23(a1, v26);
  return 0;
}
