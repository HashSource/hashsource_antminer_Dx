int __fastcall sub_97300(int a1)
{
  float v1; // s0
  signed int v2; // r1
  float v4; // s14
  unsigned int v5; // r2
  signed int v6; // r4
  unsigned int v7; // r7
  int v8; // r0
  double v9; // d9
  int v10; // r4
  int v12; // [sp+10h] [bp-1014h] BYREF
  int v13; // [sp+14h] [bp-1010h]
  int v14; // [sp+18h] [bp-100Ch]
  int v15; // [sp+1Ch] [bp-1008h]
  char v16[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = 7;
  v14 = 524289;
  v15 = 0;
  v13 = 0;
  while ( 1 )
  {
    v4 = v1 * (float)v2;
    v5 = (unsigned int)(float)(v4 * (float)v2);
    if ( v5 - 800 <= 0x640 )
    {
      v6 = v2;
      goto LABEL_17;
    }
    if ( v2 == 1 )
      break;
    v6 = v2 - 1;
    v5 = (unsigned int)(float)((float)(v2 - 1) * v4);
    if ( v5 - 800 <= 0x640 )
      goto LABEL_17;
    v6 = (unsigned __int8)(v2 - 2);
    if ( (_BYTE)v2 != 2 )
    {
      v5 = (unsigned int)(float)((float)v6 * v4);
      if ( v5 - 800 <= 0x640 )
        goto LABEL_17;
      v6 = (unsigned __int8)(v2 - 3);
      if ( (_BYTE)v2 != 3 )
      {
        v5 = (unsigned int)(float)((float)v6 * v4);
        if ( v5 - 800 <= 0x640 )
          goto LABEL_17;
        v6 = (unsigned __int8)(v2 - 4);
        if ( (_BYTE)v2 != 4 )
        {
          v5 = (unsigned int)(float)((float)v6 * v4);
          if ( v5 - 800 <= 0x640 )
            goto LABEL_17;
          v6 = (unsigned __int8)(v2 - 5);
          if ( (_BYTE)v2 != 5 )
          {
            v5 = (unsigned int)(float)((float)v6 * v4);
            if ( v5 - 800 <= 0x640 )
              goto LABEL_17;
            if ( (unsigned __int8)v2 != 6 )
            {
              v5 = (unsigned int)v4;
              if ( (unsigned int)v4 - 800 <= 0x640 )
              {
                v6 = 1;
LABEL_17:
                v7 = v6 | 0xC0000100 | (16 * v2) | ((v5 / 0x19) << 16);
                v8 = sub_15D3C8(25 * (v5 / 0x19), v2);
                v9 = (float)sub_15D3C8(v8, v6);
                goto LABEL_18;
              }
            }
          }
        }
      }
    }
    --v2;
  }
  v9 = 0.0;
  v7 = 0;
LABEL_18:
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v16, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v9, v1, v7, v13, v14, v15);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_freq_DASH",
    21,
    288,
    20,
    v16);
  v10 = (*(int (__fastcall **)(int, int *))(a1 + 140))(a1, &v12);
  usleep(0x2710u);
  return v10;
}
