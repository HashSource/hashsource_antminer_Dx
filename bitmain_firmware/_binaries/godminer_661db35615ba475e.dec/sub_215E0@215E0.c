int sub_215E0()
{
  int result; // r0

  if ( !byte_19086C )
  {
    result = deregister_tm_clones();
    byte_19086C = 1;
  }
  return result;
}
