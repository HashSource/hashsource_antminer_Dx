void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_195F34 = (int)stratum_connect;
  dword_195F38 = (int)stratum_disconnect;
  dword_195F3C = (int)stratum_recv_line;
  dword_195F40 = (int)stratum_send_line;
  dword_195F44 = (int)stratum_login_base;
  dword_195F48 = (int)stratum_handle_method_grin32;
  dword_195F4C = (int)stratum_handle_response_base;
  dword_195F54 = (int)stratum_prepare_upstream_work_grin32;
  dword_195F58 = (int)nonce_pop_handler_grin32;
  dword_195F5C = (int)check_job_grin32;
  dword_195F50 = (int)push_work_grin32;
  dword_195F60 = (int)pre_push_work_grin32;
  dword_195F64 = (int)stratum_subscribe_base;
  dword_195F68 = (int)stratum_authorize_grin32;
  dword_195F78 = (int)target_to_diff_grin32;
  dword_195F7C = (int)diff_to_target_grin32;
  dword_195F80 = (int)target_to_double_diff_grin32;
  dword_195F84 = (int)"g";
  dword_195F88 = 60;
  dword_195F6C = 0;
  dword_195F70 = 0;
  dword_195F74 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_195F30, 0x60u);
}
