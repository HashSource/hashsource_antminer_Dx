int frontend_runtime_instance()
{
  int v0; // r4
  int v2; // r3
  int v3; // r1
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = dword_174E68;
  if ( !dword_174E68 )
  {
    V_LOCK();
    LOWORD(v2) = 19676;
    HIWORD(v2) = (unsigned int)"oot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
    logfmt_raw(v4, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 19516;
    HIWORD(v3) = (unsigned int)"tum_handle_response_kas" >> 16;
    zlog(g_zc, v3, 156, "frontend_runtime_instance", 25, 74, 100, v4);
  }
  return v0;
}
