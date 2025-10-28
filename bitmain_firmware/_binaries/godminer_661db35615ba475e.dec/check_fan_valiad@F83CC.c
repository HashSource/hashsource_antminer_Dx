int check_fan_valiad()
{
  int v0; // r0
  int v1; // r8
  int v2; // r5
  unsigned int v3; // r4
  int v4; // r0
  int v5; // r0
  int result; // r0
  unsigned int v7; // r1
  unsigned int *v8; // r3
  int v9; // [sp+3Ch] [bp-1848h]
  int v10; // [sp+40h] [bp-1844h]
  unsigned int v11; // [sp+44h] [bp-1840h]
  unsigned int v12; // [sp+48h] [bp-183Ch]
  char s[2048]; // [sp+80h] [bp-1804h] BYREF
  int v14[1025]; // [sp+880h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    if ( !platform_inited )
    {
      strcpy(s, "please init platform first!!\n");
      V_LOCK();
      logfmt_raw((char *)v14, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_fan.c",
        164,
        "fan_init",
        8,
        25,
        100,
        v14);
    }
    fan_inited = 1;
  }
  sub_B5F2C(2, 1);
  sub_B5F2C(1, 1);
  if ( byte_191C79 )
  {
    v0 = dword_191C7C;
  }
  else
  {
    if ( platform_inited )
    {
      v0 = 1;
      byte_195D30 = 1;
      dword_195D2C = 100;
    }
    else
    {
      strcpy(s, "please init platform first!!\n");
      V_LOCK();
      logfmt_raw((char *)v14, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_pwm.c",
        164,
        "pwm_init",
        8,
        25,
        100,
        v14);
      v0 = -2;
    }
    byte_191C79 = 1;
    dword_191C7C = v0;
  }
  pwm_get(v0, v14);
  if ( v14[0] != 100 )
    pwm_set(dword_191C7C, 0x64u);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v14, 0x1000u, 0, "Begain %s", "check_fan_valiad");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/check_fan.c",
    143,
    "check_fan_valiad",
    16,
    33,
    60,
    v14);
  v9 = dword_18F4B0;
  v11 = 0;
  while ( 1 )
  {
    v12 = ++v11 % 0x14;
    if ( v9 <= 0 )
      break;
    v1 = 0;
    v10 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v2 = 8;
        while ( 1 )
        {
          v3 = *(_DWORD *)(dword_197C8C + 4);
          snprintf(s, 0x800u, "FAN_SPEED fpga value = 0x%x\n", v3);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw((char *)v14, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_fan.c",
            164,
            "fan_get_realtime_speed",
            22,
            56,
            20,
            v14);
          if ( v1 == ((v3 >> 8) & 7) )
            break;
          usleep(0x2710u);
          if ( !--v2 )
            goto LABEL_12;
        }
        if ( 120 * (unsigned int)(unsigned __int8)v3 < 0xFA0 )
        {
LABEL_12:
          if ( ++v1 != v9 )
            continue;
          goto LABEL_13;
        }
        break;
      }
      ++v1;
      ++v10;
      if ( v1 != v9 )
        continue;
      break;
    }
LABEL_13:
    usleep((__useconds_t)&loc_7A120);
    if ( !v12 )
      goto LABEL_21;
LABEL_14:
    if ( v9 <= v10 )
      goto LABEL_27;
    if ( v11 == 120 * (v11 / 0x78) )
    {
      pthread_mutex_lock(&stru_197BB8);
      ++dword_197BD4;
      logfmt_raw(
        (char *)v14,
        0x1000u,
        v11 % 0x78,
        v11 % 0x78,
        "error",
        5,
        v11 % 0x78,
        v11 % 0x78,
        "fan lost",
        v11 % 0x78,
        8,
        v11 % 0x78,
        "%s fan lost(%d)",
        "check_fan_valiad",
        v10);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/check_fan.c",
        143,
        "check_fan_valiad",
        16,
        50,
        100,
        v14);
    }
  }
  usleep((__useconds_t)&loc_7A120);
  if ( !v12 )
  {
    v10 = 0;
LABEL_21:
    if ( byte_191C79 )
    {
      v4 = dword_191C7C;
    }
    else
    {
      if ( platform_inited )
      {
        v4 = 1;
        byte_195D30 = 1;
        dword_195D2C = 100;
      }
      else
      {
        strcpy(s, "please init platform first!!\n");
        V_LOCK();
        logfmt_raw((char *)v14, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_pwm.c",
          164,
          "pwm_init",
          8,
          25,
          100,
          v14);
        v4 = -2;
      }
      dword_191C7C = v4;
      byte_191C79 = 1;
    }
    pwm_get(v4, v14);
    if ( v14[0] != 100 )
      pwm_set(dword_191C7C, 0x64u);
    goto LABEL_14;
  }
  v10 = 0;
LABEL_27:
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v14, 0x1000u, 0, "%s, check_fan_speed ok, fan_num = %d", "check_fan_valiad", v10);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/check_fan.c",
    143,
    "check_fan_valiad",
    16,
    53,
    60,
    v14);
  if ( byte_191C79 )
  {
    v5 = dword_191C7C;
  }
  else
  {
    if ( platform_inited )
    {
      v5 = 1;
      byte_195D30 = 1;
      dword_195D2C = 100;
    }
    else
    {
      strcpy(s, "please init platform first!!\n");
      V_LOCK();
      logfmt_raw((char *)v14, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_pwm.c",
        164,
        "pwm_init",
        8,
        25,
        100,
        v14);
      v5 = -2;
    }
    dword_191C7C = v5;
    byte_191C79 = 1;
  }
  result = pwm_get(v5, v14);
  if ( v14[0] != 60 )
  {
    LOWORD(v8) = (unsigned __int8)fan_pwm_fixed;
    if ( fan_pwm_fixed )
      LOWORD(v8) = -2888;
    else
      v7 = 60;
    if ( fan_pwm_fixed )
    {
      HIWORD(v8) = 24;
      v7 = *v8;
    }
    return pwm_set(dword_191C7C, v7);
  }
  return result;
}
