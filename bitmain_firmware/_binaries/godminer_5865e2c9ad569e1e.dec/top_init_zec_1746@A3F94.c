int __fastcall top_init_zec_1746(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r7
  int v6; // r4
  int v7; // r0
  int v8; // r1
  char v9; // r3
  _DWORD v11[7]; // [sp+28h] [bp-1024h] BYREF
  int v12; // [sp+44h] [bp-1008h]
  char v13[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 620;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  V_INT((int)v11, v2, *(int *)(a1 + 232));
  LOWORD(v3) = 15088;
  HIWORD(v3) = (unsigned int)"c %04x, expected %02x%02x" >> 16;
  logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v3);
  V_UNLOCK();
  LOWORD(v4) = 14720;
  HIWORD(v4) = (unsigned int)"ailed after retry %d times" >> 16;
  zlog(g_zc, v4, 170, "top_init_zec_1746", 17, 644, 40, v13);
  v5 = *(_DWORD *)(a1 + 312);
  v6 = *(_DWORD *)(a1 + 464);
  v7 = sub_12EA40(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v8 != v6 - 1 + (unsigned __int8)v5 );
    v6 = *(_DWORD *)(a1 + 464);
  }
  *(_DWORD *)(a1 + 404) = v7;
  (*(void (__fastcall **)(int, int, int))(a1 + 240))(a1, v6, v5);
  sub_A3618(a1, 1);
  return 0;
}
