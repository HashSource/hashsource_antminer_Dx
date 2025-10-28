int gpio_init()
{
  _DWORD *v0; // r6
  _DWORD *v1; // r0

  if ( dword_1AA6B8 )
  {
    sub_9CDF4();
    return 0;
  }
  else
  {
    pthread_mutex_init(&stru_1AA6CC, 0);
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
        v1[9] = 620024;
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
    dword_1AA6E4 = (int)v0;
    pthread_mutex_init(&stru_1AA6E8, 0);
    dword_1AA6C4 = 1;
    pthread_create((pthread_t *)&dword_1AA6C8, 0, (void *(*)(void *))sub_9E170, 0);
    dword_1AA6B8 = 1;
    return 0;
  }
}
