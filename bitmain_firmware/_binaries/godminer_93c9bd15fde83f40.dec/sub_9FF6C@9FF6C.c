void __fastcall sub_9FF6C(int a1, int *a2)
{
  _DWORD **v3; // r9
  _DWORD *v4; // r4
  int v5; // r8
  int v6; // r7
  size_t v7; // r6
  void *v8; // r0
  void *v9; // r5
  size_t v10; // r2
  int v11; // r6
  _DWORD *v12; // r3
  int v13; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v15[4100]; // [sp+818h] [bp-1004h] BYREF

  v13 = a1;
  if ( a2 )
  {
    v3 = (_DWORD **)*a2;
    v5 = *a2 + 4;
    v4 = *(_DWORD **)*a2;
    if ( (_DWORD *)v5 != v4 )
    {
      while ( 1 )
      {
        v6 = v4[4];
        v7 = *(_DWORD *)(v6 + 4);
        v8 = malloc(v7);
        v9 = v8;
        v10 = v7;
        if ( v8 )
          memcpy(v8, *(const void **)v6, v7);
        v11 = ((int (__fastcall *)(int *, void *, size_t))v3[9])(&v13, v9, v10);
        free(v9);
        if ( !v11 )
          break;
        v12 = (_DWORD *)*v4;
        v4 = (_DWORD *)v4[1];
        if ( v11 < 0 )
          v4 = v12;
        if ( (_DWORD *)v5 == v4 )
          return;
      }
      snprintf(s, 0x800u, "remove %d from flicker list\n", v13);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v15, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_ui.c",
        163,
        "remove_port_form_gpio_map",
        25,
        205,
        20,
        v15);
      remove_c_map(a2, (int)&v13);
    }
  }
}
