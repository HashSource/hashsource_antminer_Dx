int __fastcall pcba_setup_all_chip_dash(int a1)
{
  int v1; // r3
  int v3; // r2
  void (__fastcall *v4)(int, int, int); // r3
  int v5; // r1
  void *v6; // r0
  char v7; // r6
  int v8; // r5
  char v9; // r0

  LOBYTE(v1) = 0;
  v3 = *(_DWORD *)(a1 + 280) - 1;
  do
  {
    *(_BYTE *)++v3 = v1;
    v1 = (unsigned __int8)(v1 + 3);
  }
  while ( v1 != 210 );
  v4 = *(void (__fastcall **)(int, int, int))(a1 + 132);
  v5 = *(_DWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 224) = 3;
  v4(a1, v5, 70);
  sub_D232C(a1);
  sub_A701C(a1);
  usleep(0x61A8u);
  set_ticket_mask_dash(a1, 255);
  v6 = calloc(1u, 0xB0u);
  v7 = *(_BYTE *)(a1 + 120);
  v8 = (int)v6;
  v9 = rand();
  memset((void *)(v8 + 40), (unsigned __int8)(v7 + v9), 0x50u);
  push_work_base(a1, v8);
  free((void *)v8);
  sub_D232C(a1);
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
