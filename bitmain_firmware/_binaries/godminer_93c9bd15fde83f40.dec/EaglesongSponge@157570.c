unsigned int __fastcall EaglesongSponge(int a1, unsigned int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  int v7; // r9
  unsigned int v8; // r8
  int *v9; // r10
  unsigned int v10; // r1
  unsigned int v11; // r11
  unsigned __int8 *v12; // r0
  unsigned int v13; // r9
  unsigned int v14; // lr
  unsigned int v15; // r12
  int v16; // r3
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  unsigned int result; // r0
  unsigned int v21; // r5
  int *v22; // r12
  int v23; // r0
  int v24; // t1
  int v25; // r2
  int s[17]; // [sp+10h] [bp-44h] BYREF

  memset(s, 0, 0x40u);
  v7 = rate;
  if ( (rate - 1 + 8 * (a4 + 1)) / rate )
  {
    v8 = 0;
    while ( v7 / 32 <= 0 )
    {
LABEL_24:
      ++v8;
      EaglesongPermutation(s);
      v7 = rate;
      if ( (rate - 1 + 8 * (a4 + 1)) / rate <= v8 )
        goto LABEL_25;
    }
    v9 = s;
    v10 = (int)(v7 * v8) / 8;
    v11 = v10 + 4 * (v7 / 32);
    v12 = (unsigned __int8 *)(a3 + v10);
    v13 = v10 + 3;
    v14 = v10 + 2;
    v15 = v10 + 1;
    while ( 1 )
    {
      if ( v10 >= a4 )
      {
        if ( v10 == a4 )
          v16 = a5;
        else
          v16 = 0;
        v17 = v15 == a4;
        if ( v15 < a4 )
        {
LABEL_21:
          v18 = v14 == a4;
          v16 = v12[1] | (v16 << 8);
          if ( v14 < a4 )
            goto LABEL_22;
          goto LABEL_13;
        }
      }
      else
      {
        v17 = v15 == a4;
        v16 = *v12;
        if ( v15 < a4 )
          goto LABEL_21;
      }
      if ( v17 )
        v16 = a5 | (v16 << 8);
      v18 = v14 == a4;
      if ( v14 < a4 )
      {
LABEL_22:
        v19 = v13 == a4;
        v16 = v12[2] | (v16 << 8);
        if ( v13 >= a4 )
          goto LABEL_16;
        goto LABEL_23;
      }
LABEL_13:
      if ( v18 )
        v16 = a5 | (v16 << 8);
      v19 = v13 == a4;
      if ( v13 >= a4 )
      {
LABEL_16:
        if ( v19 )
          v16 = a5 | (v16 << 8);
        goto LABEL_18;
      }
LABEL_23:
      v16 = v12[3] | (v16 << 8);
LABEL_18:
      v10 += 4;
      v12 += 4;
      v13 += 4;
      v14 += 4;
      v15 += 4;
      *v9++ ^= v16;
      if ( v10 == v11 )
        goto LABEL_24;
    }
  }
LABEL_25:
  result = a2 / (v7 / 8);
  if ( result )
  {
    v21 = 0;
    do
    {
      if ( v7 > 31 )
      {
        v22 = s;
        v23 = 0;
        do
        {
          v24 = *v22++;
          v25 = a1 + 4 * v23++;
          *(_BYTE *)(v25 + (int)(v7 * v21) / 8) = v24;
          *(_WORD *)(v25 + (int)(rate * v21) / 8 + 1) = *(_WORD *)((char *)&v24 + 1);
          *(_BYTE *)(v25 + (int)(rate * v21) / 8 + 3) = HIBYTE(v24);
          v7 = rate;
        }
        while ( v23 < rate / 32 );
      }
      ++v21;
      EaglesongPermutation(s);
      v7 = rate;
      result = a2 / (rate / 8);
    }
    while ( result > v21 );
  }
  return result;
}
