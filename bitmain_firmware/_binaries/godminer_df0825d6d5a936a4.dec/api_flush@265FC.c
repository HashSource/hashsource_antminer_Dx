int *api_flush()
{
  int v0; // r1

  local_work = 0;
  last_getwork = 0;
  new_blocks = 0;
  LOWORD(v0) = 19904;
  total_go = 0;
  HIWORD(v0) = (unsigned int)&unk_163EA0 >> 16;
  total_ro = 0;
  *(_DWORD *)(v0 + 0x20) = 0;
  *(_QWORD *)&total_stale = 0;
  *(_QWORD *)(v0 + 0x30) = 0;
  *(_QWORD *)(v0 + 0x28) = 0;
  total_accepted = 0;
  *(_QWORD *)&total_discarded = 0;
  *(_QWORD *)&total_rejected = 0;
  *(_QWORD *)&total_getworks = 0;
  total_diff1 = 0;
  total_diff_accepted = 0.0;
  total_diff_rejected = 0.0;
  total_diff_stale = 0.0;
  return (int *)&total_diff1;
}
