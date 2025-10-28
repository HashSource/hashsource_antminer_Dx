int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r1
  _DWORD *v12; // r6
  int i; // r9
  int (**v14)(void); // t1
  int v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r4
  int v20; // r3
  int v21; // r1
  int v22; // r1
  const char *v23; // r0
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int *v29; // r7
  unsigned int v30; // r0
  int *v31; // r6
  int j; // r4
  int v33; // t1
  int v34; // r1
  int *v35; // r7
  int v36; // r6
  int v37; // t1
  int v38; // r3
  int v39; // r1
  int (__fastcall *v40)(int, int); // r4
  int v41; // r0
  int v42; // r3
  int v43; // r1
  int v44; // [sp+14h] [bp-4h] BYREF
  int v45; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v44 = 0;
  all_created_runtime = get_all_created_runtime(&v44);
  v4 = all_created_runtime;
  if ( v44 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      LOWORD(v22) = 24356;
      LOWORD(v23) = 5892;
      HIWORD(v22) = (unsigned int)"use to start mining" >> 16;
      HIWORD(v23) = (unsigned int)"simulation submit thread create failed" >> 16;
      printf(v23, v22);
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v44 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_25;
    }
  }
  V_LOCK();
  LOWORD(v8) = 24312;
  HIWORD(v8) = (unsigned int)"ature %d C" >> 16;
  logfmt_raw((char *)&v45, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = 25580;
  HIWORD(v9) = (unsigned int)"or_addr %02x, J0:6" >> 16;
  zlog(g_zc, v9, 165, "start_mining_base", 17, 754, 60, &v45);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_174FD4 = 1;
    V_LOCK();
    LOWORD(v20) = 24372;
    HIWORD(v20) = (unsigned int)"ing" >> 16;
    logfmt_raw((char *)&v45, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v21) = 25580;
    HIWORD(v21) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v21, 165, "start_mining_base", 17, 760, 60, &v45);
  }
  if ( power_init((unsigned __int8)byte_174FD4, v44) )
  {
    V_LOCK();
    LOWORD(v24) = 24384;
    HIWORD(v24) = (unsigned int)&unk_136048 >> 16;
    logfmt_raw((char *)&v45, 0x1000u, 0, v24);
    V_UNLOCK();
    LOWORD(v25) = 25580;
    HIWORD(v25) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v25, 165, "start_mining_base", 17, 763, 100, &v45);
    V_LOCK();
    LOWORD(v26) = 5552;
    LOWORD(v27) = 4784;
    HIWORD(v26) = (unsigned int)"algo %d, %s" >> 16;
    HIWORD(v27) = (unsigned int)"ch" >> 16;
    logfmt_raw((char *)&v45, 0x1000u, 0, v27, v26);
    V_UNLOCK();
    LOWORD(v28) = 25580;
    HIWORD(v28) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v28, 165, "start_mining_base", 17, 764, 100, &v45);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v10) = 24428;
    HIWORD(v10) = (unsigned int)&unk_136074 >> 16;
    logfmt_raw((char *)&v45, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = 25580;
    HIWORD(v11) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v11, 165, "start_mining_base", 17, 767, 40, &v45);
    if ( start_heartbeat_thread() )
    {
      return start_heartbeat_thread();
    }
    else
    {
      if ( opt_algo != 9
        || (v40 = *(int (__fastcall **)(int, int))(a1 + 28),
            v41 = platfrom_get_check_asic_voltage(),
            (v18 = v40(a1, v41)) == 0) )
      {
        (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
        if ( v44 <= 0 )
          goto LABEL_27;
        v12 = v4 - 1;
        for ( i = 0; i < v44; ++i )
        {
          v14 = (int (**)(void))v12[1];
          ++v12;
          v15 = (*v14)();
          if ( !v15 )
          {
            v16 = 3;
            do
            {
              v17 = dev_ctrl(0);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v17 + 24))(
                *(_DWORD *)(*v12 + 228),
                *(_DWORD *)(*v12 + 944),
                *(_DWORD *)(*v12 + 968));
              (*(void (**)(void))(*v12 + 216))();
              v15 = (*(int (**)(void))(*v12 + 204))();
              if ( v15 )
                break;
              --v16;
            }
            while ( v16 );
          }
        }
        if ( v15 )
        {
          return v15;
        }
        else
        {
LABEL_27:
          check_and_destroy_abnormal_runtime();
          v29 = (int *)get_all_created_runtime(&v44);
          if ( v44 <= 0 )
          {
            V_LOCK();
            LOWORD(v42) = 24488;
            HIWORD(v42) = (unsigned int)"9" >> 16;
            v18 = 12;
            logfmt_raw((char *)&v45, 0x1000u, 0, v42);
            V_UNLOCK();
            LOWORD(v43) = 25580;
            HIWORD(v43) = (unsigned int)"or_addr %02x, J0:6" >> 16;
            zlog(g_zc, v43, 165, "start_mining_base", 17, 799, 100, &v45);
          }
          else
          {
            v18 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
            if ( !v18 )
            {
              (*(void (__fastcall **)(int))(a1 + 64))(a1);
              if ( *(_DWORD *)(a1 + 72) != 9 )
              {
                V_LOCK();
                LOWORD(v38) = 24556;
                HIWORD(v38) = (unsigned int)"pace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c" >> 16;
                logfmt_raw((char *)&v45, 0x1000u, 0, v38, *(_DWORD *)(a1 + 92));
                V_UNLOCK();
                LOWORD(v39) = 25580;
                HIWORD(v39) = (unsigned int)"or_addr %02x, J0:6" >> 16;
                zlog(g_zc, v39, 165, "start_mining_base", 17, 813, 60, &v45);
              }
              v30 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
              fan_pwm_set(v30);
              if ( v44 > 0 )
              {
                v31 = v29 - 1;
                for ( j = 0; j < v44; ++j )
                {
                  v33 = v31[1];
                  ++v31;
                  redirect_nonce_output(*v29, v33);
                  (*(void (**)(void))(*v31 + 224))();
                }
              }
              if ( *(_DWORD *)(a1 + 72) == 9 )
              {
                (*(void (__fastcall **)(int))(a1 + 64))(a1);
                V_LOCK();
                logfmt_raw((char *)&v45, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
                V_UNLOCK();
                LOWORD(v34) = 25580;
                HIWORD(v34) = (unsigned int)"or_addr %02x, J0:6" >> 16;
                zlog(g_zc, v34, 165, "start_mining_base", 17, 829, 60, &v45);
              }
              v18 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
              if ( !v18 && v44 > 0 )
              {
                v35 = v29 - 1;
                v36 = 0;
                do
                {
                  v37 = v35[1];
                  ++v35;
                  ++v36;
                  (*(void (**)(void))(v37 + 4))();
                  (*(void (**)(void))(*v35 + 120))();
                  (*(void (**)(void))(*v35 + 16))();
                }
                while ( v44 > v36 );
              }
            }
          }
        }
      }
      return v18;
    }
  }
}
