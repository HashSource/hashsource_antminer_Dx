int __fastcall power_off_hal(int a1)
{
  unsigned __int8 v1; // r2
  char v3; // [sp+3h] [bp-19h] BYREF
  __int16 v4; // [sp+4h] [bp-18h] BYREF
  _DWORD v5[2]; // [sp+8h] [bp-14h] BYREF
  int v6; // [sp+10h] [bp-Ch]
  char *v7; // [sp+14h] [bp-8h]

  v1 = g_chain_info[8 * a1];
  BYTE2(v6) = 2;
  v7 = &v3;
  HIBYTE(v6) = v1;
  LOWORD(v6) = 277;
  v5[0] = 0;
  v3 = 0;
  *(_DWORD *)((char *)v5 + 3) = 0;
  v4 = 255;
  sub_D5328(v6, (int)&v3, v5, (unsigned __int8 *)&v4);
  usleep(0x493E0u);
  return 0;
}
