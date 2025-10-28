int __fastcall pic1704_read_iic(char a1, char a2, _BYTE *a3)
{
  int result; // r0
  unsigned int v5; // r3
  _BYTE v6[4]; // [sp+4h] [bp-20h] BYREF
  _BYTE v7[7]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v8[2]; // [sp+10h] [bp-14h] BYREF
  int v9; // [sp+18h] [bp-Ch]
  _BYTE *v10; // [sp+1Ch] [bp-8h]

  v6[0] = a2;
  v10 = v6;
  LOWORD(v9) = 572;
  BYTE2(v9) = 7;
  HIBYTE(v9) = a1;
  *(_DWORD *)v7 = 255;
  v8[0] = 0;
  *(_DWORD *)&v7[3] = 0;
  *(_DWORD *)((char *)v8 + 3) = 0;
  v6[1] = 2;
  result = sub_C3D58(v9, (int)v6, v8, v7);
  if ( result )
  {
    result = v7[2];
    v5 = v7[0] + v7[1] + v7[2] + v7[3] + v7[4];
    if ( v7[5] == v5 >> 8 && v7[6] == (unsigned __int8)v5 && v7[2] == 1 )
      *a3 = v7[3];
    else
      return 0;
  }
  return result;
}
