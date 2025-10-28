int __fastcall div4_seq(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // r10
  int v10; // r3
  int v11; // r8
  int v12; // r6
  int v13; // r9
  int v14; // r11
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  int v19; // [sp+10h] [bp-8h]
  int v20; // [sp+14h] [bp-4h]
  int v21; // [sp+18h] [bp+0h] BYREF
  int v22; // [sp+1Ch] [bp+4h]
  int v23; // [sp+20h] [bp+8h]
  int v24; // [sp+24h] [bp+Ch]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v21, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div4_seq", a2, a3);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div4_seq",
    8,
    9827,
    60,
    &v21);
  if ( a4 == 8 )
  {
    v14 = 61578;
    v20 = 61582;
    v13 = 61581;
    v12 = 61580;
    v19 = 61579;
    v11 = 61441;
  }
  else
  {
    v8 = (_WORD)a4 << 12;
    v9 = v8 | 0x8E;
    v10 = v8 | 0x8B;
    v11 = v8 | 1;
    v12 = v8 | 0x8C;
    v13 = v8 | 0x8D;
    v14 = v8 | 0x8A;
    v19 = v10;
    v20 = v9;
  }
  sub_BF774(a1, a3, v11, 0xFFFFu);
  sub_BF774(a1, a3, v19, 0xF0F00000);
  sub_BF774(a1, a3, v11, 0xFFFF0000);
  sub_BF774(a1, a3, v12, 0xF0F0u);
  sub_BF774(a1, a3, v11, (unsigned int)&loc_FFFFC + 3);
  sub_BF774(a1, a3, v12, 0xF000000u);
  sub_BF774(a1, a3, v11, 0xFFF00000);
  sub_BF774(a1, a3, v13, (unsigned int)&loc_F0F0C + 3);
  sub_BF774(a1, a3, v11, 0xFFFFFFu);
  sub_BF774(a1, a3, v13, 0xF0000000);
  sub_BF774(a1, a3, v11, 0xFF000000);
  sub_BF774(a1, a3, v20, 0xF0F0F0u);
  sub_BF774(a1, a3, v11, 0xFFFu);
  sub_BF774(a1, a3, v14, 0xF0F0000u);
  sub_BF774(a1, a3, v11, 0xFFFFF000);
  sub_BF774(a1, a3, v19, 0xF0Fu);
  sub_BF774(a1, a3, v11, 0);
  v23 = 0;
  v24 = 0;
  v22 = 0;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v21 = 0;
  LOBYTE(v24) = a3;
  LOBYTE(v23) = 1;
  HIWORD(v23) = 144;
  v15(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  v23 = 1;
  v22 = 0;
  v21 = -2147450879;
  v24 = (unsigned __int8)a3;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v23) = 145;
  v16(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  v23 = 0;
  v24 = 0;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v23) = 144;
  LOBYTE(v23) = 1;
  v22 = 0;
  LOBYTE(v24) = a3;
  v21 = 0;
  v17(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  v23 = 9502721;
  v22 = 0;
  v24 = (unsigned __int8)a3;
  v21 = -2147442687;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
