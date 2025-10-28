int __fastcall start_mining_kas(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r10
  _DWORD *v5; // r6
  int v6; // t1
  int v7; // r0
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r1
  const char *v12; // r0
  int v13; // r9
  pthread_mutex_t **v14; // r4
  int i; // r6
  pthread_mutex_t *v16; // t1
  unsigned int v17; // r0
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r4
  int (**v21)(void); // t1
  int v22; // r0
  int v23; // r6
  int v24; // r0
  int v25; // r11
  int *v26; // r6
  int v27; // r1
  char *v28; // r9
  int v29; // r0
  char *v30; // r11
  char *v31; // r3
  int v32; // r4
  int v33; // t1
  unsigned int v34; // r0
  int *v35; // r8
  int j; // r4
  int v37; // t1
  int v38; // r4
  _DWORD *v39; // r10
  int *v40; // r9
  int v41; // r8
  int v42; // r3
  int v43; // t1
  int v44; // t1
  int *v45; // r6
  int k; // r8
  int v47; // t1
  int v48; // r1
  const char *v49; // r0
  int v51; // r3
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r3
  int v57; // r1
  int v58; // r3
  char *v59; // r4
  int v60; // r1
  int v61; // r0
  int v62; // r0
  int v63; // t1
  int v64; // r3
  int v65; // r1
  int v66; // r3
  int v67; // r1
  int v68; // [sp+18h] [bp-100Ch] BYREF
  int v69; // [sp+1Ch] [bp-1008h] BYREF
  _DWORD v70[13]; // [sp+20h] [bp-1004h] BYREF
  __int16 v71; // [sp+54h] [bp-FD0h]

  v1 = 0;
  v68 = 0;
  all_created_runtime = get_all_created_runtime(&v68);
  v4 = all_created_runtime;
  if ( v68 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_46:
      LOWORD(v48) = 24356;
      LOWORD(v49) = 5892;
      v38 = 3;
      HIWORD(v48) = (unsigned int)"use to start mining" >> 16;
      HIWORD(v49) = (unsigned int)"simulation submit thread create failed" >> 16;
      printf(v49, v48);
      return v38;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v68 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_46;
    }
  }
  V_LOCK();
  LOWORD(v8) = 24312;
  HIWORD(v8) = (unsigned int)"ature %d C" >> 16;
  logfmt_raw((char *)v70, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = 23828;
  HIWORD(v9) = (unsigned int)" %d max temp %d\n" >> 16;
  zlog(g_zc, v9, 178, "start_mining_kas", 16, 171, 60, v70);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    LOWORD(v56) = 24372;
    HIWORD(v56) = (unsigned int)"ing" >> 16;
    logfmt_raw((char *)v70, 0x1000u, 0, v56);
    V_UNLOCK();
    LOWORD(v57) = 23828;
    HIWORD(v57) = (unsigned int)" %d max temp %d\n" >> 16;
    zlog(g_zc, v57, 178, "start_mining_kas", 16, 179, 60, v70);
  }
  if ( power_init(0, v68) )
  {
    V_LOCK();
    LOWORD(v51) = 24384;
    HIWORD(v51) = (unsigned int)&unk_136048 >> 16;
    logfmt_raw((char *)v70, 0x1000u, 0, v51);
    V_UNLOCK();
    LOWORD(v52) = 23828;
    HIWORD(v52) = (unsigned int)" %d max temp %d\n" >> 16;
    zlog(g_zc, v52, 178, "start_mining_kas", 16, 182, 100, v70);
    V_LOCK();
    LOWORD(v53) = 5552;
    LOWORD(v54) = 4784;
    HIWORD(v53) = (unsigned int)"algo %d, %s" >> 16;
    HIWORD(v54) = (unsigned int)"ch" >> 16;
    logfmt_raw((char *)v70, 0x1000u, 0, v54, v53);
    V_UNLOCK();
    LOWORD(v55) = 23828;
    HIWORD(v55) = (unsigned int)" %d max temp %d\n" >> 16;
    zlog(g_zc, v55, 178, "start_mining_kas", 16, 183, 100, v70);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v10) = 24428;
    HIWORD(v10) = (unsigned int)&unk_136074 >> 16;
    logfmt_raw((char *)v70, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = 23828;
    HIWORD(v11) = (unsigned int)" %d max temp %d\n" >> 16;
    zlog(g_zc, v11, 178, "start_mining_kas", 16, 186, 40, v70);
    if ( !start_heartbeat_thread() )
    {
      LOWORD(v12) = 24456;
      HIWORD(v12) = (unsigned int)"89" >> 16;
      v13 = 10;
      puts(v12);
      do
      {
        usleep((__useconds_t)&stru_18698.st_size);
        if ( v68 > 0 )
        {
          v14 = (pthread_mutex_t **)(v4 - 1);
          for ( i = 0; i < v68; ++i )
          {
            v70[0] = 53520981;
            v70[1] = -1996423168;
            v70[2] = 1568885659;
            v70[3] = -2022340884;
            v70[4] = 739994112;
            v70[5] = 2023104256;
            v70[6] = 504402544;
            v70[7] = 232286627;
            v70[8] = 1496646687;
            v70[9] = 295890251;
            v70[10] = 1890778236;
            v70[11] = 60442;
            v70[12] = 0;
            v71 = 13171;
            v16 = v14[1];
            ++v14;
            v17 = pthread_mutex_lock(v16 + 38);
            do
            {
              v18 = dev_ctrl(v17);
              v17 = (*(int (__fastcall **)(int))(v18 + 68))((*v14)[9].__kind);
            }
            while ( v17 <= 0x35 );
            v19 = dev_ctrl(v17);
            (*(void (__fastcall **)(int, _DWORD *, int))(v19 + 52))((*v14)[9].__kind, v70, 54);
            pthread_mutex_unlock(*v14 + 38);
          }
        }
        --v13;
      }
      while ( v13 );
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v68 > 0 )
      {
        v20 = v4 - 1;
        do
        {
          v21 = (int (**)(void))v20[1];
          ++v20;
          v22 = (*v21)();
          if ( !v22 )
          {
            v23 = 3;
            do
            {
              v24 = dev_ctrl(v22);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v24 + 24))(
                *(_DWORD *)(*v20 + 228),
                *(_DWORD *)(*v20 + 944),
                *(_DWORD *)(*v20 + 968));
              v25 = (*(int (**)(void))(*v20 + 204))();
              v22 = (*(int (**)(void))(*v20 + 216))();
              if ( !v25 )
                break;
              --v23;
            }
            while ( v23 );
          }
          ++v13;
        }
        while ( v68 > v13 );
      }
      check_and_destroy_abnormal_runtime();
      v26 = (int *)get_all_created_runtime(&v68);
      if ( v68 <= 0 )
      {
        V_LOCK();
        LOWORD(v64) = 24488;
        HIWORD(v64) = (unsigned int)"9" >> 16;
        v38 = 12;
        logfmt_raw((char *)v70, 0x1000u, 0, v64);
        V_UNLOCK();
        LOWORD(v65) = 23828;
        HIWORD(v65) = (unsigned int)" %d max temp %d\n" >> 16;
        zlog(g_zc, v65, 178, "start_mining_kas", 16, 233, 100, v70);
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK();
        logfmt_raw((char *)v70, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
        V_UNLOCK();
        LOWORD(v27) = 23828;
        HIWORD(v27) = (unsigned int)" %d max temp %d\n" >> 16;
        zlog(g_zc, v27, 178, "start_mining_kas", 16, 239, 60, v70);
        v28 = (char *)get_all_created_runtime(&v69);
        if ( v69 > 0 )
        {
          v29 = *(_DWORD *)(a1 + 92);
          if ( *(_DWORD *)(*(_DWORD *)v28 + 384) > v29 )
          {
            V_LOCK();
            LOWORD(v66) = 24588;
            HIWORD(v66) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c" >> 16;
            logfmt_raw((char *)v70, 0x1000u, 0, v66);
            V_UNLOCK();
            LOWORD(v67) = 23828;
            HIWORD(v67) = (unsigned int)" %d max temp %d\n" >> 16;
            zlog(g_zc, v67, 178, "check_if_bringup_temp_too_low", 29, 143, 100, v70);
          }
          else
          {
            v30 = v28;
            v31 = v28;
            v32 = 0;
            do
            {
              if ( ++v32 == v69 )
                goto LABEL_34;
              v33 = *((_DWORD *)v31 + 1);
              v31 += 4;
            }
            while ( *(_DWORD *)(v33 + 384) <= v29 );
            V_LOCK();
            LOWORD(v58) = 24588;
            HIWORD(v58) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c" >> 16;
            v59 = &v28[4 * v32];
            logfmt_raw((char *)v70, 0x1000u, 0, v58);
            V_UNLOCK();
            LOWORD(v60) = 23828;
            HIWORD(v60) = (unsigned int)" %d max temp %d\n" >> 16;
            zlog(g_zc, v60, 178, "check_if_bringup_temp_too_low", 29, 143, 100, v70);
            do
            {
              v61 = (*(int (**)(void))(*(_DWORD *)v30 + 20))();
              v62 = dev_ctrl(v61);
              v63 = *(_DWORD *)v30;
              v30 += 4;
              (*(void (__fastcall **)(_DWORD))(v62 + 28))(*(_DWORD *)(v63 + 228));
            }
            while ( v59 != v30 );
          }
          power_off();
          while ( 1 )
            sleep(1u);
        }
        v29 = *(_DWORD *)(a1 + 92);
LABEL_34:
        v34 = (*(int (__fastcall **)(int))(a1 + 24))(v29);
        fan_pwm_set(v34);
        if ( v68 > 0 )
        {
          v35 = v26 - 1;
          for ( j = 0; j < v68; ++j )
          {
            v37 = v35[1];
            ++v35;
            redirect_nonce_output(*v26, v37);
            (*(void (**)(void))(*v35 + 224))();
          }
        }
        v38 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v68 > 0 )
        {
          v39 = v4 - 1;
          v40 = v26 - 1;
          v41 = 0;
          do
          {
            v43 = v39[1];
            ++v39;
            v42 = v43;
            ++v41;
            v44 = v40[1];
            ++v40;
            (*(void (__fastcall **)(int))(v42 + 56))(v44);
          }
          while ( v68 > v41 );
        }
        if ( !v38 )
        {
          v38 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( !v38 && v68 > 0 )
          {
            v45 = v26 - 1;
            for ( k = 0; k < v68; ++k )
            {
              v47 = v45[1];
              ++v45;
              (*(void (**)(void))(v47 + 120))();
              (*(void (**)(void))(*v45 + 16))();
            }
          }
        }
      }
      return v38;
    }
    return start_heartbeat_thread();
  }
}
