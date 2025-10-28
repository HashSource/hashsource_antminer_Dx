_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v6; // r7
  __int64 v7; // r2
  int v8; // r8
  char *v9; // r10
  float v10; // s16
  int v11; // r7
  int v12; // lr
  int v13; // r7
  __int64 v14; // kr00_8
  __int64 *v15; // r2
  __int64 v16; // t1
  int v18; // r4
  int v19; // r3
  int v20; // r2
  double v21; // d6
  float v22; // s17
  int v23; // r3
  int v24; // r3
  int v25; // r1
  _DWORD *v26; // r0
  unsigned int v27; // r12
  __int64 v28; // kr08_8
  float v29; // s17
  int v30; // r0
  char v31; // r1
  int v32; // r3
  __int64 v33; // r0
  float v34; // s17
  int v35; // [sp+24h] [bp-1058h]
  _DWORD *v36; // [sp+28h] [bp-1054h]
  unsigned int v37; // [sp+30h] [bp-104Ch]
  unsigned int v38; // [sp+3Ch] [bp-1040h]
  unsigned int v39; // [sp+3Ch] [bp-1040h]
  __int64 v40; // [sp+40h] [bp-103Ch]
  _BYTE v41[4]; // [sp+4Ch] [bp-1030h] BYREF
  __int64 v42; // [sp+50h] [bp-102Ch] BYREF
  __int64 v43; // [sp+58h] [bp-1024h] BYREF
  double v44; // [sp+60h] [bp-101Ch] BYREF
  _BYTE v45[12]; // [sp+6Ch] [bp-1010h] BYREF
  char v46[4100]; // [sp+78h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v42);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v43);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v44, v41);
  v6 = *(_DWORD *)(a1 + 228);
  v7 = v43;
  *(_QWORD *)(a2 + 48) = v42;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v6 <= 16 )
  {
    v8 = 16 * v6;
    if ( !byte_1765D8[v6] )
    {
      clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1767E8 + v8));
      *((_QWORD *)&unk_1768E8 + v6) = 0;
      byte_1765D8[v6] = 1;
    }
    if ( *(_QWORD *)(a1 + 424) )
    {
      if ( !byte_176968 )
        byte_176968 = 1;
    }
    else if ( !byte_176968 )
    {
      clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1767E8 + v8));
      *((_QWORD *)&unk_1768E8 + v6) = 0;
      return a3;
    }
    clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 24]);
    v9 = (char *)&unk_176970 + 2896 * v6;
    v10 = (float)(1000LL * (*(_DWORD *)&byte_1765D8[v8 + 24] - *(_DWORD *)&byte_1765D8[v8 + 16])
                + (*(_DWORD *)&byte_1765D8[v8 + 28] - *(_DWORD *)&byte_1765D8[v8 + 20]) / 1000000)
        / 1000.0;
    if ( v10 >= 5.0 )
    {
      v37 = *(_DWORD *)(a1 + 424);
      v38 = *(_DWORD *)(a1 + 428);
      v40 = __PAIR64__(v38, v37) - *((_QWORD *)&unk_1768E8 + v6);
      get_miner_working_status((int)v45);
      if ( v45[6] || v45[0] )
      {
        v22 = 0.0;
      }
      else
      {
        v30 = *(_DWORD *)(a1 + 408);
        v31 = 32 - v30;
        v32 = 1 << (v30 - 32);
        LODWORD(v33) = 1 << v30;
        HIDWORD(v33) = v32 | (1u >> v31);
        v34 = COERCE_FLOAT(sub_12F1F8(v33));
        v22 = v34 * (float)(COERCE_FLOAT(sub_12F1F8(v40)) / v10);
      }
      V_LOCK();
      LOWORD(v23) = -28360;
      HIWORD(v23) = (unsigned int)"emperature" >> 16;
      logfmt_raw(v46, 0x1000u, 0, v23, v10, v37, v38, v40, v22);
      V_UNLOCK();
      LOWORD(v24) = -28376;
      LOWORD(v25) = -28296;
      HIWORD(v24) = (unsigned int)"ature" >> 16;
      HIWORD(v25) = (unsigned int)"enkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
      zlog(g_zc, v25, 189, v24, 15, 125, 20, v46);
      clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 16]);
      v26 = (_DWORD *)((char *)&unk_176970 + 2896 * v6);
      *((_DWORD *)&unk_1768E8 + 2 * v6) = v37;
      v27 = v26[723];
      v35 = v26[720];
      v36 = v26;
      *((_DWORD *)&unk_1768E8 + 2 * v6 + 1) = v38;
      v39 = v26[722];
      *((float *)&unk_176970 + 724 * v6 + v35) = v22;
      v28 = __PAIR64__(v27, v39) + 1;
      v26[720] = (v35 + 1) % 720;
      v29 = v22 + (float)(COERCE_FLOAT(sub_12F1F8(__SPAIR64__(v27, v39))) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v29 / COERCE_FLOAT(sub_12F1F8(v28));
      *((_QWORD *)v36 + 361) = v28;
    }
    sub_5AE28((int)v9);
    *(float *)(a2 + 32) = 5.0;
    sub_5AE28((int)v9);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_5AE28((int)v9);
    v11 = *(_DWORD *)(a1 + 312);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v11 <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 432) + 16;
      v13 = v12 + 48 * v11;
      v14 = 0;
      do
      {
        v15 = (__int64 *)v12;
        do
        {
          v16 = *v15++;
          v14 += v16;
        }
        while ( (__int64 *)(v12 + 32) != v15 );
        v12 += 48;
      }
      while ( v13 != v12 );
    }
    *(_QWORD *)(a2 + 80) = v14;
    clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 280]);
    if ( (float)((float)(1000LL * (*(_DWORD *)&byte_1765D8[v8 + 280] - *(_DWORD *)&byte_1765D8[v8 + 272])
                       + (*(_DWORD *)&byte_1765D8[v8 + 284] - *(_DWORD *)&byte_1765D8[v8 + 276]) / 1000000)
               / 1000.0) >= 900.0 )
    {
      sub_5AE28((int)v9);
      v18 = *(_DWORD *)(a2 + 200);
      if ( v18 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v18 + 104) = 1147207680;
      }
      v19 = *(_DWORD *)(a2 + 208);
      v20 = *(_DWORD *)(a2 + 212);
      v21 = v44 * 0.97;
      *(_DWORD *)(a2 + 200) = v18 + 1;
      *(_DWORD *)(a2 + 208) = v19 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v19, 1) + v20;
      if ( v21 >= 900.0 )
        *a3 |= 1u;
      clock_gettime(1, (struct timespec *)&byte_1765D8[v8 + 272]);
    }
  }
  return a3;
}
