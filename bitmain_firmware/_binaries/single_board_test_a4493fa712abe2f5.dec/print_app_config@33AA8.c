int __fastcall print_app_config(int a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r3
  int v5; // r11
  int v6; // r1
  double v7; // r2
  int v8; // r5
  int v9; // r1
  int v10; // r5
  int v11; // r1

  printf("%d coins:\n\n", *(_DWORD *)(a1 + 4));
  if ( *(int *)(a1 + 4) > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        printf("coin: %s\n", *(const char **)(*(_DWORD *)a1 + v2));
        printf("pattern_num: %d\n", *(_DWORD *)(*(_DWORD *)a1 + v2 + 16));
        printf("timeout: %d\n", *(_DWORD *)(*(_DWORD *)a1 + v2 + 20));
        printf("%s: \n", "freq");
        v4 = *(_DWORD *)a1 + v2;
        if ( *(int *)(v4 + 28) > 0 )
        {
          v5 = 0;
          do
          {
            v6 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + 4 * v5++);
            printf("%d \n", v6);
            v4 = *(_DWORD *)a1 + v2;
          }
          while ( *(_DWORD *)(v4 + 28) > v5 );
        }
        putchar(10);
        HIDWORD(v7) = *(_DWORD *)a1 + v2;
        printf("min_valid_pattern_pecent: %f\n", v7);
        printf("max_hw_pecent: %f\n", *(double *)(*(_DWORD *)a1 + v2 + 48));
        if ( !*(_BYTE *)(*(_DWORD *)a1 + v2 + 56) )
          break;
        printf("is_test: %s\n", "true");
        ++v3;
        putchar(10);
        v2 += 80;
        if ( v3 >= *(_DWORD *)(a1 + 4) )
          goto LABEL_8;
      }
      printf("is_test: %s\n", "false");
      ++v3;
      putchar(10);
      v2 += 80;
    }
    while ( *(_DWORD *)(a1 + 4) > v3 );
  }
LABEL_8:
  printf("\nwork_path_pre: %s\n", *(const char **)(a1 + 12));
  printf("asic_type: %s\n", *(const char **)(a1 + 16));
  printf("asic_num: %d\n", *(_DWORD *)(a1 + 40));
  printf("open_core_gap: %d\n", *(_DWORD *)(a1 + 44));
  printf("%s: \n", "voltage");
  if ( *(int *)(a1 + 52) > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4 * v8++);
      printf("%d \n", v9);
    }
    while ( *(_DWORD *)(a1 + 52) > v8 );
  }
  putchar(10);
  printf("%s: \n", "temp_sensor");
  if ( *(int *)(a1 + 72) > 0 )
  {
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 68) + 4 * v10++);
      printf("%d \n", v11);
    }
    while ( *(_DWORD *)(a1 + 72) > v10 );
  }
  putchar(10);
  printf("start_temp: %d\n", *(_DWORD *)(a1 + 76));
  printf("alarm_temp: %d\n", *(_DWORD *)(a1 + 80));
  printf("temp_waitting_time: %d\n", *(_DWORD *)(a1 + 84));
  printf("test_mode: %d\n", *(_DWORD *)(a1 + 92));
  printf("baud_rate: %d\n", *(_DWORD *)(a1 + 96));
  return j_printf("repeat_ctrl: %s\n", *(const char **)(a1 + 116));
}
