int __fastcall check_d54(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int *v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r2
  _BYTE *v11; // r12
  __int16 v12; // r3
  int v13; // r3
  int *v14; // r11
  int v15; // r6
  unsigned int v16; // r2
  int v17; // r9
  int v18; // r4
  unsigned __int8 *v19; // r5
  int v20; // r4
  int v21; // r12
  _BYTE *v22; // r6
  int v23; // r3
  int v26; // r0
  int v27; // t1
  int v28; // [sp+1Ch] [bp-1090h]
  int v29; // [sp+1Ch] [bp-1090h]
  int v30; // [sp+20h] [bp-108Ch]
  unsigned int v31; // [sp+2Ch] [bp-1080h]
  int v32; // [sp+34h] [bp-1078h]
  int v34; // [sp+40h] [bp-106Ch]
  int v35; // [sp+48h] [bp-1064h]
  int v36; // [sp+4Ch] [bp-1060h]
  int v38; // [sp+54h] [bp-1058h]
  _BYTE v39[16]; // [sp+58h] [bp-1054h] BYREF
  _BYTE v40[64]; // [sp+68h] [bp-1044h] BYREF
  char v41[4056]; // [sp+A8h] [bp-1004h] BYREF

  v7 = &g_zc;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v41, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_197BB8);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/backend_eth/backend_eth.c",
         154,
         "check_d54",
         9,
         3422,
         60,
         v41);
  if ( a3 == 255 )
  {
    v38 = 14;
    v8 = 100991489;
    v9 = 235735561;
    v10 = 134677248;
    v12 = 3851;
    v11 = v39;
  }
  else
  {
    v12 = 1;
    v38 = 1;
  }
  if ( a3 == 255 )
  {
    *(_DWORD *)v11 = v8;
    *((_DWORD *)v11 + 1) = v9;
    *((_DWORD *)v11 + 2) = v10;
    *((_WORD *)v11 + 6) = v12;
  }
  v31 = (unsigned __int16)a4;
  v35 = 8 * a4;
  v36 = 0;
  do
  {
    v13 = a3;
    v14 = v7;
    if ( a3 == 255 )
      v13 = (unsigned __int8)v39[v36];
    v32 = v13;
    v34 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)"ead_unregister_cancel");
      if ( !v31 )
        break;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v16 <= 3 && v32 == 3;
        if ( !v18 )
          break;
        ++v15;
LABEL_12:
        v16 = (unsigned __int16)v15;
        if ( v31 <= (unsigned __int16)v15 )
          goto LABEL_26;
      }
      v19 = v40;
      v28 = sub_13415C(a1, v32, (unsigned __int16)((_WORD)v16 << 12) | 0x36, (int)v40);
      if ( v28 > 0 )
      {
        if ( a5 )
        {
          while ( (a5 & ~*((_DWORD *)v19 + 1)) == 0 )
          {
            ++v18;
            pthread_mutex_lock(&stru_197BB8);
            v26 = v19[1];
            v27 = *v19;
            v19 += 8;
            ++v17;
            logfmt_raw(
              v41,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v15,
              v27,
              v26,
              a5);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              *v14,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_d54",
              9,
              3452,
              20,
              v41);
            if ( v28 == v18 )
              goto LABEL_25;
          }
          v23 = 8 * v18;
LABEL_24:
          v29 = v23;
          pthread_mutex_lock(&stru_197BB8);
          v17 >>= 3;
          logfmt_raw(
            v41,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
            v15,
            (unsigned __int8)v40[v29],
            (unsigned __int8)v40[v29 + 1],
            bswap32(*(_DWORD *)&v40[v29 + 4]),
            a5);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            *v14,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3456,
            100,
            v41);
        }
        else
        {
          v20 = 0;
          v30 = v15;
          do
          {
            v22 = &v40[8 * v20];
            if ( (*((_DWORD *)v22 + 1) & 8) != 0 )
            {
              v15 = v30;
              v23 = 8 * v20;
              goto LABEL_24;
            }
            pthread_mutex_lock(&stru_197BB8);
            v21 = (unsigned __int8)v40[8 * v20++];
            ++v17;
            logfmt_raw(
              v41,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v30,
              v21,
              (unsigned __int8)v22[1],
              0);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              *v14,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_d54",
              9,
              3452,
              20,
              v41);
          }
          while ( v20 != v28 );
          v15 = v30;
        }
      }
LABEL_25:
      ++v15;
      if ( v17 >= 8 * v15 )
        goto LABEL_12;
LABEL_26:
      if ( v17 >= v35 )
        break;
      if ( !--v34 )
      {
        v7 = v14;
        goto LABEL_29;
      }
    }
    v7 = v14;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v41, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", a5);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      *v14,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3465,
      20,
      v41);
LABEL_29:
    ;
  }
  while ( v38 != ++v36 );
  return 0;
}
