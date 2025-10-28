int __fastcall check_cmn_lock_status(int a1, int a2, _BYTE *a3, int a4, int a5)
{
  int v5; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r2
  _BYTE *v10; // r12
  __int16 v11; // r3
  _BYTE *v12; // r3
  int v13; // r0
  int v14; // r4
  _BYTE *v15; // r9
  int v16; // r3
  char v17; // r1
  int result; // r0
  int v20; // [sp+0h] [bp-88h]
  int v21; // [sp+14h] [bp-74h]
  int v22; // [sp+18h] [bp-70h]
  int v23; // [sp+1Ch] [bp-6Ch]
  int v26; // [sp+30h] [bp-58h]
  _BYTE v27[16]; // [sp+38h] [bp-50h] BYREF
  _BYTE v28[64]; // [sp+48h] [bp-40h] BYREF
  char v29[4088]; // [sp+88h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v29, 0x1000u, 0, "%s...", "check_cmn_lock_status");
  pthread_mutex_unlock(&stru_1A8A24);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/backend_eth/backend_eth.c",
         154,
         "check_cmn_lock_status",
         21,
         8745,
         60,
         v29);
  if ( a3 == (_BYTE *)255 )
  {
    v26 = 14;
    v7 = 100991489;
    v8 = 235735561;
    v9 = 134677248;
    v11 = 3851;
    v10 = v27;
  }
  else
  {
    v11 = 1;
    v26 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    *(_DWORD *)v10 = v7;
    *((_DWORD *)v10 + 1) = v8;
    *((_DWORD *)v10 + 2) = v9;
    *((_WORD *)v10 + 6) = v11;
  }
  v22 = 0;
  v23 = 0;
  do
  {
    v12 = a3;
    if ( a3 == (_BYTE *)255 )
      v12 = v27;
    else
      v5 = (int)a3;
    if ( a3 == (_BYTE *)255 )
      v5 = (unsigned __int8)v12[v23];
    if ( v5 != 3 )
    {
      v13 = sub_C20C4(a1, v5, 0x801Du, (int)v28);
      if ( v13 > 0 )
      {
        v14 = 0;
        v21 = 8 * v13;
        do
        {
          while ( 1 )
          {
            v15 = &v28[v14];
            v16 = *(_DWORD *)&v28[v14 + 4];
            __pld(&v28[v14 + 20]);
            if ( (v16 & 0x20000000) != 0 )
              break;
            ++v22;
            if ( a5 )
            {
              __pld((void *)(a5 + 32 + v5 + 2 * v14));
              *(_BYTE *)(a5 + v5 + 2 * v14) = 1;
            }
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              v29,
              0x1000u,
              0,
              "chip_id %02x core_id %02x %08x cmn lock failed!",
              (unsigned __int8)v28[v14],
              (unsigned __int8)v15[1],
              *((_DWORD *)v15 + 1));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_cmn_lock_status",
              21,
              8776,
              100,
              v29);
            v17 = v28[v14];
            v14 += 8;
            ajust_retry_param(a1, v17, v5);
            if ( v14 == v21 )
              goto LABEL_22;
          }
          if ( a5 )
            *(_BYTE *)(a5 + v5 + 2 * v14) = 0;
          pthread_mutex_lock(&stru_1A8A24);
          v20 = (unsigned __int8)v28[v14];
          v14 += 8;
          logfmt_raw(v29, 0x1000u, 0, "chip_id %02x core_id %02x cmn locked", v20, (unsigned __int8)v15[1]);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_cmn_lock_status",
            21,
            8770,
            20,
            v29);
        }
        while ( v14 != v21 );
      }
    }
LABEL_22:
    ;
  }
  while ( v26 != ++v23 );
  result = v22;
  if ( byte_1A2BCC )
    byte_1A2BCC = 0;
  return result;
}
