int __fastcall sub_59D54(int a1, __int64 *a2)
{
  __int64 v2; // r2
  __int64 *v5; // r7
  const char *v6; // r1
  char *v7; // r6
  __int64 *v8; // r12
  int v9; // r0
  int v10; // r1
  char *v11; // lr
  int v12; // r2
  int v13; // r3
  __int64 *v14; // r6
  __int64 *v15; // r2
  int v16; // lr
  char v17; // r3
  unsigned int v18; // t1
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  void (__fastcall *v23)(int, __int64 *); // r4
  int v24; // r1
  int v25; // r2
  int v26; // r3
  __int64 v28; // [sp+0h] [bp-84h] BYREF
  char dest[32]; // [sp+8h] [bp-7Ch] BYREF
  char v30; // [sp+28h] [bp-5Ch] BYREF
  int v31; // [sp+58h] [bp-2Ch]
  int v32; // [sp+5Ch] [bp-28h]
  int v33; // [sp+60h] [bp-24h]
  int v34; // [sp+64h] [bp-20h]
  int v35; // [sp+68h] [bp-1Ch]
  int v36; // [sp+6Ch] [bp-18h]
  int v37; // [sp+70h] [bp-14h]
  int v38; // [sp+74h] [bp-10h]
  int v39; // [sp+78h] [bp-Ch]

  v2 = *a2;
  v5 = a2 + 7;
  v6 = (const char *)*((_DWORD *)a2 + 96);
  v7 = &v30;
  v28 = v2;
  strcpy(dest, v6);
  v8 = a2 + 1;
  do
  {
    v9 = *(_DWORD *)v8;
    v8 += 2;
    v10 = *((_DWORD *)v8 - 3);
    v11 = v7;
    v12 = *((_DWORD *)v8 - 2);
    v7 += 16;
    v13 = *((_DWORD *)v8 - 1);
    *(_DWORD *)v11 = v9;
    *((_DWORD *)v11 + 1) = v10;
    *((_DWORD *)v11 + 2) = v12;
    *((_DWORD *)v11 + 3) = v13;
  }
  while ( v8 != v5 );
  v14 = a2 + 33;
  v15 = (__int64 *)((char *)a2 + 263);
  v16 = 0;
  do
  {
    v18 = *((unsigned __int8 *)v15 + 1);
    v15 = (__int64 *)((char *)v15 + 1);
    v17 = v18;
    if ( v18 >> 7 )
      break;
    if ( (v17 & 0x40) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 1);
      break;
    }
    if ( (v17 & 0x20) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 2);
      break;
    }
    if ( (v17 & 0x10) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 3);
      break;
    }
    if ( (v17 & 8) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 4);
      break;
    }
    if ( (v17 & 4) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 5);
      break;
    }
    if ( (v17 & 2) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 6);
      break;
    }
    if ( (v17 & 1) != 0 )
    {
      v16 = (unsigned __int8)(v16 + 7);
      break;
    }
    v16 = (unsigned __int8)(v16 + 8);
  }
  while ( (__int64 *)((char *)a2 + 295) != v15 );
  v19 = *(_DWORD *)v14;
  v20 = *((_DWORD *)a2 + 67);
  v21 = *((_DWORD *)a2 + 68);
  v22 = *((_DWORD *)a2 + 69);
  v31 = v16;
  v23 = *(void (__fastcall **)(int, __int64 *))(a1 + 24);
  v32 = v19;
  v33 = v20;
  v34 = v21;
  v35 = v22;
  v24 = *((_DWORD *)v14 + 5);
  v25 = *((_DWORD *)v14 + 6);
  v26 = *((_DWORD *)v14 + 7);
  v36 = *((_DWORD *)v14 + 4);
  v37 = v24;
  v38 = v25;
  v39 = v26;
  v23(a1, &v28);
  return 0;
}
