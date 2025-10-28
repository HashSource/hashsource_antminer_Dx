int __fastcall bitmain_power_read(__int16 a1, void *a2, int a3)
{
  int v5; // r5
  int v7; // r2
  int v8; // [sp+14h] [bp-1814h] BYREF
  char v9; // [sp+18h] [bp-1810h]
  char v10; // [sp+19h] [bp-180Fh]
  __int16 v11; // [sp+1Ah] [bp-180Eh]
  int v12; // [sp+1Ch] [bp-180Ch] BYREF
  _DWORD src[2]; // [sp+20h] [bp-1808h] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  char v15[4096]; // [sp+828h] [bp-1000h] BYREF

  v9 = a1;
  v11 = a3 + 12 + a1;
  v10 = a3;
  v8 = 101100117;
  src[0] = 0;
  src[1] = 0;
  v12 = 0;
  if ( dword_195CB0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = sub_B6B8C();
    if ( v5 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v15, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      v7 = 527;
LABEL_9:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "bitmain_power_read",
        18,
        v7,
        100,
        v15);
      return v5;
    }
  }
  if ( sub_AFE88(dword_195CAC[0], (unsigned __int8 *)&v8, 8u, (unsigned __int8 *)&v12, a3 + 7) )
  {
    v5 = -2147482880;
    strcpy(s, "set DA conversion N failed\n");
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v7 = 537;
    goto LABEL_9;
  }
  if ( a3 )
    memcpy(a2, (char *)src + 1, (unsigned __int8)(a3 - 1) + 1);
  return v5;
}
