void *__fastcall abin2hex(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r8
  int v6; // r6
  int v7; // r4
  char *v8; // r5
  int v9; // t1
  char *v10; // r0

  v4 = malloc(2 * a2 + 1);
  v5 = v4;
  if ( v4 && a2 )
  {
    v6 = a1 + a2 - 1;
    v7 = a1 - 1;
    v8 = (char *)v4;
    do
    {
      v9 = *(unsigned __int8 *)++v7;
      v10 = v8;
      v8 += 2;
      sprintf(v10, "%02x", v9);
    }
    while ( v7 != v6 );
  }
  return v5;
}
