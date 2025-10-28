void *frontend_runtime_vbk()
{
  void *v0; // r0

  dword_195E08 = (int)stratum_connect;
  dword_195E0C = (int)stratum_disconnect;
  dword_195E10 = (int)stratum_recv_line;
  dword_195E14 = (int)stratum_send_line;
  dword_195E18 = (int)stratum_login_vbk;
  dword_195E1C = (int)stratum_handle_method_vbk;
  dword_195E20 = (int)stratum_handle_response_vbk;
  dword_195E28 = (int)stratum_prepare_upstream_work_vbk;
  dword_195E2C = (int)nonce_pop_handler_vbk;
  dword_195E30 = (int)check_job_vbk;
  dword_195E24 = (int)push_work_vbk;
  dword_195E34 = (int)pre_push_work_vbk;
  dword_195E38 = (int)stratum_subscribe_vbk;
  dword_195E3C = (int)stratum_authorize_vbk;
  dword_195E4C = (int)target_to_diff_vbk;
  dword_195E50 = (int)diff_to_target_vbk;
  dword_195E54 = (int)target_to_double_diff_vbk;
  dword_195E58 = (int)"H";
  dword_195E5C = 60;
  dword_195E40 = 0;
  dword_195E44 = 0;
  dword_195E48 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, algn_195E04, 0x60u);
}
