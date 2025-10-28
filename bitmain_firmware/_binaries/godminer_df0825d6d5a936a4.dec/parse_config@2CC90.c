void __fastcall parse_config(_DWORD *a1)
{
  int v1; // s0
  int v2; // s1
  char *v3; // r10
  char **i; // r4
  char *v6; // t1
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r3
  const char *v10; // r0
  char *v11; // r5
  int v12; // r0
  unsigned int j; // r10
  _DWORD *v14; // r0
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = "algo";
  for ( i = &off_124114; ; i += 4 )
  {
    v7 = (_DWORD *)json_object_get(a1, v3);
    v8 = v7;
    if ( !v7 )
      goto LABEL_7;
    v9 = *v7;
    if ( i[1] )
      break;
    if ( v9 != 5 )
      goto LABEL_7;
    parse_arg((int)i[3], "");
    if ( &unk_124224 == (_UNKNOWN *)i )
      return;
LABEL_8:
    v6 = i[4];
    v3 = v6;
    if ( !v6 )
      return;
  }
  if ( v9 != 2 )
  {
    switch ( v9 )
    {
      case 3:
        v12 = json_integer_value((int)v7);
        sprintf(s, "%d", v12);
        parse_arg((int)i[3], s);
        break;
      case 4:
        json_real_value();
        sprintf(s, "%f", v1, v2);
        parse_arg((int)i[3], s);
        break;
      case 1:
        for ( j = 0; (unsigned int)json_array_size(v8) > j; ++j )
        {
          v14 = json_array_get(v8, j);
          if ( !v14 )
            break;
          if ( *v14 )
          {
            V_LOCK();
            logfmt_raw(s, 0x1000u, 0, 1198876, *i);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/god-miner.c",
              138,
              "parse_config",
              12,
              531,
              100,
              s);
          }
          else
          {
            parse_config(v14);
          }
        }
        break;
      default:
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, 1198904, v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "parse_config",
          12,
          539,
          100,
          s);
        break;
    }
LABEL_7:
    if ( &unk_124224 == (_UNKNOWN *)i )
      return;
    goto LABEL_8;
  }
  v10 = (const char *)json_string_value(v7);
  v11 = _strdup(v10);
  if ( v11 )
  {
    parse_arg((int)i[3], v11);
    free(v11);
    goto LABEL_7;
  }
}
