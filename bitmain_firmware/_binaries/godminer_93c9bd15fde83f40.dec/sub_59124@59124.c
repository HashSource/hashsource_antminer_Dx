int __fastcall sub_59124(int a1, int a2, int a3)
{
  int v6; // r3

  if ( *(_DWORD *)(a1 + 824) && strcmp((const char *)(a3 + 16), *(const char **)(a1 + 824)) )
    return 1;
  **(_DWORD **)(a2 + 392) = *(_DWORD *)(a3 + 48);
  v6 = *(_DWORD *)(a3 + 58);
  *(_DWORD *)(a2 + 508) = *(_DWORD *)(a3 + 54);
  *(_DWORD *)(a2 + 512) = v6;
  *(_QWORD *)(a2 + 488) = *(_QWORD *)(a3 + 72);
  return 0;
}
