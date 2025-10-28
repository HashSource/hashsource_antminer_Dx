int __fastcall sub_5930C(_DWORD *a1, int a2, char *s)
{
  int v3; // r5
  int v7; // r4
  int v8; // r5
  char *v9; // r11
  int v10; // r4
  int v11; // t1
  char *v12; // r0
  int v13; // r3
  const char *v14; // r12
  const char *v16; // [sp+4h] [bp-30h]
  char sa[36]; // [sp+10h] [bp-24h] BYREF

  v3 = a1[97];
  v7 = a1[98];
  if ( v3 )
  {
    v8 = v7 + v3 - 1;
    v9 = sa;
    v10 = v7 - 1;
    do
    {
      v11 = *(unsigned __int8 *)++v10;
      v12 = v9;
      v9 += 2;
      sprintf(v12, "%02x", v11);
    }
    while ( v8 != v10 );
  }
  v13 = *(_DWORD *)(a2 + 1288);
  v14 = *(const char **)(a2 + 12);
  v16 = (const char *)a1[96];
  *(_DWORD *)(a2 + 1288) = v13 + 1;
  snprintf(s, 0x400u, "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}", v13, v14, v16, sa);
  return 0;
}
