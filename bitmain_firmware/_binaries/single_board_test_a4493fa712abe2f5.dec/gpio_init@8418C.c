int gpio_init()
{
  _DWORD *v0; // r6
  _DWORD *v1; // r0

  if ( dword_12B6F4 )
  {
    sub_84118();
    return 0;
  }
  else
  {
    pthread_mutex_init(&stru_12B708, 0);
    v0 = malloc(4u);
    if ( v0 )
    {
      v1 = malloc(0x28u);
      if ( v1 )
      {
        v1[5] = 0;
        v1[6] = 0;
        v1[7] = 0;
        v1[8] = 0;
        v1[3] = 0;
        v1[4] = 0;
        *v0 = v1;
        v1[9] = sub_80590;
        *v1 = v1 + 1;
        v1[1] = v1 + 1;
        v1[2] = v1 + 1;
      }
      else
      {
        *v0 = 0;
        v0 = 0;
      }
    }
    dword_12B720 = (int)v0;
    pthread_mutex_init(&stru_3B52AC, 0);
    dword_12B700 = 1;
    pthread_create((pthread_t *)&dword_12B704, 0, (void *(*)(void *))sub_84FD4, 0);
    dword_12B6F4 = 1;
    return 0;
  }
}
