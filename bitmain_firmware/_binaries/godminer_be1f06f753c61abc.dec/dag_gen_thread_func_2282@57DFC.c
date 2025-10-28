void __noreturn dag_gen_thread_func_2282()
{
  int epoch_number_eth_2282; // r6
  void **v1; // r7
  signed int i; // r6
  void (**v3)(void); // t1
  __int64 v4; // r6
  signed int *v5; // r1
  int v6; // r3
  unsigned int v7; // r2
  signed int v8; // t1
  pthread_t *v9; // r0
  pthread_t *v10; // r9
  void **v11; // r8
  pthread_t *v12; // r7
  signed int v13; // r6
  _DWORD *v14; // t1
  pthread_t *v15; // r0
  char *v16; // r7
  signed int j; // r6
  pthread_t v18; // t1
  pthread_t *v19; // r0
  pthread_t *v20; // r9
  void **v21; // r8
  pthread_t *v22; // r7
  signed int k; // r6
  void *(**v24)(void *); // t1
  pthread_t *v25; // r0
  char *v26; // r7
  signed int m; // r6
  pthread_t v28; // t1
  int v29; // [sp+4h] [bp-1098h]
  __int64 v30; // [sp+28h] [bp-1074h]
  void **v31; // [sp+30h] [bp-106Ch]
  signed int v32; // [sp+44h] [bp-1058h] BYREF
  _DWORD s[8]; // [sp+48h] [bp-1054h] BYREF
  _QWORD v34[6]; // [sp+68h] [bp-1034h] BYREF
  char v35[4100]; // [sp+98h] [bp-1004h] BYREF

  v32 = 0;
  v31 = (void **)((char *)get_all_created_runtime(&v32) - 4);
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed_2282(s);
      epoch_number_eth_2282 = get_epoch_number_eth_2282(s);
      if ( dword_193708 == epoch_number_eth_2282 )
        break;
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_193708, epoch_number_eth_2282);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        173,
        "dag_gen_thread_func_2282",
        24,
        194,
        40,
        v35);
      if ( !epoch_number_eth_2282 )
        goto LABEL_8;
      if ( dword_193708 != epoch_number_eth_2282 )
      {
        if ( dword_193708 <= epoch_number_eth_2282 )
        {
          dword_193708 = epoch_number_eth_2282;
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            173,
            "dag_gen_thread_func_2282",
            24,
            211,
            60,
            v35);
          if ( v32 > 0 )
          {
            v1 = v31;
            for ( i = 0; i < v32; ++i )
            {
              v3 = (void (**)(void))v1[1];
              ++v1;
              v3[6]();
            }
          }
          v30 = qword_156358[dword_193708];
          v4 = qword_15A358[dword_193708];
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "ethereum epoch changed, start to generate and download dag items");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            173,
            "dag_gen_thread_func_2282",
            24,
            220,
            60,
            v35);
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "epoch %d, set cache size %llx, dag size %llx", dword_193708, v29, v30, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            173,
            "dag_gen_thread_func_2282",
            24,
            222,
            60,
            v35);
          v5 = &v32;
          v6 = 0;
          v34[0] = v30;
          v34[1] = v4;
          do
          {
            v7 = v6 & 0xFFFFFFFC;
            v8 = v5[1];
            ++v5;
            v6 += 4;
            *(_DWORD *)((char *)&v34[2] + v7) = v8;
          }
          while ( v6 != 32 );
          v9 = (pthread_t *)calloc(v32, 4u);
          v10 = v9;
          if ( v32 > 0 )
          {
            v11 = v31;
            v12 = v9;
            v13 = 0;
            do
            {
              v14 = v11[1];
              ++v11;
              v15 = v12;
              ++v13;
              ++v12;
              v14[257] = v34;
              pthread_create(v15, 0, *((void *(**)(void *))*v11 + 59), *v11);
            }
            while ( v32 > v13 );
            if ( v32 > 0 )
            {
              v16 = (char *)(v10 - 1);
              for ( j = 0; j < v32; ++j )
              {
                v18 = *((_DWORD *)v16 + 1);
                v16 += 4;
                pthread_join(v18, 0);
              }
            }
          }
          free(v10);
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "recover mining all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            173,
            "dag_gen_thread_func_2282",
            24,
            248,
            60,
            v35);
          v19 = (pthread_t *)calloc(v32, 4u);
          v20 = v19;
          if ( v32 > 0 )
          {
            v21 = v31;
            v22 = v19;
            for ( k = 0; k < v32; ++k )
            {
              v24 = (void *(**)(void *))v21[1];
              ++v21;
              v25 = v22++;
              pthread_create(v25, 0, v24[7], v24);
            }
            if ( v32 > 0 )
            {
              v26 = (char *)(v20 - 1);
              for ( m = 0; m < v32; ++m )
              {
                v28 = *((_DWORD *)v26 + 1);
                v26 += 4;
                pthread_join(v28, 0);
              }
            }
          }
          free(v20);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v35,
            0x1000u,
            0,
            "cur_epoch-epoch [%d-%d], only etc mining support, sorry...",
            dword_193708,
            epoch_number_eth_2282);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            173,
            "dag_gen_thread_func_2282",
            24,
            206,
            40,
            v35);
        }
      }
    }
    if ( !dword_193708 )
    {
LABEL_8:
      V_LOCK();
      logfmt_raw(
        v35,
        0x1000u,
        0,
        "cur_epoch-epoch [%d-%d], synchronizing the state of the blockchain and start mining",
        dword_193708,
        0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        173,
        "dag_gen_thread_func_2282",
        24,
        197,
        40,
        v35);
    }
  }
}
