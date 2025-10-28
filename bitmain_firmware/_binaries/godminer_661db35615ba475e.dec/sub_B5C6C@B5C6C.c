int sub_B5C6C()
{
  int v0; // r10
  int (**v1)(void); // r0
  int (**v2)(void); // r4
  int v3; // lr
  int v4; // r3
  int *v5; // r5
  int v6; // r3
  int v7; // r12
  int v8; // lr
  int (*v9)(void); // r10
  _BOOL4 v10; // r3
  int v12; // [sp+4h] [bp-Ch] BYREF
  int v13; // [sp+8h] [bp-8h]
  _BOOL4 v14; // [sp+Ch] [bp-4h]

  while ( dword_195C24 )
  {
    if ( !pthread_mutex_lock(&stru_195C30) )
    {
      v0 = dword_195C2C;
      v1 = (int (**)(void))malloc(0x18u);
      v1[3] = (int (*)(void))v0;
      v2 = v1;
      *v1 = (int (*)(void))sub_6B360;
      v1[4] = 0;
      v1[5] = 0;
      v1[2] = (int (*)(void))sub_6B750;
      v1[1] = (int (*)(void))sub_6B6CC;
      if ( sub_6B360((int)v1) )
      {
        do
        {
          v5 = (int *)v2[2]();
          v6 = v5[1];
          v7 = v6 - 200;
          if ( v6 )
          {
            v3 = *v5;
            v4 = v5[2];
            v5[1] = v7;
            v12 = v3;
            v14 = v4;
            v13 = v7;
            ((void (__fastcall *)(int (**)(void), int *, int))v2[1])(v2, &v12, 12);
          }
          else
          {
            gpio_write(***((_DWORD ***)v2[5] + 4), *((unsigned __int8 *)v5 + 8));
            v8 = *v5;
            v9 = v2[1];
            v10 = v5[2] != 1;
            v5[1] = *v5 - 200;
            v5[2] = v10;
            v12 = v8;
            v14 = v10;
            v13 = v8 - 200;
            ((void (__fastcall *)(int (**)(void), int *, int))v9)(v2, &v12, 12);
          }
          free(v5);
        }
        while ( ((int (__fastcall *)(int (**)(void)))*v2)(v2) );
      }
      free(v2);
      pthread_mutex_unlock(&stru_195C30);
    }
    usleep(0x30D40u);
  }
  return 0;
}
