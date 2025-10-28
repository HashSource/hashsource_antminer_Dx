int __fastcall sub_D35FC(int a1, const void *a2)
{
  int v4; // r6
  char *v5; // r2
  int v6; // r3
  int v8; // [sp+10h] [bp-1914h] BYREF
  int v9; // [sp+14h] [bp-1910h] BYREF
  int v10; // [sp+18h] [bp-190Ch] BYREF
  int v11; // [sp+1Ch] [bp-1908h] BYREF
  char s[256]; // [sp+20h] [bp-1904h] BYREF
  char v13[2048]; // [sp+120h] [bp-1804h] BYREF
  char v14[4100]; // [sp+920h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  pthread_mutex_lock(&stru_3B52C4[a1]);
  if ( sub_82C50(a1, &v11, &v8, &v9, &v10) )
  {
    snprintf(v13, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v14, 0x1000u, 0, v13);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
      82,
      "uart_send",
      9,
      408,
      100,
      v14);
    pthread_mutex_unlock(&stru_3B52C4[a1]);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = dword_3B52A4;
      if ( ((*(_DWORD *)(dword_3B52A4 + (v8 & 0xFFFFFFFC)) >> v11) & 0x80) != 0 )
        break;
      usleep(0);
    }
    memcpy(s, a2, 0x80u);
    v5 = s;
    do
    {
      v6 = (unsigned __int8)v5[1];
      v5 += 4;
      *(_DWORD *)(v4 + (v10 & 0xFFFFFFFC)) = (v6 << 16)
                                           | ((unsigned __int8)*(v5 - 4) << 24)
                                           | (unsigned __int8)*(v5 - 1)
                                           | ((unsigned __int8)*(v5 - 2) << 8);
    }
    while ( &s[128] != v5 );
    *(_DWORD *)(v4 + (v9 & 0xFFFFFFFC)) = -2147483520;
    pthread_mutex_unlock(&stru_3B52C4[a1]);
    return 128;
  }
}
