int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v2; // r10
  _DWORD *v3; // r4
  int v4; // r7
  int v5; // r11
  size_t v6; // r6
  void *v7; // r0
  void *v8; // r5
  size_t v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r1
  const char *v24; // r2
  int v25; // r1
  int *v27; // lr
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r2
  int v36; // r1
  int v37; // [sp+1Ch] [bp-1808h] BYREF
  _DWORD v38[3]; // [sp+20h] [bp-1804h] BYREF
  int v39; // [sp+2Ch] [bp-17F8h]
  int v40; // [sp+30h] [bp-17F4h]
  int v41; // [sp+34h] [bp-17F0h]
  int v42; // [sp+38h] [bp-17ECh]
  int v43; // [sp+3Ch] [bp-17E8h]
  int v44; // [sp+40h] [bp-17E4h]
  int v45; // [sp+44h] [bp-17E0h]
  char v46; // [sp+48h] [bp-17DCh]
  char v47[4100]; // [sp+820h] [bp-1004h] BYREF

  v37 = a1;
  if ( !a2 )
  {
    strcpy((char *)v38, "bad param\n");
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, v38);
    V_UNLOCK();
    v35 = 183;
    goto LABEL_16;
  }
  if ( pthread_mutex_lock(&stru_1AA6CC) )
  {
    LOWORD(v27) = -24244;
    HIWORD(v27) = (unsigned int)"iff %d TICKET_MASK_CKB %d" >> 16;
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v31 = v27[3];
    v27 += 4;
    v38[0] = v28;
    v38[1] = v29;
    v38[2] = v30;
    v39 = v31;
    v32 = v27[1];
    v33 = v27[2];
    v34 = v27[3];
    v40 = *v27;
    v41 = v32;
    v42 = v33;
    LOWORD(v43) = v34;
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, v38);
    V_UNLOCK();
    v35 = 189;
LABEL_16:
    LOWORD(v36) = -25884;
    HIWORD(v36) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v36, 165, "gpio_unreg_callback", 19, v35, 100, v47);
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
      v10 = (*(int (__fastcall **)(int *, void *, size_t))(v2 + 36))(&v37, v8, v9);
      free(v8);
      if ( !v10 )
      {
        LOWORD(v24) = -23980;
        HIWORD(v24) = (unsigned int)"dCycle] get golden nonce!" >> 16;
        snprintf((char *)v38, 0x800u, v24, v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v47, 0x1000u, 0, v38);
        pthread_mutex_unlock(&stru_1A8A24);
        LOWORD(v25) = -25884;
        HIWORD(v25) = (unsigned int)"k count %d" >> 16;
        zlog(g_zc, v25, 165, "gpio_unreg_callback", 19, 195, 20, v47);
        remove_c_map((int *)dword_1AA6E4, (int)&v37);
        goto LABEL_13;
      }
      v11 = (_DWORD *)*v3;
      v3 = (_DWORD *)v3[1];
      if ( v10 < 0 )
        v3 = v11;
    }
  }
  LOWORD(v12) = -23948;
  HIWORD(v12) = (unsigned int)"dCycle], runtime_id:%d time: %ld us" >> 16;
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v12 += 4;
  v38[0] = v13;
  v38[1] = v14;
  v38[2] = v15;
  v39 = v16;
  v17 = *v12;
  v18 = v12[1];
  v19 = v12[2];
  v20 = v12[3];
  v12 += 4;
  v40 = v17;
  v41 = v18;
  v42 = v19;
  v43 = v20;
  v21 = v12[1];
  v22 = v12[2];
  v44 = *v12;
  v45 = v21;
  v46 = v22;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v47, 0x1000u, 0, v38);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v23) = -25884;
  HIWORD(v23) = (unsigned int)"k count %d" >> 16;
  zlog(g_zc, v23, 165, "gpio_unreg_callback", 19, 200, 80, v47);
LABEL_13:
  pthread_mutex_unlock(&stru_1AA6CC);
  return 0;
}
