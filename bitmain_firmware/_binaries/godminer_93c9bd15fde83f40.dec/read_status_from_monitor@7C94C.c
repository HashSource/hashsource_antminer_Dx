void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &qword_1A4030[26 * *(_DWORD *)(a2 + 132) + 41], 0xD0u);
  return a1;
}
