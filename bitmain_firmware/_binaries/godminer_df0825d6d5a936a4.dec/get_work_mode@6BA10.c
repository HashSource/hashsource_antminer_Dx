int __fastcall get_work_mode(int a1)
{
  int v2; // r3
  int v3; // r1
  char *v4; // r11
  int v5; // r0
  int v6; // r10
  int v7; // r9
  char *v8; // r6
  char *v9; // r4
  int v10; // lr
  int v11; // r12
  int v12; // r1
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -1040;
  HIWORD(v2) = (unsigned int)&unk_133340 >> 16;
  logfmt_raw(v14, 0x1000u, 0, v2, "get_work_mode");
  V_UNLOCK();
  LOWORD(v3) = -1528;
  HIWORD(v3) = (unsigned int)&unk_133160 >> 16;
  zlog(g_zc, v3, 170, "get_work_mode", 13, 216, 20, v14);
  v4 = (char *)malloc(0x600u);
  v5 = sub_69728(a1, 255, 12, v4);
  if ( v5 > 0 )
  {
    LOWORD(v6) = -1024;
    LOWORD(v7) = -1528;
    v8 = &v4[12 * v5];
    v9 = v4;
    do
    {
      V_LOCK();
      v10 = *(_DWORD *)v9;
      HIWORD(v6) = (unsigned int)&unk_133350 >> 16;
      v11 = (unsigned __int8)v9[4];
      v12 = *((unsigned __int16 *)v9 + 3);
      v9 += 12;
      logfmt_raw(v14, 0x1000u, 0, v6, v11, (unsigned __int8)*(v9 - 4), v12, v10);
      V_UNLOCK();
      HIWORD(v7) = (unsigned int)&unk_133160 >> 16;
      zlog(g_zc, v7, 170, "get_work_mode", 13, 222, 20, v14);
    }
    while ( v9 != v8 );
  }
  free(v4);
  return 0;
}
