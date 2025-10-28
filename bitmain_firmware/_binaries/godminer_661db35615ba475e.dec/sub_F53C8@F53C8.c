int __fastcall sub_F53C8(int a1, __int64 *a2)
{
  __int64 v2; // r2
  __int64 *v5; // r11
  const char *v6; // r1
  int v7; // r12
  __int64 *v8; // lr
  unsigned int v9; // r10
  unsigned int v10; // t1
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  size_t v17; // r5
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r2
  void (__fastcall *v22)(int, __int64 *); // r3
  __int64 v24; // [sp+0h] [bp-DCh] BYREF
  char dest[64]; // [sp+8h] [bp-D4h] BYREF
  _BYTE v26[80]; // [sp+48h] [bp-94h] BYREF
  int v27; // [sp+98h] [bp-44h]
  int v28; // [sp+9Ch] [bp-40h]
  int v29; // [sp+A0h] [bp-3Ch]
  int v30; // [sp+A4h] [bp-38h]
  int v31; // [sp+A8h] [bp-34h]
  int v32; // [sp+ACh] [bp-30h]
  int v33; // [sp+B0h] [bp-2Ch]
  int v34; // [sp+B4h] [bp-28h]
  int v35; // [sp+B8h] [bp-24h]
  _BYTE v36[16]; // [sp+BCh] [bp-20h] BYREF
  size_t v37; // [sp+CCh] [bp-10h]
  int v38; // [sp+D0h] [bp-Ch]

  v2 = *a2;
  v5 = a2 + 37;
  v6 = (const char *)*((_DWORD *)a2 + 96);
  v24 = v2;
  strcpy(dest, v6);
  memcpy(v26, a2 + 1, sizeof(v26));
  v7 = 0;
  v8 = a2 + 33;
LABEL_2:
  v10 = *((_DWORD *)v5-- - 2);
  v9 = v10;
  v11 = 63;
  while ( 1 )
  {
    v12 = __PAIR64__(*((_DWORD *)v5 + 1), v9) >> v11--;
    if ( (v12 & 1) != 0 )
      break;
    v7 = (unsigned __int8)(v7 + 1);
    if ( v11 == -1 )
    {
      if ( v8 == v5 )
        break;
      goto LABEL_2;
    }
  }
  v13 = *(_DWORD *)v8;
  v14 = *((_DWORD *)a2 + 67);
  v15 = *((_DWORD *)a2 + 68);
  v16 = *((_DWORD *)a2 + 69);
  v17 = *((_DWORD *)a2 + 97);
  v27 = v7;
  v28 = v13;
  v29 = v14;
  v30 = v15;
  v31 = v16;
  v18 = *((_DWORD *)a2 + 71);
  v19 = *((_DWORD *)a2 + 72);
  v20 = *((_DWORD *)a2 + 73);
  v32 = *((_DWORD *)a2 + 70);
  v33 = v18;
  v34 = v19;
  v35 = v20;
  memcpy(v36, *((const void **)a2 + 98), v17);
  v21 = *((_DWORD *)a2 + 118);
  v37 = v17;
  v22 = *(void (__fastcall **)(int, __int64 *))(a1 + 20);
  v38 = v21;
  v22(a1, &v24);
  return 0;
}
