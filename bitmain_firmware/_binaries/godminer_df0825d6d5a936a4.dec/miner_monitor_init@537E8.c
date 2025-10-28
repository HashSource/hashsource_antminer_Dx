int __fastcall miner_monitor_init(int a1)
{
  int (**v1)(void); // r0
  int v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r8
  _BYTE *v5; // r0
  char *v6; // r9
  char *v7; // r4
  void *v8; // r0
  char *v9; // r2
  char *v10; // r3
  int v11; // r0
  void *v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r1
  void *v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r1

  v1 = (int (**)(void))dev_ctrl(a1);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = dword_1664D0;
    v4 = &dword_1664D0[54 * v2];
    do
    {
      v5 = calloc(0x100u, 1u);
      *v5 = 63;
      v3[17] = v5;
      v3[24] = calloc(0x10u, 4u);
      v3[25] = calloc(0x10u, 4u);
      v6 = (char *)calloc(0x10u, 4u);
      v3[1] = v6;
      v7 = (char *)calloc(0x10u, 4u);
      *v3 = v7;
      v3[3] = calloc(0x10u, 4u);
      v8 = calloc(0x10u, 4u);
      v9 = v7 - 4;
      v10 = v6 - 4;
      v3[2] = v8;
      *((_QWORD *)v3 + 26) = 0;
      v3[50] = 0;
      do
      {
        *((_DWORD *)v10 + 1) = -64;
        v10 += 4;
        *((_DWORD *)v9 + 1) = -64;
        v9 += 4;
      }
      while ( v10 != v6 + 60 );
      v11 = (int)v3;
      v3 += 54;
      init_temp_senor_info(v11);
    }
    while ( v3 != v4 );
  }
  dword_16725C = (int)new_observable_subject();
  dword_167254 = (int)new_observable_subject();
  dword_167258 = (int)new_observable_subject();
  dword_167250 = (int)new_observable_subject();
  v12 = new_task_timer();
  LOWORD(v13) = 13968;
  HIWORD(v13) = (unsigned int)&loc_59380 >> 16;
  dword_167260 = (int)v12;
  add_new_task((int)v12, v13, 1000);
  LOWORD(v14) = 13768;
  HIWORD(v14) = (unsigned int)&loc_592B8 >> 16;
  add_new_task(dword_167260, v14, (int)"ocheck");
  LOWORD(v15) = 15404;
  HIWORD(v15) = (unsigned int)&loc_5991C >> 16;
  add_new_task(dword_167260, v15, 60000);
  v16 = new_task_timer();
  LOWORD(v17) = 13568;
  HIWORD(v17) = (unsigned int)&loc_591F0 >> 16;
  dword_167264 = (int)v16;
  add_new_task((int)v16, v17, 5000);
  LOWORD(v18) = 13368;
  HIWORD(v18) = (unsigned int)&loc_59128 >> 16;
  add_new_task(dword_167264, v18, 1000);
  LOWORD(v19) = 7860;
  HIWORD(v19) = (unsigned int)&loc_57944 >> 16;
  return add_new_task(dword_167264, v19, 1000);
}
