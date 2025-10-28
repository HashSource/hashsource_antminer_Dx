FILE *x11_log_work()
{
  int v0; // r1
  int v1; // r0
  FILE *result; // r0
  FILE *v3; // r5
  size_t v4; // r0
  char v5[260]; // [sp+0h] [bp-104h] BYREF

  memset(v5, 0, 0x100u);
  LOWORD(v0) = 13884;
  LOWORD(v1) = -23336;
  HIWORD(v0) = (unsigned int)&unk_12D608 >> 16;
  HIWORD(v1) = (unsigned int)"al_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
  result = (FILE *)fopen64(v1, v0);
  g_logwork_file = (int)result;
  if ( result )
  {
    v3 = result;
    v4 = strlen(v5);
    fwrite(v5, v4, 1u, v3);
    fwrite("\n", 1u, 1u, (FILE *)g_logwork_file);
    return (FILE *)fflush((FILE *)g_logwork_file);
  }
  return result;
}
