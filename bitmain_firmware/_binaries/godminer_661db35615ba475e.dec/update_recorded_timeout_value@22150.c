int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  unsigned __int64 v2; // r2
  int result; // r0
  int v4; // r1

  v2 = max_timeout_value;
  result = qword_190A80[0];
  if ( (unsigned __int64)max_timeout_value <= qword_190A80[0] )
  {
    v4 = 0;
  }
  else
  {
    v2 = qword_190A80[0];
    v4 = 1;
  }
  if ( v2 > qword_190A88 )
  {
    v2 = qword_190A88;
    v4 = 2;
  }
  if ( v2 > qword_190A90 )
  {
    v2 = qword_190A90;
    v4 = 3;
  }
  if ( v2 > qword_190A98 )
  {
    v2 = qword_190A98;
    v4 = 4;
  }
  if ( v2 > qword_190AA0 )
  {
    v2 = qword_190AA0;
    v4 = 5;
  }
  if ( v2 > qword_190AA8 )
  {
    v2 = qword_190AA8;
    v4 = 6;
  }
  if ( v2 > qword_190AB0 )
  {
    v2 = qword_190AB0;
    v4 = 7;
  }
  if ( v2 > qword_190AB8 )
  {
    v2 = qword_190AB8;
    v4 = 8;
  }
  if ( qword_190AC0 < v2 )
  {
    v2 = qword_190AC0;
    v4 = 9;
  }
  if ( a1 > v2 )
    qword_190A80[v4 - 1] = a1;
  return result;
}
