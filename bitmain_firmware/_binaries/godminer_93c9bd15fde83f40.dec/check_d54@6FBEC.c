int __fastcall check_d54(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r2
  _BYTE *v11; // r12
  int *v12; // r3
  int v13; // r3
  int v14; // r3
  _DWORD *v15; // r11
  int v16; // r6
  unsigned int v17; // r2
  int v18; // r9
  int v19; // r4
  unsigned __int8 *v20; // r5
  int v21; // r4
  int v22; // r12
  _BYTE *v23; // r6
  int v24; // r3
  int v27; // r0
  int v28; // t1
  int v29; // [sp+1Ch] [bp-1090h]
  int v30; // [sp+1Ch] [bp-1090h]
  int v31; // [sp+20h] [bp-108Ch]
  unsigned int v32; // [sp+2Ch] [bp-1080h]
  int v33; // [sp+34h] [bp-1078h]
  int v35; // [sp+40h] [bp-106Ch]
  int v36; // [sp+48h] [bp-1064h]
  int v37; // [sp+4Ch] [bp-1060h]
  int v39; // [sp+54h] [bp-1058h]
  _BYTE v40[16]; // [sp+58h] [bp-1054h] BYREF
  _BYTE v41[64]; // [sp+68h] [bp-1044h] BYREF
  char v42[4056]; // [sp+A8h] [bp-1004h] BYREF

  v7 = 1739324;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v42, 0x1000u, 0, 1560772, "check_d54");
  pthread_mutex_unlock(&stru_1A8A24);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/backend_eth/backend_eth.c",
         154,
         "check_d54",
         9,
         3422,
         60,
         v42);
  if ( a3 == 255 )
  {
    LOWORD(v12) = -15620;
    HIWORD(v12) = (unsigned int)" = %d.\n" >> 16;
    v39 = 14;
    v8 = *v12;
    v9 = v12[1];
    v10 = v12[2];
    v13 = v12[3];
    v11 = v40;
  }
  else
  {
    LOWORD(v13) = 1;
    v39 = 1;
  }
  if ( a3 == 255 )
  {
    *(_DWORD *)v11 = v8;
    *((_DWORD *)v11 + 1) = v9;
    *((_DWORD *)v11 + 2) = v10;
    *((_WORD *)v11 + 6) = v13;
  }
  v32 = (unsigned __int16)a4;
  v36 = 8 * a4;
  v37 = 0;
  do
  {
    v14 = a3;
    v15 = (_DWORD *)v7;
    if ( a3 == 255 )
      v14 = (unsigned __int8)v40[v37];
    v33 = v14;
    v35 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)&stru_18694.st_info);
      if ( !v32 )
        break;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = v17 <= 3 && v33 == 3;
        if ( !v19 )
          break;
        ++v16;
LABEL_12:
        v17 = (unsigned __int16)v16;
        if ( v32 <= (unsigned __int16)v16 )
          goto LABEL_26;
      }
      v20 = v41;
      v29 = sub_C20C4(a1, v33, (unsigned __int16)((_WORD)v17 << 12) | 0x36, (int)v41);
      if ( v29 > 0 )
      {
        if ( a5 )
        {
          while ( (a5 & ~*((_DWORD *)v20 + 1)) == 0 )
          {
            ++v19;
            pthread_mutex_lock(&stru_1A8A24);
            v27 = v20[1];
            v28 = *v20;
            v20 += 8;
            ++v18;
            logfmt_raw(
              v42,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v16,
              v28,
              v27,
              a5);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              *v15,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_d54",
              9,
              3452,
              20,
              v42);
            if ( v29 == v19 )
              goto LABEL_25;
          }
          v24 = 8 * v19;
LABEL_24:
          v30 = v24;
          pthread_mutex_lock(&stru_1A8A24);
          v18 >>= 3;
          logfmt_raw(
            v42,
            0x1000u,
            0,
            1530508,
            v16,
            (unsigned __int8)v41[v30],
            (unsigned __int8)v41[v30 + 1],
            bswap32(*(_DWORD *)&v41[v30 + 4]),
            a5);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            *v15,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3456,
            100,
            v42);
        }
        else
        {
          v21 = 0;
          v31 = v16;
          do
          {
            v23 = &v41[8 * v21];
            if ( (*((_DWORD *)v23 + 1) & 8) != 0 )
            {
              v16 = v31;
              v24 = 8 * v21;
              goto LABEL_24;
            }
            pthread_mutex_lock(&stru_1A8A24);
            v22 = (unsigned __int8)v41[8 * v21++];
            ++v18;
            logfmt_raw(v42, 0x1000u, 0, 1530444, v31, v22, (unsigned __int8)v23[1], 0);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              *v15,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_d54",
              9,
              3452,
              20,
              v42);
          }
          while ( v21 != v29 );
          v16 = v31;
        }
      }
LABEL_25:
      ++v16;
      if ( v18 >= 8 * v16 )
        goto LABEL_12;
LABEL_26:
      if ( v18 >= v36 )
        break;
      if ( !--v35 )
      {
        v7 = (int)v15;
        goto LABEL_29;
      }
    }
    v7 = (int)v15;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v42, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", a5);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      *v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3465,
      20,
      v42);
LABEL_29:
    ;
  }
  while ( v39 != ++v37 );
  return 0;
}
