int __fastcall blake2b(_DWORD *a1, int a2, int a3)
{
  unsigned __int64 v6; // r4
  int v7; // r8
  int v8; // r9
  unsigned int v9; // r7
  int v10; // r2
  int v11; // t1
  _BYTE *v12; // r3
  int v13; // r3
  int v14; // r12
  int v15; // r0
  int *v16; // r7
  char v17; // r1
  _BYTE *v18; // r2
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int result; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // [sp+0h] [bp-FCh] BYREF
  int v27; // [sp+4h] [bp-F8h]
  int v28; // [sp+8h] [bp-F4h]
  int v29; // [sp+Ch] [bp-F0h]
  int v30; // [sp+10h] [bp-ECh]
  int v31; // [sp+14h] [bp-E8h]
  int v32; // [sp+18h] [bp-E4h]
  int v33; // [sp+1Ch] [bp-E0h]
  _DWORD v34[48]; // [sp+20h] [bp-DCh] BYREF
  unsigned __int64 v35; // [sp+E0h] [bp-1Ch]
  __int64 v36; // [sp+E8h] [bp-14h]
  int v37; // [sp+F0h] [bp-Ch]
  int v38; // [sp+F4h] [bp-8h]
  _BYTE v39[4]; // [sp+F8h] [bp-4h] BYREF

  v34[33] = 1779033703;
  v34[34] = -2067093701;
  v34[35] = -1150833019;
  v34[36] = -23791573;
  v34[37] = 1013904242;
  v34[38] = 1595750129;
  v34[39] = -1521486534;
  v34[40] = -1377402159;
  v34[41] = 1359893119;
  v34[42] = 725511199;
  v34[43] = -1694144372;
  v34[44] = -79577749;
  v34[45] = 528734635;
  v34[46] = 327033209;
  v34[47] = 1541459225;
  v35 = 0;
  v36 = 0;
  v34[32] = -222443224;
  v38 = 32;
  memset(v34, 0, 0x80u);
  if ( !a3 )
  {
    v9 = 0;
LABEL_11:
    memset((char *)v34 + v9, 0, 128 - v9);
    v13 = 128;
    v37 = 128;
    goto LABEL_12;
  }
  v6 = 0;
  v7 = a2 - 1;
  v8 = a3 + v7;
  v9 = 0;
  while ( 1 )
  {
    v11 = *(unsigned __int8 *)++v7;
    v10 = v11;
    v12 = &v39[v9++];
    v37 = v9;
    *(v12 - 216) = v11;
    if ( v7 == v8 )
      break;
    if ( v9 == 128 )
    {
      v35 = v6 + 128;
      if ( v6 >= 0xFFFFFFFFFFFFFF80LL )
      {
        v12 = (_BYTE *)(v36 + 1);
        v10 = (unsigned __int64)++v36 >> 32;
      }
      sub_57088(v34, 0, v10, (int)v12, v26, v27);
      v9 = 0;
      v6 = v35;
    }
  }
  v35 = v6 + v9;
  v13 = __CFADD__(HIDWORD(v6), HIDWORD(v35));
  if ( __CFADD__(HIDWORD(v6), HIDWORD(v35)) )
  {
    v10 = (unsigned __int64)(v36 + 1) >> 32;
    v13 = ++v36;
  }
  if ( v9 <= 0x7F )
    goto LABEL_11;
LABEL_12:
  sub_57088(v34, 1, v10, v13, v26, v27);
  v14 = v38;
  v15 = 0;
  v16 = &v26;
  if ( v38 )
  {
    do
    {
      v17 = 8 * (v15 & 7);
      v18 = &v39[(v15++ & 0xFFFFFFF8) + 128];
      *(_BYTE *)v16 = *((_QWORD *)v18 - 27) >> v17;
      v16 = (int *)((char *)v16 + 1);
    }
    while ( v15 != v14 );
  }
  v19 = v27;
  v20 = v28;
  v21 = v29;
  *a1 = v26;
  a1[1] = v19;
  a1[2] = v20;
  a1[3] = v21;
  result = v30;
  v23 = v31;
  v24 = v32;
  v25 = v33;
  a1[4] = v30;
  a1[5] = v23;
  a1[6] = v24;
  a1[7] = v25;
  return result;
}
