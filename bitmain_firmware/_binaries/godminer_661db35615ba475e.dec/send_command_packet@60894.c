int __fastcall send_command_packet(int a1, const void *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r7
  int v7; // r4
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 684);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 684));
  while ( off_18F4F8[0]() < a3 )
    usleep(0x2710u);
  v7 = ((size_t (__fastcall *)(int, const void *, size_t))off_18F4F0[0])(*(_DWORD *)(a1 + 120), a2, a3);
  pthread_mutex_unlock(v3);
  if ( v7 <= 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v9, 0x1000u, 0, "device %d send cmd failed,errcode %d \n", *(_DWORD *)(a1 + 120), v7);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_reg_io_interface.c",
      152,
      "send_command_packet",
      19,
      44,
      100,
      v9);
  }
  return v7;
}
