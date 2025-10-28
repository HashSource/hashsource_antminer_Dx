_DWORD *__fastcall update_chip_status(int a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v6; // r6
  int v7; // r1

  v3 = *(_DWORD *)(a1 + 120);
  if ( !*((_BYTE *)&stru_190E30 + v3 + 3652) )
  {
    v6 = (_DWORD *)(a3 + 48);
    memset(&dword_191CF0[256 * v3], *((unsigned __int8 *)&stru_190E30 + v3 + 3652), 0x400u);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 256);
    update_str_and_flag(a1, a2, v6);
    v7 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 220);
    *((_BYTE *)&stru_190E30 + v7 + 3652) = 1;
    return v6;
  }
  v6 = (_DWORD *)(a3 + 48);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 256);
  chip_speed_test((_DWORD *)a1, &dword_191CF0[256 * v3]);
  if ( (*(int (__fastcall **)(int, _DWORD *))(a1 + 72))(a1, &dword_191CF0[256 * *(_DWORD *)(a1 + 120)]) )
    *v6 |= 8u;
  update_str_and_flag(a1, a2, v6);
  if ( strcmp(*(const char **)(a1 + 172), "dash") )
    return v6;
  (*(void (__fastcall **)(int))(a1 + 112))(a1);
  return v6;
}
