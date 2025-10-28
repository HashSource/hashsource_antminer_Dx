void *__fastcall graph_init_ae(int a1)
{
  void *result; // r0

  memset(&gEdges, 0, 0x540u);
  memset(gSols, 0, sizeof(gSols));
  result = calloc(0x100u, 8u);
  cuckoo[a1] = result;
  return result;
}
