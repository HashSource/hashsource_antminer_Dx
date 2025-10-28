int __fastcall set_core_enable_base(int result, int a2, __useconds_t a3)
{
  int v3; // r4
  __useconds_t v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r3
  int v8; // r3
  int (__fastcall *v9)(int, int); // r2
  int v10; // r3
  int v11; // r3
  int (__fastcall *v12)(int, int); // r2
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = *(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 13) )
  {
    v4 = a3;
    v5 = result;
    v6 = a2;
    if ( v3 )
    {
      v3 = 0;
      while ( 1 )
      {
        if ( (v3 & 0x1F) == 0 )
          a2 = *(unsigned __int16 *)(v6 + 10);
        v7 = v3 & 0x1F;
        if ( (v3 & 0x1F) != 0 )
          v7 = *(_DWORD *)v6;
        *(_BYTE *)(v6 + 12) = v3;
        if ( (v3 & 0x1F) == 0 )
          a2 += 4 * (v3 >> 5);
        v8 = v7 | (1 << (v3 & 0x1F));
        v9 = *(int (__fastcall **)(int, int))(v5 + 160);
        if ( (v3 & 0x1F) == 0 )
          *(_WORD *)(v6 + 10) = a2;
        *(_DWORD *)v6 = v8;
        if ( v9(v5, v6) < 0 )
          break;
        result = usleep(v4);
        if ( *(unsigned __int8 *)(v6 + 13) <= ++v3 )
          return result;
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = -1;
        if ( (v3 & 0x1F) != 0 )
          v10 = *(_DWORD *)v6;
        else
          a3 = *(unsigned __int16 *)(v6 + 10);
        *(_BYTE *)(v6 + 12) = v3;
        if ( (v3 & 0x1F) == 0 )
          a3 += 4 * (v3 >> 5);
        v11 = 2 * v10;
        if ( (v3 & 0x1F) == 0 )
          *(_WORD *)(v6 + 10) = a3;
        v12 = *(int (__fastcall **)(int, int))(v5 + 160);
        *(_DWORD *)v6 = v11;
        if ( v12(v5, v6) < 0 )
          break;
        result = usleep(v4);
        if ( ++v3 >= *(unsigned __int8 *)(v6 + 13) )
          return result;
      }
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v13,
      0x1000u,
      0,
      "%s failed, reg:%02x, core_id:%d",
      "set_core_enable_base",
      *(unsigned __int16 *)(v6 + 10),
      v3);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_reg_io_base.c",
      147,
      "set_core_enable_base",
      20,
      980,
      100,
      v13);
    return -1;
  }
  return result;
}
