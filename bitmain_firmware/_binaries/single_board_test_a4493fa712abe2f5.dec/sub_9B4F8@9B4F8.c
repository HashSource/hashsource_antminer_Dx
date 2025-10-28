int __fastcall sub_9B4F8(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  while ( g_pcba_info )
    off_3B57BC(a1);
  printf("%s[%d] quit\n", "pcba_receive_func", 387);
  return 0;
}
