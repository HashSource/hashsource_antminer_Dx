int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r3
  bool v5; // zf
  signed int v7; // r1
  float v8; // s14
  unsigned int v9; // r2
  signed int v10; // r4
  unsigned int v11; // r7
  int v12; // r0
  double v13; // d9
  int v14; // r4
  int v16; // [sp+10h] [bp-1014h] BYREF
  int v17; // [sp+14h] [bp-1010h]
  int v18; // [sp+18h] [bp-100Ch]
  int v19; // [sp+1Ch] [bp-1008h]
  char v20[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = 0;
  v5 = a2 == 0;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  v16 = 0;
  if ( !a2 )
    v4 = *(_DWORD *)(a1 + 296);
  LOBYTE(v18) = a2;
  v7 = 7;
  if ( v5 )
    LOBYTE(v4) = *(_BYTE *)(v4 + a3);
  HIWORD(v18) = 8;
  BYTE1(v18) = v4;
  while ( 1 )
  {
    v8 = v3 * (float)v7;
    v9 = (unsigned int)(float)(v8 * (float)v7);
    if ( v9 - 800 <= 0x640 )
    {
      v10 = v7;
      goto LABEL_21;
    }
    if ( v7 == 1 )
      break;
    v10 = v7 - 1;
    v9 = (unsigned int)(float)((float)(v7 - 1) * v8);
    if ( v9 - 800 <= 0x640 )
      goto LABEL_21;
    v10 = (unsigned __int8)(v7 - 2);
    if ( (_BYTE)v7 != 2 )
    {
      v9 = (unsigned int)(float)((float)v10 * v8);
      if ( v9 - 800 <= 0x640 )
        goto LABEL_21;
      v10 = (unsigned __int8)(v7 - 3);
      if ( (_BYTE)v7 != 3 )
      {
        v9 = (unsigned int)(float)((float)v10 * v8);
        if ( v9 - 800 <= 0x640 )
          goto LABEL_21;
        v10 = (unsigned __int8)(v7 - 4);
        if ( (_BYTE)v7 != 4 )
        {
          v9 = (unsigned int)(float)((float)v10 * v8);
          if ( v9 - 800 <= 0x640 )
            goto LABEL_21;
          v10 = (unsigned __int8)(v7 - 5);
          if ( (_BYTE)v7 != 5 )
          {
            v9 = (unsigned int)(float)((float)v10 * v8);
            if ( v9 - 800 <= 0x640 )
              goto LABEL_21;
            if ( (unsigned __int8)v7 != 6 )
            {
              v9 = (unsigned int)v8;
              if ( (unsigned int)v8 - 800 <= 0x640 )
              {
                v10 = 1;
LABEL_21:
                v11 = v10 | 0xA0000100 | (16 * v7) | ((v9 / 0x19) << 16);
                v12 = sub_16E220(25 * (v9 / 0x19), v7);
                v13 = (float)sub_16E220(v12, v10);
                goto LABEL_22;
              }
            }
          }
        }
      }
    }
    --v7;
  }
  v13 = 0.0;
  v11 = 0;
LABEL_22:
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v20, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v13, v3, v11, v17, v18, v19);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v20);
  v14 = (*(int (__fastcall **)(int, int *))(a1 + 152))(a1, &v16);
  usleep(0x2710u);
  return v14;
}
