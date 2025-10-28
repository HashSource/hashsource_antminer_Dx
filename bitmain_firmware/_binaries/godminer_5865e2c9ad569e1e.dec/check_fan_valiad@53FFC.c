int check_fan_valiad()
{
  int v0; // r3
  char *v1; // r7
  int v2; // r3
  int v3; // r1
  unsigned int v4; // r6
  int fan_num; // r4
  unsigned int v6; // r8
  int v7; // r7
  int i; // r5
  int realtime_speed; // r9
  int v10; // r0
  int fan_max_speed; // r0
  unsigned int v12; // r5
  char *v13; // r9
  __int64 v14; // kr00_8
  int v15; // r11
  int v16; // r0
  int v17; // r10
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v26; // r3
  char *s; // [sp+5Ch] [bp-1058h]
  _DWORD v29[7]; // [sp+70h] [bp-1044h] BYREF
  int v30; // [sp+8Ch] [bp-1028h]
  _DWORD v31[8]; // [sp+90h] [bp-1024h] BYREF
  char v32[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  LOWORD(v0) = 31016;
  HIWORD(v0) = (unsigned int)"fan_num = %d" >> 16;
  LOWORD(v1) = 31192;
  logfmt_raw(v32, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v2) = 30996;
  LOWORD(v3) = 31040;
  HIWORD(v2) = (unsigned int)"check_fan_speed ok, fan_num = %d" >> 16;
  HIWORD(v3) = (unsigned int)"t_on_device" >> 16;
  zlog(g_zc, v3, 149, v2, 16, 33, 60, v32);
  HIWORD(v1) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
  v4 = 0;
  s = v1;
  fan_num = platform_get_fan_num();
  while ( 1 )
  {
    v6 = ++v4 % 0x14;
    if ( fan_num <= 0 )
      break;
    v7 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v10 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v10);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v7;
      }
    }
    usleep((__useconds_t)&loc_7A120);
    if ( v6 )
    {
      if ( fan_num <= v7 )
        goto LABEL_21;
      goto LABEL_12;
    }
LABEL_20:
    fan_pwm_set_max();
    if ( fan_num <= v7 )
      goto LABEL_21;
LABEL_12:
    v12 = v4 % 0x78;
    if ( v4 == 120 * (v4 / 0x78) )
    {
      LOWORD(v13) = 31200;
      red_led_on();
      v14 = 0;
      do
      {
        v15 = fan_get_realtime_speed(v12);
        if ( v15 == -1 || (v16 = platform_get_fan_max_speed(v12), fan_get_check_fan_speed(v16) > v15) )
        {
          V_LOCK();
          V_INT((int)v29, s, v14);
          HIWORD(v13) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
          V_INT((int)v31, v13, v15 & ~(v15 >> 31));
          LOWORD(v17) = 31212;
          HIWORD(v17) = (unsigned int)"release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
          logfmt_raw(
            v32,
            0x1000u,
            0,
            v30,
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v30,
            v31[0],
            v31[1],
            v31[2],
            v31[3],
            v31[4],
            v31[5],
            v31[6],
            v31[7],
            v17,
            v12,
            (&fan_name)[v12]);
          V_UNLOCK();
          LOWORD(v18) = 30996;
          LOWORD(v19) = 31040;
          HIWORD(v18) = (unsigned int)"check_fan_speed ok, fan_num = %d" >> 16;
          HIWORD(v19) = (unsigned int)"t_on_device" >> 16;
          zlog(g_zc, v19, 149, v18, 16, 54, 100, v32);
        }
        ++v12;
        ++v14;
      }
      while ( fan_num != v12 );
      V_LOCK();
      LOWORD(v20) = 4812;
      LOWORD(v21) = 4784;
      HIWORD(v20) = (unsigned int)"no" >> 16;
      HIWORD(v21) = (unsigned int)"ch" >> 16;
      logfmt_raw(v32, 0x1000u, 0, v21, v20);
      V_UNLOCK();
      LOWORD(v22) = 30996;
      LOWORD(v23) = 31040;
      HIWORD(v22) = (unsigned int)"check_fan_speed ok, fan_num = %d" >> 16;
      HIWORD(v23) = (unsigned int)"t_on_device" >> 16;
      zlog(g_zc, v23, 149, v22, 16, 57, 100, v32);
      set_miner_6060info_status_fan_err(1);
    }
  }
  usleep((__useconds_t)&loc_7A120);
  if ( !v6 )
  {
    v7 = 0;
    goto LABEL_20;
  }
  v7 = 0;
LABEL_21:
  V_LOCK();
  LOWORD(v24) = 31260;
  HIWORD(v24) = (unsigned int)"_util/check_heartbeat.c" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v24, v7);
  V_UNLOCK();
  LOWORD(v25) = 31040;
  LOWORD(v26) = 30996;
  HIWORD(v26) = (unsigned int)"check_fan_speed ok, fan_num = %d" >> 16;
  HIWORD(v25) = (unsigned int)"t_on_device" >> 16;
  return zlog(g_zc, v25, 149, v26, 16, 62, 60, v32);
}
