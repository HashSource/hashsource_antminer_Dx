int __fastcall pcba_set_ticket_mask(int a1, int a2)
{
  _DWORD v3[4]; // [sp+0h] [bp-14h] BYREF

  v3[0] = a2;
  v3[1] = 0;
  v3[3] = 0;
  v3[2] = 1310721;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v3);
  return 1;
}
