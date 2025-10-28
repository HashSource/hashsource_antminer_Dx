int sub_5D1B8()
{
  int v0; // r4
  __int64 v1; // r0
  int *v2; // r7
  int v3; // t1
  int v4; // r6
  int v5; // r9
  int v6; // r11
  int v7; // r10
  int v8; // r4
  void (__fastcall *v9)(int); // t1
  _QWORD *v10; // r5
  __int64 v12; // [sp+0h] [bp-1Ch]
  int *v13; // [sp+Ch] [bp-10h]

  pthread_mutex_lock(&stru_190E30);
  v0 = dword_190E48;
  LODWORD(v1) = pthread_mutex_unlock(&stru_190E30);
  if ( v0 > 0 )
  {
    v2 = dword_190E4C;
    v13 = &dword_190E4C[v0];
    do
    {
      while ( 1 )
      {
        v3 = *v2++;
        v4 = *(_DWORD *)(v3 + 120);
        LODWORD(v1) = ((int (__fastcall *)(int))off_18F508[0])(v4);
        if ( !(_DWORD)v1 )
          LODWORD(qword_191250[10 * v4 + 8]) |= 1u;
        v12 = qword_191250[10 * v4 + 8];
        if ( v12 )
          break;
        if ( v13 == v2 )
          return v1;
      }
      v5 = *(v2 - 1);
      v6 = dword_191390;
      if ( *(int *)(dword_191390 + 1024) > 0 )
      {
        v7 = dword_191390 - 4;
        v8 = 0;
        do
        {
          v9 = *(void (__fastcall **)(int))(v7 + 4);
          v7 += 4;
          v9(v5);
          ++v8;
        }
        while ( v8 < *(_DWORD *)(v6 + 1024) );
        v12 = qword_191250[10 * v4 + 8];
      }
      v10 = &qword_191250[10 * v4];
      v1 = v10[9];
      v10[9] = 0;
      v10[8] = v12 & ~v1;
    }
    while ( v13 != v2 );
  }
  return v1;
}
