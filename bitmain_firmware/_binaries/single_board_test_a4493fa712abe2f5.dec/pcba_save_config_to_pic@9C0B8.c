int __fastcall pcba_save_config_to_pic(int a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r1
  int *v4; // r4
  double v5; // d7
  int v6; // t1
  _BYTE *v7; // r4
  int v8; // r7
  int v9; // t1
  int v11; // [sp+0h] [bp-6h] BYREF
  int v12; // [sp+4h] [bp-2h] BYREF
  _BYTE s[36]; // [sp+8h] [bp+2h] BYREF

  v1 = *(_DWORD *)(g_config_info[0] + 8);
  v2 = *(_DWORD *)(v1 + 36);
  v3 = *(_DWORD *)(*(_DWORD *)(v1 + 24) + 4 * a1);
  HIWORD(v11) = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 48) + 4 * a1);
  v4 = &v11;
  v5 = *(double *)(v2 + 8 * a1);
  LOWORD(v11) = v3;
  HIDWORD(v5) = (int)(v5 * 100.0);
  LOBYTE(v12) = SBYTE4(v5) / 100;
  BYTE1(v12) = BYTE4(v5) - 100 * v12;
  do
  {
    v6 = *(unsigned __int8 *)v4;
    v4 = (int *)((char *)v4 + 1);
    printf("%02x ", v6);
  }
  while ( v4 != (int *)((char *)&v12 + 2) );
  puts("--- wbuf pic");
  if ( (*(int (__fastcall **)(_DWORD, int, int, int *))(dword_12C0E4 + 76))(
         *(_DWORD *)(dword_12C0E0 + 120),
         51,
         393216,
         &v11) )
  {
    v8 = -1;
    puts("save voltage failed");
  }
  else
  {
    memset(s, 0, 0x20u);
    v7 = s;
    v8 = (*(int (__fastcall **)(_DWORD, int, int, _BYTE *, int, int))(dword_12C0E4 + 76))(
           *(_DWORD *)(dword_12C0E0 + 120),
           52,
           393216,
           s,
           v11,
           v12);
    if ( v8 )
    {
      v8 = -1;
      puts("get voltage failed");
    }
    else
    {
      do
      {
        v9 = (unsigned __int8)*v7++;
        printf("%02x ", v9);
      }
      while ( v7 != &s[6] );
      puts("--- rbuf pic");
    }
  }
  return v8;
}
