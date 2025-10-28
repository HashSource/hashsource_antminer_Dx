int __fastcall backend_init_base(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  void (__fastcall *v5)(int, unsigned __int16, int); // r3
  size_t v6; // r6
  void *v7; // r0
  int v8; // r1
  void *v9; // r0
  int v10; // r3
  void *v11; // r0
  int v12; // r3
  void (__fastcall *v13)(int); // r3

  v2 = off_129460(*(_DWORD *)(a1 + 120));
  v3 = *(_DWORD *)(a1 + 748);
  v4 = *(_DWORD *)(a1 + 736);
  v5 = (void (__fastcall *)(int, unsigned __int16, int))off_129450;
  *(_DWORD *)(a1 + 124) = v2;
  v5(*(_DWORD *)(a1 + 120), v4, v3);
  off_12945C(*(_DWORD *)(a1 + 120));
  ((void (__fastcall *)(unsigned int))off_12943C)(*(_DWORD *)(a1 + 120));
  *(_DWORD *)(a1 + 628) = sub_CECE8(1);
  *(_DWORD *)(a1 + 632) = sub_CECE8(*(_DWORD *)(a1 + 608));
  *(_DWORD *)(a1 + 636) = sub_CECE8(1);
  *(_DWORD *)(a1 + 624) = sub_CECE8(*(_DWORD *)(a1 + 604));
  pthread_mutex_init((pthread_mutex_t *)(a1 + 660), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 684), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 708), 0);
  v6 = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(a1 + 280) = calloc(v6, 1u);
  v7 = calloc(v6, 4u);
  v8 = *(_DWORD *)(a1 + 612);
  *(_DWORD *)(a1 + 272) = v7;
  v9 = calloc(v6, 2 * v8);
  v10 = v6 + 62;
  if ( (int)(v6 + 31) >= 0 )
    v10 = v6 + 31;
  *(_DWORD *)(a1 + 276) = v9;
  *(_DWORD *)(a1 + 284) = calloc(v10 >> 5, 4u);
  v11 = calloc(v6, 0x30u);
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 248) = v11;
  *(_DWORD *)(a1 + 224) = -1;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_BYTE *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  memset((void *)(a1 + 344), 0, 0x100u);
  v12 = *(_DWORD *)(a1 + 640);
  *(_BYTE *)(a1 + 656) = 0;
  *(_BYTE *)(a1 + 657) = 0;
  *(_BYTE *)(a1 + 658) = 0;
  if ( !v12 )
    *(_DWORD *)(a1 + 640) = a1;
  v13 = *(void (__fastcall **)(int))(a1 + 56);
  if ( v13 )
    v13(a1);
  pthread_create((pthread_t *)(a1 + 648), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 644), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 652), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 128) = 1;
  return 0;
}
