int __fastcall sub_5E2C8(unsigned __int8 a1, int a2)
{
  const char *v2; // r8
  int v3; // r5
  int v4; // t1
  int v5; // r11
  int v7; // [sp+14h] [bp-1010h]
  char v9[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = "PQT";
  v3 = a2 - 2;
  v7 = a2 + 4;
  do
  {
    v4 = *(unsigned __int8 *)v2++;
    *(_WORD *)v9 = 0;
    sub_BE40C(a1, v4, v9);
    v5 = (unsigned __int8)v9[0] | ((unsigned __int8)v9[1] << 8);
    *(_WORD *)(v3 + 2) = v5;
    v3 += 2;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v9, 0x1000u, 0, "Get one chain ISL: domain addr = %x vol=%u", v4, v5);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
      75,
      "get_chain_isl_voltage",
      21,
      202,
      60,
      v9);
  }
  while ( v3 != v7 );
  return 1;
}
