int __fastcall sub_2ABFC(_DWORD *a1, const char **a2)
{
  bool v4; // zf
  _DWORD *v5; // r0
  int v6; // r3
  __int64 v7; // kr00_8
  int v8; // r5
  _DWORD *v9; // r4
  _QWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int v13; // r2
  int *v14; // r3
  int v15; // r1
  _DWORD *v16; // r0
  int v17; // r6
  _QWORD *v18; // r0
  int v19; // r7
  _DWORD *v20; // r0
  __int64 v21; // r6
  _QWORD *v22; // r0
  __int64 v23; // r6
  _QWORD *v24; // r0
  int v25; // r7
  _DWORD *v26; // r0
  int v27; // r7
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  __int64 v30; // r6
  _QWORD *v31; // r0
  __int64 v32; // r6
  _QWORD *v33; // r0
  __int64 v34; // r6
  _QWORD *v35; // r0
  __int64 v36; // r6
  _QWORD *v37; // r0
  __int64 v38; // r6
  _QWORD *v39; // r0
  int v40; // r3
  bool v41; // cc
  time_t v42; // r0
  unsigned int v43; // lr
  _DWORD *v44; // r0
  _DWORD *v46; // [sp+1Ch] [bp-1148h]
  char v48[4]; // [sp+34h] [bp-1130h] BYREF
  int v49; // [sp+38h] [bp-112Ch]
  int v50; // [sp+3Ch] [bp-1128h] BYREF
  int v51; // [sp+40h] [bp-1124h]
  int v52; // [sp+44h] [bp-1120h]
  char v53[4]; // [sp+48h] [bp-111Ch] BYREF
  int v54; // [sp+4Ch] [bp-1118h]
  int v55; // [sp+50h] [bp-1114h]
  int v56; // [sp+54h] [bp-1110h]
  int v57; // [sp+58h] [bp-110Ch]
  int v58; // [sp+5Ch] [bp-1108h]
  char v59[128]; // [sp+60h] [bp-1104h] BYREF
  char s[128]; // [sp+E0h] [bp-1084h] BYREF
  char v61[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v59, 0, sizeof(v59));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  v51 = 0;
  v52 = 0;
  v50 = 0;
  *(_DWORD *)v48 = 0;
  *(_DWORD *)v53 = 0;
  v49 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(v61, 0x1000u, 0, "%s: input bad api param\n", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools",
      9,
      461,
      100,
      v61);
    return -2147483646;
  }
  else
  {
    sub_2AAB8(a1, a2);
    sub_2A9A8(a1);
    v5 = json_array();
    v6 = total_pools;
    v46 = v5;
    if ( total_pools > 0 )
    {
      v7 = 0;
      do
      {
        v8 = *(_DWORD *)(pools + 4 * v7);
        if ( v8 )
        {
          v9 = json_object();
          v10 = off_1A25E8(0x10u);
          if ( v10 )
          {
            v10[1] = v7;
            *(_DWORD *)v10 = 3;
            *((_DWORD *)v10 + 1) = 1;
          }
          json_object_set_new(v9, "index", v10);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v8 + 8));
          v11 = json_string(s);
          json_object_set_new(v9, "url", v11);
          memset(v59, 0, sizeof(v59));
          snprintf(v59, 0x80u, "%s", *(const char **)(v8 + 12));
          v12 = json_string(v59);
          json_object_set_new(v9, "user", v12);
          v13 = *(unsigned __int8 *)(v8 + 1272);
          v51 = 0;
          v50 = 0;
          v52 = 0;
          if ( v13 )
            LOWORD(v14) = 3796;
          else
            LOWORD(v14) = 3320;
          HIWORD(v14) = 23;
          v15 = v14[1];
          v50 = *v14;
          if ( v13 )
            LOBYTE(v51) = v15;
          else
            LOWORD(v51) = v15;
          v16 = json_string((const char *)&v50);
          json_object_set_new(v9, "status", v16);
          v17 = *(_DWORD *)(v8 + 4);
          v18 = off_1A25E8(0x10u);
          if ( v18 )
          {
            v18[1] = v17;
            *(_DWORD *)v18 = 3;
            *((_DWORD *)v18 + 1) = 1;
          }
          json_object_set_new(v9, "priority", v18);
          v19 = *(_DWORD *)(v8 + 1000);
          v20 = off_1A25E8(0x10u);
          if ( v20 )
          {
            v20[2] = v19;
            v20[3] = 0;
            *v20 = 3;
            v20[1] = 1;
          }
          json_object_set_new(v9, "getworks", v20);
          v21 = *(_QWORD *)(v8 + 1296);
          v22 = off_1A25E8(0x10u);
          if ( v22 )
          {
            v22[1] = v21;
            *(_DWORD *)v22 = 3;
            *((_DWORD *)v22 + 1) = 1;
          }
          json_object_set_new(v9, "accepted", v22);
          v23 = *(_QWORD *)(v8 + 1304);
          v24 = off_1A25E8(0x10u);
          if ( v24 )
          {
            v24[1] = v23;
            *(_DWORD *)v24 = 3;
            *((_DWORD *)v24 + 1) = 1;
          }
          json_object_set_new(v9, "rejected", v24);
          v25 = *(_DWORD *)(v8 + 1312);
          v26 = off_1A25E8(0x10u);
          if ( v26 )
          {
            v26[2] = v25;
            v26[3] = 0;
            *v26 = 3;
            v26[1] = 1;
          }
          json_object_set_new(v9, "discarded", v26);
          v27 = *(_DWORD *)(v8 + 1008);
          v28 = off_1A25E8(0x10u);
          if ( v28 )
          {
            v28[2] = v27;
            v28[3] = 0;
            *v28 = 3;
            v28[1] = 1;
          }
          json_object_set_new(v9, "stale", v28);
          v49 = 0;
          *(_DWORD *)v48 = 0;
          snprintf(v48, 8u, "%s", (const char *)(v8 + 1344));
          v29 = json_string(v48);
          json_object_set_new(v9, "diff", v29);
          v30 = *(_QWORD *)(v8 + 1360);
          v31 = off_1A25E8(0x10u);
          if ( v31 )
          {
            v31[1] = v30;
            *(_DWORD *)v31 = 3;
            *((_DWORD *)v31 + 1) = 1;
          }
          json_object_set_new(v9, "diff1", v31);
          v32 = (__int64)*(double *)(v8 + 1328);
          v33 = off_1A25E8(0x10u);
          if ( v33 )
          {
            v33[1] = v32;
            *(_DWORD *)v33 = 3;
            *((_DWORD *)v33 + 1) = 1;
          }
          json_object_set_new(v9, "diffa", v33);
          v34 = (__int64)*(double *)(v8 + 1336);
          v35 = off_1A25E8(0x10u);
          if ( v35 )
          {
            v35[1] = v34;
            *(_DWORD *)v35 = 3;
            *((_DWORD *)v35 + 1) = 1;
          }
          json_object_set_new(v9, "diffr", v35);
          v36 = (__int64)*(double *)(v8 + 1184);
          v37 = off_1A25E8(0x10u);
          if ( v37 )
          {
            v37[1] = v36;
            *(_DWORD *)v37 = 3;
            *((_DWORD *)v37 + 1) = 1;
          }
          json_object_set_new(v9, "diffs", v37);
          v38 = (__int64)*(double *)(v8 + 992);
          v39 = off_1A25E8(0x10u);
          if ( v39 )
          {
            v39[1] = v38;
            *(_DWORD *)v39 = 3;
            *((_DWORD *)v39 + 1) = 1;
          }
          json_object_set_new(v9, "lsdiff", v39);
          v40 = *(_DWORD *)(v8 + 984);
          *(_DWORD *)v53 = 0;
          v54 = 0;
          v41 = v40 <= 0;
          v55 = 0;
          if ( v40 <= 0 )
            LOWORD(v40) = 48;
          v56 = 0;
          v57 = 0;
          v58 = 0;
          if ( v41 )
          {
            *(_WORD *)v53 = v40;
          }
          else
          {
            v42 = time(0);
            v43 = (v42 - *(_DWORD *)(v8 + 984)) & ~((v42 - *(_DWORD *)(v8 + 984)) >> 31);
            snprintf(v53, 0x18u, "%d:%02d:%02d", v43 / 0xE10, v43 % 0xE10 / 0x3C, v43 % 0xE10 % 0x3C);
          }
          v44 = json_string(v53);
          json_object_set_new(v9, "lstime", v44);
          json_array_append_new((int)v46, v9);
          v6 = total_pools;
        }
        ++v7;
      }
      while ( (int)v7 < v6 );
    }
    json_object_set_new(a1, "POOLS", v46);
    return 0;
  }
}
