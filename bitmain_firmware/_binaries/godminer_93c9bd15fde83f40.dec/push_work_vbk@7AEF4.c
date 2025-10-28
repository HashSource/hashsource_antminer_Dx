int __fastcall push_work_vbk(int a1, __int64 *a2)
{
  __int64 v3; // r2
  __int64 *v4; // lr
  __int64 *v5; // r8
  int (__fastcall *v6)(int, __int64 *); // r5
  int v8; // r1
  _DWORD *v9; // r7
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r3
  char *v16; // r2
  __int64 *v17; // r12
  int v18; // r4
  char v19; // r3
  unsigned int v20; // t1
  unsigned __int8 v21; // r1
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  __int64 v28; // [sp+0h] [bp-10h] BYREF
  int v29; // [sp+8h] [bp-8h]
  int v30; // [sp+Ch] [bp-4h]
  _DWORD v31[26]; // [sp+10h] [bp+0h] BYREF

  v3 = *a2;
  v4 = a2 + 1;
  v5 = a2 + 9;
  v6 = *(int (__fastcall **)(int, __int64 *))(a1 + 24);
  v8 = *((_DWORD *)a2 + 117);
  v9 = v31;
  v28 = v3;
  v30 = 0;
  v29 = v8;
  do
  {
    v10 = *(_DWORD *)v4;
    v4 += 2;
    v11 = *((_DWORD *)v4 - 3);
    v12 = v9;
    v13 = *((_DWORD *)v4 - 2);
    v9 += 4;
    v14 = *((_DWORD *)v4 - 1);
    *v12 = v10;
    v12[1] = v11;
    v12[2] = v13;
    v12[3] = v14;
  }
  while ( v4 != v5 );
  v15 = *((_DWORD *)a2 + 118);
  v16 = (char *)a2 + 263;
  v17 = a2 + 33;
  v18 = 0;
  v31[16] = v15;
  do
  {
    v20 = (unsigned __int8)*++v16;
    v19 = v20;
    v21 = v18 + 8;
    if ( v20 >> 7 )
      break;
    if ( (v19 & 0x40) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 1);
      break;
    }
    if ( (v19 & 0x20) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 2);
      break;
    }
    if ( (v19 & 0x10) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 3);
      break;
    }
    if ( (v19 & 8) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 4);
      break;
    }
    if ( (v19 & 4) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 5);
      break;
    }
    if ( (v19 & 2) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 6);
      break;
    }
    if ( (v19 & 1) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 7);
      break;
    }
    v18 = v21;
  }
  while ( v21 != 64 );
  v22 = *(_DWORD *)v17;
  v23 = *((_DWORD *)v17 + 1);
  v24 = *((_DWORD *)v17 + 2);
  v25 = *((_DWORD *)v17 + 3);
  v31[17] = v18;
  v31[18] = v22;
  v31[19] = v23;
  v31[20] = v24;
  v31[21] = v25;
  v26 = *((_DWORD *)v17 + 5);
  v31[22] = *((_DWORD *)v17 + 4);
  v31[23] = v26;
  return v6(a1, &v28);
}
