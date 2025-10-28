int sub_7C554()
{
  int v0; // r9
  __int64 v1; // r0
  int *v2; // r6
  int *v3; // r9
  int v4; // t1
  __int64 v5; // r4
  __int64 *v6; // r7
  int v7; // r11
  int v8; // r10
  int v9; // r5
  int v10; // r4
  void (__fastcall *v11)(int); // t1

  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  LODWORD(v1) = pthread_mutex_unlock(&stru_1A9B48);
  if ( v0 > 0 )
  {
    v2 = dword_1A9B64;
    v3 = &dword_1A9B64[v0];
    do
    {
      while ( 1 )
      {
        v4 = *v2++;
        LODWORD(v1) = update_hashrate(
                        v4,
                        (int)&dword_1A4178[52 * *(_DWORD *)(v4 + 132)],
                        &qword_1A4030[10 * *(_DWORD *)(v4 + 132)]);
        v5 = *(_QWORD *)v1;
        v6 = (__int64 *)v1;
        if ( *(_QWORD *)v1 )
          break;
        if ( v3 == v2 )
          return v1;
      }
      v7 = dword_1A45B0;
      v8 = *(v2 - 1);
      if ( *(int *)(dword_1A45B0 + 1024) > 0 )
      {
        v9 = dword_1A45B0 - 4;
        v10 = 0;
        do
        {
          v11 = *(void (__fastcall **)(int))(v9 + 4);
          v9 += 4;
          v11(v8);
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v7 + 1024) );
        v5 = *v6;
      }
      v1 = v6[1];
      v6[1] = 0;
      *v6 = v5 & ~v1;
    }
    while ( v3 != v2 );
  }
  return v1;
}
