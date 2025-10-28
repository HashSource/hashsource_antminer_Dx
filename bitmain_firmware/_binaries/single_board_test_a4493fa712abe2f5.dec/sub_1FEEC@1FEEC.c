int sub_1FEEC()
{
  int result; // r0

  if ( !byte_12A414 )
  {
    result = deregister_tm_clones();
    byte_12A414 = 1;
  }
  return result;
}
