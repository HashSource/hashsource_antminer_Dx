int __fastcall blake2b(_DWORD *a1, int a2, int a3)
{
  __int64 v5; // r2
  unsigned int v6; // r12
  int v7; // r11
  int v8; // r5
  char v9; // t1
  _BYTE *v10; // r1
  bool v11; // cc
  __int64 v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r5
  int v16; // r0
  _BYTE *v17; // lr
  char v18; // r1
  _BYTE *v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int result; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // [sp+0h] [bp-104h]
  int v28; // [sp+4h] [bp-100h]
  _DWORD v29[4]; // [sp+8h] [bp-FCh] BYREF
  int v30; // [sp+18h] [bp-ECh]
  int v31; // [sp+1Ch] [bp-E8h]
  int v32; // [sp+20h] [bp-E4h]
  int v33; // [sp+24h] [bp-E0h]
  _DWORD s[48]; // [sp+28h] [bp-DCh] BYREF
  __int64 v35; // [sp+E8h] [bp-1Ch]
  __int64 v36; // [sp+F0h] [bp-14h]
  int v37; // [sp+F8h] [bp-Ch]
  int v38; // [sp+FCh] [bp-8h]
  _BYTE v39[4]; // [sp+100h] [bp-4h] BYREF

  v28 = a2;
  s[33] = 1779033703;
  s[34] = -2067093701;
  s[35] = -1150833019;
  s[36] = -23791573;
  s[37] = 1013904242;
  s[38] = 1595750129;
  s[39] = -1521486534;
  s[40] = -1377402159;
  s[41] = 1359893119;
  s[42] = 725511199;
  s[43] = -1694144372;
  s[44] = -79577749;
  s[45] = 528734635;
  s[46] = 327033209;
  s[47] = 1541459225;
  v35 = 0;
  v36 = 0;
  s[32] = -222443224;
  v38 = 32;
  memset(s, 0, 0x80u);
  if ( !a3 )
  {
    v6 = 0;
LABEL_13:
    memset((char *)s + v6, 0, 128 - v6);
    v14 = 128;
    v37 = 128;
    goto LABEL_14;
  }
  v5 = 0;
  v6 = 0;
  v7 = v28 - 1;
  v8 = v28 - 1 + a3;
  while ( 1 )
  {
    v9 = *(_BYTE *)++v7;
    v10 = &v39[v6++];
    v37 = v6;
    *(v10 - 216) = v9;
    if ( v7 == v8 )
      break;
    if ( v6 == 128 )
    {
      v11 = (unsigned __int64)(v5 + 128) >> 32 != 0;
      v35 = v5 + 128;
      if ( !((unsigned __int64)(v5 + 128) >> 32) )
        v11 = (unsigned int)(v5 + 128) > 0x7F;
      if ( !v11 )
      {
        LODWORD(v5) = (unsigned __int64)(v36 + 1) >> 32;
        HIDWORD(v5) = ++v36;
      }
      sub_14BD24(s, 0, v5, SHIDWORD(v5), v27, v28);
      v5 = v35;
      v6 = 0;
    }
  }
  v12 = v5 + v6;
  v13 = __CFADD__(HIDWORD(v5), HIDWORD(v12));
  v35 = v12;
  v14 = v13;
  if ( v13 )
  {
    v13 = (unsigned __int64)(v36 + 1) >> 32;
    v14 = ++v36;
  }
  if ( v6 <= 0x7F )
    goto LABEL_13;
LABEL_14:
  sub_14BD24(s, 1, v13, v14, v27, v28);
  v15 = v38;
  if ( v38 )
  {
    v16 = 0;
    v17 = v29;
    do
    {
      v18 = 8 * (v16 & 7);
      v19 = &v39[(v16++ & 0xFFFFFFF8) + 128];
      *v17++ = *((_QWORD *)v19 - 27) >> v18;
    }
    while ( v16 != v15 );
  }
  v20 = v29[1];
  v21 = v29[2];
  v22 = v29[3];
  *a1 = v29[0];
  a1[1] = v20;
  a1[2] = v21;
  a1[3] = v22;
  result = v30;
  v24 = v31;
  v25 = v32;
  v26 = v33;
  a1[4] = v30;
  a1[5] = v24;
  a1[6] = v25;
  a1[7] = v26;
  return result;
}
