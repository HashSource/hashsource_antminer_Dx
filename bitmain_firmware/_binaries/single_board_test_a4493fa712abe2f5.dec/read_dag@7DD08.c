int __fastcall read_dag(int a1)
{
  int v2; // r4
  unsigned int i; // r5
  void (__fastcall *v4)(int, int *); // r3
  int v5; // r3
  char *v6; // r2
  int v7; // r6
  _DWORD *v8; // r5
  int *v9; // r4
  char *v10; // lr
  int v11; // r0
  int v12; // r1
  char *v13; // r12
  int v14; // r2
  int v15; // r3
  char *v17; // r11
  char *v18; // r4
  int v19; // t1
  char *v20; // r0
  int v21; // [sp+4h] [bp-1130h]
  int v22; // [sp+20h] [bp-1114h]
  int v23; // [sp+24h] [bp-1110h]
  int v24; // [sp+28h] [bp-110Ch]
  int j; // [sp+30h] [bp-1104h]
  int k; // [sp+34h] [bp-1100h]
  char *v27; // [sp+38h] [bp-10FCh]
  int v28; // [sp+4Ch] [bp-10E8h]
  int v29; // [sp+50h] [bp-10E4h] BYREF
  _DWORD v30[5]; // [sp+54h] [bp-10E0h] BYREF
  int v31; // [sp+68h] [bp-10CCh] BYREF
  char v32; // [sp+6Ch] [bp-10C8h] BYREF
  char v33; // [sp+ABh] [bp-1089h] BYREF
  _BYTE s[132]; // [sp+ACh] [bp-1088h] BYREF
  int v35; // [sp+130h] [bp-1004h] BYREF
  int v36; // [sp+134h] [bp-1000h]
  int v37; // [sp+138h] [bp-FFCh]
  int v38; // [sp+13Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v35, 0x1000u, 0, "%s...", "read_dag");
  v2 = 0;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "read_dag",
    8,
    8385,
    60,
    &v35);
  do
  {
    v36 = 0;
    v38 = (unsigned __int8)v2;
    v35 = v2++;
    v37 = 1245185;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v35);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v36 = 0;
    v37 = 786433;
    v38 = (unsigned __int8)i;
    if ( i > 7 )
      v35 = 0;
    else
      v35 = 3;
    v4(a1, &v35);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  }
  memset(s, 0, 0x81u);
  v24 = 0;
  v30[0] = 0;
  v30[1] = 1;
  v30[2] = 4096;
  v30[3] = 4096;
  v5 = 0;
  v30[4] = 16382;
  v31 = 0x3FFF;
  do
  {
    v28 = v5 << 22;
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v6 = (char *)v30;
        do
        {
          v7 = 0;
          v27 = v6 + 4;
          v23 = *(_DWORD *)v6;
          v22 = v28 | (32 * j) | (4 * k) | (*(_DWORD *)v6 << 8);
          do
          {
            v37 = 0;
            v29 = 0;
            v36 = v22;
            v35 = 0;
            v38 = 0;
            BYTE1(v37) = v7;
            v8 = malloc(0x4Cu);
            *v8 = 0;
            v8[1] = 0;
            v8[2] = 0;
            (*(void (__fastcall **)(int, int *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 164))(
              a1,
              &v35,
              1,
              v8,
              &v29,
              v21,
              2000,
              0);
            v9 = (_DWORD *)((char *)v8 + 10);
            v10 = &v32;
            do
            {
              v11 = *v9;
              v9 += 4;
              v12 = *(v9 - 3);
              v13 = v10;
              v14 = *(v9 - 2);
              v10 += 16;
              v15 = *(v9 - 1);
              *(_DWORD *)v13 = v11;
              *((_DWORD *)v13 + 1) = v12;
              *((_DWORD *)v13 + 2) = v14;
              *((_DWORD *)v13 + 3) = v15;
            }
            while ( v9 != (_DWORD *)((char *)v8 + 74) );
            free(v8);
            if ( v29 )
            {
              v17 = (char *)&v31 + 3;
              v18 = s;
              do
              {
                v19 = (unsigned __int8)*++v17;
                v20 = v18;
                v18 += 2;
                sprintf(v20, "%02x", v19);
              }
              while ( v17 != &v33 );
              pthread_mutex_lock(&stru_3B526C);
              logfmt_raw(
                (char *)&v35,
                0x1000u,
                0,
                "[DAG] node_index %08x(chip %1d row %02d col %d ch %d s_addr %04x %s",
                v22,
                v7,
                v24,
                j,
                k,
                v23,
                s);
              pthread_mutex_unlock(&stru_3B526C);
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
                71,
                "read_dag",
                8,
                8417,
                60,
                &v35);
            }
            ++v7;
          }
          while ( v7 != 8 );
          v6 = v27;
        }
        while ( &v32 != v27 );
      }
    }
    v5 = ++v24;
  }
  while ( v24 != 12 );
  v37 = 786433;
  v38 = 255;
  v36 = 0;
  v35 = 2;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v35);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
