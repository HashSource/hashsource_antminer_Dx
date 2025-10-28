int __fastcall pic1704_get_an_voltage2(int a1, int a2)
{
  float v2; // s0
  float v3; // s1
  int result; // r0
  double v6; // d7
  unsigned int v7; // [sp+2Ch] [bp-180Ch] BYREF
  unsigned int v8; // [sp+30h] [bp-1808h] BYREF
  unsigned int v9; // [sp+34h] [bp-1804h] BYREF
  _DWORD s[510]; // [sp+38h] [bp-1800h] BYREF
  char v11[4096]; // [sp+838h] [bp-1000h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = 0;
  result = pic1704_get_all_voltage(a1, &v9, &v8, &v7);
  if ( (_BYTE)result )
  {
    strcpy((char *)s, "Received an voltage response.");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic1704_get_an_voltage2",
      23,
      442,
      20,
      v11);
    snprintf(
      (char *)s,
      0x800u,
      "an0 = %f, an2 %f, an6 %f.",
      (double)v9 * 0.00322265625,
      (double)v8 * 0.00322265625,
      (double)v7 * 0.00322265625);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic1704_get_an_voltage2",
      23,
      443,
      20,
      v11);
    if ( a2 && ((v6 = (double)v7 * 0.00322265625, v2 > v6) || v3 < v6) )
    {
      strcpy((char *)s, "Ref an vol too high or too low.");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v11, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/device/hal/drv_pic/pic_1704.c",
               158,
               "pic1704_get_an_voltage2",
               23,
               449,
               20,
               v11);
    }
    else
    {
      return sub_50A88(v8);
    }
  }
  return result;
}
