int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v4; // r2
  int *v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // [sp+14h] [bp-1808h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v11[1025]; // [sp+818h] [bp-1004h] BYREF

  v9 = a1;
  if ( !a2 )
  {
    LOWORD(v5) = 8528;
    HIWORD(v5) = (unsigned int)&unk_139CB8 >> 16;
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    s[0] = v6;
    s[1] = v7;
    LOWORD(s[2]) = v8;
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 147;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_18A3F0) )
  {
    strcpy((char *)s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 152;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_reg_callback",
      17,
      v4,
      100,
      v11);
    return -1;
  }
  if ( exists_c_map((int *)dword_18A408, (int)&v9) )
  {
    snprintf((char *)s, 0x800u, "port %d already exist in callback map ", v9);
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_reg_callback",
      17,
      165,
      20,
      v11);
  }
  else
  {
    snprintf((char *)s, 0x800u, "add %d to callback map", v9);
    V_LOCK();
    logfmt_raw((char *)v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_reg_callback",
      17,
      158,
      20,
      v11);
    v11[0] = a2;
    v11[1] = -1;
    insert_c_map((int *)dword_18A408, &v9, 4u, v11, 8u);
  }
  pthread_mutex_unlock(&stru_18A3F0);
  return 0;
}
