int __fastcall set_job_start_address(int result)
{
  *(_DWORD *)(dword_1A8A8C + 280) = result;
  return result;
}
