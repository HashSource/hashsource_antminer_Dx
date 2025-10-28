void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, (char *)&stru_190E30 + 208 * *(_DWORD *)(a2 + 120) + 1384, 0xD0u);
  return a1;
}
