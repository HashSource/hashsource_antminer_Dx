int sub_7AB54()
{
  int v0; // r10
  __int64 v1; // r0
  int *v2; // r7
  int v3; // t1
  int v4; // r6
  int v5; // r11
  int v6; // r10
  int v7; // r9
  int v8; // r4
  void (__fastcall *v9)(int); // t1
  _QWORD *v10; // r5
  __int64 v12; // [sp+0h] [bp-14h]
  int *v13; // [sp+8h] [bp-Ch]

  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  LODWORD(v1) = pthread_mutex_unlock(&stru_1A9B48);
  if ( v0 > 0 )
  {
    v2 = dword_1A9B64;
    v13 = &dword_1A9B64[v0];
    do
    {
      while ( 1 )
      {
        v3 = *v2++;
        v4 = *(_DWORD *)(v3 + 132);
        LODWORD(v1) = ((int (__fastcall *)(int))off_1A2BB4[0])(v4);
        if ( !(_DWORD)v1 )
          LODWORD(qword_1A4030[10 * v4 + 8]) |= 1u;
        v12 = qword_1A4030[10 * v4 + 8];
        if ( v12 )
          break;
        if ( v13 == v2 )
          return v1;
      }
      v5 = dword_1A4170;
      v6 = *(v2 - 1);
      if ( *(int *)(dword_1A4170 + 1024) > 0 )
      {
        v7 = dword_1A4170 - 4;
        v8 = 0;
        do
        {
          v9 = *(void (__fastcall **)(int))(v7 + 4);
          v7 += 4;
          v9(v6);
          ++v8;
        }
        while ( v8 < *(_DWORD *)(v5 + 1024) );
        v12 = qword_1A4030[10 * v4 + 8];
      }
      v10 = &qword_1A4030[10 * v4];
      v1 = v10[9];
      v10[9] = 0;
      v10[8] = v12 & ~v1;
    }
    while ( v13 != v2 );
  }
  return v1;
}
