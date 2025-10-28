int __fastcall set_frequency_with_voltage_base(int a1)
{
  char *all_created_runtime; // r7
  float v3; // s17
  float v4; // s16
  int current_voltage; // r10
  int working_voltage; // r8
  float v7; // s20
  int v8; // s19
  int v9; // r0
  char *v10; // r5
  int v11; // r4
  int v12; // t1
  int result; // r0
  char *v15; // r7
  int v16; // r4
  int v17; // t1
  int v18; // [sp+10h] [bp-1014h]
  int v19; // [sp+14h] [bp-1010h]
  int v20; // [sp+1Ch] [bp-1008h] BYREF
  char v21[4100]; // [sp+20h] [bp-1004h] BYREF

  v20 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v20);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 916);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 912);
  if ( v3 > *(float *)(a1 + 96) )
    v3 = *(float *)(a1 + 96);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 84) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v7 = v3 * *(float *)(a1 + 104);
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "set_frequency_with_voltage_base",
    31,
    403,
    60,
    v21);
  v19 = (current_voltage - working_voltage) / 10;
  v8 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v8 <= 0 )
  {
LABEL_21:
    if ( v3 == v4 || v20 <= 0 )
    {
LABEL_28:
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "set freq to %.2f, current voltage %d", v3, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/machine_runtime/machine_runtime_base.c",
        165,
        "set_frequency_with_voltage_base",
        31,
        437,
        60,
        v21);
      return 0;
    }
    else
    {
      v15 = all_created_runtime - 4;
      v16 = 0;
      while ( 1 )
      {
        v17 = *((_DWORD *)v15 + 1);
        v15 += 4;
        ++v16;
        result = (*(int (**)(void))(v17 + 188))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 92));
        if ( v20 <= v16 )
          goto LABEL_28;
      }
    }
  }
  else
  {
    v18 = 0;
    while ( 1 )
    {
      v4 = v4 + 6.25;
      if ( v20 > 0 )
        break;
LABEL_14:
      if ( working_voltage + 20 < current_voltage && v7 < v4 && v8 - v19 <= v18 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( result )
          return result;
        usleep((__useconds_t)&loc_30D40);
      }
      if ( v8 == ++v18 )
        goto LABEL_21;
    }
    v9 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v10 = all_created_runtime;
      v11 = 0;
      while ( 1 )
      {
        ++v11;
        result = (*(int (__fastcall **)(int, _DWORD))(v9 + 188))(v9, 0);
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 92));
        if ( v20 <= v11 )
          goto LABEL_14;
        v12 = *((_DWORD *)v10 + 1);
        v10 += 4;
        v9 = v12;
        if ( !v12 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return result;
}
