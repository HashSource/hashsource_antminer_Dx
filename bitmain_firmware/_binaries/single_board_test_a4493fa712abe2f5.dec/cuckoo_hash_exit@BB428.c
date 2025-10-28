void __fastcall cuckoo_hash_exit(int a1)
{
  j_free((void *)cuckoo[a1]);
}
