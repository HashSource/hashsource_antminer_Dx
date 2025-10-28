int __fastcall set_core_enable_base2(int a1, int a2, __useconds_t a3)
{
  unsigned int v6; // r3
  int v7; // r4
  int v8; // r2
  int v10; // [sp+4h] [bp-1020h]
  int v11; // [sp+1Ch] [bp-1008h] BYREF
  char v12[4100]; // [sp+20h] [bp-1004h] BYREF

  puts("set_core_enable_base2");
  v6 = *(unsigned __int8 *)(a2 + 13);
  if ( !*(_BYTE *)(a2 + 13) )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v7 << 27;
    if ( !(v7 << 27) )
    {
      v8 = *(unsigned __int16 *)(a2 + 10) + (v7 >> 5);
      *(_WORD *)(a2 + 10) = v8;
    }
    if ( v6 > 1 )
      *(_BYTE *)(a2 + 12) = v7;
    if ( (*(int (__fastcall **)(int, int, int))(a1 + 148))(a1, a2, v8) < 0 )
      break;
    usleep(a3);
    ++v7;
    v11 = 0;
    (*(void (__fastcall **)(int, int, int, char *, int *, int, int, _DWORD))(a1 + 168))(
      a1,
      a2,
      1,
      v12,
      &v11,
      v10,
      2000,
      0);
    v6 = *(unsigned __int8 *)(a2 + 13);
    if ( (int)v6 <= v7 )
      return 0;
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    v12,
    0x1000u,
    0,
    "%s failed, reg:%02x, core_id:%d",
    "set_core_enable_base2",
    *(unsigned __int16 *)(a2 + 10),
    v7);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_reg_io_base.c",
    64,
    "set_core_enable_base2",
    21,
    999,
    100,
    v12);
  return 3;
}
