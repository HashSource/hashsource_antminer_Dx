void *frontend_runtime_grin29()
{
  void *v0; // r0

  dword_195ED4 = (int)stratum_connect;
  dword_195ED8 = (int)stratum_disconnect;
  dword_195EDC = (int)stratum_recv_line;
  dword_195EE0 = (int)stratum_send_line;
  dword_195EE4 = (int)stratum_login_base;
  dword_195EE8 = (int)stratum_handle_method_grin29;
  dword_195EEC = (int)stratum_handle_response_base;
  dword_195EF4 = (int)stratum_prepare_upstream_work_grin29;
  dword_195EF8 = (int)nonce_pop_handler_grin29;
  dword_195EFC = (int)check_job_grin29;
  dword_195EF0 = (int)push_work_grin29;
  dword_195F00 = (int)pre_push_work_grin29;
  dword_195F04 = (int)stratum_subscribe_base;
  dword_195F08 = (int)stratum_authorize_grin29;
  dword_195F18 = (int)target_to_diff_grin29;
  dword_195F1C = (int)diff_to_target_grin29;
  dword_195F20 = (int)target_to_double_diff_grin29;
  dword_195F24 = (int)"g";
  dword_195F28 = 60;
  dword_195F0C = 0;
  dword_195F10 = 0;
  dword_195F14 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_195ED0, 0x60u);
}
