int __fastcall decred_hash(int *a1, char *a2)
{
  int v3; // r5
  int v4; // r0
  unsigned int v5; // r3
  bool v6; // zf
  unsigned int v7; // r1
  unsigned int v8; // r8
  unsigned int v9; // r2
  unsigned int v10; // r6
  size_t v11; // r9
  int v12; // r3
  int v13; // r8
  int v14; // r7
  int v15; // r6
  int v16; // r5
  int v17; // lr
  int v18; // r12
  int result; // r0
  unsigned __int8 v20; // r9
  char v21[56]; // [sp+4h] [bp-BCh] BYREF
  unsigned int v22; // [sp+3Ch] [bp-84h]
  unsigned int v23; // [sp+40h] [bp-80h]
  unsigned int v24[16]; // [sp+44h] [bp-7Ch] BYREF
  int v25; // [sp+84h] [bp-3Ch]
  int v26; // [sp+88h] [bp-38h]
  int v27; // [sp+8Ch] [bp-34h]
  int v28; // [sp+90h] [bp-30h]
  int v29; // [sp+94h] [bp-2Ch]
  int v30; // [sp+98h] [bp-28h]
  int v31; // [sp+9Ch] [bp-24h]
  int v32; // [sp+A0h] [bp-20h]
  int v33; // [sp+A4h] [bp-1Ch]
  int v34; // [sp+A8h] [bp-18h]
  int v35; // [sp+ACh] [bp-14h]
  int v36; // [sp+B0h] [bp-10h]
  int v37; // [sp+B4h] [bp-Ch]
  int v38; // [sp+B8h] [bp-8h]
  int v39; // [sp+BCh] [bp-4h]

  v26 = 1779033703;
  v27 = -1150833019;
  v28 = 1013904242;
  v29 = -1521486534;
  v30 = 1359893119;
  v31 = -1694144372;
  v32 = 528734635;
  v33 = 1541459225;
  blake256_rounds = 14;
  v39 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v25 = 0;
  sph_blake256_0(v24, a2, 0xB4u);
  v3 = v25;
  v4 = v38;
  v5 = v39;
  v6 = v25 == 0;
  v7 = 8 * v25;
  v21[v25] = 0x80;
  v8 = bswap32(v5);
  v9 = v7 + v4;
  if ( v6 )
  {
    v10 = bswap32(v9);
    v38 = -512;
    v11 = 64;
    v12 = 1;
    v39 = -1;
  }
  else
  {
    v38 = v9 - 512;
    if ( !v4 )
      v39 = v5 - 1;
    v12 = v3 + 1;
    v10 = bswap32(v9);
    v11 = 64 - v3;
    if ( v7 > 0x1BE )
    {
      memset(&v21[v3 + 1], 0, 63 - v3);
      sph_blake256_0(v24, &v21[v3], 64 - v3);
      v38 = -512;
      v39 = -1;
      memset(v21, 0, sizeof(v21));
      v22 = v8;
      v23 = v10;
      v21[55] = 1;
      sph_blake256_0(v24, v21, 0x40u);
      goto LABEL_5;
    }
  }
  memset(&v21[v12], 0, 55 - v3);
  v22 = v8;
  v23 = v10;
  v21[55] |= 1u;
  sph_blake256_0(v24, &v21[v3], v11);
LABEL_5:
  v13 = v27;
  v14 = v28;
  v15 = v29;
  v16 = v30;
  v17 = v31;
  v18 = v32;
  result = v33;
  v20 = HIBYTE(v27);
  *a1 = HIBYTE(v26) | (unsigned __int16)(BYTE2(v26) << 8) | (BYTE1(v26) << 16) & 0xFFFFFF | ((unsigned __int8)v26 << 24);
  a1[1] = v20 | (unsigned __int16)(BYTE2(v13) << 8) | (BYTE1(v13) << 16) & 0xFFFFFF | ((unsigned __int8)v13 << 24);
  a1[2] = HIBYTE(v14)
        | (unsigned __int16)(BYTE2(v14) << 8)
        | (BYTE1(v14) << 16) & 0xFFFFFF
        | ((unsigned __int8)v14 << 24);
  a1[3] = HIBYTE(v15)
        | (unsigned __int16)(BYTE2(v15) << 8)
        | (BYTE1(v15) << 16) & 0xFFFFFF
        | ((unsigned __int8)v15 << 24);
  a1[4] = HIBYTE(v16)
        | (unsigned __int16)(BYTE2(v16) << 8)
        | (BYTE1(v16) << 16) & 0xFFFFFF
        | ((unsigned __int8)v16 << 24);
  a1[5] = HIBYTE(v17)
        | (unsigned __int16)(BYTE2(v17) << 8)
        | (BYTE1(v17) << 16) & 0xFFFFFF
        | ((unsigned __int8)v17 << 24);
  a1[6] = HIBYTE(v18)
        | (unsigned __int16)(BYTE2(v18) << 8)
        | (BYTE1(v18) << 16) & 0xFFFFFF
        | ((unsigned __int8)v18 << 24);
  a1[7] = HIBYTE(result)
        | (unsigned __int16)(BYTE2(result) << 8)
        | (BYTE1(result) << 16) & 0xFFFFFF
        | ((unsigned __int8)result << 24);
  return result;
}
