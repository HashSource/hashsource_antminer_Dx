int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  const __int32_t **v4; // r0
  int v5; // r5
  int v6; // r4
  unsigned int v7; // r7
  unsigned int v8; // r6
  unsigned int v9; // r10
  int v10; // r5
  char v11; // r7
  int v12; // r4
  char v13; // r6
  int v15; // [sp+14h] [bp-1010h]
  char v16; // [sp+18h] [bp-100Ch]
  char v17[4100]; // [sp+20h] [bp-1004h] BYREF

  if ( (strlen(a1) & 1) != 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "Provided hex %s is not valid!", a1);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      36,
      100,
      v17);
  }
  v4 = _ctype_tolower_loc();
  v5 = LOBYTE((*v4)[(unsigned __int8)a1[a2]]);
  v6 = LOBYTE((*v4)[(unsigned __int8)a1[a2 + 1]]);
  v7 = (unsigned __int8)(v5 - 97);
  v15 = v5 - 48;
  v8 = (unsigned __int8)(v6 - 97);
  v16 = v6 - 48;
  v9 = (unsigned __int8)(v6 - 48);
  if ( v7 <= 5 )
  {
    if ( v8 <= 5 )
      goto LABEL_9;
  }
  else if ( (unsigned __int8)(v5 - 48) > 9u )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "Hex character %d is not valid!", v5);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      43,
      100,
      v17);
    if ( v8 <= 5 )
      goto LABEL_22;
  }
  else if ( v8 <= 5 )
  {
    goto LABEL_6;
  }
  if ( v9 > 9 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "Hex character %d is not valid!", v6);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      46,
      100,
      v17);
  }
LABEL_9:
  if ( (unsigned __int8)(v5 - 48) > 9u )
  {
    if ( v7 <= 5 )
    {
      v10 = 16 * (v5 - 87);
      v11 = v10;
      goto LABEL_13;
    }
LABEL_22:
    V_LOCK();
    v11 = -16;
    logfmt_raw(
      v17,
      0x1000u,
      0,
      "The provided character %c is invalid and was not rejected in preliminary hex checks!",
      v5);
    V_UNLOCK();
    v10 = -16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.h",
      127,
      "get_value_from_lower_hex",
      24,
      42,
      100,
      v17);
LABEL_13:
    if ( v9 <= 9 )
      goto LABEL_7;
    goto LABEL_14;
  }
LABEL_6:
  v10 = 16 * v15;
  v11 = 16 * v15;
  if ( v9 <= 9 )
  {
LABEL_7:
    v12 = v6 - 48;
    v13 = v16;
    goto LABEL_16;
  }
LABEL_14:
  if ( v8 > 5 )
  {
    V_LOCK();
    v13 = -1;
    logfmt_raw(
      v17,
      0x1000u,
      0,
      "The provided character %c is invalid and was not rejected in preliminary hex checks!",
      v6);
    V_UNLOCK();
    v12 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.h",
      127,
      "get_value_from_lower_hex",
      24,
      42,
      100,
      v17);
  }
  else
  {
    v12 = v6 - 87;
    v13 = v12;
  }
LABEL_16:
  if ( v12 + v10 > 255 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, "The provided hex %s at index %d is not a valid byte!", a1, a2);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      53,
      100,
      v17);
  }
  return (unsigned __int8)(v11 + v13);
}
