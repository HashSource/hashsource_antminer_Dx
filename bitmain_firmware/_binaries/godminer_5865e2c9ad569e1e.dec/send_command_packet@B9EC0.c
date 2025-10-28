int __fastcall send_command_packet(pthread_mutex_t *a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int i; // r0
  int (**v8)(); // r0
  int (**v9)(); // r0
  int v10; // r5
  int v12; // r3
  int v13; // r3
  int v14; // r1
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = a1 + 37;
  for ( i = pthread_mutex_lock(a1 + 37); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( ((int (__fastcall *)(int))v8[16])(a1[9].__kind) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = ((int (__fastcall *)(int, int, unsigned int))v9[14])(a1[9].__kind, a2, a3);
  pthread_mutex_unlock(v3);
  if ( v10 <= 0 )
  {
    V_LOCK();
    LOWORD(v12) = 29032;
    HIWORD(v12) = (unsigned int)"_pic_for_one_chain" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v12, a1[9].__kind, v10);
    V_UNLOCK();
    LOWORD(v13) = 29012;
    LOWORD(v14) = 29072;
    HIWORD(v13) = (unsigned int)"r_on_hal" >> 16;
    HIWORD(v14) = (unsigned int)"pic_operation_to_hal" >> 16;
    zlog(g_zc, v14, 158, v13, 19, 44, 100, v15);
  }
  return v10;
}
