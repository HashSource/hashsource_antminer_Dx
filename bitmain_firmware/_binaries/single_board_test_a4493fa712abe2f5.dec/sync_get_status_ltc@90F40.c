int __fastcall sync_get_status_ltc(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  if ( *(_BYTE *)(a1 + 128) )
    return sub_90C7C(a1, a2, a3, a4, a5);
  else
    return 4;
}
