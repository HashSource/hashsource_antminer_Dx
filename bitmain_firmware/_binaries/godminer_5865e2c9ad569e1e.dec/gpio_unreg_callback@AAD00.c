int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v3; // r2
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // [sp+14h] [bp-1808h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  char v10[4100]; // [sp+818h] [bp-1004h] BYREF

  v8 = a1;
  if ( !a2 )
  {
    LOWORD(v4) = 8528;
    HIWORD(v4) = (unsigned int)&unk_139CB8 >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    s[0] = v5;
    s[1] = v6;
    LOWORD(s[2]) = v7;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = 183;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_18A3F0) )
  {
    strcpy((char *)s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = 189;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_unreg_callback",
      19,
      v3,
      100,
      v10);
    return -1;
  }
  if ( exists_c_map((int *)dword_18A408, (int)&v8) == (int *)1 )
  {
    snprintf((char *)s, 0x800u, "remove %d from callback list", v8);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_unreg_callback",
      19,
      195,
      20,
      v10);
    remove_c_map((int *)dword_18A408, (int)&v8);
  }
  else
  {
    strcpy((char *)s, "callback function not registered before");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_unreg_callback",
      19,
      200,
      80,
      v10);
  }
  pthread_mutex_unlock(&stru_18A3F0);
  return 0;
}
