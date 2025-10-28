int __fastcall get_pcba_test_level_dash(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r2
  char *v13; // r5
  int v14; // r6
  int v15; // [sp+2Ch] [bp-1088h]
  int v16; // [sp+30h] [bp-1084h]
  int v17; // [sp+48h] [bp-106Ch] BYREF
  __int16 v18; // [sp+4Ch] [bp-1068h]
  const char *v19; // [sp+50h] [bp-1064h]
  int v20; // [sp+54h] [bp-1060h]
  int v21; // [sp+58h] [bp-105Ch]
  int v22; // [sp+5Ch] [bp-1058h]
  int v23; // [sp+60h] [bp-1054h]
  int v24; // [sp+64h] [bp-1050h]
  int v25; // [sp+68h] [bp-104Ch]
  int v26; // [sp+6Ch] [bp-1048h]
  _DWORD v27[15]; // [sp+70h] [bp-1044h] BYREF
  int v28; // [sp+ACh] [bp-1008h]
  char v29[4100]; // [sp+B0h] [bp-1004h] BYREF

  v2 = a1[185];
  v18 = 0;
  v17 = 0;
  if ( v2 )
    goto LABEL_2;
  v6 = off_129484(a1[30], 52, 393216, &v17);
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
    v9 = *(_DWORD *)&aPcbaPicHeartbe[10 * v6 + 1056];
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
      v10 = *(_DWORD *)&aPcbaPicHeartbe[10 * v9 + 1056];
      a1[185] = v10;
      if ( !v10 )
LABEL_15:
        a1[185] = 5;
    }
    pthread_mutex_lock(&stru_3B526C);
    v11 = a1[185];
    v27[8] = "chain";
    v12 = a1[31];
    v27[9] = 5;
    v27[10] = 3;
    v13 = &aPcbaPicHeartbe[10 * v11 - 10];
    v15 = (unsigned __int8)v13[1064];
    v16 = (unsigned __int8)v13[1065];
    v27[12] = v12;
    v27[13] = v12 >> 31;
    v27[14] = 0;
    ++dword_3B52A8;
    logfmt_raw(
      v29,
      0x1000u,
      0,
      v28,
      "chain",
      5,
      3,
      v27[11],
      (__int64)v12,
      0,
      v28,
      "pic freq %d voltage %d rate%d.%d",
      (unsigned __int16)v17,
      HIWORD(v17),
      v15,
      v16);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "get_pcba_test_level_dash",
      24,
      911,
      60,
      v29);
    v2 = a1[185];
LABEL_2:
    *a2 = v2;
    return 0;
  }
  *a2 = -1;
  V_LOCK();
  v14 = a1[31];
  v19 = "chain";
  ++dword_3B52A8;
  v23 = v14;
  v24 = v14 >> 31;
  v20 = 5;
  v21 = 3;
  v25 = 0;
  V_STR(v27, "error", "pic info error");
  logfmt_raw(
    v29,
    0x1000u,
    0,
    v26,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v27[7],
    "pic info lost");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "get_pcba_test_level_dash",
    24,
    889,
    120,
    v29);
  return 6;
}
