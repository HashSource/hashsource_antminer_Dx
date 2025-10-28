int __fastcall open_cores_by_work_num(int a1)
{
  char v1; // r6
  char v2; // r8
  int i; // r3
  int v5; // r1
  unsigned int v6; // r12
  char v7; // r1
  int v8; // r1
  unsigned int v9; // r12
  char v10; // r1
  int v11; // r1
  _DWORD *v12; // r10
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r5
  _DWORD v21[8]; // [sp+18h] [bp-1024h]
  int v22; // [sp+38h] [bp-1004h] BYREF
  int v23; // [sp+3Ch] [bp-1000h]
  int v24; // [sp+40h] [bp-FFCh]
  int v25; // [sp+44h] [bp-FF8h]

  v24 = 1376257;
  v25 = 255;
  v23 = 0;
  v22 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  for ( i = 0; i != 64; i += 2 )
  {
    v5 = (unsigned __int8)aAb77b2cb3d32b0[i];
    v6 = v5 - 97;
    if ( (unsigned __int8)(v5 - 48) > 9u )
    {
      v7 = v5 - 87;
      if ( v6 <= 5 )
        v1 = v7;
    }
    else
    {
      v1 = v5 - 48;
    }
    v8 = (unsigned __int8)aAb77b2cb3d32b0[i + 1];
    v9 = v8 - 97;
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      v10 = v8 - 87;
      if ( v9 <= 5 )
        v2 = v10;
    }
    else
    {
      v2 = v8 - 48;
    }
    v11 = i >> 1;
    *((_BYTE *)v21 + v11) = v2 | (16 * v1);
  }
  v12 = calloc(1u, 0x59u);
  v13 = v21[1];
  v14 = v21[2];
  v15 = v21[3];
  v12[4] = v21[0];
  v12[5] = v13;
  v12[6] = v14;
  v12[7] = v15;
  v16 = v21[5];
  v17 = v21[6];
  v18 = v21[7];
  v19 = 1;
  v12[8] = v21[4];
  v12[9] = v16;
  v12[10] = v17;
  v12[11] = v18;
  *((_QWORD *)v12 + 1) = 1193046;
  do
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v22, 0x1000u, 0, "%s %u", "open_cores_by_work_num", v19);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "open_cores_by_work_num",
      22,
      11691,
      60,
      &v22);
    v22 = v19;
    v24 = 1376257;
    v25 = 255;
    ++v19;
    v23 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v22);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    push_work_base(a1, (int)v12);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  }
  while ( v19 != 65 );
  return 0;
}
