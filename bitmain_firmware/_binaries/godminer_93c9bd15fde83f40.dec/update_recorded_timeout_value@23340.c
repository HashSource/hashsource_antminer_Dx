int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  unsigned __int64 v2; // r2
  int result; // r0
  int v4; // r1

  v2 = max_timeout_value;
  result = qword_1A3D90[0];
  if ( (unsigned __int64)max_timeout_value <= qword_1A3D90[0] )
  {
    v4 = 0;
  }
  else
  {
    v2 = qword_1A3D90[0];
    v4 = 1;
  }
  if ( v2 > qword_1A3D98 )
  {
    v2 = qword_1A3D98;
    v4 = 2;
  }
  if ( v2 > qword_1A3DA0 )
  {
    v2 = qword_1A3DA0;
    v4 = 3;
  }
  if ( v2 > qword_1A3DA8 )
  {
    v2 = qword_1A3DA8;
    v4 = 4;
  }
  if ( v2 > qword_1A3DB0 )
  {
    v2 = qword_1A3DB0;
    v4 = 5;
  }
  if ( v2 > qword_1A3DB8 )
  {
    v2 = qword_1A3DB8;
    v4 = 6;
  }
  if ( v2 > qword_1A3DC0 )
  {
    v2 = qword_1A3DC0;
    v4 = 7;
  }
  if ( v2 > qword_1A3DC8 )
  {
    v2 = qword_1A3DC8;
    v4 = 8;
  }
  if ( qword_1A3DD0 < v2 )
  {
    v2 = qword_1A3DD0;
    v4 = 9;
  }
  if ( a1 > v2 )
    qword_1A3D90[v4 - 1] = a1;
  return result;
}
