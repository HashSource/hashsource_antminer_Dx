int sub_9B44C()
{
  pthread_t v0; // r0
  unsigned int i; // r2
  unsigned int v2; // r6

  v0 = pthread_self();
  pthread_detach(v0);
  if ( g_pcba_info )
  {
    for ( i = 0; ; i = v2 )
    {
      v2 = i + 1;
      if ( i == 10 * (i / 0xA) )
      {
        (*(void (__fastcall **)(_DWORD))(dword_12C0E4 + 72))(*(_DWORD *)(dword_12C0E0 + 120));
        printf("%s[%d]\n", "pcba_pic_heartbeat_func", 344);
        printf("Got match nonce %d, tatol send work %d\n", dword_3B57A8, dword_3B57AC);
        sleep(1u);
        if ( !g_pcba_info )
          break;
      }
      else
      {
        sleep(1u);
        if ( !g_pcba_info )
          break;
      }
    }
  }
  printf("%s[%d] quit\n", "pcba_pic_heartbeat_func", 349);
  return 0;
}
