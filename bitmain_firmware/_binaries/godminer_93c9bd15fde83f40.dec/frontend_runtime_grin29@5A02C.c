void *frontend_runtime_grin29()
{
  void *v0; // r0

  dword_1A46EC = (int)stratum_connect;
  dword_1A46F0 = (int)stratum_disconnect;
  dword_1A46F4 = (int)stratum_recv_line;
  dword_1A46F8 = (int)stratum_send_line;
  dword_1A46FC = (int)stratum_login_base;
  dword_1A4700 = (int)stratum_handle_method_grin29;
  dword_1A4704 = (int)stratum_handle_response_base;
  dword_1A470C = (int)stratum_prepare_upstream_work_grin29;
  dword_1A4710 = (int)nonce_pop_handler_grin29;
  dword_1A4714 = (int)check_job_grin29;
  dword_1A4708 = (int)push_work_grin29;
  dword_1A4718 = (int)pre_push_work_grin29;
  dword_1A471C = (int)stratum_subscribe_base;
  dword_1A4720 = (int)stratum_authorize_grin29;
  dword_1A4730 = (int)target_to_diff_grin29;
  dword_1A4734 = (int)diff_to_target_grin29;
  dword_1A4738 = (int)target_to_double_diff_grin29;
  dword_1A473C = (int)"g";
  dword_1A4740 = 60;
  dword_1A4724 = 0;
  dword_1A4728 = 0;
  dword_1A472C = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1A46E8, 0x60u);
}
