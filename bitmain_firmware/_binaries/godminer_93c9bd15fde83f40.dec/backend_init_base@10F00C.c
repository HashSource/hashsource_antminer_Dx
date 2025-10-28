int __fastcall backend_init_base(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  void (__fastcall *v5)(int, unsigned __int16, int); // r3
  size_t v6; // r5
  void *v7; // r0
  int v8; // r1
  int v9; // r0
  void *v10; // r0
  size_t v11; // r1
  int v12; // r3
  bool v13; // zf
  void (__fastcall *v14)(int); // r3

  v2 = ((int (__fastcall *)(int))off_1A2B94[0])(*(_DWORD *)(a1 + 132));
  v3 = *(_DWORD *)(a1 + 776);
  v4 = *(_DWORD *)(a1 + 764);
  v5 = (void (__fastcall *)(int, unsigned __int16, int))off_1A2B84[0];
  *(_DWORD *)(a1 + 136) = v2;
  v5(*(_DWORD *)(a1 + 132), v4, v3);
  off_1A2B90(*(_DWORD *)(a1 + 132));
  ((void (__fastcall *)(unsigned int))off_1A2B70[0])(*(_DWORD *)(a1 + 132));
  *(_DWORD *)(a1 + 656) = sub_B6254(1);
  *(_DWORD *)(a1 + 660) = sub_B6254(*(_DWORD *)(a1 + 632));
  *(_DWORD *)(a1 + 664) = sub_B6254(1);
  *(_DWORD *)(a1 + 652) = sub_B6254(*(_DWORD *)(a1 + 628));
  pthread_mutex_init((pthread_mutex_t *)(a1 + 688), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 712), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 736), 0);
  v6 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 296) = calloc(v6, 1u);
  v7 = calloc(v6, 4u);
  v8 = *(_DWORD *)(a1 + 636);
  *(_DWORD *)(a1 + 288) = v7;
  *(_DWORD *)(a1 + 292) = calloc(v6, 2 * v8);
  if ( (int)(v6 + 31) >= 0 )
    v9 = v6 + 31;
  else
    v9 = v6 + 62;
  *(_DWORD *)(a1 + 300) = calloc(v9 >> 5, 4u);
  v10 = calloc(v6, 0x30u);
  v11 = *(_DWORD *)(a1 + 648);
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 264) = v10;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 240) = -1;
  *(_BYTE *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 324) = calloc(v6, v11);
  *(_DWORD *)(a1 + 328) = 0;
  memset((void *)(a1 + 368), 0, 0x100u);
  v12 = *(_DWORD *)(a1 + 668);
  *(_BYTE *)(a1 + 684) = 0;
  *(_BYTE *)(a1 + 685) = 0;
  v13 = v12 == 0;
  v14 = *(void (__fastcall **)(int))(a1 + 68);
  if ( v13 )
    *(_DWORD *)(a1 + 668) = a1;
  *(_BYTE *)(a1 + 686) = 0;
  if ( v14 )
    v14(a1);
  pthread_create((pthread_t *)(a1 + 676), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 672), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 680), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 140) = 1;
  return 0;
}
