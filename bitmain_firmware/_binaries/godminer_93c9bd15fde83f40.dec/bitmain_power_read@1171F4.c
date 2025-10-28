int __fastcall bitmain_power_read(__int16 a1, void *a2, int a3)
{
  int v6; // r7
  int v8; // r2
  int v9; // [sp+14h] [bp-183Ch] BYREF
  char v10; // [sp+18h] [bp-1838h]
  char v11; // [sp+19h] [bp-1837h]
  __int16 v12; // [sp+1Ah] [bp-1836h]
  unsigned __int8 v13[52]; // [sp+1Ch] [bp-1834h] BYREF
  char s[2048]; // [sp+50h] [bp-1800h] BYREF
  char v15[4096]; // [sp+850h] [bp-1000h] BYREF

  memset(v13, 0, 0x32u);
  v10 = a1;
  v11 = a3;
  v9 = 101100117;
  v12 = a3 + 12 + a1;
  if ( dword_1AA5F4 )
  {
    v6 = 0;
  }
  else
  {
    v6 = sub_117000();
    if ( v6 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v15, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      v8 = 639;
LABEL_9:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "bitmain_power_read",
        18,
        v8,
        100,
        v15);
      return v6;
    }
  }
  if ( sub_112BC4(dword_1AA5F0, (unsigned __int8 *)&v9, 8u, v13, a3 + 7) )
  {
    v6 = -2147482880;
    strcpy(s, "set DA conversion N failed\n");
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v8 = 649;
    goto LABEL_9;
  }
  if ( a3 )
    memcpy(a2, &v13[5], (unsigned __int8)(a3 - 1) + 1);
  return v6;
}
