int __fastcall sub_4FAFC(int result)
{
  if ( result != -64 )
  {
    if ( result < 0 )
    {
      return 20;
    }
    else if ( result >= 35 )
    {
      return 60;
    }
    else
    {
      return 40;
    }
  }
  return result;
}
