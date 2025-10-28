int sub_67718()
{
  int v0; // r10
  __int64 v1; // r0
  int *v2; // r7
  int *v3; // r10
  __int64 *v4; // r4
  int v5; // t1
  int v6; // r4
  int v7; // r11
  int v8; // r8
  int v9; // r6
  int v10; // r5
  void (__fastcall *v11)(int); // t1
  __int64 v13; // [sp+0h] [bp-Ch]

  pthread_mutex_lock(&stru_190E30);
  v0 = dword_190E48;
  LODWORD(v1) = pthread_mutex_unlock(&stru_190E30);
  if ( v0 > 0 )
  {
    v2 = dword_190E4C;
    v3 = &dword_190E4C[v0];
    do
    {
      while ( 1 )
      {
        v5 = *v2++;
        LODWORD(v1) = v5;
        v6 = *(_DWORD *)(v5 + 120);
        if ( v6 )
        {
          v4 = &qword_191250[10 * v6 + 4];
        }
        else
        {
          LODWORD(v1) = sub_66F50(v1, dword_191398, (int)qword_191250);
          v4 = (__int64 *)v1;
        }
        v13 = *v4;
        if ( *v4 )
          break;
        if ( v3 == v2 )
          return v1;
      }
      v7 = dword_191BCC;
      v8 = *(v2 - 1);
      if ( *(int *)(dword_191BCC + 1024) > 0 )
      {
        v9 = dword_191BCC - 4;
        v10 = 0;
        do
        {
          v11 = *(void (__fastcall **)(int))(v9 + 4);
          v9 += 4;
          v11(v8);
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v7 + 1024) );
        v13 = *v4;
      }
      v1 = v4[1];
      v4[1] = 0;
      *v4 = v13 & ~v1;
    }
    while ( v3 != v2 );
  }
  return v1;
}
