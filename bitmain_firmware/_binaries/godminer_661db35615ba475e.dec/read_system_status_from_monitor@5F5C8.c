int __fastcall read_system_status_from_monitor(int a1)
{
  int v2; // r6
  float v3; // s15
  int *v4; // r0
  double v5; // d6
  float v6; // s14
  float v7; // s11
  __int64 v8; // kr00_8
  int v9; // t1
  int v10; // r3
  char *v11; // r1
  float *v12; // r3
  int v13; // r1
  int v15; // r3

  pthread_mutex_lock(&stru_190E30);
  v2 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
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
    v4 = dword_190E4C;
    v5 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0;
    do
    {
      v9 = *v4++;
      v10 = 52 * *(_DWORD *)(v9 + 120);
      v11 = (char *)&unk_1913A0 + v10 * 4;
      v12 = (float *)&dword_191398[v10];
      v8 += *((_QWORD *)v11 + 8);
      v7 = v7 + v12[8];
      v6 = v6 + v12[9];
      v3 = v3 + v12[10];
      v5 = v5 + *((double *)v11 + 5);
    }
    while ( &dword_190E4C[v2] != v4 );
  }
  v13 = dword_1913EC;
  v15 = dword_1913F0;
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
