int __fastcall blake2b_init(int a1, int a2, int a3, unsigned int a4)
{
  bool v5; // cc
  const char *v6; // r4
  int v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r8
  size_t v17; // r2
  int result; // r0
  int v19; // r10
  int v20; // r1
  int v21; // r9
  int v22; // r2
  int v23; // t1
  __int64 v24; // kr00_8
  __int64 v25; // kr08_8
  int v26; // [sp+0h] [bp-4h]
  int savedregs; // [sp+4h] [bp+0h]

  v26 = a4;
  v5 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v5 = (unsigned int)(a2 - 1) > 0x3F;
  if ( v5 )
    return -1;
  v6 = (const char *)&unk_FCC70;
  v10 = a1 + 128;
  do
  {
    v10 += 16;
    v11 = *(_DWORD *)v6;
    v12 = *((_DWORD *)v6 + 1);
    v13 = *((_DWORD *)v6 + 2);
    v14 = *((_DWORD *)v6 + 3);
    v6 += 16;
    *(_DWORD *)(v10 - 16) = v11;
    *(_DWORD *)(v10 - 12) = v12;
    *(_DWORD *)(v10 - 8) = v13;
    *(_DWORD *)(v10 - 4) = v14;
  }
  while ( v6 != "dev_config_hal" );
  v15 = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 212) = a2;
  v16 = a3;
  v17 = 128 - a4;
  *(_DWORD *)(a1 + 128) = a2 ^ (a4 << 8) ^ 0x1010000 ^ v15;
  if ( a4 + 1 > 0x80 )
    v17 = 1;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  memset((void *)(a1 + a4), 0, v17);
  result = a4;
  if ( a4 )
  {
    v19 = a3 - 1;
    v20 = 0;
    v21 = a4 + v16 - 1;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 208) = v20 + 1;
      v23 = *(unsigned __int8 *)++v19;
      v22 = v23;
      *(_BYTE *)(a1 + v20) = v23;
      if ( v21 == v19 )
        break;
      if ( v20 == 127 )
      {
        v24 = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = v24 + 128;
        if ( (unsigned __int64)(v24 + 128) < 0x80 )
        {
          v25 = *(_QWORD *)(a1 + 200) + 1LL;
          *(_QWORD *)(a1 + 200) = v25;
          v24 = v25;
        }
        sub_57088((_DWORD *)a1, 0, v22, v24, v26, savedregs);
        *(_DWORD *)(a1 + 208) = 0;
        v20 = 0;
      }
      else
      {
        ++v20;
      }
    }
    *(_DWORD *)(a1 + 208) = 128;
    return 0;
  }
  return result;
}
