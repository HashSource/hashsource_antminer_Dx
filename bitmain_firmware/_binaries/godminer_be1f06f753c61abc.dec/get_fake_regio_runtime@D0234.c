int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  int *v6; // r0
  int v7; // r4

  if ( dword_1B4B38[a1] )
    return dword_1B4B38[a1];
  v3 = calloc(1u, 0x4A0u);
  v3[62] = a1;
  dword_1B4B38[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_1B4B38[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 920), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 944), 0);
  v6 = queue_new(1, 0);
  v7 = dword_1B4B38[a1];
  *(_DWORD *)(v5 + 884) = v6;
  *(_DWORD *)(v7 + 872) = *(_DWORD *)(v7 + 884);
  *(_DWORD *)(v7 + 268) = set_chipaddr_base;
  *(_DWORD *)(v7 + 276) = set_chip_reg_base;
  *(_DWORD *)(v7 + 272) = set_inactive_base;
  *(_DWORD *)(v7 + 280) = set_core_reg_base;
  *(_DWORD *)(v7 + 296) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 316) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 260) = 1;
  return v7;
}
