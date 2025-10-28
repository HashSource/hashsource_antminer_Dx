int __fastcall target_to_diff_ltc(int a1)
{
  int result; // r0
  int v3; // r9
  unsigned int v4; // r8
  unsigned int v5; // t1
  int v6; // r3
  int v7; // r6

  result = 0;
  v3 = a1 + 32;
LABEL_2:
  v5 = *(_DWORD *)(v3 - 8);
  v3 -= 8;
  v4 = v5;
  v6 = 63;
  while ( 1 )
  {
    v7 = ((unsigned __int8)((v4 >> v6) | (*(_DWORD *)(v3 + 4) << (32 - v6)))
        | (unsigned __int8)(*(_DWORD *)(v3 + 4) >> (v6 - 32)))
       & 1;
    --v6;
    if ( v7 )
      return result;
    result = (unsigned __int8)(result + 1);
    if ( v6 == -1 )
    {
      if ( a1 != v3 )
        goto LABEL_2;
      return result;
    }
  }
}
