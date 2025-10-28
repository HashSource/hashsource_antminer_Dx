int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v2; // r10
  _DWORD *v3; // r4
  int v4; // r9
  int v5; // r11
  size_t v6; // r6
  void *v7; // r0
  void *v8; // r5
  size_t v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  const char *v12; // r2
  int v13; // r1
  const char *v14; // r2
  int v15; // r1
  int *v17; // lr
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r2
  int v26; // r1
  int v28; // [sp+1Ch] [bp-804h] BYREF
  _DWORD v29[7]; // [sp+20h] [bp-800h] BYREF
  __int16 v30; // [sp+3Ch] [bp-7E4h]
  _DWORD v31[1025]; // [sp+820h] [bp+0h] BYREF

  v28 = a1;
  if ( !a2 )
  {
    strcpy((char *)v29, "bad param\n");
    V_LOCK();
    logfmt_raw((char *)v31, 0x1000u, 0, v29);
    V_UNLOCK();
    v25 = 147;
    goto LABEL_17;
  }
  if ( pthread_mutex_lock(&stru_1AA6CC) )
  {
    LOWORD(v17) = -24244;
    HIWORD(v17) = (unsigned int)"iff %d TICKET_MASK_CKB %d" >> 16;
    v18 = *v17;
    v19 = v17[1];
    v20 = v17[2];
    v21 = v17[3];
    v17 += 4;
    v29[0] = v18;
    v29[1] = v19;
    v29[2] = v20;
    v29[3] = v21;
    v22 = v17[1];
    v23 = v17[2];
    v24 = v17[3];
    v29[4] = *v17;
    v29[5] = v22;
    v29[6] = v23;
    v30 = v24;
    V_LOCK();
    logfmt_raw((char *)v31, 0x1000u, 0, v29);
    V_UNLOCK();
    v25 = 152;
LABEL_17:
    LOWORD(v26) = -25884;
    HIWORD(v26) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v26, 165, "gpio_reg_callback", 17, v25, 100, v31);
    return -1;
  }
  if ( dword_1AA6E4 )
  {
    v2 = *(_DWORD *)dword_1AA6E4;
    v4 = *(_DWORD *)dword_1AA6E4 + 4;
    v3 = **(_DWORD ***)dword_1AA6E4;
    while ( v3 != (_DWORD *)v4 )
    {
      v5 = v3[4];
      v6 = *(_DWORD *)(v5 + 4);
      v7 = malloc(v6);
      v8 = v7;
      v9 = v6;
      if ( v7 )
        memcpy(v7, *(const void **)v5, v6);
      v10 = (*(int (__fastcall **)(int *, void *, size_t))(v2 + 36))(&v28, v8, v9);
      free(v8);
      if ( !v10 )
      {
        LOWORD(v14) = -24212;
        HIWORD(v14) = (unsigned int)"each pool\n" >> 16;
        snprintf((char *)v29, 0x800u, v14, v28);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v31, 0x1000u, 0, v29);
        pthread_mutex_unlock(&stru_1A8A24);
        LOWORD(v15) = -25884;
        HIWORD(v15) = (unsigned int)"k count %d" >> 16;
        zlog(g_zc, v15, 165, "gpio_reg_callback", 17, 165, 20, v31);
        goto LABEL_14;
      }
      v11 = (_DWORD *)*v3;
      v3 = (_DWORD *)v3[1];
      if ( v10 < 0 )
        v3 = v11;
    }
  }
  LOWORD(v12) = -24172;
  HIWORD(v12) = (unsigned int)"2x, reg value:%08x, reg addr:%02x" >> 16;
  snprintf((char *)v29, 0x800u, v12, v28);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v31, 0x1000u, 0, v29);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v13) = -25884;
  HIWORD(v13) = (unsigned int)"k count %d" >> 16;
  zlog(g_zc, v13, 165, "gpio_reg_callback", 17, 158, 20, v31);
  v31[1] = -1;
  v31[0] = a2;
  if ( dword_1AA6E4 )
    insert_c_rb(*(_DWORD *)dword_1AA6E4, &v28, 4u, v31, 8u);
LABEL_14:
  pthread_mutex_unlock(&stru_1AA6CC);
  return 0;
}
