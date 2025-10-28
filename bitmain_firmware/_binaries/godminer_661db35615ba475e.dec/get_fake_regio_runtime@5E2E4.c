int __fastcall get_fake_regio_runtime(unsigned int a1)
{
  char *v1; // r6
  _DWORD *v4; // r0
  void (__fastcall *v5)(unsigned int); // r3
  int v6; // r9
  char *v7; // r7
  _DWORD *v8; // r5
  char *v9; // r0
  bool v10; // zf
  char *v11; // r8
  int v12; // r10
  int v13; // r4
  __int64 v14; // r0
  int v15; // r5

  v1 = &stru_190E30.__size[4 * a1];
  if ( *((_DWORD *)v1 + 556) )
    return *((_DWORD *)v1 + 556);
  v4 = calloc(1u, 0x2F0u);
  v4[30] = a1;
  v5 = (void (__fastcall *)(unsigned int))off_18F4C4[0];
  *((_DWORD *)v1 + 556) = v4;
  v5(a1);
  v6 = *((_DWORD *)v1 + 556);
  pthread_mutex_init((pthread_mutex_t *)(v6 + 660), 0);
  pthread_mutex_init((pthread_mutex_t *)(v6 + 684), 0);
  v7 = (char *)calloc(1u, 0x60u);
  v8 = malloc(0xB8u);
  v9 = (char *)malloc(0x20u);
  v10 = v9 == 0;
  if ( v9 )
    v10 = v8 == 0;
  v11 = v9;
  if ( v10 )
  {
    free(v8);
    free(v11);
    *(_DWORD *)v7 = 0;
    pthread_mutex_lock((pthread_mutex_t *)0x3C);
    __und(0);
  }
  memset(v8, 0, 0xB8u);
  v8[3] = v11;
  v8[5] = v11;
  v8[2] = -1;
  v8[4] = v11 + 32;
  *v8 = 1;
  v8[7] = 1;
  v8[8] = 1;
  v8[1] = 32;
  v8[6] = v11 + 1;
  pthread_mutex_init((pthread_mutex_t *)(v8 + 9), 0);
  pthread_mutex_init((pthread_mutex_t *)(v8 + 15), 0);
  pthread_cond_init((pthread_cond_t *)(v8 + 22), 0);
  pthread_cond_init((pthread_cond_t *)(v8 + 34), 0);
  *(_DWORD *)v7 = v8;
  pthread_mutex_lock((pthread_mutex_t *)(v8 + 15));
  ++v8[8];
  pthread_mutex_unlock((pthread_mutex_t *)(v8 + 15));
  v12 = *(_DWORD *)v7;
  *((_DWORD *)v7 + 2) = v8;
  pthread_mutex_lock((pthread_mutex_t *)(v12 + 36));
  ++*(_DWORD *)(v12 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v12 + 36));
  *((_DWORD *)v7 + 1) = v12;
  pthread_mutex_init((pthread_mutex_t *)(v7 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v7 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v7 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v7 + 40), (const pthread_condattr_t *)v7 + 22);
  *((_DWORD *)v7 + 3) = 0;
  v7[92] = 0;
  v13 = *((_DWORD *)v1 + 556);
  LODWORD(v14) = set_chip_reg_base;
  *(_DWORD *)(v6 + 636) = v7;
  HIDWORD(v14) = set_core_reg_base;
  v15 = *(_DWORD *)(v13 + 636);
  *(_QWORD *)(v13 + 140) = v14;
  *(_BYTE *)(v13 + 128) = 1;
  *(_DWORD *)(v13 + 628) = v15;
  *(_DWORD *)(v13 + 132) = set_chipaddr_base;
  *(_DWORD *)(v13 + 136) = set_inactive_base;
  *(_DWORD *)(v13 + 160) = sync_get_chip_reg_base;
  *(_DWORD *)(v13 + 168) = sync_get_core_reg_base;
  return v13;
}
