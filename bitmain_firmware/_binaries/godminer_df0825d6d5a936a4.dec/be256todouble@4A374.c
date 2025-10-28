int __fastcall be256todouble(unsigned __int64 *a1)
{
  sub_1226D4(_byteswap_uint64(*a1));
  sub_1226D4(_byteswap_uint64(a1[1]));
  sub_1226D4(_byteswap_uint64(a1[2]));
  return sub_1226D4(_byteswap_uint64(a1[3]));
}
