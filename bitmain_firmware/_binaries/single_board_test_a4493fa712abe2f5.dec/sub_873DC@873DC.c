void __fastcall sub_873DC(int a1, __int64 ***a2)
{
  __int64 **v2; // r11
  __int64 *v4; // r4
  int v5; // r9
  int v6; // r6
  size_t v7; // r7
  void *v8; // r0
  void *v9; // r5
  int v10; // r6
  __int64 v11; // kr00_8
  int v12; // [sp+14h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  char v14[4100]; // [sp+818h] [bp-1004h] BYREF

  v12 = a1;
  if ( a2 )
  {
    v2 = *a2;
    v5 = (int)(*a2 + 1);
    v4 = **a2;
    if ( (__int64 *)v5 != v4 )
    {
      while ( 1 )
      {
        v6 = *((_DWORD *)v4 + 4);
        v7 = *(_DWORD *)(v6 + 4);
        v8 = malloc(v7);
        v9 = v8;
        if ( v8 )
          memcpy(v8, *(const void **)v6, v7);
        v10 = ((int (__fastcall *)(int *, void *))v2[9])(&v12, v9);
        free(v9);
        if ( !v10 )
          break;
        v11 = *v4;
        v4 = (__int64 *)*((_DWORD *)v4 + 1);
        if ( v10 < 0 )
          v4 = (__int64 *)v11;
        if ( (__int64 *)v5 == v4 )
          return;
      }
      snprintf(s, 0x800u, "remove %d from flicker list\n", v12);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v14, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
        80,
        "remove_port_form_gpio_map",
        25,
        205,
        20,
        v14);
      remove_c_map((int *)a2, (int)&v12);
    }
  }
}
