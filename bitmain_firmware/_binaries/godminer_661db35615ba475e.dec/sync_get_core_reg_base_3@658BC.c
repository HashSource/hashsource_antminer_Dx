int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  if ( *(_BYTE *)(a1 + 128) )
    return sub_65418(a1, a2, a3, a4, a5, a6);
  else
    return 4;
}
