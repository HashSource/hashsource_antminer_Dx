int __fastcall target_to_double_diff_eth(int a1)
{
  __int64 v2; // r2
  unsigned int v3; // r5
  __int64 v4; // r0
  unsigned __int64 v5; // r6
  unsigned int v6; // r4

  sub_16E7DC(_byteswap_uint64(*(_QWORD *)a1));
  v2 = *(_QWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = _byteswap_uint64(__PAIR64__(v2, *(_DWORD *)(a1 + 8)));
  v5 = *(_QWORD *)(a1 + 24);
  v6 = bswap32(HIDWORD(v2));
  sub_16E7DC(v4);
  sub_16E7DC(_byteswap_uint64(v5));
  return sub_16E7DC(__SPAIR64__(v6, bswap32(v3)));
}
