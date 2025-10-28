int __fastcall get_fake_regio_runtime(unsigned int a1)
{
  char *v1; // r4
  _DWORD *v4; // r0
  void (__fastcall *v5)(unsigned int); // r3
  int v6; // r6
  char *v7; // r0
  int v8; // r5
  __int64 v9; // r0
  int v10; // lr

  v1 = &stru_1A9B48.__size[4 * a1];
  if ( *((_DWORD *)v1 + 263) )
    return *((_DWORD *)v1 + 263);
  v4 = calloc(1u, 0x310u);
  v4[33] = a1;
  v5 = (void (__fastcall *)(unsigned int))off_1A2B70[0];
  *((_DWORD *)v1 + 263) = v4;
  v5(a1);
  v6 = *((_DWORD *)v1 + 263);
  pthread_mutex_init((pthread_mutex_t *)(v6 + 688), 0);
  pthread_mutex_init((pthread_mutex_t *)(v6 + 712), 0);
  v7 = sub_B6254(1);
  v8 = *((_DWORD *)v1 + 263);
  *(_DWORD *)(v6 + 664) = v7;
  LODWORD(v9) = set_chip_reg_base;
  v10 = *(_DWORD *)(v8 + 664);
  *(_DWORD *)(v8 + 144) = set_chipaddr_base;
  HIDWORD(v9) = set_core_reg_base;
  *(_DWORD *)(v8 + 148) = set_inactive_base;
  *(_QWORD *)(v8 + 152) = v9;
  *(_DWORD *)(v8 + 656) = v10;
  *(_DWORD *)(v8 + 172) = sync_get_chip_reg_base;
  *(_DWORD *)(v8 + 180) = sync_get_core_reg_base;
  *(_BYTE *)(v8 + 140) = 1;
  return v8;
}
