int __fastcall read_system_status_from_monitor(int a1)
{
  int v2; // r6
  float v3; // s15
  int *v4; // r1
  double v5; // d6
  float v6; // s14
  float v7; // s11
  __int64 v8; // kr00_8
  int v9; // t1
  int v10; // r3
  char *v11; // r12
  float *v12; // r3
  int v13; // r1
  int v15; // r3

  pthread_mutex_lock(&stru_1A9B48);
  v2 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  v3 = 0.0;
  if ( v2 <= 0 )
  {
    v5 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0;
  }
  else
  {
    v4 = dword_1A9B64;
    v5 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0;
    do
    {
      v9 = *v4++;
      v10 = 26 * *(_DWORD *)(v9 + 132);
      v11 = (char *)&unk_1A4180 + v10 * 8;
      v12 = (float *)&qword_1A4030[v10];
      v8 += *((_QWORD *)v11 + 8);
      v7 = v7 + v12[90];
      v6 = v6 + v12[91];
      v3 = v3 + v12[92];
      v5 = v5 + *((double *)v12 + 47);
    }
    while ( &dword_1A9B64[v2] != v4 );
  }
  v13 = dword_1A41CC;
  v15 = dword_1A41D0;
  *(_DWORD *)a1 = v2;
  *(float *)(a1 + 12) = v7;
  *(float *)(a1 + 16) = v6;
  *(float *)(a1 + 20) = v3;
  *(double *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v15;
  return a1;
}
