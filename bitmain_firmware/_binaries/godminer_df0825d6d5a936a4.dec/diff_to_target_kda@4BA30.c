int __fastcall diff_to_target_kda(_DWORD *a1)
{
  unsigned __int64 *v2; // r2
  unsigned __int64 *v3; // r3
  char v4; // r1
  int v5; // r2
  int v6; // r3
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  unsigned __int64 v11; // [sp+0h] [bp-80h] BYREF
  int v12; // [sp+8h] [bp-78h]
  int v13; // [sp+Ch] [bp-74h]
  int v14; // [sp+10h] [bp-70h]
  int v15; // [sp+14h] [bp-6Ch]
  int v16; // [sp+18h] [bp-68h]
  int v17; // [sp+1Ch] [bp-64h] BYREF

  diff_to_le256_target_base(&v11);
  v2 = &v11;
  v3 = (unsigned __int64 *)((char *)&v17 + 3);
  do
  {
    v4 = *(_BYTE *)v2;
    *(_BYTE *)v2 = *(_BYTE *)v3;
    v2 = (unsigned __int64 *)((char *)v2 + 1);
    *(_BYTE *)v3 = v4;
    v3 = (unsigned __int64 *)((char *)v3 - 1);
  }
  while ( v2 < v3 );
  v5 = v12;
  v6 = v13;
  *(_QWORD *)a1 = v11;
  a1[2] = v5;
  a1[3] = v6;
  result = v14;
  v8 = v15;
  v9 = v16;
  v10 = v17;
  a1[4] = v14;
  a1[5] = v8;
  a1[6] = v9;
  a1[7] = v10;
  return result;
}
