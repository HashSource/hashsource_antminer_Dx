int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int v4; // r4
  const char *v5; // r2
  int v6; // r0
  int v7; // r5
  int v9; // r1
  const char *v10; // r2
  int v11; // r1
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r1
  int buf; // [sp+1Ch] [bp-1848h] BYREF
  char s[64]; // [sp+20h] [bp-1844h] BYREF
  _DWORD v21[5]; // [sp+60h] [bp-1804h] BYREF
  __int16 v22; // [sp+74h] [bp-17F0h]
  char v23; // [sp+76h] [bp-17EEh]
  char v24[4100]; // [sp+860h] [bp-1004h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_1AA6E8);
  if ( v4 )
  {
    v4 = -1;
    strcpy((char *)v21, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v21);
    V_UNLOCK();
    LOWORD(v9) = -25884;
    HIWORD(v9) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v9, 165, "gpio_read", 9, 372, 100, v24);
  }
  else
  {
    LOWORD(v5) = -25664;
    HIWORD(v5) = (unsigned int)"2/chip_setting_ckb2.c" >> 16;
    snprintf(s, 0x40u, v5, a1);
    v6 = open64(s);
    v7 = v6;
    if ( v6 < 0 )
    {
      LOWORD(v10) = -25568;
      HIWORD(v10) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ckb2/backend_ckb2.c" >> 16;
      snprintf((char *)v21, 0x800u, v10, a1);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, v21);
      V_UNLOCK();
      LOWORD(v11) = -25884;
      HIWORD(v11) = (unsigned int)"k count %d" >> 16;
      v4 = -2;
      zlog(g_zc, v11, 165, "gpio_read", 9, 380, 100, v24);
      pthread_mutex_unlock(&stru_1AA6E8);
    }
    else if ( read(v6, &buf, 4u) < 0 )
    {
      LOWORD(v12) = -25524;
      HIWORD(v12) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ckb2/backend_ckb2.c" >> 16;
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      v12 += 4;
      v21[0] = v13;
      v21[1] = v14;
      v21[2] = v15;
      v21[3] = v16;
      v17 = v12[1];
      v21[4] = *v12;
      v22 = v17;
      v23 = BYTE2(v17);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, v21);
      V_UNLOCK();
      LOWORD(v18) = -25884;
      HIWORD(v18) = (unsigned int)"k count %d" >> 16;
      v4 = -3;
      zlog(g_zc, v18, 165, "gpio_read", 9, 387, 100, v24);
      close(v7);
      pthread_mutex_unlock(&stru_1AA6E8);
    }
    else
    {
      close(v7);
      pthread_mutex_unlock(&stru_1AA6E8);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
