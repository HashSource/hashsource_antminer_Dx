_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = 306200;
  result[1] = 306300;
  result[2] = 306668;
  result[3] = 0;
  result[4] = 1219920;
  result[5] = 60;
  return result;
}
