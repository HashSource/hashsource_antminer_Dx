int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int *v1; // r9
  pthread_mutex_t **all_created_runtime; // r0
  pthread_mutex_t *v4; // r3
  float v5; // s15
  pthread_mutex_t **v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r5
  int working_voltage; // r8
  int v11; // r2
  float v12; // s19
  int v13; // s18
  int v14; // r3
  int v15; // r1
  pthread_mutex_t **v16; // r6
  int i; // r5
  pthread_mutex_t *v18; // t1
  float v19; // s16
  int v20; // r10
  pthread_mutex_t *v21; // r0
  pthread_mutex_t **v22; // r6
  int v23; // r5
  pthread_mutex_t *v24; // t1
  int v25; // r0
  int v26; // r10
  int v28; // r3
  int v29; // r1
  float v30; // s16
  int v31; // s21
  int v32; // r11
  pthread_mutex_t *v33; // r0
  pthread_mutex_t **v34; // r6
  int v35; // r5
  pthread_mutex_t *v36; // t1
  int v37; // r1
  const char *v38; // r0
  pthread_mutex_t **v39; // r6
  int v40; // r5
  pthread_mutex_t *v41; // t1
  const char *v42; // r5
  int v43; // r6
  _BOOL4 v44; // r3
  int v45; // r10
  int v46; // r3
  int v47; // r1
  int v48; // r8
  int v49; // r6
  pthread_mutex_t **v50; // r7
  int j; // r4
  pthread_mutex_t *v52; // t1
  int v53; // r1
  pthread_mutex_t *v54; // r2
  float v55; // s16
  int lock; // r3
  const char *v57; // r11
  unsigned int v58; // r5
  float *v59; // r10
  float v60; // s15
  float v61; // s17
  int eeprom_sweep_freq; // r10
  int kind; // r5
  int eeprom_freq; // r0
  int v65; // [sp+18h] [bp-121Ch]
  int v66; // [sp+1Ch] [bp-1218h]
  int v67; // [sp+20h] [bp-1214h] BYREF
  float v68; // [sp+24h] [bp-1210h] BYREF
  int v69; // [sp+28h] [bp-120Ch] BYREF
  int v70; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  char v72[4100]; // [sp+230h] [bp-1004h] BYREF

  v67 = 0;
  all_created_runtime = (pthread_mutex_t **)get_all_created_runtime(&v67);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v69 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)&v4[39].__count;
  v70 = 255;
  v8 = *(float *)&v4[39].__lock;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  v65 = current_voltage;
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v12 = v7 * *(float *)(a1 + 112);
    v66 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
    v11 = *(_DWORD *)(a1 + 92);
    if ( v11 > 19 )
      v1 = &g_zc;
    v12 = v7 * *(float *)(a1 + 112);
    v66 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v11 > 19 )
      goto LABEL_7;
  }
  V_LOCK();
  LOWORD(v28) = 24008;
  HIWORD(v28) = (unsigned int)"erage_freq: %.2f, sweep_level_freq: %d\n" >> 16;
  v1 = &g_zc;
  logfmt_raw(v72, 0x1000u, 0, v28);
  V_UNLOCK();
  LOWORD(v29) = 23828;
  HIWORD(v29) = (unsigned int)" %d max temp %d\n" >> 16;
  zlog(g_zc, v29, 178, "set_frequency_with_voltage_kas", 30, 359, 60, v72);
  v30 = *(float *)&(*v6)[39].__lock;
  v31 = (int)(float)((float)(900.0 - v30) / 6.25);
  if ( v31 > 0 )
  {
    v32 = 0;
    while ( 1 )
    {
      v30 = v30 + 6.25;
      if ( v67 > 0 )
        break;
LABEL_43:
      if ( v31 == ++v32 )
        goto LABEL_44;
    }
    v33 = *v6;
    if ( !*v6 )
      goto LABEL_30;
    v34 = v6;
    v35 = 0;
    while ( 1 )
    {
      ++v35;
      v26 = ((int (__fastcall *)(pthread_mutex_t *, _DWORD))v33[7].__spins)(v33, 0);
      send_fake_work_kas(*v34);
      if ( v26 )
        return v26;
      usleep(*(_DWORD *)(a1 + 100));
      if ( v67 <= v35 )
        goto LABEL_43;
      v36 = v34[1];
      ++v34;
      v33 = v36;
      if ( !v36 )
        goto LABEL_30;
    }
  }
LABEL_44:
  LOWORD(v42) = 24084;
  v43 = 180;
  check_temperature_base(a1, &v69, &v70);
  while ( v69 <= 19 )
  {
    v44 = v70 <= 19;
    if ( !v43 )
      v44 = 0;
    if ( !v44 )
      break;
    v43 -= 10;
    sleep(0xAu);
    if ( v67 > 0 )
    {
      v45 = 0;
      do
      {
        ++v45;
        check_temperature_base(a1, &v69, &v70);
        HIWORD(v42) = (unsigned int)"off." >> 16;
        printf(v42, v69, v70);
      }
      while ( v67 > v45 );
    }
  }
