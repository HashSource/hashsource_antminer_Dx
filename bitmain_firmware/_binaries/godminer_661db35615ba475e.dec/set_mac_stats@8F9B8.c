int __fastcall set_mac_stats(int a1)
{
  int *v2; // r5
  __int16 v3; // t1
  void (__fastcall *v4)(int, _DWORD *); // r3
  int v6; // [sp+4h] [bp-18h] BYREF
  _DWORD v7[2]; // [sp+8h] [bp-14h] BYREF
  __int16 v8; // [sp+10h] [bp-Ch]
  __int16 v9; // [sp+12h] [bp-Ah]
  int v10; // [sp+14h] [bp-8h]

  v6 = -1734895979;
  v2 = &v6;
  do
  {
    v3 = *(unsigned __int8 *)v2;
    v2 = (int *)((char *)v2 + 1);
    v8 = 0;
    v10 = 255;
    v9 = v3;
    v7[1] = 0;
    v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
    LOBYTE(v8) = 1;
    v7[0] = 0;
    v4(a1, v7);
    usleep((__useconds_t)"ead_unregister_cancel");
  }
  while ( v2 != v7 );
  return 0;
}
