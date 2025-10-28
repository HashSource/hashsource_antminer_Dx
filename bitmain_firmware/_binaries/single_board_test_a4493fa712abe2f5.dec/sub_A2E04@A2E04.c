size_t __fastcall sub_A2E04(int a1, int a2)
{
  signed int v3; // r5
  signed int v4; // r11
  __int16 v5; // r6
  char *v6; // r8
  int v7; // r6
  _WORD *v8; // r4
  unsigned __int8 *v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // t1
  __int16 v13; // r1
  _DWORD *v14; // r2
  int v15; // r3
  int v16; // r7
  int v17; // r6
  char *v18; // r4
  const char *v19; // r1
  int v20; // r2
  unsigned int v21; // r3
  _DWORD *v22; // r4
  int v23; // r2
  int v24; // r1
  int v25; // r3
  bool v26; // nf
  int v27; // r2
  const char *v28; // r0
  char *v29; // r10
  int v30; // r8
  _DWORD *v31; // r9
  char *v32; // r6
  __int16 v33; // r1
  int v34; // r4
  int v35; // r0
  bool v36; // zf
  int v37; // r8
  int v38; // r6
  _DWORD *v39; // r5
  _DWORD *v40; // r4
  int v41; // r3
  int v42; // r12
  int v43; // r7
  unsigned int v44; // r0
  unsigned int v45; // r3
  int v47; // [sp+0h] [bp-7Ch]
  int v48; // [sp+4h] [bp-78h]
  int v49; // [sp+4h] [bp-78h]
  int v50; // [sp+8h] [bp-74h]
  int v51; // [sp+Ch] [bp-70h]
  int v52; // [sp+10h] [bp-6Ch]
  _DWORD *nmemb; // [sp+18h] [bp-64h]
  size_t nmemba; // [sp+18h] [bp-64h]
  int c; // [sp+1Ch] [bp-60h]
  char *ptr; // [sp+20h] [bp-5Ch]
  const char *v57; // [sp+28h] [bp-54h]
  int v59; // [sp+34h] [bp-48h]
  char s[32]; // [sp+38h] [bp-44h] BYREF
  char src[36]; // [sp+58h] [bp-24h] BYREF

  v59 = 8 * a2;
  c = 30;
  ptr = (char *)&unk_12983C + 36 * a2;
  v57 = (char *)&unk_12983C + 36 * a2 + 20;
  printf("%s begin testing\n", v57);
  v3 = *(_DWORD *)(a1 + 180);
  nmemb = calloc(v3, 8u);
  while ( 1 )
  {
    v4 = 0;
    v5 = (unsigned __int8)ptr[4];
    *nmemb = 0;
    v6 = (char *)calloc(v3, 0xCu);
    *(_WORD *)&src[10] = v5;
    *(_WORD *)&src[8] = 1;
    *(_DWORD *)src = 0;
    *(_DWORD *)&src[4] = 0;
    *(_DWORD *)&src[12] = 0;
    (*(void (__fastcall **)(int, char *, signed int, char *, char *))(a1 + 160))(a1, src, v3, v6, s);
    v7 = *(_DWORD *)s;
    if ( *(int *)s > 0 )
      break;
    free(v6);
    if ( v3 == v7 )
      goto LABEL_33;
LABEL_13:
    printf("%s[%d] resp num not enough %d\n", "pcba_ddr_test", 500, v7);
LABEL_14:
    sleep(1u);
    if ( !--c )
    {
      printf("%s[%d] timeout\n", "pcba_ddr_test", 506);
      memset(ret_str, 0, 0x40u);
      sprintf(ret_str, "%s timeout:", v57);
      if ( v3 <= 0 )
        goto LABEL_60;
      v16 = 0;
      v17 = 0;
      v18 = (char *)(nmemb + 7);
      do
      {
        __pld(v18);
        memset(s, 0, sizeof(s));
        if ( (*((_DWORD *)v18 - 6) & 0x1000000) != 0 )
        {
          v21 = (unsigned __int8)*(v18 - 28);
          if ( v21 == 64 )
          {
            sprintf(s, "[%s %02x]", "U67", 64);
          }
          else if ( v21 <= 0x40 )
          {
            if ( *(v18 - 28) )
              goto LABEL_69;
            sprintf(s, "[%s %02x]", "U73", 0);
          }
          else if ( v21 == 128 )
          {
            sprintf(s, "[%s %02x]", "U76", 128);
          }
          else
          {
            if ( v21 != 192 )
              goto LABEL_69;
            sprintf(s, "[%s %02x]", "U70", 192);
          }
          ++v16;
          strcat(ret_str, s);
        }
        ++v17;
        v18 += 8;
      }
      while ( v3 != v17 );
      if ( v16 )
        printf("%s failed\n", v57);
      else
LABEL_60:
        printf("%s success\n", v57);
      free(nmemb);
      return 0;
    }
  }
  v8 = v6 + 102;
  do
  {
    if ( v3 > 0 )
    {
      v9 = *(unsigned __int8 **)(a1 + 280);
      v10 = *((unsigned __int8 *)v8 - 98);
      if ( v10 == *v9 )
      {
LABEL_10:
        v13 = *(v8 - 48);
        v14 = &nmemb[2 * v4];
        v15 = *(_DWORD *)(v8 - 51);
        *(_BYTE *)v14 = v10;
        __pld(v8);
        *((_BYTE *)v14 + 1) = v13;
        v14[1] = v15;
      }
      else
      {
        v11 = (int)&v9[v3 - 1];
        while ( (unsigned __int8 *)v11 != v9 )
        {
          v12 = *++v9;
          if ( v12 == v10 )
            goto LABEL_10;
        }
      }
    }
    ++v4;
    v8 += 6;
  }
  while ( v4 != v7 );
  free(v6);
  if ( v3 != v7 )
    goto LABEL_13;
  v22 = nmemb + 11;
  v4 = 0;
  do
  {
    v23 = *(v22 - 10);
    v24 = *((unsigned __int8 *)v22 - 43);
    v25 = *((unsigned __int8 *)v22 - 44);
    __pld(v22);
    v22 += 2;
    v48 = v23;
    v23 <<= 7;
    v26 = v23 < 0;
    if ( v23 < 0 )
    {
      v27 = 489;
      v28 = "%s[%d] chip%02x is still testing %02x %08x\n";
    }
    else
    {
      v27 = 487;
      v28 = "%s[%d] chip%02x test done %02x %08x\n";
    }
    if ( !v26 )
      ++v4;
    printf(v28, "pcba_ddr_test", v27, v25, v24, v48);
  }
  while ( &nmemb[2 * v3 + 11] != v22 );
LABEL_33:
  if ( v4 != v7 )
    goto LABEL_14;
  v29 = (char *)nmemb;
  v30 = 30;
  v31 = calloc(v3, 8u);
  v32 = (char *)&unk_12983C + 4 * v59 + 4 * a2;
  while ( 1 )
  {
    v33 = (unsigned __int8)v32[4];
    *nmemb = 0;
    *v31 = 0;
    v34 = sub_A2D1C(a1, v33, v4, (int)nmemb);
    v35 = sub_A2D1C(a1, (unsigned __int8)v32[5], v4, (int)v31);
    v36 = v34 == v4;
    if ( v34 == v4 )
      v36 = v35 == v4;
    if ( v36 )
      break;
    printf("%s[%d] resp num not enough %d\n", "pcba_ddr_test", 525, v34);
    sleep(1u);
    if ( !--v30 )
    {
      nmemba = 1;
      goto LABEL_66;
    }
  }
  nmemba = 1;
  memset(ret_str, 0, 0x40u);
  sprintf(ret_str, "%s error:", v57);
  if ( v4 <= 0 )
    goto LABEL_68;
  v37 = 0;
  v38 = 0;
  v39 = v29 + 20;
  v40 = v31 + 5;
  do
  {
    v41 = *((unsigned __int8 *)v39 - 20);
    v50 = *((unsigned __int8 *)v40 - 20);
    v51 = *((unsigned __int8 *)v40 - 19);
    v52 = *(v40 - 4);
    v42 = *((unsigned __int8 *)v39 - 19);
    v43 = *(v39 - 4);
    __pld(v39);
    v47 = v42;
    v49 = v43;
    __pld(v40);
    printf(
      "%s[%d] ctrl [%02x %02x %08x], result [%02x %02x %08x]\n",
      "pcba_ddr_error_display",
      419,
      v41,
      v47,
      v49,
      v50,
      v51,
      v52);
    memset(src, 0, 0x20u);
    v44 = bswap32(*(v40 - 4));
    if ( v44 )
    {
      v45 = *((unsigned __int8 *)v40 - 20);
      if ( v45 == 64 )
      {
        sprintf(src, "[%s %02x %x]", "U67", 64, v44);
      }
      else if ( v45 <= 0x40 )
      {
        if ( *((_BYTE *)v40 - 20) )
        {
LABEL_69:
          printf("%s[%d] unknow chip addr\n", v19, v20);
          sleep(1u);
          exit(1);
        }
        sprintf(src, "[%s %02x %x]", "U73", 0, v44);
      }
      else if ( v45 == 128 )
      {
        sprintf(src, "[%s %02x %x]", "U76", 128, v44);
      }
      else
      {
        if ( v45 != 192 )
          goto LABEL_69;
        sprintf(src, "[%s %02x %x]", "U70", 192, v44);
      }
      ++v37;
      strcat(ret_str, src);
    }
    ++v38;
    v39 += 2;
    v40 += 2;
  }
  while ( v4 != v38 );
  if ( v37 )
  {
    nmemba = 0;
    printf("%s failed\n", v57);
  }
  else
  {
LABEL_68:
    printf("%s success\n", v57);
  }
LABEL_66:
  free(v29);
  free(v31);
  return nmemba;
}
