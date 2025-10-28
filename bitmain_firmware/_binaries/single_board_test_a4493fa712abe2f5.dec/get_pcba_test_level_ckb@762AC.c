int __fastcall get_pcba_test_level_ckb(_DWORD *a1, int *a2)
{
  int v2; // r5
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r3
  int v11; // r2
  char *v12; // r7
  int v13; // r0
  int v14; // [sp+2Ch] [bp-1088h]
  int v15; // [sp+30h] [bp-1084h]
  int v16; // [sp+48h] [bp-106Ch] BYREF
  __int16 v17; // [sp+4Ch] [bp-1068h]
  const char *v18; // [sp+50h] [bp-1064h]
  int v19; // [sp+54h] [bp-1060h]
  int v20; // [sp+58h] [bp-105Ch]
  int v21; // [sp+5Ch] [bp-1058h]
  int v22; // [sp+60h] [bp-1054h]
  int v23; // [sp+64h] [bp-1050h]
  int v24; // [sp+68h] [bp-104Ch]
  int v25; // [sp+6Ch] [bp-1048h]
  _DWORD v26[15]; // [sp+70h] [bp-1044h] BYREF
  int v27; // [sp+ACh] [bp-1008h]
  char v28[4100]; // [sp+B0h] [bp-1004h] BYREF

  v2 = a1[185];
  v17 = 0;
  v16 = 0;
  if ( v2 )
    goto LABEL_2;
  if ( off_129484(a1[30], 52, 393216, &v16) )
  {
    v6 = (unsigned __int16)v16;
    v7 = HIWORD(v16);
    if ( (unsigned __int16)v16 != 700 )
    {
      if ( (unsigned __int16)v16 == 0xFFFF && HIWORD(v16) == 0xFFFF && (unsigned __int8)v17 == 255 && HIBYTE(v17) == 255 )
      {
        v2 = 4;
        goto LABEL_24;
      }
LABEL_7:
      v8 = a1[185];
      goto LABEL_8;
    }
    if ( HIWORD(v16) == 810 && (unsigned __int8)v17 == 99 && !HIBYTE(v17) )
      goto LABEL_24;
    if ( HIWORD(v16) == 820 && (unsigned __int8)v17 == 99 && !HIBYTE(v17) )
    {
      v2 = 1;
    }
    else if ( HIWORD(v16) == 830 && (unsigned __int8)v17 == 99 && !HIBYTE(v17) )
    {
      v2 = 2;
    }
    else
    {
      if ( HIWORD(v16) != 820 || (unsigned __int8)v17 != 95 || HIBYTE(v17) )
        goto LABEL_7;
      v2 = 3;
    }
LABEL_24:
    v8 = *(int *)((char *)&off_FE8B0 + 10 * v2 + 2052);
    a1[185] = v8;
LABEL_8:
    if ( !v8 )
    {
      if ( v6 == 700 )
      {
        if ( v7 != 810 )
        {
          if ( v7 == 820 )
          {
            v8 = 1;
          }
          else
          {
            if ( v7 != 830 )
              goto LABEL_15;
            v8 = 2;
          }
        }
      }
      else
      {
        if ( v6 != 0xFFFF || v7 != 0xFFFF )
          goto LABEL_15;
        v8 = 4;
      }
      v9 = *(int *)((char *)&off_FE8B0 + 10 * v8 + 2052);
      a1[185] = v9;
      if ( !v9 )
LABEL_15:
        a1[185] = 5;
    }
    pthread_mutex_lock(&stru_3B526C);
    v10 = a1[185];
    v26[8] = "chain";
    v11 = a1[31];
    v26[9] = 5;
    v26[10] = 3;
    v12 = (char *)&off_FE8B0 + 10 * v10 - 10;
    v14 = (unsigned __int8)v12[2060];
    v15 = (unsigned __int8)v12[2061];
    v26[12] = v11;
    v26[13] = v11 >> 31;
    v26[14] = 0;
    ++dword_3B52A8;
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
      (unsigned __int16)v16,
      HIWORD(v16),
      v14,
      v15);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
      71,
      "get_pcba_test_level_ckb",
      23,
      520,
      60,
      v28);
    v2 = a1[185];
LABEL_2:
    *a2 = v2;
    return 0;
  }
  *a2 = -1;
  V_LOCK();
  v13 = a1[31];
  v18 = "chain";
  ++dword_3B52A8;
  v19 = 5;
  v20 = 3;
  v24 = 0;
  v22 = v13;
  v23 = v13 >> 31;
  V_STR(v26, "error", "pic info error");
  logfmt_raw(
    v28,
    0x1000u,
    0,
    v25,
    v18,
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
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
    71,
    "get_pcba_test_level_ckb",
    23,
    498,
    120,
    v28);
  return 6;
}
