int __fastcall sub_29DBC(_DWORD *a1, int a2)
{
  bool v2; // zf
  _DWORD *v4; // r6
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r2
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s: input bad api param\n", "get_version_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_version_old",
      15,
      1369,
      100,
      v13);
    return -2147483646;
  }
  else
  {
    sub_2885C(a1, 1, 22, *(const char **)(a2 + 8));
    v4 = json_array();
    v5 = json_object();
    v6 = json_string("2.12");
    json_object_set_new(v5, "BMMiner", v6);
    v7 = json_string("3.1");
    json_object_set_new(v5, "API", v7);
    v8 = json_string(g_miner_version);
    json_object_set_new(v5, "Miner", v8);
    v9 = json_string(g_miner_compiletime);
    json_object_set_new(v5, "CompileTime", v9);
    v10 = json_string(g_miner_type);
    json_object_set_new(v5, "Type", v10);
    json_array_append_new((int)v4, v5);
    json_object_set_new(a1, "VERSION", v4);
    v11 = off_1A25E8(0x10u);
    if ( v11 )
    {
      *v11 = 3;
      v11[1] = 1;
      *((_QWORD *)v11 + 1) = 1;
    }
    json_object_set_new(a1, "id", v11);
    return 0;
  }
}
