int __fastcall sub_59218(int a1, int a2, char *a3)
{
  char *v3; // r9
  int v4; // r7
  __int64 v7; // r0
  char *v9; // r4
  char *v10; // r7
  char *v11; // r5
  int v12; // t1
  char *v13; // r0
  char *v14; // r10
  char *v15; // r4
  int v16; // t1
  char *v17; // r0
  const char *v18; // r12
  const char *v19; // r3
  int v21; // [sp+10h] [bp-74h]
  unsigned int v22; // [sp+1Ch] [bp-68h] BYREF
  char v23[32]; // [sp+20h] [bp-64h] BYREF
  char s[32]; // [sp+40h] [bp-44h] BYREF
  _QWORD v25[4]; // [sp+60h] [bp-24h] BYREF

  v4 = *(_DWORD *)(a1 + 388);
  v7 = *(_QWORD *)(a1 + 488);
  if ( !v4 )
    v3 = s;
  v25[0] = v7;
  if ( v4 )
  {
    v9 = (char *)v25;
    v3 = s;
    v10 = (char *)v25 + v4;
    v11 = s;
    do
    {
      v12 = (unsigned __int8)*v9++;
      v13 = v11;
      v11 += 2;
      sprintf(v13, "%02x", v12);
    }
    while ( v9 != v10 );
  }
  v14 = v23;
  v22 = bswap32(**(_DWORD **)(a1 + 392));
  v15 = (char *)&v22;
  do
  {
    v16 = (unsigned __int8)*v15++;
    v17 = v14;
    v14 += 2;
    sprintf(v17, "%02x", v16);
  }
  while ( v15 != v23 );
  v18 = *(const char **)(a1 + 384);
  v19 = *(const char **)(a2 + 12);
  v21 = *(_DWORD *)(a2 + 1288);
  *(_DWORD *)(a2 + 1288) = v21 + 1;
  snprintf(
    a3,
    0x400u,
    "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
    v19,
    v18,
    v3,
    (const char *)(a1 + 508),
    v23,
    v21);
  return 0;
}
