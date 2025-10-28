int __fastcall get_fake_regio_runtime(unsigned int a1)
{
  char *v1; // r4
  _DWORD *v4; // r0
  void (__fastcall *v5)(unsigned int); // r3
  int v6; // r6
  char *v7; // r0
  int v8; // r5
  __int64 v9; // r0
  int v10; // r6

  v1 = &tw_cmd_acc_mutex.__size[4 * a1];
  if ( *((_DWORD *)v1 + 12) )
    return *((_DWORD *)v1 + 12);
  v4 = calloc(1u, 0x2F0u);
  v4[30] = a1;
  v5 = (void (__fastcall *)(unsigned int))off_12943C;
  *((_DWORD *)v1 + 12) = v4;
  v5(a1);
  v6 = *((_DWORD *)v1 + 12);
  pthread_mutex_init((pthread_mutex_t *)(v6 + 660), 0);
  pthread_mutex_init((pthread_mutex_t *)(v6 + 684), 0);
  v7 = sub_CECE8(1);
  v8 = *((_DWORD *)v1 + 12);
  *(_DWORD *)(v6 + 636) = v7;
  LODWORD(v9) = set_chip_reg_base;
  v10 = *(_DWORD *)(v8 + 636);
  *(_DWORD *)(v8 + 132) = set_chipaddr_base;
  HIDWORD(v9) = set_core_reg_base;
  *(_DWORD *)(v8 + 136) = set_inactive_base;
  *(_QWORD *)(v8 + 140) = v9;
  *(_DWORD *)(v8 + 628) = v10;
  *(_DWORD *)(v8 + 160) = sync_get_chip_reg_base;
  *(_DWORD *)(v8 + 168) = sync_get_core_reg_base;
  *(_BYTE *)(v8 + 128) = 1;
  return v8;
}
