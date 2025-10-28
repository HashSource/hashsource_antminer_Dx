int __fastcall stratum_subscribe_base(int a1, int a2)
{
  if ( *(_BYTE *)(a2 + 1024) )
    return *(unsigned __int8 *)(a2 + 1024);
  else
    return sub_5CDDC(a1, (_DWORD *)a2);
}
