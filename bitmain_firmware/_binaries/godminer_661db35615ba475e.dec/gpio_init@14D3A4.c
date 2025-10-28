int gpio_init()
{
  _DWORD *v0; // r6
  _DWORD *v1; // r0

  if ( dword_195C20 )
  {
    sub_14D304();
    return 0;
  }
  else
  {
    pthread_mutex_init(&stru_195C50, 0);
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
        v1[9] = sub_14B260;
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
    dword_195C68 = (int)v0;
    pthread_mutex_init(&stru_195C6C, 0);
    dword_195C48 = 1;
    pthread_create((pthread_t *)&dword_195C4C, 0, (void *(*)(void *))sub_14E478, 0);
    dword_195C20 = 1;
    return 0;
  }
}
