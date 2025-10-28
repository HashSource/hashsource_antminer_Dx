unsigned int __fastcall EaglesongSponge(int a1, unsigned int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  int v7; // r5
  unsigned int v8; // r9
  int v9; // r11
  int v10; // r11
  int v11; // r5
  int *v12; // r10
  int v13; // r1
  bool v14; // cf
  int v15; // r5
  unsigned int v16; // r1
  int v17; // r11
  unsigned __int8 *v18; // r0
  unsigned int v19; // lr
  unsigned int v20; // r12
  unsigned int v21; // r5
  int v22; // r3
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  int v26; // r1
  unsigned int result; // r0
  unsigned int v28; // r6
  int *v29; // r0
  int v30; // r1
  int v31; // r5
  unsigned int v32; // r3
  unsigned int v33; // t1
  int v34; // r2
  int v35; // r12
  unsigned int v36; // r9
  int v37; // r5
  unsigned int v38; // lr
  unsigned int v39; // r12
  int v40; // r3
  int v41; // r3
  int v42; // r3
  int v43; // r3
  int v44; // r1
  int s[17]; // [sp+10h] [bp-44h] BYREF

  memset(s, 0, 0x40u);
  v7 = rate;
  if ( (rate - 1 + 8 * (a4 + 1)) / rate )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (v7 + 31) & (v7 >> 31);
      if ( v7 >= 0 )
        v9 = v7;
      v10 = v9 >> 5;
      if ( v10 > 0 )
        break;
LABEL_27:
      ++v8;
      EaglesongPermutation(s);
      v7 = rate;
      if ( (rate - 1 + 8 * (a4 + 1)) / rate <= v8 )
        goto LABEL_28;
    }
    v11 = v7 * v8;
    v12 = s;
    v13 = v11 + 7;
    v14 = v11 < 0;
    v15 = v11 & ~(v11 >> 31);
    if ( v14 )
      v15 = v13;
    v16 = v15 >> 3;
    v17 = (v15 >> 3) + 4 * v10;
    v18 = (unsigned __int8 *)(a3 + (v15 >> 3));
    v19 = (v15 >> 3) + 3;
    v20 = (v15 >> 3) + 2;
    v21 = (v15 >> 3) + 1;
    while ( 1 )
    {
      if ( v16 >= a4 )
      {
        if ( v16 == a4 )
          v22 = a5;
        else
          v22 = 0;
        v23 = v21 == a4;
        if ( v21 < a4 )
        {
LABEL_24:
          v24 = v20 == a4;
          v22 = v18[1] | (v22 << 8);
          if ( v20 < a4 )
            goto LABEL_25;
          goto LABEL_16;
        }
      }
      else
      {
        v23 = v21 == a4;
        v22 = *v18;
        if ( v21 < a4 )
          goto LABEL_24;
      }
      if ( v23 )
        v22 = a5 | (v22 << 8);
      v24 = v20 == a4;
      if ( v20 < a4 )
      {
LABEL_25:
        v25 = v19 == a4;
        v22 = v18[2] | (v22 << 8);
        if ( v19 >= a4 )
          goto LABEL_19;
        goto LABEL_26;
      }
LABEL_16:
      if ( v24 )
        v22 = a5 | (v22 << 8);
      v25 = v19 == a4;
      if ( v19 >= a4 )
      {
LABEL_19:
        if ( v25 )
          v22 = a5 | (v22 << 8);
        goto LABEL_21;
      }
LABEL_26:
      v22 = v18[3] | (v22 << 8);
LABEL_21:
      v16 += 4;
      v18 += 4;
      v19 += 4;
      v20 += 4;
      v21 += 4;
      *v12++ ^= v22;
      if ( v16 == v17 )
        goto LABEL_27;
    }
  }
LABEL_28:
  v26 = (v7 + 7) & (v7 >> 31);
  if ( v7 >= 0 )
    v26 = v7;
  result = a2 / (v26 >> 3);
  if ( result )
  {
    v28 = 0;
    do
    {
      if ( v7 > 31 )
      {
        v29 = s;
        v30 = 0;
        do
        {
          v31 = v7 * v28;
          v33 = *v29++;
          v32 = v33;
          v34 = a1 + 4 * v30++;
          v35 = v31 + 7;
          v36 = v33 >> 8;
          v14 = v31 < 0;
          v37 = v31 & ~(v31 >> 31);
          if ( v14 )
            v37 = v35;
          v38 = HIWORD(v32);
          v39 = HIBYTE(v32);
          *(_BYTE *)(v34 + (v37 >> 3)) = v32;
          v40 = (rate * v28) & ~((int)(rate * v28) >> 31);
          if ( ((rate * v28) & 0x80000000) != 0 )
            v40 = rate * v28 + 7;
          *(_BYTE *)(v34 + (v40 >> 3) + 1) = v36;
          v41 = (rate * v28) & ~((int)(rate * v28) >> 31);
          if ( ((rate * v28) & 0x80000000) != 0 )
            v41 = rate * v28 + 7;
          *(_BYTE *)(v34 + (v41 >> 3) + 2) = v38;
          v42 = (rate * v28) & ~((int)(rate * v28) >> 31);
          if ( ((rate * v28) & 0x80000000) != 0 )
            v42 = rate * v28 + 7;
          *(_BYTE *)(v34 + (v42 >> 3) + 3) = v39;
          v7 = rate;
          v43 = (v7 + 31) & (v7 >> 31);
          if ( rate >= 0 )
            v43 = rate;
        }
        while ( v30 < v43 >> 5 );
      }
      ++v28;
      EaglesongPermutation(s);
      v7 = rate;
      v44 = (v7 + 7) & (v7 >> 31);
      if ( rate >= 0 )
        v44 = rate;
      result = a2 / (v44 >> 3);
    }
    while ( result > v28 );
  }
  return result;
}
