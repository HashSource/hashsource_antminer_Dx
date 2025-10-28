char *__fastcall set_dev_invalid_hal(int a1)
{
  int v1; // r1
  char *result; // r0

  v1 = total_chain;
  result = (char *)&g_chain_info[8 * a1];
  result[4] = 0;
  total_chain = v1 - 1;
  return result;
}
