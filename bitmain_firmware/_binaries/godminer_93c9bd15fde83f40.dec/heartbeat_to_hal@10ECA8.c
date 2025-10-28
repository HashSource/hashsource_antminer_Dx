int __fastcall heartbeat_to_hal(int a1)
{
  unsigned __int8 v1; // r3
  int v3; // [sp+0h] [bp-1Ch] BYREF
  __int16 v4; // [sp+4h] [bp-18h]
  int v5; // [sp+8h] [bp-14h] BYREF
  __int16 v6; // [sp+Ch] [bp-10h]
  int v7; // [sp+10h] [bp-Ch]
  int v8; // [sp+14h] [bp-8h]

  v1 = g_chain_info[8 * a1];
  BYTE2(v7) = 6;
  LOWORD(v7) = 22;
  HIBYTE(v7) = v1;
  v8 = 0;
  v5 = 255;
  v3 = 0;
  v4 = 0;
  v6 = 0;
  return sub_C3A70(v7, 0, (int)&v3, &v5);
}
