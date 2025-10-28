size_t __fastcall dev_send_work_cmd_hal(int a1, char *a2, unsigned int a3)
{
  unsigned int v3; // r5
  char v4; // r10
  char *v6; // r9
  unsigned int v7; // r11
  char *v8; // r8
  char *v9; // r4
  int v10; // r0

  v3 = a3 >> 7;
  v4 = a3;
  v6 = a2;
  if ( a3 >> 7 )
  {
    v7 = v3 << 7;
    v8 = &a2[128 * v3];
    v9 = a2;
    v3 = 0;
    do
    {
      v10 = sub_96B80(*(_DWORD *)&g_chain_info[8 * a1], v9);
      v9 += 128;
      v3 += v10;
      usleep(0x1F4u);
    }
    while ( v8 != v9 );
    v6 += v7;
  }
  return uart_send(*(_DWORD *)&g_chain_info[8 * a1], v6, v4 & 0x7F) + v3;
}
