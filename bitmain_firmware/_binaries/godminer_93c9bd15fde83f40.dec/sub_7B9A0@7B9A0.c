int __fastcall sub_7B9A0(_DWORD *a1, int a2, char *a3)
{
  char *v5; // r4
  char *v6; // r9
  char *v7; // r5
  int v8; // t1
  char *v9; // r0
  int v10; // r5
  int v11; // r4
  int v12; // r5
  int v13; // r4
  char *v14; // r9
  int v15; // t1
  char *v16; // r0
  _DWORD *v17; // r4
  char *v18; // r11
  int v19; // t1
  char *v20; // r0
  int v21; // r3
  const char *v22; // r12
  const char *v24; // [sp+4h] [bp-60h]
  char v26[12]; // [sp+24h] [bp-40h] BYREF
  char s[12]; // [sp+30h] [bp-34h] BYREF
  char v28[40]; // [sp+3Ch] [bp-28h] BYREF

  v5 = (char *)a1 + 367;
  v6 = (char *)a1 + 371;
  v7 = s;
  do
  {
    v8 = (unsigned __int8)*++v5;
    v9 = v7;
    v7 += 2;
    sprintf(v9, "%02x", v8);
  }
  while ( v5 != v6 );
  v10 = a1[97];
  v11 = a1[98];
  if ( v10 )
  {
    v12 = v11 + v10 - 1;
    v13 = v11 - 1;
    v14 = v28;
    do
    {
      v15 = *(unsigned __int8 *)++v13;
      v16 = v14;
      v14 += 2;
      sprintf(v16, "%02x", v15);
    }
    while ( v13 != v12 );
  }
  v17 = (_DWORD *)((char *)a1 + 471);
  v18 = v26;
  do
  {
    v19 = *((unsigned __int8 *)v17 + 1);
    v17 = (_DWORD *)((char *)v17 + 1);
    v20 = v18;
    v18 += 2;
    sprintf(v20, "%02x", v19);
  }
  while ( (_DWORD *)((char *)a1 + 475) != v17 );
  v21 = *(_DWORD *)(a2 + 1288);
  v22 = *(const char **)(a2 + 12);
  v24 = (const char *)a1[96];
  *(_DWORD *)(a2 + 1288) = v21 + 1;
  snprintf(
    a3,
    0x400u,
    "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"]}",
    v21,
    v22,
    v24,
    v28,
    v26,
    s);
  return 0;
}
