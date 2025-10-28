int __fastcall get_sols_ae(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int *a7, int a8)
{
  int *v9; // r8
  int v11; // r6
  unsigned int v12; // r4
  int v13; // t1
  unsigned int v14; // r0
  char *v15; // r3
  char *v17; // [sp+24h] [bp-10h]
  char *v18; // [sp+28h] [bp-Ch]
  int v19; // [sp+2Ch] [bp-8h]

  v19 = (unsigned __int8)gSols[172 * a1];
  if ( gSols[172 * a1] && a8 > 0 )
  {
    v9 = a7;
    v11 = 0;
    v17 = (char *)&unk_3B7AD4 + 336 * a1;
    v18 = (char *)&gEdges + 336 * a1 + 4;
    do
    {
      v12 = (unsigned int)sip_node_ae(a1, a2, a3, a4, a5, *v9, 0) >> 1;
      v13 = *v9++;
      v14 = (unsigned int)sip_node_ae(a1, a2, a3, a4, a5, v13, 1) >> 1;
      v15 = v18;
      do
      {
        if ( v12 == *((_DWORD *)v15 - 1) && v14 == *(_DWORD *)v15 )
          *(_DWORD *)(a6 + 4 * v11++) = *(v9 - 1);
        v15 += 8;
      }
      while ( v15 != v17 );
    }
    while ( v9 != &a7[a8] );
  }
  return v19;
}
