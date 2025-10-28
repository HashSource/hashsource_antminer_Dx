int __fastcall pool_twait_to_be_expected_and_set(int a1, _BYTE *a2, int a3, char a4, const struct timespec *a5)
{
  pthread_mutex_t *v5; // r4
  int v9; // r11
  int v10; // r0
  int v12; // r11
  pthread_cond_t *v13; // r9
  int v14; // r0

  v5 = (pthread_mutex_t *)(a1 + 1192);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1192));
  if ( a5 )
  {
    while ( 2 )
    {
      v9 = 0;
      do
      {
        if ( (unsigned __int8)*a2 == a3 )
        {
          if ( v9 )
            goto LABEL_8;
          goto LABEL_7;
        }
        v10 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 1224), v5, a5);
        v9 = v10;
        if ( v10 == 110 )
          goto LABEL_8;
      }
      while ( v10 );
      pthread_mutex_lock(&stru_1AA810);
      v12 = dword_1AA828;
      pthread_mutex_unlock(&stru_1AA810);
      if ( a1 == v12 )
        continue;
      break;
    }
    v9 = 1;
  }
  else
  {
    if ( (unsigned __int8)*a2 == a3 )
      goto LABEL_7;
    v13 = (pthread_cond_t *)(a1 + 1224);
    do
    {
      v14 = pthread_cond_wait(v13, v5);
      v9 = v14;
    }
    while ( (unsigned __int8)*a2 != a3 );
    if ( !v14 )
    {
LABEL_7:
      v9 = 0;
      *a2 = a4;
    }
  }
LABEL_8:
  pthread_mutex_unlock(v5);
  return v9;
}
