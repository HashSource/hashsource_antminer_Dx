int __fastcall substr(const char *a1, int a2, unsigned int a3, char *a4)
{
  int v8; // r2
  bool v9; // cf
  char v10; // r3
  int v11; // r3
  int v12; // r1
  int v13; // r10
  int v14; // lr
  unsigned int v15; // r12
  const char *v16; // r3
  char *v17; // r1
  const char *v18; // r0
  int v19; // r6
  unsigned int v20; // r4
  int v21; // r2
  int v22; // t1
  unsigned int v23; // r10
  unsigned int v24; // r3
  unsigned int v25; // r10
  char *v27; // r7
  const char *v28; // r9
  char *v29; // r5
  char v30; // t1

  if ( a2 + a3 > strlen(a1) )
  {
    puts("You want copy to many chars");
    return 0;
  }
  else
  {
    if ( a3 )
    {
      v8 = (int)&a1[a2];
      v9 = &a1[a2] >= a4 + 4;
      if ( &a1[a2] < a4 + 4 )
        v9 = a4 >= &a1[a2 + 4];
      v10 = v9;
      if ( a3 > 0xB )
        v11 = v10 & 1;
      else
        v11 = 0;
      if ( v11 )
      {
        v12 = -v8 & 3;
        if ( !v12 || (*a4 = a1[a2], v12 == 1) )
        {
          v13 = -v8 & 3;
        }
        else
        {
          if ( v12 == 3 )
            v13 = 3;
          else
            v13 = 2;
          a4[1] = *(_BYTE *)(v8 + 1);
          if ( v12 == 3 )
            a4[2] = *(_BYTE *)(v8 + 2);
        }
        v14 = a3 - v12;
        v15 = (a3 - v12) >> 2;
        v16 = &a1[a2 + v12];
        v17 = &a4[v12];
        if ( v15 <= 8 )
        {
          v20 = 0;
        }
        else
        {
          v18 = v16 + 32;
          v19 = 0;
          v20 = ((v15 - 9) & 0xFFFFFFF8) + 8;
          do
          {
            v21 = *((_DWORD *)v18 - 8);
            v19 += 8;
            __pld((void *)(v18 + 84));
            v16 = v18;
            v17 += 32;
            *((_DWORD *)v17 - 8) = v21;
            v18 += 32;
            *((_DWORD *)v17 - 7) = *((_DWORD *)v18 - 15);
            *((_DWORD *)v17 - 6) = *((_DWORD *)v18 - 14);
            *((_DWORD *)v17 - 5) = *((_DWORD *)v18 - 13);
            *((_DWORD *)v17 - 4) = *((_DWORD *)v18 - 12);
            *((_DWORD *)v17 - 3) = *((_DWORD *)v18 - 11);
            *((_DWORD *)v17 - 2) = *((_DWORD *)v18 - 10);
            *((_DWORD *)v17 - 1) = *((_DWORD *)v18 - 9);
          }
          while ( v19 != v20 );
        }
        do
        {
          v22 = *(_DWORD *)v16;
          v16 += 4;
          ++v20;
          *(_DWORD *)v17 = v22;
          v17 += 4;
        }
        while ( v15 > v20 );
        v23 = v13 + (v14 & 0xFFFFFFFC);
        if ( v14 == (v14 & 0xFFFFFFFC)
          || (a4[v23] = a1[v23 + a2], a3 <= v23 + 1)
          || (a4[v23 + 1] = a1[v23 + 1 + a2], a3 <= v23 + 2)
          || (a4[v23 + 2] = a1[v23 + 2 + a2], a3 <= v23 + 3)
          || (v24 = v23 + 4, a4[v23 + 3] = a1[v23 + 3 + a2], a3 <= v23 + 4)
          || (v25 = v23 + 5, a4[v24] = a1[v24 + a2], a3 <= v25) )
        {
          a4 += a3;
        }
        else
        {
          a4[v25] = a1[v25 + a2];
          a4 += a3;
        }
      }
      else
      {
        v27 = &a4[a3];
        v28 = &a1[a2 - 1];
        v29 = a4 - 1;
        do
        {
          v30 = *++v28;
          *++v29 = v30;
        }
        while ( v27 - 1 != v29 );
        a4 = v27;
      }
    }
    *a4 = 0;
    return 1;
  }
}
