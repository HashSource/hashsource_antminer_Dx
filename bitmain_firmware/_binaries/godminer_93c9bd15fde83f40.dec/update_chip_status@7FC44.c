_DWORD *__fastcall update_chip_status(int a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v6; // r7
  int v7; // r1

  v3 = *(_DWORD *)(a1 + 132);
  v6 = (_DWORD *)(a3 + 48);
  if ( !*((_BYTE *)&qword_1A4030[299] + v3 + 4) )
  {
    memset(&dword_1A4A04[256 * v3], *((unsigned __int8 *)&qword_1A4030[299] + v3 + 4), 0x400u);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 272);
    update_str_and_flag(a1, a2, v6);
    v7 = *(_DWORD *)(a1 + 132);
    *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 236);
    *((_BYTE *)&qword_1A4030[299] + v7 + 4) = 1;
    return v6;
  }
  if ( !*(_BYTE *)(a1 + 142) )
    return v6;
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 272);
  chip_speed_test((_DWORD *)a1, &dword_1A4A04[256 * v3]);
  if ( (*(int (__fastcall **)(int, _DWORD *))(a1 + 84))(a1, &dword_1A4A04[256 * *(_DWORD *)(a1 + 132)]) )
    *(_DWORD *)(a3 + 48) |= 8u;
  update_str_and_flag(a1, a2, v6);
  if ( strcmp(*(const char **)(a1 + 184), "dash") )
    return v6;
  (*(void (__fastcall **)(int))(a1 + 124))(a1);
  return v6;
}
