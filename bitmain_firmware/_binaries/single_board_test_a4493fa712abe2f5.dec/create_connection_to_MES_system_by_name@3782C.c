int __fastcall create_connection_to_MES_system_by_name(int a1)
{
  int v2; // r10
  int v3; // r4
  int v4; // r11
  int v5; // r6
  int v6; // r7
  char *v7; // r5
  size_t v8; // r0
  int v9; // r5
  int v10; // r10
  struct hostent *v11; // r9
  struct in_addr *v12; // r2
  unsigned __int8 v13; // r5
  int v14; // r6
  char *v15; // r7
  char *v16; // r0
  size_t v17; // r0
  int v18; // r5
  int v19; // r6
  int h_addrtype; // r2
  int v22; // r9
  size_t v23; // r0
  int v24; // [sp+4h] [bp-48h]
  char s[32]; // [sp+8h] [bp-44h] BYREF
  struct sockaddr addr; // [sp+28h] [bp-24h] BYREF
  struct in_addr in; // [sp+3Ch] [bp-10h]

  memset(s, 0, sizeof(s));
  if ( a1 == 1 )
  {
    v3 = (int)&loc_F4240;
    v2 = (int)&loc_F423C + 3;
    v24 = (int)&loc_F4240;
  }
  else
  {
    if ( a1 != 2 )
    {
      lcd_clear_result();
      v22 = 0;
      v23 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v23);
      sub_D58AC("don't figer out");
      sub_D5894("which process to");
      lcd_show_result(3, (int)"connect MES", 0xBu);
      puts("don't figer out which process to connect MES");
      return v22;
    }
    v2 = 59;
    v3 = 3;
    v24 = 60;
  }
  if ( bitmain_MES_system_clientSocket != -1 )
  {
    close(bitmain_MES_system_clientSocket);
    bitmain_MES_system_clientSocket = -1;
    puts("close socket");
  }
  LOBYTE(v4) = 0;
  v5 = 0;
  while ( 1 )
  {
    sleep(1u);
    v6 = socket(2, 2, 0);
    memset(&addr.sa_data[2], 0, 12);
    *(_DWORD *)&addr.sa_family = 812151909;
    if ( !ioctl(v6, 0x8915u, &addr) )
      break;
    if ( v5 >= v2 )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("can't get");
      sub_D5894("local ip");
      printf("Can't get %s ip\n", "eth0");
      return 0;
    }
    v4 = (unsigned __int8)(v4 + 1);
    v5 = v4;
    if ( v4 >= v24 )
      goto LABEL_9;
  }
  v7 = inet_ntoa(in);
  v8 = strlen(v7);
  memcpy(s, v7, v8);
  close(v6);
  printf("%s: %s\n", "eth0", s);
LABEL_9:
  LOBYTE(v9) = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = gethostbyname("mtcs.bitmain.vip");
    if ( v11 )
      break;
    printf("try get MES system ip: %d\n", v10);
    sleep(3u);
    if ( v3 - 1 <= v10 )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("can't get");
      sub_D5894("MES system ip");
      puts("Can't get MES system by host name");
      return 0;
    }
    v9 = (unsigned __int8)(v9 + 1);
    v10 = v9;
    if ( v9 >= v3 )
    {
      memset(s, 0, sizeof(s));
      __und(0xFFu);
    }
  }
  memset(s, 0, sizeof(s));
  v12 = (struct in_addr *)*v11->h_addr_list;
  if ( v12 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = inet_ntoa((struct in_addr)v12->s_addr);
      ++v13;
      v16 = inet_ntoa(*(struct in_addr *)v11->h_addr_list[v14]);
      v17 = strlen(v16);
      memcpy(s, v15, v17);
      v14 = v13;
      v12 = (struct in_addr *)v11->h_addr_list[v14];
    }
    while ( v12 );
  }
  LOBYTE(v18) = 0;
  v19 = 0;
  while ( 1 )
  {
    bitmain_MES_system_clientSocket = socket(v11->h_addrtype, 1, 0);
    if ( bitmain_MES_system_clientSocket >= 0 )
      break;
    puts("Creat socket fail");
    if ( v3 - 1 <= v19 )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("can't connect");
      sub_D5894("MES system");
      puts("Creat socket timeout");
      return 0;
    }
    v18 = (unsigned __int8)(v18 + 1);
    v19 = v18;
    if ( v18 >= v3 )
      goto LABEL_21;
  }
  puts("Creat socket success");
LABEL_21:
  h_addrtype = v11->h_addrtype;
  *(_WORD *)addr.sa_data = -26081;
  addr.sa_family = h_addrtype;
  *(_DWORD *)&addr.sa_data[2] = inet_addr(s);
  while ( connect(bitmain_MES_system_clientSocket, &addr, 0x10u) )
  {
    --v3;
    sleep(1u);
    printf("timeout_counter = %d\n", v3);
    if ( !v3 )
    {
      puts("Creat socket connection to MES system fail");
      return 0;
    }
  }
  puts("Creat socket connection to MES system succeed");
  v22 = set_socket_feature(bitmain_MES_system_clientSocket);
  if ( !v22 )
  {
    lcd_clear_result();
    sub_D58C4((const char *)(MES2Local_Config_Information + 32));
    sub_D58AC("set socket");
    sub_D5894("feature");
    sub_D587C("fail");
    puts("Creat socket timeout");
  }
  return v22;
}
