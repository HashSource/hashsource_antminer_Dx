int __fastcall get_core_works_from_txt(int a1, const char *a2, int a3, int a4)
{
  FILE *v8; // r8
  int v9; // r5
  int v10; // r4
  char *v11; // r0
  unsigned __int8 *v12; // r1
  int v13; // t1
  char *v14; // r0
  unsigned __int8 *v15; // r1
  int v16; // t1
  int v17; // r2
  char *v18; // r0
  char v20[516]; // [sp+0h] [bp-204h] BYREF

  memset(v20, 0, 0x200u);
  v8 = fopen(a2, "r");
  if ( a4 <= 0 )
  {
    v9 = 0;
LABEL_12:
    fclose(v8);
    return v9;
  }
  else
  {
    v9 = 0;
    v10 = a3 + 84;
    while ( 1 )
    {
      switch ( a1 )
      {
        case 0:
          *(_DWORD *)(v10 + 4) = 246;
          *(_QWORD *)(v10 + 8) = 0xA800000004LL;
          break;
        case 1:
          *(_DWORD *)(v10 + 12) = 0;
          *(_QWORD *)(v10 + 4) = 0x400000040LL;
          break;
        case 2:
          *(_DWORD *)(v10 + 12) = 0;
          *(_QWORD *)(v10 + 4) = 0x500000030LL;
          break;
        case 6:
        case 7:
          __pld((void *)(v10 + 212));
          __pld((void *)(v10 + 216));
          *(_DWORD *)(v10 + 12) = 0;
          *(_QWORD *)(v10 + 4) = 0x400000050LL;
          break;
        default:
          printf("%s, algo type error!\n", "get_work_element_len");
          break;
      }
      *(_DWORD *)(v10 + 16) = 0;
      *(_DWORD *)(v10 - 84) = v9;
      fgets(v20, 512, v8);
      v11 = strstr(v20, "work");
      if ( !v11 )
      {
        puts("get work from pattern file error");
        return 0;
      }
      v12 = (unsigned __int8 *)(v11 + 4);
      if ( v11[4] == 32 )
      {
        do
          v13 = *++v12;
        while ( v13 == 32 );
      }
      s2hex((char *)(v10 - 80), v12, 2 * *(_DWORD *)(v10 + 4));
      v14 = strstr(v20, "nonce");
      if ( !v14 )
        break;
      v15 = (unsigned __int8 *)(v14 + 5);
      if ( v14[5] == 32 )
      {
        do
          v16 = *++v15;
        while ( v16 == 32 );
      }
      v17 = *(_DWORD *)(v10 + 8);
      v18 = (char *)v10;
      ++v9;
      v10 += 104;
      s2hex(v18, v15, 2 * v17);
      if ( a4 == v9 )
        goto LABEL_12;
    }
    puts("get nonce from pattern file error");
    return 0;
  }
}
