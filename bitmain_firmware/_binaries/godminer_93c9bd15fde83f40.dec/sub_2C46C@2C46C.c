int __fastcall sub_2C46C(_DWORD *a1, int a2)
{
  _BOOL4 v2; // r4
  int v3; // r10
  int v4; // r9
  int v5; // r4
  int v6; // r2
  int v7; // r8
  int v8; // r1
  int v9; // t1
  int v10; // r5
  int v11; // r8
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  size_t v14; // r0
  unsigned int *v15; // r2
  unsigned int v16; // r1
  unsigned int v17; // r1
  unsigned int v18; // r2
  int v19; // r4
  int v20; // t1
  _QWORD *v21; // r0
  _DWORD *v22; // r2
  unsigned int *v24; // r2
  unsigned int v25; // r1
  _BOOL4 v26; // r2
  size_t v27; // r0
  _DWORD *v28; // [sp+1Ch] [bp-1010h]
  _DWORD *v30; // [sp+24h] [bp-1008h]
  char v31[4100]; // [sp+28h] [bp-1004h] BYREF

  v2 = a1 == 0;
  if ( !a2 )
    v2 = 1;
  if ( v2 )
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "%s: input bad api param\n", "get_reject_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_reject_summary_old",
      22,
      1401,
      100,
      v31);
    return -2147483646;
  }
  v3 = 0;
  v4 = 0;
  v5 = -1;
  sub_2885C(a1, 1, 71, *(const char **)(a2 + 8));
  v30 = json_array();
  v28 = json_object();
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_6;
LABEL_25:
    v18 = v5 + 1;
    v19 = reject_reason_map + 4 * v5;
    while ( 1 )
    {
      if ( dword_1AB33C <= v18 )
        goto LABEL_29;
      v20 = *(_DWORD *)(v19 + 4);
      v19 += 4;
      v4 = v20;
      if ( v20 )
        break;
      ++v18;
    }
    v5 = v18;
LABEL_7:
    if ( v4 == -12 )
      break;
    v6 = *(unsigned __int8 *)(v4 + 12);
    ++v3;
    if ( *(_BYTE *)(v4 + 12) )
    {
      v8 = v4 + 12;
      v7 = 5381;
      do
      {
        v7 = (33 * v7) ^ v6;
        v9 = *(unsigned __int8 *)++v8;
        v6 = v9;
      }
      while ( v9 );
    }
    else
    {
      v7 = 5381;
    }
    if ( !dword_1AB33C || (v10 = *(_DWORD *)(reject_reason_map + 4 * ((dword_1AB33C - 1) & v7))) == 0 )
    {
LABEL_34:
      dword_1AB344 = 0;
      __und(0);
    }
    while ( v7 != *(_DWORD *)v10 || strcmp((const char *)(v10 + 12), (const char *)(v4 + 12)) )
    {
      v10 = *(_DWORD *)(v10 + 8);
      if ( !v10 )
        goto LABEL_34;
    }
    v11 = **(_DWORD **)(v10 + 4);
    dword_1AB344 = *(_DWORD *)(v10 + 4);
    v12 = off_1A25E8(0x10u);
    v13 = v12;
    if ( v12 )
    {
      *v12 = 3;
      *((_QWORD *)v12 + 1) = v11;
      v12[1] = 1;
      v14 = strlen((const char *)(v4 + 12));
      if ( utf8_check_string(v4 + 12, v14) )
      {
        if ( !v28 )
          goto LABEL_51;
        v26 = v28 == v13;
        if ( *v28 )
          v26 = 1;
        if ( v26 )
        {
LABEL_51:
          if ( v13[1] != -1 )
          {
            v24 = v13 + 1;
            __dmb(0xBu);
            do
            {
              v25 = __ldrex(v24);
              v17 = v25 - 1;
            }
            while ( __strex(v17, v24) );
LABEL_23:
            if ( !v17 )
            {
              json_delete(v13);
              if ( !v4 )
                goto LABEL_25;
LABEL_6:
              v4 = *(_DWORD *)(v4 + 8);
              if ( v4 )
                goto LABEL_7;
              goto LABEL_25;
            }
          }
        }
        else if ( hashtable_set(v28 + 2, (char *)(v4 + 12), (int)v13) && v13[1] != -1 )
        {
          sub_84ED0(v13);
        }
      }
      else if ( v13[1] != -1 )
      {
        v15 = v13 + 1;
        __dmb(0xBu);
        do
        {
          v16 = __ldrex(v15);
          v17 = v16 - 1;
        }
        while ( __strex(v17, v15) );
        goto LABEL_23;
      }
    }
    else
    {
      v27 = strlen((const char *)(v4 + 12));
      utf8_check_string(v4 + 12, v27);
    }
  }
LABEL_29:
  v21 = off_1A25E8(0x10u);
  if ( v21 )
  {
    v21[1] = v3;
    *(_DWORD *)v21 = 3;
    *((_DWORD *)v21 + 1) = 1;
  }
  json_object_set_new(v28, "total_reason", v21);
  json_array_append_new((int)v30, v28);
  json_object_set_new(a1, "REJECT_REASON", v30);
  v22 = off_1A25E8(0x10u);
  if ( v22 )
  {
    *v22 = 3;
    v22[1] = 1;
    *((_QWORD *)v22 + 1) = 1;
  }
  json_object_set_new(a1, "id", v22);
  return 0;
}
