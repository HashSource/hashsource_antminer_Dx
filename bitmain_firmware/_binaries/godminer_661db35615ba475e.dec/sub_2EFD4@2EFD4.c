int __fastcall sub_2EFD4(_DWORD *a1, const char **a2)
{
  int v3; // r5
  _DWORD *v4; // r6
  int v5; // r7
  float v6; // s16
  double v7; // d0
  int *v8; // r7
  int *v9; // r1
  float v10; // s18
  float v11; // s20
  __int64 v12; // kr00_8
  int v13; // t1
  _DWORD *v14; // r3
  double v15; // d10
  double v16; // d9
  double v17; // d8
  double v18; // d11
  _QWORD *v19; // r0
  double v20; // r0
  double v21; // d7
  double *v22; // r2
  double v23; // r0
  double v24; // d7
  double *v25; // r2
  double v26; // r0
  double v27; // d7
  double *v28; // r2
  double v29; // d7
  _QWORD *v30; // r0
  _DWORD *v31; // r0
  _QWORD *v32; // r2
  __int64 v33; // r4
  _QWORD *v34; // r0
  _DWORD *v35; // r5
  const char **v36; // r8
  _DWORD *v37; // r4
  _DWORD *v38; // r0
  const char *v39; // t1
  double v41; // d0
  int *v42; // r11
  char *v43; // r5
  _DWORD *v44; // r7
  _DWORD *v45; // r10
  int v46; // t1
  char *v47; // r0
  int v48; // [sp+14h] [bp-1030h]
  _DWORD *v50; // [sp+1Ch] [bp-1028h]
  __int64 v51; // [sp+20h] [bp-1024h]
  void *ptr; // [sp+28h] [bp-101Ch]
  char *v53; // [sp+2Ch] [bp-1018h]
  double v54; // [sp+30h] [bp-1014h] BYREF
  _DWORD v55[2]; // [sp+38h] [bp-100Ch] BYREF
  char dest[4100]; // [sp+40h] [bp-1004h] BYREF

  v3 = dword_191C84;
  v55[1] = 0;
  v55[0] = 0;
  if ( !dword_191C84 )
  {
    V_LOCK();
    logfmt_raw(dest, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      67,
      100,
      dest);
  }
  pthread_mutex_lock(&stru_190E30);
  v48 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  if ( a2 )
  {
    sub_2867C(a1, a2);
    sub_2856C(a1);
    v50 = json_array();
    v4 = json_object();
    pthread_mutex_lock(&stru_190E30);
    v5 = dword_190E48;
    pthread_mutex_unlock(&stru_190E30);
    if ( v5 <= 0 )
    {
      v17 = 0.0;
      v51 = 0;
      v16 = 0.0;
      v15 = 0.0;
      v7 = 0.0;
    }
    else
    {
      v6 = 0.0;
      v7 = 0.0;
      v8 = &dword_190E4C[v5];
      v9 = dword_190E4C;
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0;
      do
      {
        v13 = *v9++;
        v14 = &dword_191398[52 * *(_DWORD *)(v13 + 120)];
        v12 += *((_QWORD *)v14 + 9);
        v11 = v11 + *((float *)v14 + 8);
        v10 = v10 + *((float *)v14 + 9);
        v6 = v6 + *((float *)v14 + 10);
        v7 = v7 + *((double *)v14 + 6);
      }
      while ( v8 != v9 );
      v15 = v11;
      v16 = v10;
      v17 = v6;
      v51 = v12;
    }
    format_hashrate_double(*(const char **)(v3 + 84), &v54, (char *)v55);
    v18 = v7 * 100.0;
    if ( v48 > 0 )
    {
      v42 = dword_190E4C;
      v53 = (char *)malloc(208 * v48);
      v43 = v53 + 1664;
      v44 = malloc(4 * v48);
      v45 = &v44[v48];
      ptr = v44;
      do
      {
        v46 = *v42++;
        __pld(v43);
        memcpy(dest, &dword_191398[52 * *(_DWORD *)(v46 + 120)], 0xD0u);
        v47 = v43 - 1664;
        v43 += 208;
        memcpy(v47, dest, 0xD0u);
        *v44++ = *(_DWORD *)(v46 + 124);
      }
      while ( v45 != v44 );
    }
    else
    {
      ptr = 0;
      v53 = 0;
    }
    get_miner_elapsed_time();
    v19 = (_QWORD *)off_190780(16);
    if ( v19 )
    {
      v19[1] = (__int64)v7;
      *(_DWORD *)v19 = 3;
      *((_DWORD *)v19 + 1) = 1;
    }
    json_object_set_new(v4, "elapsed", v19);
    LODWORD(v20) = sub_15D994((__int64)(v18 * v15));
    v21 = v20;
    v22 = (double *)off_190780(16);
    if ( v22 )
    {
      *(_DWORD *)v22 = 4;
      *((_DWORD *)v22 + 1) = 1;
      v22[1] = v21 * 0.01;
    }
    json_object_set_new(v4, "rate_5s", v22);
    LODWORD(v23) = sub_15D994((__int64)(v18 * v16));
    v24 = v23;
    v25 = (double *)off_190780(16);
    if ( v25 )
    {
      *(_DWORD *)v25 = 4;
      *((_DWORD *)v25 + 1) = 1;
      v25[1] = v24 * 0.01;
    }
    json_object_set_new(v4, "rate_30m", v25);
    LODWORD(v26) = sub_15D994((__int64)(v18 * v17));
    v27 = v26;
    v28 = (double *)off_190780(16);
    if ( v28 )
    {
      *(_DWORD *)v28 = 4;
      v28[1] = v27 * 0.01;
      *((_DWORD *)v28 + 1) = 1;
    }
    json_object_set_new(v4, "rate_avg", v28);
    if ( !strcmp(*(const char **)(dword_190E4C[0] + 172), "dash") )
    {
      v41 = v54;
      update_rate_ideal();
      v29 = v41 * 100.0;
    }
    else
    {
      v29 = v54 * 100.0;
    }
    sub_15D994((__int64)v29);
    v30 = json_real();
    json_object_set_new(v4, "rate_ideal", v30);
    v31 = json_string((const char *)v55);
    json_object_set_new(v4, "rate_unit", v31);
    v32 = (_QWORD *)off_190780(16);
    if ( v32 )
    {
      *(_DWORD *)v32 = 3;
      v32[1] = v51;
      *((_DWORD *)v32 + 1) = 1;
    }
    json_object_set_new(v4, "hw_all", v32);
    v33 = *(_QWORD *)&dword_196BA0;
    v34 = (_QWORD *)off_190780(16);
    if ( v34 )
    {
      v34[1] = v33;
      *(_DWORD *)v34 = 3;
      *((_DWORD *)v34 + 1) = 1;
    }
    json_object_set_new(v4, "bestshare", v34);
    v35 = json_array();
    if ( v35 && off_18F30C )
    {
      v36 = (const char **)&off_18F30C;
      do
      {
        v37 = json_object();
        v38 = json_string(*v36);
        json_object_set_new(v37, "type", v38);
        ((void (__fastcall *)(_DWORD *, const char **))v36[1])(v37, v36);
        json_array_append_new((int)v35, v37);
        v39 = v36[6];
        v36 += 6;
      }
      while ( v39 );
    }
    json_object_set_new(v4, "status", v35);
    json_array_append_new((int)v50, v4);
    json_object_set_new(a1, "SUMMARY", v50);
    if ( v48 > 0 )
    {
      free(ptr);
      free(v53);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(dest, 0x1000u, 0, "%s: input bad api param\n", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary",
      11,
      390,
      100,
      dest);
    return -2147483646;
  }
}
