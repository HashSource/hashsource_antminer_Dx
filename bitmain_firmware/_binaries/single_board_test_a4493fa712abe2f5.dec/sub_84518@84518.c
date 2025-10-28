int sub_84518()
{
  int v0; // r10
  int (**v1)(void); // r0
  int (**v2)(void); // r4
  int v3; // r3
  int *v4; // r10
  int v5; // r3
  int v6; // r7
  int v7; // lr
  int (*v8)(void); // r7
  _BOOL4 v9; // r3
  int v11; // [sp+Ch] [bp-Ch] BYREF
  int v12; // [sp+10h] [bp-8h]
  _BOOL4 v13; // [sp+14h] [bp-4h]

  while ( dword_12B6F8 )
  {
    if ( !pthread_mutex_lock(&stru_3B5460) )
    {
      v0 = dword_3B545C;
      v1 = (int (**)(void))malloc(0x18u);
      v1[3] = (int (*)(void))v0;
      v2 = v1;
      *v1 = (int (*)(void))sub_57DDC;
      v1[4] = 0;
      v1[5] = 0;
      v1[1] = (int (*)(void))sub_57FD4;
      v1[2] = (int (*)(void))sub_5802C;
      if ( sub_57DDC((int)v1) )
      {
        do
        {
          v4 = (int *)v2[2]();
          v5 = v4[1];
          v6 = v5 - 200;
          if ( v5 )
          {
            v3 = v4[2];
            v4[1] = v6;
            v11 = *v4;
            v12 = v6;
            v13 = v3;
            ((void (__fastcall *)(int (**)(void), int *))v2[1])(v2, &v11);
          }
          else
          {
            gpio_write(***((_DWORD ***)v2[5] + 4), *((unsigned __int8 *)v4 + 8));
            v7 = *v4;
            v8 = v2[1];
            v9 = v4[2] != 1;
            v4[2] = v9;
            v4[1] = v7 - 200;
            v11 = v7;
            v12 = v7 - 200;
            v13 = v9;
            ((void (__fastcall *)(int (**)(void), int *))v8)(v2, &v11);
          }
          free(v4);
        }
        while ( ((int (__fastcall *)(int (**)(void)))*v2)(v2) );
      }
      free(v2);
      pthread_mutex_unlock(&stru_3B5460);
    }
    usleep(0x30D40u);
  }
  return 0;
}
