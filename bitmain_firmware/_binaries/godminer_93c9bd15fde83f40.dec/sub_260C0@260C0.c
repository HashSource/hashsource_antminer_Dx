ssize_t __fastcall sub_260C0(int *a1, char *s)
{
  char *v3; // r7
  int v4; // r9
  signed int v5; // r6
  int v6; // r0
  int v7; // r12
  int v8; // lr
  char *v9; // r12
  int v10; // r0
  ssize_t result; // r0
  _BOOL4 v12; // r3
  int *v13; // r0
  int *v14; // r10
  char *v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r10
  signed int v20; // [sp+14h] [bp-1098h]
  struct timeval timeout; // [sp+20h] [bp-108Ch] BYREF
  fd_set sa; // [sp+28h] [bp-1084h] BYREF
  char v23[4100]; // [sp+A8h] [bp-1004h] BYREF

  v3 = s;
  v4 = 0;
  v5 = strlen(s) + 1;
  v20 = v5;
  while ( 1 )
  {
    timeout.tv_usec = 50000;
    timeout.tv_sec = 0;
    memset(&sa, 0, sizeof(sa));
    v6 = *a1;
    v7 = *a1 + 31;
    if ( *a1 >= 0 )
      v7 = *a1;
    LOBYTE(v8) = v6 & 0x1F;
    v9 = &v23[4 * (v7 >> 5)];
    if ( v6 <= 0 )
      v8 = -(-v6 & 0x1F);
    *((_DWORD *)v9 - 32) |= 1 << v8;
    v10 = select(v6 + 1, 0, &sa, 0, &timeout);
    if ( v10 <= 0 )
      break;
    result = send(*a1, v3, v5, 0);
    if ( result < 0 )
    {
      v13 = _errno_location();
      if ( *v13 != 11 )
      {
        v14 = v13;
        pthread_mutex_lock(&stru_1A8A24);
        v15 = strerror(*v14);
        logfmt_raw(v23, 0x1000u, 0, "%s: send (%d:%d) failed %s", "send_api_result", v20, v20 - v5, v15);
        pthread_mutex_unlock(&stru_1A8A24);
        v16 = 1897;
        v17 = g_zc;
        LOWORD(v18) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/"
                                        "tmp/release/build/godminer-origin_master/api_new.c";
        goto LABEL_16;
      }
      ++v4;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v23, 0x1000u, 0, "%s: send EAGAIN ", "send_api_result");
      pthread_mutex_unlock(&stru_1A8A24);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/api_new.c",
                 130,
                 "send_api_result",
                 15,
                 1893,
                 20,
                 v23);
      v12 = v4 > 2;
      if ( v5 <= 0 )
        v12 = 1;
    }
    else
    {
      if ( !result )
        ++v4;
      v5 -= result;
      v3 += result;
      v12 = v4 > 2;
      if ( v5 <= 0 )
        v12 = 1;
    }
    if ( v12 )
      return result;
  }
  v19 = v10;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v23, 0x1000u, 0, "%s: send select failed, ret = %d", "send_api_result", v19);
  pthread_mutex_unlock(&stru_1A8A24);
  v16 = 1885;
  v17 = g_zc;
  LOWORD(v18) = -564;
LABEL_16:
  HIWORD(v18) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/api_new.c" >> 16;
  return zlog(v17, v18, 130, "send_api_result", 15, v16, 100, v23);
}
