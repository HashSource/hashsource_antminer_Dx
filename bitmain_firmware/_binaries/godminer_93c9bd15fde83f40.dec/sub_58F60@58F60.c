int __fastcall sub_58F60(int a1, int a2, char *a3)
{
  int v4; // r6
  char *v5; // r4
  char *v8; // r0
  int v9; // t1
  int v10; // r5
  char *v11; // r4
  char *v12; // r0
  int v13; // t1
  const char *v14; // r2
  int v15; // r0
  char s[20]; // [sp+14h] [bp-9Ch] BYREF
  char v18[64]; // [sp+28h] [bp-88h] BYREF
  char v19; // [sp+68h] [bp-48h] BYREF
  char v20[64]; // [sp+6Ch] [bp-44h] BYREF
  char v21; // [sp+ACh] [bp-4h] BYREF

  v4 = a1 + 399;
  v5 = v20;
  sprintf(s, "%016llx", *(_QWORD *)(a1 + 368));
  do
  {
    v8 = v5;
    v9 = *(unsigned __int8 *)++v4;
    v5 += 2;
    sprintf(v8, "%02x", v9);
  }
  while ( v5 != &v21 );
  v10 = a1 + 431;
  v11 = v18;
  do
  {
    v12 = v11;
    v13 = *(unsigned __int8 *)++v10;
    v11 += 2;
    sprintf(v12, "%02x", v13);
  }
  while ( v11 != &v19 );
  v14 = *(const char **)(a2 + 20);
  v15 = *(_DWORD *)(a2 + 1288);
  *(_DWORD *)(a2 + 1288) = v15 + 1;
  if ( v14 )
    sprintf(
      a3,
      "{\"worker\": \"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",                 \"params\":[\"0x%"
      "s\",\"0x%s\",\"0x%s\"]}",
      v14,
      v15,
      s,
      v20,
      v18);
  else
    sprintf(
      a3,
      "{\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",                 \"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}",
      v15,
      s,
      v20,
      v18);
  return 0;
}
