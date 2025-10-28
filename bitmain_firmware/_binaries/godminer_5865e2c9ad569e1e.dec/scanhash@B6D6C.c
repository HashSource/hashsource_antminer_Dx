int __fastcall scanhash(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r9
  int v6; // r1
  int v7; // r4
  void *v8; // r10
  char *v9; // r11
  int v10; // r3
  int v12; // r8
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r2
  _QWORD *v16; // r8
  __int64 v17; // kr08_8
  int v18; // r12
  int v19; // r1
  int v20; // r3
  int v22; // r1
  int v23; // r0
  int v24; // r3
  int v25; // r1
  int v26; // r3
  unsigned int v27; // [sp+14h] [bp-1228h]
  int v28; // [sp+18h] [bp-1224h]
  unsigned int v29; // [sp+1Ch] [bp-1220h]
  unsigned int v30; // [sp+24h] [bp-1218h]
  char v31; // [sp+2Fh] [bp-120Dh] BYREF
  int v32; // [sp+30h] [bp-120Ch] BYREF
  int v33; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v35[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 228));
  V_LOCK();
  v27 = 1;
  v3 = syscall(224);
  LOWORD(v4) = 4248;
  HIWORD(v4) = (unsigned int)"" >> 16;
  v5 = 0;
  logfmt_raw(v35, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v6) = 27916;
  HIWORD(v6) = (unsigned int)"%s %s" >> 16;
  zlog(g_zc, v6, 149, "scanhash", 8, 118, 40, v35);
  prctl(15, v2);
  v29 = 1;
  v7 = *(_DWORD *)(a1 + 832);
  v8 = calloc(1u, *(_DWORD *)(a1 + 808));
  v28 = 0;
  v9 = (char *)calloc(1u, *(_DWORD *)(a1 + 812));
  while ( 1 )
  {
    memset(s, 0, sizeof(s));
    queue_dequeue(v7, s, 1u);
    if ( *(_BYTE *)(a1 + 860) )
      break;
LABEL_5:
    v10 = (unsigned __int8)s[0];
    while ( 1 )
    {
      if ( v10 != 170 )
      {
        queue_dequeue(v7, s, 1u);
        if ( *(_BYTE *)(a1 + 860) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v7, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 860) )
        goto LABEL_10;
      v10 = (unsigned __int8)s[1];
      if ( s[1] == 85 )
        break;
      s[0] = s[1];
    }
    queue_dequeue(v7, &s[2], 1u);
    v30 = (*(int (__fastcall **)(_DWORD))(a1 + 172))((unsigned __int8)s[2]);
    queue_dequeue(v7, &s[3], v30);
    v12 = *(unsigned __int8 *)(a1 + 860);
    if ( *(_BYTE *)(a1 + 860) )
      break;
    memset(v8, *(unsigned __int8 *)(a1 + 860), *(_DWORD *)(a1 + 808));
    v32 = v12;
    v33 = v12;
    v31 = v12;
    v13 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 68))(
            a1,
            s,
            v8,
            &v31,
            v9,
            &v32,
            &v33);
    if ( v13 == 10 )
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 840), s, v30 + 3) && v29 <= ++v28 )
      {
        V_LOCK();
        logfmt_raw(
          v35,
          0x1000u,
          0,
          "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
          *(_DWORD *)(a1 + 232));
        V_UNLOCK();
        LOWORD(v22) = 27916;
        HIWORD(v22) = (unsigned int)"%s %s" >> 16;
        zlog(g_zc, v22, 149, "scanhash", 8, 227, 40, v35);
        V_LOCK();
        v23 = v28;
        LOWORD(v24) = 28400;
        HIWORD(v24) = (unsigned int)"] header:%02x%02x chip_addr:%02x" >> 16;
        v28 = 0;
        logfmt_raw(v35, 0x1000u, 0, v24, v23, v29);
        V_UNLOCK();
        LOWORD(v25) = 27916;
        HIWORD(v25) = (unsigned int)"%s %s" >> 16;
        zlog(g_zc, v25, 149, "scanhash", 8, 228, 40, v35);
        v26 = 10 * v29;
        if ( 10 * v29 >= 0x989680 )
          v26 = 10000000;
        v29 = v26;
      }
    }
    else if ( v13 == 11 )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 432) + 40);
    }
    else if ( !v13 && *(_BYTE *)(a1 + 238) )
    {
      if ( !*(_BYTE *)(a1 + v33 + 512) && v31 && platform_check_repeat_nonce((int *)a1, v32, v9) )
      {
        ++*(_QWORD *)(*(_DWORD *)(a1 + 432) + 48 * v32 + 32);
      }
      else
      {
        v14 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v8);
        if ( v14 <= 5 )
        {
          v15 = v32;
          v16 = (_QWORD *)(*(_DWORD *)(a1 + 432) + 8 * v14 + 48 * v32);
          ++*v16;
          if ( v14 <= 1 )
          {
            v17 = *(_QWORD *)(a1 + 424) + 1LL;
            ++*(_DWORD *)(*(_DWORD *)(a1 + 456) + 4 * v15);
            v18 = v33;
            *(_QWORD *)(a1 + 424) = v17;
            ++*(_QWORD *)(a1 + 8 * v18 + 544);
            if ( !v14
              && !*(_BYTE *)(a1 + v18 + 512)
              && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 844) + 836), (char *)v8, 1)
              && v27 <= ++v5 )
            {
              V_LOCK();
              logfmt_raw(
                v35,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                *(_DWORD *)(a1 + 232));
              V_UNLOCK();
              LOWORD(v19) = 27916;
              HIWORD(v19) = (unsigned int)"%s %s" >> 16;
              zlog(g_zc, v19, 149, "scanhash", 8, 202, 40, v35);
              V_LOCK();
              logfmt_raw(v35, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v5, v27);
              V_UNLOCK();
              v5 = 0;
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_godminer-new/backend/backend_base.c",
                149,
                "scanhash",
                8,
                203,
                40,
                v35);
              v20 = 10 * v27;
              if ( 10 * v27 >= 0x989680 )
                v20 = 10000000;
              v27 = v20;
            }
          }
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 860) = 0;
  free(v8);
  free(v9);
  return 0;
}
