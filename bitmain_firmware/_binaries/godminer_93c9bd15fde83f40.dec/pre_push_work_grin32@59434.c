int __fastcall pre_push_work_grin32(_QWORD *a1, int *a2, int a3)
{
  __int64 v5; // [sp+0h] [bp-10h] BYREF
  struct timeval tv; // [sp+8h] [bp-8h] BYREF

  *a1 = *a2;
  gettimeofday(&tv, 0);
  v5 = tv.tv_usec + (int)&loc_F4240 * tv.tv_sec;
  if ( a3 )
    dword_1A3FF8 = rand_r((unsigned int *)&v5);
  else
    ++dword_1A3FF8;
  return 0;
}
