int __fastcall sub_59AE8(int a1, int a2, char *a3)
{
  int v5; // r4
  int v6; // r11
  char *v7; // r9
  int v8; // t1
  char *v9; // r0
  int v10; // r5
  char *v11; // r9
  int v12; // r4
  int v13; // r5
  int v14; // t1
  char *v15; // r0
  const char *v16; // r5
  const char *v17; // r10
  int v18; // r0
  char s[4]; // [sp+20h] [bp-2Ch] BYREF
  int v22; // [sp+24h] [bp-28h]
  char v23; // [sp+28h] [bp-24h]
  char v24[24]; // [sp+2Ch] [bp-20h] BYREF
  char v25; // [sp+44h] [bp-8h]

  v5 = a1 + 367;
  v6 = a1 + 371;
  v7 = s;
  v22 = 0;
  *(_DWORD *)s = 0;
  v23 = 0;
  memset(v24, 0, sizeof(v24));
  v25 = 0;
  do
  {
    v8 = *(unsigned __int8 *)++v5;
    v9 = v7;
    v7 += 2;
    sprintf(v9, "%02x", v8);
  }
  while ( v5 != v6 );
  v10 = *(_DWORD *)(a1 + 392);
  v11 = v24;
  v12 = v10 - 1;
  v13 = v10 + 11;
  do
  {
    v14 = *(unsigned __int8 *)++v12;
    v15 = v11;
    v11 += 2;
    sprintf(v15, "%02x", v14);
  }
  while ( v12 != v13 );
  v16 = *(const char **)(a1 + 384);
  v17 = *(const char **)(a2 + 12);
  v18 = rand();
  snprintf(
    a3,
    0x400u,
    "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
    v17,
    v16,
    v24,
    (const char *)(a1 + 508),
    s,
    v18 % 3 + 10);
  return 0;
}
