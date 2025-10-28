int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  if ( *(_DWORD *)(a1 + 120) )
    return a3 + 32;
  else
    return sub_66F50(a1, a2, a3);
}
