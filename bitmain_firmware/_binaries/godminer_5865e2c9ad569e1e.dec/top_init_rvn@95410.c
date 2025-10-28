int __fastcall top_init_rvn(int a1)
{
  int v2; // r7
  char *v3; // r1
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int result; // r0
  char *v9; // r1
  int v10; // r4
  int v11; // r1
  _DWORD v12[7]; // [sp+28h] [bp-1040h] BYREF
  int v13; // [sp+44h] [bp-1024h]
  _DWORD v14[7]; // [sp+48h] [bp-1020h] BYREF
  int v15; // [sp+64h] [bp-1004h]
  char v16[4096]; // [sp+68h] [bp-1000h] BYREF

  LOWORD(v2) = -12352;
  V_LOCK();
  LOWORD(v3) = 620;
  HIWORD(v3) = (unsigned int)" %lld" >> 16;
  V_INT((int)v12, v3, *(int *)(a1 + 232));
  HIWORD(v2) = (unsigned int)"" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v2, "top_init_rvn");
  V_UNLOCK();
  LOWORD(v4) = 6248;
  HIWORD(v4) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v4, 170, "top_init_rvn", 12, 2044, 60, v16);
  if ( sub_93E88((int *)a1) )
  {
    V_LOCK();
    LOWORD(v9) = 620;
    HIWORD(v9) = (unsigned int)" %lld" >> 16;
    V_INT((int)v14, v9, *(int *)(a1 + 232));
    LOWORD(v10) = -11784;
    HIWORD(v10) = (unsigned int)"get membist0 lost cnt failed, resp_num: %d\n" >> 16;
    logfmt_raw(v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v10, "top_init_rvn");
    V_UNLOCK();
    LOWORD(v11) = 6248;
    HIWORD(v11) = (unsigned int)"final pattern %08x" >> 16;
    zlog(g_zc, v11, 170, "top_init_rvn", 12, 2048, 100, v16);
    return 12;
  }
  else
  {
    set_reset_rvn(a1);
    set_core_reset_rvn(a1);
    set_inactive_rvn(a1);
    set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 408));
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 464) - 1;
    do
      *(_BYTE *)++v6 = v5++;
    while ( v5 != 8 );
    v7 = *(_DWORD *)(a1 + 464);
    *(_DWORD *)(a1 + 404) = 1;
    (*(void (__fastcall **)(int, int))(a1 + 240))(a1, v7);
    sub_93E88((int *)a1);
    result = 0;
    if ( !*(_BYTE *)(a1 + 436) )
      *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  }
  return result;
}
