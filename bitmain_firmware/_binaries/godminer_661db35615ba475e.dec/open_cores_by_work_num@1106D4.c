int __fastcall open_cores_by_work_num(int a1)
{
  char v1; // r6
  char v2; // r8
  void (__fastcall *v4)(int, int *); // r3
  int i; // r3
  int v6; // r1
  unsigned int v7; // r12
  char v8; // r1
  int v9; // r1
  unsigned int v10; // r12
  char v11; // r1
  _DWORD *v12; // r10
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r5
  void (__fastcall *v20)(int, int *); // r3
  _DWORD v22[8]; // [sp+18h] [bp-1024h]
  int v23; // [sp+38h] [bp-1004h] BYREF
  int v24; // [sp+3Ch] [bp-1000h]
  int v25; // [sp+40h] [bp-FFCh]
  int v26; // [sp+44h] [bp-FF8h]

  v25 = 0;
  v26 = 0;
  v24 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v25) = 21;
  LOBYTE(v25) = 1;
  LOBYTE(v26) = -1;
  v23 = 0;
  v4(a1, &v23);
  usleep((__useconds_t)"ead_unregister_cancel");
  for ( i = 0; i != 64; i += 2 )
  {
    v6 = (unsigned __int8)aAb77b2cb3d32b0[i];
    v7 = v6 - 97;
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      v8 = v6 - 87;
      if ( v7 <= 5 )
        v1 = v8;
    }
    else
    {
      v1 = v6 - 48;
    }
    v9 = (unsigned __int8)aAb77b2cb3d32b0[i + 1];
    v10 = v9 - 97;
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      v11 = v9 - 87;
      if ( v10 <= 5 )
        v2 = v11;
    }
    else
    {
      v2 = v9 - 48;
    }
    *((_BYTE *)v22 + (i >> 1)) = v2 | (16 * v1);
  }
  v12 = calloc(1u, 0x59u);
  v13 = v22[1];
  v14 = v22[2];
  v15 = v22[3];
  v12[4] = v22[0];
  v12[5] = v13;
  v12[6] = v14;
  v12[7] = v15;
  v16 = v22[5];
  v17 = v22[6];
  v18 = v22[7];
  v19 = 1;
  v12[8] = v22[4];
  v12[9] = v16;
  v12[10] = v17;
  v12[11] = v18;
  *((_QWORD *)v12 + 1) = 1193046;
  do
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v23, 0x1000u, 0, "%s %u", "open_cores_by_work_num", v19);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "open_cores_by_work_num",
      22,
      11691,
      60,
      &v23);
    v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v25 = 1376257;
    v23 = v19++;
    v26 = 255;
    v24 = 0;
    v20(a1, &v23);
    usleep((__useconds_t)"ead_unregister_cancel");
    push_work_base(a1, (int)v12);
    usleep((__useconds_t)"ead_unregister_cancel");
  }
  while ( v19 != 65 );
  return 0;
}
