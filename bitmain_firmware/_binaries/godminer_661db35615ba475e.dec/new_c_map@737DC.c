_DWORD *__fastcall new_c_map(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  _DWORD *v7; // r0

  v6 = malloc(4u);
  if ( v6 )
  {
    v7 = malloc(0x28u);
    if ( v7 )
    {
      *v6 = v7;
      v7[5] = 0;
      v7[6] = 0;
      v7[3] = 0;
      v7[4] = 0;
      v7[9] = a1;
      v7[7] = a2;
      v7[8] = a3;
      *v7 = v7 + 1;
      v7[1] = v7 + 1;
      v7[2] = v7 + 1;
    }
    else
    {
      *v6 = 0;
      return 0;
    }
  }
  return v6;
}
