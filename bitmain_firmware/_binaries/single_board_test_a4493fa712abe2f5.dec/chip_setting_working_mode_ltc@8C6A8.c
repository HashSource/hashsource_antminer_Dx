int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  int v10; // r9
  int v11; // r3
  char v12; // r1
  int v13; // r7
  int v15; // [sp+10h] [bp-1014h] BYREF
  int v16; // [sp+14h] [bp-1010h]
  int v17; // [sp+18h] [bp-100Ch]
  int v18; // [sp+1Ch] [bp-1008h]
  char var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v10 = a5;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(var1004, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_working_mode_ltc",
    29,
    297,
    20,
    var1004);
  if ( !a4 )
  {
    v15 = 0;
    LOBYTE(v11) = *(_BYTE *)(a1 + 184);
    v16 = 0;
    v18 = 0;
    v17 = (unsigned __int8)a2;
    if ( a2 )
    {
      BYTE1(v18) = v11;
      a2 = a5;
      goto LABEL_7;
    }
    a2 = a5;
    goto LABEL_3;
  }
  v11 = *(_DWORD *)(a1 + 184);
  v12 = 0;
  v15 = 0;
  v16 = 0;
  v10 = v11 - 1;
  v18 = 0;
  v17 = (unsigned __int8)a2;
  if ( !a2 )
  {
LABEL_3:
    v12 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + a3);
    goto LABEL_4;
  }
  a2 = 0;
LABEL_4:
  BYTE1(v17) = v12;
  BYTE1(v18) = v11;
  if ( v10 < a2 )
    return 0;
LABEL_7:
  while ( 1 )
  {
    v15 = a6 | 0x8400;
    HIWORD(v17) = 0;
    LOBYTE(v18) = a2;
    HIWORD(v18) = 0;
    v13 = (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v15);
    if ( v13 )
      break;
    ++a2;
    usleep(0x3E8u);
    if ( a2 > v10 )
      return 0;
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_working_mode_ltc", HIWORD(v17), a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_working_mode_ltc",
    29,
    320,
    100,
    var1004);
  return v13;
}
