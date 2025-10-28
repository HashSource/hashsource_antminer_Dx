int __fastcall be256_target_to_double_diff_base(unsigned __int64 *a1)
{
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // r6

  sub_F7704(_byteswap_uint64(*a1));
  v2 = a1[2];
  v3 = a1[3];
  sub_F7704(_byteswap_uint64(a1[1]));
  sub_F7704(_byteswap_uint64(v3));
  return sub_F7704(__SPAIR64__(bswap32(v2), bswap32(HIDWORD(v2))));
}
