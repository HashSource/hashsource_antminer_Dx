int __fastcall sub_B40DC(int a1)
{
  pthread_mutex_t *v1; // r8
  int v3; // r5
  int v4; // r4
  int v6; // r2
  int v7; // [sp+10h] [bp-1810h] BYREF
  int v8; // [sp+14h] [bp-180Ch] BYREF
  int v9; // [sp+18h] [bp-1808h] BYREF
  int v10; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v12[4096]; // [sp+820h] [bp-1000h] BYREF

  v1 = &stru_190C74[a1];
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  pthread_mutex_lock(v1);
  if ( sub_B3E74(a1, &v7, &v10, &v9, &v8) )
  {
    snprintf(s, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v12, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v6 = 660;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_uart.c",
      165,
      "clear_uart_tx_fifo",
      18,
      v6,
      100,
      v12);
  }
  else
  {
    v3 = 21;
    while ( 1 )
    {
      v4 = (unsigned __int8)(*(_DWORD *)(dword_197C8C + (v10 & 0xFFFFFFFC)) >> v7);
      if ( v4 == 255 )
        break;
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      *(_DWORD *)(dword_197C8C + (v9 & 0xFFFFFFFC)) = v4 | 0x80000000;
      usleep(0xBB8u);
      if ( !--v3 )
      {
        snprintf(s, 0x800u, "%s: uart%d always dose not has enough send fifo space, break\n", "clear_uart_tx_fifo", a1);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v12, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        v6 = 681;
        goto LABEL_7;
      }
    }
  }
  return pthread_mutex_unlock(v1);
}
