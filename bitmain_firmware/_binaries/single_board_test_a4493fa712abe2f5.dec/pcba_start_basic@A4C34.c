int __fastcall pcba_start_basic(_DWORD *a1, int a2)
{
  signed int v3; // r6
  char *v5; // r7
  void (__fastcall *v6)(_DWORD *, int *); // r3
  int v7; // r9
  char *v8; // r5
  void (__fastcall *v9)(_DWORD *, int *, signed int, char *, int *, int, int, _DWORD); // r4
  signed int v10; // r4
  _WORD *v11; // lr
  unsigned __int8 *v12; // r2
  char v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r3
  int v17; // t1
  int v18; // r3
  int v19; // r2
  _DWORD *v20; // r4
  int v21; // r6
  unsigned int v22; // r3
  int v23; // r2
  unsigned int v24; // r5
  char *v25; // r2
  __int16 v26; // r1
  int v27; // r3
  int v29; // [sp+4h] [bp-34h]
  signed int v30; // [sp+14h] [bp-24h]
  int v31; // [sp+1Ch] [bp-1Ch]
  int v32; // [sp+24h] [bp-14h] BYREF
  int v33; // [sp+28h] [bp-10h] BYREF
  int v34; // [sp+2Ch] [bp-Ch]
  int v35; // [sp+30h] [bp-8h]
  int v36; // [sp+34h] [bp-4h]

  v3 = a1[45];
  v34 = 0;
  v35 = 0;
  v5 = (char *)calloc(v3, 8u);
  v36 = 0;
  v33 = -1425866752;
  v6 = (void (__fastcall *)(_DWORD *, int *))a1[35];
  HIWORD(v35) = 252;
  LOBYTE(v35) = 1;
  v6(a1, &v33);
  usleep(0x30D40u);
  (*(void (__fastcall **)(int))(a2 + 16))(115200);
  v31 = (int)&v5[8 * v3 + 40];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = 0;
      sleep(1u);
      v8 = (char *)calloc(v3, 0xCu);
      v33 = 0;
      v34 = 0;
      v35 = 16515072;
      v36 = 0;
      v9 = (void (__fastcall *)(_DWORD *, int *, signed int, char *, int *, int, int, _DWORD))a1[40];
      LOBYTE(v35) = 1;
      v9(a1, &v33, v3, v8, &v32, v29, 2000, 0);
      v10 = v32;
      if ( v32 > 0 )
      {
        v11 = v8 + 90;
        do
        {
          while ( v3 <= 0 )
          {
LABEL_18:
            ++v7;
            v11 += 6;
            if ( v7 == v10 )
              goto LABEL_19;
          }
          v12 = (unsigned __int8 *)a1[70];
          v13 = (char)v5;
          v14 = *((unsigned __int8 *)v11 - 86);
          if ( v5 )
            v13 = 1;
          v15 = (int)&v12[v3 - 1];
          if ( *v12 == v14 )
            v16 = v13 & 1;
          else
            v16 = 0;
          if ( !v16 )
          {
            while ( (unsigned __int8 *)v15 != v12 )
            {
              v17 = *++v12;
              if ( v17 == v14 )
                v18 = v13 & 1;
              else
                v18 = 0;
              if ( v18 )
                goto LABEL_31;
            }
            goto LABEL_18;
          }
LABEL_31:
          v25 = &v5[8 * v7];
          *v25 = v14;
          v26 = *(v11 - 42);
          ++v7;
          v27 = *(_DWORD *)(v11 - 45);
          __pld(v11);
          v11 += 6;
          v25[1] = v26;
          *((_DWORD *)v25 + 1) = v27;
        }
        while ( v7 != v10 );
      }
LABEL_19:
      free(v8);
      if ( v3 <= v10 )
        break;
      printf("%s[%d] is waiting\n", "pcba_start_basic", 1003);
    }
    if ( v3 > 0 )
    {
      v20 = v5 + 40;
      v30 = v3;
      v21 = 0;
      do
      {
        v22 = *(v20 - 9);
        v23 = *((unsigned __int8 *)v20 - 40);
        __pld(v20);
        v24 = (bswap32(v22) >> 24) & 0x7F;
        printf("%s %02x reg_data %08x\n", "pcba_start_basic", v23, v22);
        if ( v24 == 127 )
        {
          ++v21;
        }
        else if ( v24 > 2 )
        {
          printf("%s unknow program type\n", "pcba_program_type_check");
        }
        v20 += 2;
      }
      while ( v20 != (_DWORD *)v31 );
      v19 = v21;
      v3 = v30;
    }
    else
    {
      v19 = 0;
    }
    if ( v3 == v19 )
      break;
    printf("%s[%d] starting %d\n", "pcba_start_basic", 1019, v19);
  }
  printf("%s[%d] success\n", "pcba_start_basic", 1015);
  return 1;
}