LABEL_7:
  V_LOCK();
  LOWORD(v14) = 24112;
  HIWORD(v14) = (unsigned int)"p on!" >> 16;
  logfmt_raw(v72, 0x1000u, 0, v14);
  V_UNLOCK();
  LOWORD(v15) = 23828;
  HIWORD(v15) = (unsigned int)" %d max temp %d\n" >> 16;
  zlog(*v1, v15, 178, "set_frequency_with_voltage_kas", 30, 389, 60, v72);
  if ( v67 > 0 )
  {
    v16 = v6 - 1;
    for ( i = 0; i < v67; ++i )
    {
      v18 = v16[1];
      ++v16;
      ((void (*)(void))v18[2].__owner)();
    }
  }
  v19 = *(float *)&(*v6)[39].__lock;
  if ( v13 > 0 )
  {
    v20 = 0;
    while ( 1 )
    {
      v19 = v19 + 6.25;
      if ( v67 > 0 )
        break;
LABEL_31:
      if ( working_voltage + 20 < v65 && v19 > v12 && v13 - v66 <= v20 )
      {
        v65 -= 10;
        v25 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v65);
        if ( v25 )
          return v25;
        usleep((__useconds_t)create_pool_stratum_threads);
      }
      if ( ++v20 == v13 )
        goto LABEL_37;
    }
    v21 = *v6;
    if ( *v6 )
    {
      v22 = v6;
      v23 = 0;
      do
      {
        ++v23;
        v25 = ((int (__fastcall *)(pthread_mutex_t *, _DWORD))v21[7].__spins)(v21, 0);
        if ( v25 )
          return v25;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v67 <= v23 )
          goto LABEL_31;
        v24 = v22[1];
        ++v22;
        v21 = v24;
      }
      while ( v24 );
    }
LABEL_30:
    LOWORD(v37) = 24068;
    LOWORD(v38) = 5892;
    HIWORD(v37) = (unsigned int)" have been poweroff." >> 16;
    HIWORD(v38) = (unsigned int)"simulation submit thread create failed" >> 16;
    printf(v38, v37);
    return 3;
  }
LABEL_37:
  if ( v19 != v7 && v67 > 0 )
  {
    v39 = v6 - 1;
    v40 = 0;
    do
    {
      v41 = v39[1];
      ++v39;
      ++v40;
      v25 = ((int (*)(void))v41[7].__spins)();
      if ( v25 )
        return v25;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v67 > v40 );
  }
  V_LOCK();
  LOWORD(v46) = 24188;
  HIWORD(v46) = (unsigned int)"" >> 16;
  logfmt_raw(v72, 0x1000u, 0, v46, v7, v65);
  V_UNLOCK();
  LOWORD(v47) = 23828;
  HIWORD(v47) = (unsigned int)" %d max temp %d\n" >> 16;
  zlog(*v1, v47, 178, "set_frequency_with_voltage_kas", 30, 549, 60, v72);
  if ( v67 > 0 )
  {
    LOWORD(v48) = 24240;
    LOWORD(v49) = 23828;
    v50 = v6 - 1;
    for ( j = 0; j < v67; ++j )
    {
      v52 = v50[1];
      ++v50;
      if ( api_get_eeprom_fmt_version(v52[9].__kind) == 4 && !api_get_eeprom_asic_freqs((*v50)[9].__kind, dest, &v68) )
      {
        v54 = *v50;
        v55 = 0.0;
        lock = (*v50)[13].__lock;
        if ( lock )
        {
          LOWORD(v57) = 24232;
          v58 = 0;
          v59 = (float *)dest;
          do
          {
            v60 = *v59++;
            HIWORD(v57) = (unsigned int)" no qualified device remain after check abnormal runtime!" >> 16;
            v55 = v55 + v60;
            printf(v57, v53, v60);
            if ( (v58 & 0xF) == 0xF || (v54 = *v50, lock = (*v50)[13].__lock, v53 = lock - 1, lock - 1 == v58) )
            {
              putchar(10);
              v54 = *v50;
              lock = (*v50)[13].__lock;
            }
            ++v58;
          }
          while ( lock > v58 );
        }
        v61 = v55 / (float)lock;
        v54[18].__owner = (int)v61;
        *(float *)&v54[39].__count = (float)(int)v61;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
        V_LOCK();
        kind = (*v50)[9].__kind;
        eeprom_freq = api_get_eeprom_freq(j);
        HIWORD(v48) = (unsigned int)"ified device remain after check abnormal runtime!" >> 16;
        logfmt_raw(v72, 0x1000u, 0, v48, kind, eeprom_freq, v61, eeprom_sweep_freq);
        V_UNLOCK();
        HIWORD(v49) = (unsigned int)" %d max temp %d\n" >> 16;
        zlog(*v1, v49, 178, "set_frequency_with_voltage_kas", 30, 571, 40, v72);
        ((void (*)(void))(*v50)[8].__owner)();
      }
    }
  }
  return 0;
}
