int __fastcall sub_C2C48(int a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r6
  __int64 *v7; // lr
  __int64 *v8; // r2
  char v9; // r3
  unsigned int v10; // t1
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  void (__fastcall *v15)(int, __int64 *); // r6
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  __int64 v21; // [sp+0h] [bp-B4h] BYREF
  char dest[32]; // [sp+8h] [bp-ACh] BYREF
  _BYTE v23[80]; // [sp+28h] [bp-8Ch] BYREF
  int v24; // [sp+78h] [bp-3Ch]
  int v25; // [sp+7Ch] [bp-38h]
  int v26; // [sp+80h] [bp-34h]
  int v27; // [sp+84h] [bp-30h]
  int v28; // [sp+88h] [bp-2Ch]
  int v29; // [sp+8Ch] [bp-28h]
  int v30; // [sp+90h] [bp-24h]
  int v31; // [sp+94h] [bp-20h]
  int v32; // [sp+98h] [bp-1Ch]
  int v33; // [sp+9Ch] [bp-18h]
  int v34; // [sp+A0h] [bp-14h]
  __int64 v35; // [sp+A8h] [bp-Ch]

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 96);
  v21 = v2;
  strcpy(dest, v5);
  v35 = a2[61];
  v6 = 0;
  memcpy(v23, a2 + 1, sizeof(v23));
  v7 = a2 + 33;
  v8 = a2 + 37;
  do
  {
    v10 = *((unsigned __int8 *)v8 - 1);
    v8 = (__int64 *)((char *)v8 - 1);
    v9 = v10;
    if ( v10 >> 7 )
      break;
    if ( (v9 & 0x40) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 1);
      break;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 2);
      break;
    }
    if ( (v9 & 0x10) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 3);
      break;
    }
    if ( (v9 & 8) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 4);
      break;
    }
    if ( (v9 & 4) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 5);
      break;
    }
    if ( (v9 & 2) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 6);
      break;
    }
    if ( (v9 & 1) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 7);
      break;
    }
    v6 = (unsigned __int8)(v6 + 8);
  }
  while ( v7 != v8 );
  v11 = *(_DWORD *)v7;
  v12 = *((_DWORD *)a2 + 67);
  v13 = *((_DWORD *)a2 + 68);
  v14 = *((_DWORD *)a2 + 69);
  v24 = v6;
  v15 = *(void (__fastcall **)(int, __int64 *))(a1 + 20);
  v25 = v11;
  v26 = v12;
  v27 = v13;
  v28 = v14;
  v16 = *((_DWORD *)a2 + 71);
  v17 = *((_DWORD *)a2 + 72);
  v18 = *((_DWORD *)a2 + 73);
  v29 = *((_DWORD *)a2 + 70);
  v30 = v16;
  v31 = v17;
  v32 = v18;
  v19 = *((_DWORD *)a2 + 128);
  v33 = *((_DWORD *)a2 + 127);
  v34 = v19;
  v15(a1, &v21);
  return 0;
}
