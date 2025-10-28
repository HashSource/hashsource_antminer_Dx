int __fastcall read_fpga_id(char *a1)
{
  const char *v1; // r1
  int v2; // r5
  int v3; // r6
  const char *v4; // r2
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v7[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v1) = 11940;
  HIWORD(v1) = (unsigned int)"rror calculate diff %d ans diff %d TICKET_MASK_CKB2 %d" >> 16;
  v2 = *(_DWORD *)(dword_1A8A8C + 240);
  v3 = *(_DWORD *)(dword_1A8A8C + 244);
  sprintf(a1, v1, v3, v2);
  LOWORD(v4) = 11952;
  HIWORD(v4) = (unsigned int)"te diff %d ans diff %d TICKET_MASK_CKB2 %d" >> 16;
  snprintf(s, 0x800u, v4, v2, v3);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v7, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_common.c",
           167,
           "read_fpga_id",
           12,
           379,
           100,
           v7);
}
