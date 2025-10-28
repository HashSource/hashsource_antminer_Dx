int __fastcall sub_32940(const char *a1, _DWORD *a2)
{
  __int64 v2; // d0
  size_t v4; // r0
  const char *v5; // r4
  signed int v6; // r8
  int v7; // r1
  const char *v8; // r3
  const char *v9; // r0
  int v10; // r6
  int v11; // r2
  int v12; // t1
  int v13; // r5
  int v14; // r2
  int v15; // r10
  _DWORD *v16; // r9
  int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // t1
  char *v20; // lr
  _QWORD *v21; // r11
  unsigned int v22; // r12
  bool v23; // cc
  bool v24; // zf
  signed int v26; // r11
  int v27; // r10
  int v28; // r6
  unsigned int v29; // r3
  unsigned int v30; // t1
  char *v31; // lr
  unsigned int v32; // r12
  bool v33; // cc
  bool v34; // zf
  char *v35; // r12
  char v37[36]; // [sp+8h] [bp-24h] BYREF

  v4 = strlen(a1);
  if ( v4 )
  {
    v5 = a1 - 1;
    v6 = v4;
    v7 = 0;
    v8 = v5;
    v9 = &v5[v4];
    v10 = 1;
    do
    {
      v12 = *(unsigned __int8 *)++v8;
      v11 = v12;
      v13 = v7 + 1;
      if ( v12 == 46 )
      {
        v10 = 0;
      }
      else
      {
        v24 = v11 == 44;
        v14 = v7 + 2;
        if ( v24 )
        {
          ++v7;
          v13 = v14;
        }
      }
    }
    while ( v8 != v9 );
    if ( v10 )
    {
      v16 = calloc(4 * v13, 1u);
      v26 = 0;
      v27 = 0;
      v28 = 0;
      memset(v37, 0, 0x20u);
      do
      {
        v30 = *(unsigned __int8 *)++v5;
        v29 = v30;
        v31 = &v37[v28 + 32];
        v32 = v30 - 48;
        ++v26;
        v33 = v30 > 0x2E;
        if ( v30 != 46 )
          v33 = v32 > 9;
        if ( !v33 )
        {
          ++v28;
          *(v31 - 32) = v29;
        }
        v34 = v29 == 44;
        if ( v29 != 44 )
          v34 = v29 == 93;
        v35 = &v37[v28 + 32];
        if ( v34 )
        {
          v28 = 0;
          *(v35 - 32) = 0;
          v16[v27++] = strtol(v37, 0, 10);
          memset(v37, 32, 0x20u);
        }
      }
      while ( v26 < v6 );
    }
    else
    {
      v15 = 0;
      v16 = calloc(8 * v13, 1u);
      memset(v37, 0, 0x20u);
      v17 = 0;
      do
      {
        v19 = *(unsigned __int8 *)++v5;
        v18 = v19;
        v20 = &v37[v17 + 32];
        v21 = &v16[2 * v15];
        v22 = v19 - 48;
        v23 = v19 > 0x2E;
        if ( v19 != 46 )
          v23 = v22 > 9;
        if ( !v23 )
        {
          ++v17;
          *(v20 - 32) = v18;
        }
        v24 = v18 == 93;
        if ( v18 != 93 )
          v24 = v18 == 44;
        ++v10;
        if ( v24 )
        {
          ++v15;
          v37[v17] = 0;
          strtod(v37, 0);
          *v21 = v2;
          memset(v37, 32, 0x20u);
          v17 = 0;
        }
      }
      while ( v6 > v10 );
    }
  }
  else
  {
    v13 = 1;
    v16 = calloc(4u, 1u);
  }
  *a2 = v16;
  return v13;
}
