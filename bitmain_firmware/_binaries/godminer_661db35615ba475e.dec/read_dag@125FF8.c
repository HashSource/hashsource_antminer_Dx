int __fastcall read_dag(int a1)
{
  int v2; // r4
  void (__fastcall *v3)(int, int *); // r3
  unsigned int i; // r5
  void (__fastcall *v5)(int, int *); // r3
  int v6; // r8
  int v7; // r3
  int v8; // r9
  int v9; // r2
  _DWORD *v10; // r4
  int *v11; // r12
  char *v12; // r5
  int v13; // r0
  int v14; // r1
  char *v15; // lr
  int v16; // r2
  int v17; // r3
  char *v19; // r11
  char *v20; // r4
  int v21; // t1
  char *v22; // r0
  int v23; // [sp+4h] [bp-12Ch]
  int v24; // [sp+24h] [bp-10Ch]
  int v25; // [sp+28h] [bp-108h]
  int v26; // [sp+2Ch] [bp-104h]
  int j; // [sp+30h] [bp-100h]
  int k; // [sp+34h] [bp-FCh]
  char *v29; // [sp+38h] [bp-F8h]
  int v30; // [sp+4Ch] [bp-E4h]
  int v31; // [sp+50h] [bp-E0h] BYREF
  _DWORD v32[5]; // [sp+54h] [bp-DCh] BYREF
  int v33; // [sp+68h] [bp-C8h] BYREF
  char v34; // [sp+6Ch] [bp-C4h] BYREF
  char v35; // [sp+ABh] [bp-85h] BYREF
  _BYTE s[132]; // [sp+ACh] [bp-84h] BYREF
  int v37; // [sp+130h] [bp+0h] BYREF
  int v38; // [sp+134h] [bp+4h]
  int v39; // [sp+138h] [bp+8h]
  int v40; // [sp+13Ch] [bp+Ch]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v37, 0x1000u, 0, "%s...", "read_dag");
  v2 = 0;
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_dag",
    8,
    8385,
    60,
    &v37);
  do
  {
    v39 = 1245184;
    v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v37 = v2;
    v38 = 0;
    v40 = (unsigned __int8)v2++;
    LOBYTE(v39) = 1;
    v3(a1, &v37);
    usleep((__useconds_t)"ead_unregister_cancel");
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
    if ( i > 7 )
    {
      v39 = 786433;
      v38 = 0;
      v40 = (unsigned __int8)i;
      v37 = 0;
    }
    else
    {
      v38 = 0;
      v39 = 786433;
      v40 = (unsigned __int8)i;
      v37 = 3;
    }
    v5(a1, &v37);
    usleep((__useconds_t)"ead_unregister_cancel");
  }
  v26 = 0;
  memset(s, 0, 0x81u);
  v6 = a1;
  v32[0] = 0;
  v32[1] = 1;
  v32[2] = 4096;
  v32[3] = 4096;
  v7 = 0;
  v32[4] = 16382;
  v33 = 0x3FFF;
  do
  {
    v30 = v7 << 22;
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v29 = (char *)v32;
        do
        {
          v8 = 0;
          v9 = *(_DWORD *)v29;
          v29 += 4;
          v25 = v9;
          v24 = v30 | (32 * j) | (4 * k) | (v9 << 8);
          do
          {
            v39 = 0;
            v31 = 0;
            v38 = v24;
            v37 = 0;
            v40 = 0;
            BYTE1(v39) = v8;
            v10 = malloc(0x4Cu);
            *v10 = 0;
            v10[1] = 0;
            v10[2] = 0;
            (*(void (__fastcall **)(int, int *, int, _DWORD *, int *, int, int, _DWORD))(v6 + 164))(
              v6,
              &v37,
              1,
              v10,
              &v31,
              v23,
              2000,
              0);
            v11 = (_DWORD *)((char *)v10 + 10);
            v12 = &v34;
            do
            {
              v13 = *v11;
              v11 += 4;
              v14 = *(v11 - 3);
              v15 = v12;
              v16 = *(v11 - 2);
              v12 += 16;
              v17 = *(v11 - 1);
              *(_DWORD *)v15 = v13;
              *((_DWORD *)v15 + 1) = v14;
              *((_DWORD *)v15 + 2) = v16;
              *((_DWORD *)v15 + 3) = v17;
            }
            while ( v11 != (_DWORD *)((char *)v10 + 74) );
            free(v10);
            if ( v31 )
            {
              v19 = (char *)&v33 + 3;
              v20 = s;
              do
              {
                v21 = (unsigned __int8)*++v19;
                v22 = v20;
                v20 += 2;
                sprintf(v22, "%02x", v21);
              }
              while ( v19 != &v35 );
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw(
                (char *)&v37,
                0x1000u,
                0,
                "[DAG] node_index %08x(chip %1d row %02d col %d ch %d s_addr %04x %s",
                v24,
                v8,
                v26,
                j,
                k,
                v25,
                s);
              pthread_mutex_unlock(&stru_197BB8);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "read_dag",
                8,
                8417,
                60,
                &v37);
            }
            ++v8;
          }
          while ( v8 != 8 );
        }
        while ( &v34 != v29 );
      }
    }
    v7 = ++v26;
  }
  while ( v26 != 12 );
  v40 = 255;
  v38 = 0;
  v39 = 786433;
  v37 = 2;
  (*(void (__fastcall **)(int, int *))(v6 + 144))(v6, &v37);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
