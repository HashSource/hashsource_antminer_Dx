int __fastcall check_job_ae(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 384) || !*(_DWORD *)(a2 + 824) )
    return 2;
  if ( !memcmp((const void *)(a1 + 8), (const void *)(a2 + 448), 0x20u) )
    return 0;
  return 2;
}
