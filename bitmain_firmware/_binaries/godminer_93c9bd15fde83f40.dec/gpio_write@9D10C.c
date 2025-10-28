int __fastcall gpio_write(int a1, int a2)
{
  const char *v4; // r2
  int v5; // r0
  int v6; // r5
  char *v7; // r1
  int v9; // r1
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r1
  int *v21; // r12
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r1
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  _DWORD v29[5]; // [sp+50h] [bp-1804h] BYREF
  int v30; // [sp+64h] [bp-17F0h]
  int v31; // [sp+68h] [bp-17ECh]
  int v32; // [sp+6Ch] [bp-17E8h]
  int v33; // [sp+70h] [bp-17E4h]
  int v34; // [sp+74h] [bp-17E0h]
  char v35[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1AA6E8) )
  {
    strcpy((char *)v29, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, v29);
    V_UNLOCK();
    LOWORD(v9) = -25884;
    HIWORD(v9) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v9, 165, "gpio_write", 10, 415, 100, v35);
    return -1;
  }
  else
  {
    LOWORD(v4) = -25664;
    HIWORD(v4) = (unsigned int)"2/chip_setting_ckb2.c" >> 16;
    snprintf(s, 0x40u, v4, a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      LOWORD(v10) = -25632;
      HIWORD(v10) = (unsigned int)"d" >> 16;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      v10 += 4;
      v29[0] = v11;
      v29[1] = v12;
      v29[2] = v13;
      v29[3] = v14;
      v15 = *v10;
      v16 = v10[1];
      v17 = v10[2];
      v18 = v10[3];
      v10 += 4;
      v29[4] = v15;
      v30 = v16;
      v31 = v17;
      v32 = v18;
      v19 = v10[1];
      v33 = *v10;
      v34 = v19;
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, v29);
      V_UNLOCK();
      LOWORD(v20) = -25884;
      HIWORD(v20) = (unsigned int)"k count %d" >> 16;
      zlog(g_zc, v20, 165, "gpio_write", 10, 423, 100, v35);
      pthread_mutex_unlock(&stru_1AA6E8);
      return -2;
    }
    else
    {
      if ( a2 )
        v7 = "1";
      else
        v7 = "01";
      if ( write(v5, v7, 1u) < 0 )
      {
        LOWORD(v21) = -25592;
        HIWORD(v21) = (unsigned int)"lue %08x/%d" >> 16;
        v22 = *v21;
        v23 = v21[1];
        v24 = v21[2];
        v25 = v21[3];
        v21 += 4;
        v29[0] = v22;
        v29[1] = v23;
        v29[2] = v24;
        v29[3] = v25;
        v26 = v21[1];
        v29[4] = *v21;
        v30 = v26;
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, v29);
        V_UNLOCK();
        LOWORD(v27) = -25884;
        HIWORD(v27) = (unsigned int)"k count %d" >> 16;
        zlog(g_zc, v27, 165, "gpio_write", 10, 429, 100, v35);
        close(v6);
        pthread_mutex_unlock(&stru_1AA6E8);
        return -3;
      }
      else
      {
        close(v6);
        pthread_mutex_unlock(&stru_1AA6E8);
        return 0;
      }
    }
  }
}
