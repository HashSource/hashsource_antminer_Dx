int __fastcall get_pcba_test_level_dash(int *a1, int *a2)
{
  int v2; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r6
  int v12; // r3
  char *v13; // r5
  int v14; // r10
  int v15; // r6
  int v16; // [sp+2Ch] [bp-1084h]
  int v17; // [sp+48h] [bp-1068h] BYREF
  __int16 v18; // [sp+4Ch] [bp-1064h]
  const char *v19; // [sp+50h] [bp-1060h]
  int v20; // [sp+54h] [bp-105Ch]
  int v21; // [sp+58h] [bp-1058h]
  int v22; // [sp+5Ch] [bp-1054h]
  __int64 v23; // [sp+60h] [bp-1050h]
  int v24; // [sp+68h] [bp-1048h]
  int v25; // [sp+6Ch] [bp-1044h]
  _DWORD v26[15]; // [sp+70h] [bp-1040h] BYREF
  int v27; // [sp+ACh] [bp-1004h]
  char v28[4096]; // [sp+B0h] [bp-1000h] BYREF

  v2 = a1[185];
  v18 = 0;
  v17 = 0;
  if ( v2 )
    goto LABEL_2;
  v6 = off_18F50C(a1[30], 52, 0x60000u, &v17);
  if ( !v6 )
  {
    v7 = (unsigned __int16)v17;
    v8 = HIWORD(v17);
    if ( (unsigned __int16)v17 != 700 )
    {
      if ( (unsigned __int16)v17 == 0xFFFF && HIWORD(v17) == 0xFFFF && (unsigned __int8)v18 == 255 && HIBYTE(v18) == 255 )
      {
        v6 = 4;
        goto LABEL_24;
      }
LABEL_7:
      v9 = a1[185];
      goto LABEL_8;
    }
    if ( HIWORD(v17) == 810 && (unsigned __int8)v18 == 99 && !HIBYTE(v18) )
      goto LABEL_24;
    if ( HIWORD(v17) == 820 && (unsigned __int8)v18 == 99 && !HIBYTE(v18) )
    {
      v6 = 1;
    }
    else if ( HIWORD(v17) == 830 && (unsigned __int8)v18 == 99 && !HIBYTE(v18) )
    {
      v6 = 2;
    }
    else
    {
      if ( HIWORD(v17) != 820 || (unsigned __int8)v18 != 95 || HIBYTE(v18) )
        goto LABEL_7;
      v6 = 3;
    }
LABEL_24:
    v9 = *(int *)((char *)&off_165F30[826] + 10 * v6);
    a1[185] = v9;
LABEL_8:
    if ( !v9 )
    {
      if ( v7 == 700 )
      {
        if ( v8 != 810 )
        {
          if ( v8 == 820 )
          {
            v9 = 1;
          }
          else
          {
            if ( v8 != 830 )
              goto LABEL_15;
            v9 = 2;
          }
        }
      }
      else
      {
        if ( v7 != 0xFFFF || v8 != 0xFFFF )
          goto LABEL_15;
        v9 = 4;
      }
      v10 = *(int *)((char *)&off_165F30[826] + 10 * v9);
      a1[185] = v10;
      if ( !v10 )
LABEL_15:
        a1[185] = 5;
    }
    pthread_mutex_lock(&stru_197BB8);
    v11 = a1[31];
    v12 = 5 * (a1[185] - 1);
    v26[8] = "chain";
    v13 = (char *)off_165F30 + 2 * v12;
    v26[9] = 5;
    v26[10] = 3;
    v14 = (unsigned __int8)v13[3313];
    v16 = (unsigned __int8)v13[3312];
    v26[12] = v11;
    v26[13] = v11 >> 31;
    v26[14] = 0;
    ++dword_197BD4;
    logfmt_raw(
      v28,
      0x1000u,
      0,
      v27,
      "chain",
      5,
      3,
      v26[11],
      (__int64)v11,
      0,
      v27,
      "pic freq %d voltage %d rate%d.%d",
      (unsigned __int16)v17,
      HIWORD(v17),
      v16,
      v14);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "get_pcba_test_level_dash",
      24,
      911,
      60,
      v28);
    v2 = a1[185];
LABEL_2:
    *a2 = v2;
    return 0;
  }
  *a2 = -1;
  V_LOCK();
  v15 = a1[31];
  v19 = "chain";
  ++dword_197BD4;
  v23 = v15;
  v20 = 5;
  v21 = 3;
  v24 = 0;
  V_STR(v26, "error", "pic info error");
  logfmt_raw(
    v28,
    0x1000u,
    0,
    v25,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v26[7],
    "pic info lost");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "get_pcba_test_level_dash",
    24,
    889,
    120,
    v28);
  return 6;
}
