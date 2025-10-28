int __fastcall sub_2A044(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  if ( !nice(10) )
    sub_23134();
  api();
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
