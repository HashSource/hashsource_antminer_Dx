int dev_init_hal_pcba()
{
  int v0; // r5
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r12
  int v18; // [sp+4h] [bp-8h] BYREF

  if ( !platform_inited && sub_9F4A4() )
    return sub_111520();
  total_chain[0] = 0;
  v0 = *(_DWORD *)(dword_1A8A8C + 8);
  printf("plug_on_status: %x\n", v0);
  if ( (v0 & 1) != 0 )
  {
    v17 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 0;
    g_chain_info[8 * v17 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v17, 0);
    ++total_chain[0];
  }
  if ( (v0 & 2) != 0 )
  {
    v16 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 1;
    g_chain_info[8 * v16 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v16, 1);
    ++total_chain[0];
  }
  if ( (v0 & 4) != 0 )
  {
    v15 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 2;
    g_chain_info[8 * v15 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v15, 2);
    ++total_chain[0];
  }
  if ( (v0 & 8) != 0 )
  {
    v14 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 3;
    g_chain_info[8 * v14 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v14, 3);
    ++total_chain[0];
  }
  if ( (v0 & 0x10) != 0 )
  {
    v13 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 4;
    g_chain_info[8 * v13 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v13, 4);
    ++total_chain[0];
  }
  if ( (v0 & 0x20) != 0 )
  {
    v12 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 5;
    g_chain_info[8 * v12 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v12, 5);
    ++total_chain[0];
  }
  if ( (v0 & 0x40) != 0 )
  {
    v11 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 6;
    g_chain_info[8 * v11 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v11, 6);
    ++total_chain[0];
  }
  if ( (v0 & 0x80) != 0 )
  {
    v10 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 7;
    g_chain_info[8 * v10 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v10, 7);
    ++total_chain[0];
  }
  if ( (v0 & 0x100) != 0 )
  {
    v9 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 8;
    g_chain_info[8 * v9 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v9, 8);
    ++total_chain[0];
  }
  if ( (v0 & 0x200) != 0 )
  {
    v8 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 9;
    g_chain_info[8 * v8 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v8, 9);
    ++total_chain[0];
  }
  if ( (v0 & 0x400) != 0 )
  {
    v7 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 10;
    g_chain_info[8 * v7 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v7, 10);
    ++total_chain[0];
  }
  if ( (v0 & 0x800) != 0 )
  {
    v6 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 11;
    g_chain_info[8 * v6 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v6, 11);
    ++total_chain[0];
  }
  if ( (v0 & 0x1000) != 0 )
  {
    v5 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 12;
    g_chain_info[8 * v5 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v5, 12);
    ++total_chain[0];
  }
  if ( (v0 & 0x2000) != 0 )
  {
    v4 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 13;
    g_chain_info[8 * v4 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v4, 13);
    ++total_chain[0];
  }
  if ( (v0 & 0x4000) != 0 )
  {
    v3 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 14;
    g_chain_info[8 * v3 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v3, 14);
    ++total_chain[0];
  }
  if ( (v0 & 0x8000) != 0 )
  {
    v2 = total_chain[0];
    *(_DWORD *)&g_chain_info[8 * total_chain[0]] = 15;
    g_chain_info[8 * v2 + 4] = 1;
    printf("chain_offset %d, chain %d\n", v2, 15);
    ++total_chain[0];
  }
  if ( platform_inited )
    *(_DWORD *)dword_1A8A8C |= 0x20000000u;
  else
    sub_9F2A4();
  printf("%s: set zynq bt8d %d\n", "dev_config_hal", 26);
  v18 = 437918234;
  sub_9A388(0, 0, &v18);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
