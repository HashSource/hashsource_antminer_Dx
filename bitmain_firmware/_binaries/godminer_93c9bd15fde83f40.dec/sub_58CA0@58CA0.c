int __fastcall sub_58CA0(_QWORD *a1, int *a2)
{
  int v2; // r2
  bool v3; // zf
  int v4; // r2

  v2 = dword_1A3FEC;
  v3 = (dword_1A3FEC & 0xFFFFFFF) == 0xFFFFFFF;
  *a1 = *a2;
  if ( v3 )
    v4 = 0;
  else
    v4 = v2 + 1;
  dword_1A3FEC = v4;
  return 0;
}
