int __fastcall dhash_start_zec_1746(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v4; // r3
  int result; // r0
  _DWORD v6[7]; // [sp+28h] [bp-1024h] BYREF
  int v7; // [sp+44h] [bp-1008h]
  int p_st_value; // [sp+48h] [bp-1004h] BYREF
  int v9; // [sp+4Ch] [bp-1000h]
  int v10; // [sp+50h] [bp-FFCh]
  int v11; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 216));
  logfmt_raw(
    (char *)&p_st_value,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "dhash_start_zec_1746");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    170,
    "dhash_start_zec_1746",
    20,
    718,
    40,
    &p_st_value);
  v10 = 2621440;
  v11 = 0;
  p_st_value = (int)&stru_1481C.st_value;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 232);
  v9 = 0;
  LOBYTE(v10) = 1;
  v2(a1, &p_st_value);
  v10 = 5242881;
  v11 = 0;
  v9 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 232);
  p_st_value = 0;
  v3(a1, &p_st_value);
  v10 = 5767169;
  v11 = 0;
  v9 = 0;
  p_st_value = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 232))(a1, &p_st_value);
  (*(void (__fastcall **)(int))(a1 + 148))(a1);
  v4 = *(unsigned __int8 *)(a1 + 420);
  result = 0;
  *(_BYTE *)(a1 + 221) = 1;
  if ( !v4 )
    *(_DWORD *)(a1 + 424) = (int)*(float *)(a1 + 916);
  return result;
}
