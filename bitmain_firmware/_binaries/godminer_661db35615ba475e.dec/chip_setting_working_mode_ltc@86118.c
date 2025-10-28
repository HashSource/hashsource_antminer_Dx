int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  int v10; // r8
  int v11; // r3
  bool v12; // zf
  char v13; // r1
  int v14; // r9
  int v16; // [sp+10h] [bp-1014h] BYREF
  int v17; // [sp+14h] [bp-1010h]
  int v18; // [sp+18h] [bp-100Ch]
  int v19; // [sp+1Ch] [bp-1008h]
  char var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v10 = a5;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(var1004, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_working_mode_ltc",
    29,
    297,
    20,
    var1004);
  if ( a4 )
  {
    v11 = *(_DWORD *)(a1 + 184);
    v12 = a2 == 0;
    v16 = 0;
    v17 = 0;
    v10 = v11 - 1;
    v18 = (unsigned __int8)a2;
    if ( a2 )
      a2 = 0;
    v19 = 0;
    if ( !v12 )
    {
      v13 = a2;
      goto LABEL_7;
    }
  }
  else
  {
    v16 = 0;
    LOBYTE(v11) = *(_BYTE *)(a1 + 184);
    v17 = 0;
    v19 = 0;
    v18 = (unsigned __int8)a2;
    if ( a2 )
    {
      BYTE1(v19) = v11;
      a2 = a5;
      goto LABEL_10;
    }
    a2 = a5;
  }
  v13 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + a3);
LABEL_7:
  BYTE1(v18) = v13;
  BYTE1(v19) = v11;
  if ( v10 < a2 )
    return 0;
LABEL_10:
  while ( 1 )
  {
    v16 = a6 | 0x8400;
    HIWORD(v18) = 0;
    LOBYTE(v19) = a2;
    HIWORD(v19) = 0;
    v14 = (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v16);
    if ( v14 )
      break;
    ++a2;
    usleep(0x3E8u);
    if ( a2 > v10 )
      return 0;
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_working_mode_ltc", HIWORD(v18), a2);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_working_mode_ltc",
    29,
    320,
    100,
    var1004);
  return v14;
}
