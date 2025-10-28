int __fastcall check_asic_num_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int i; // r4
  int v10; // r0
  int v11; // r5
  _DWORD *v12; // r4
  int (**v13)(void); // t1
  int v14; // r6
  int v15; // r0
  int v16; // r6
  _DWORD *v18; // [sp+18h] [bp-90h]
  int v19; // [sp+24h] [bp-84h] BYREF
  _QWORD v20[16]; // [sp+28h] [bp-80h] BYREF
  char v21[4100]; // [sp+A8h] [bp+0h] BYREF

  v1 = 0;
  v19 = 0;
  all_created_runtime = get_all_created_runtime(&v19);
  v18 = all_created_runtime;
  if ( v19 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v4 = all_created_runtime;
    while ( 1 )
    {
      v6 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v6 + 28))(v1++);
      if ( v19 <= v1 )
        break;
      v5 = v4[1];
      ++v4;
      if ( !v5 )
        goto LABEL_25;
    }
  }
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  v7 = 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "check_asic_num_base",
    19,
    453,
    60,
    v21);
  memset(v20, 0, sizeof(v20));
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "start to check asic num test loop");
  V_UNLOCK();
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_godminer-new/machine_runtime/machine_runtime_base.c",
         165,
         "check_asic_num_base",
         19,
         458,
         60,
         v21);
  while ( 1 )
  {
    if ( v19 > 0 )
    {
      for ( i = 0; i < v19; ++i )
      {
        v10 = dev_ctrl(v8);
        v8 = (*(int (__fastcall **)(int))(v10 + 40))(i);
      }
    }
    v11 = power_init((unsigned __int8)byte_165CB8);
    if ( v11 )
      break;
    v8 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 72));
    if ( v19 > 0 )
    {
      v12 = v18 - 1;
      do
      {
        v13 = (int (**)(void))v12[1];
        ++v12;
        v8 = (*v13)();
        if ( !v8 )
        {
          v14 = 3;
          while ( 1 )
          {
            v15 = dev_ctrl(v8);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v15 + 24))(
              *(_DWORD *)(*v12 + 212),
              *(_DWORD *)(*v12 + 920),
              *(_DWORD *)(*v12 + 944));
            (*(void (**)(void))(*v12 + 204))();
            v8 = (*(int (**)(void))(*v12 + 192))();
            if ( !v8 )
              break;
            if ( !--v14 )
            {
              v16 = LODWORD(v20[v11]) + 1;
              LODWORD(v20[v11]) = v16;
              goto LABEL_20;
            }
          }
          v16 = v20[v11];
LABEL_20:
          (*(void (**)(void))(*v12 + 28))();
          V_LOCK();
          logfmt_raw(
            v21,
            0x1000u,
            0,
            "chain[%d] check asic num test, loop:%d done, total failed times:%d",
            v11,
            v7,
            v16);
          V_UNLOCK();
          v8 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                 165,
                 "check_asic_num_base",
                 19,
                 492,
                 60,
                 v21);
        }
        ++v11;
      }
      while ( v19 > v11 );
    }
    if ( ++v7 == 1001 )
      return 0;
  }
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "power init error!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "check_asic_num_base",
    19,
    466,
    100,
    v21);
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "Sweep error string = %s.", "V:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "check_asic_num_base",
    19,
    467,
    100,
    v21);
  return 30;
}
