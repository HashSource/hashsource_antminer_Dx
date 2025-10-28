void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_1A474C = (int)stratum_connect;
  dword_1A4750 = (int)stratum_disconnect;
  dword_1A4754 = (int)stratum_recv_line;
  dword_1A4758 = (int)stratum_send_line;
  dword_1A475C = (int)stratum_login_base;
  dword_1A4760 = (int)stratum_handle_method_grin32;
  dword_1A4764 = (int)stratum_handle_response_base;
  dword_1A476C = (int)stratum_prepare_upstream_work_grin32;
  dword_1A4770 = (int)nonce_pop_handler_grin32;
  dword_1A4774 = (int)check_job_grin32;
  dword_1A4768 = (int)push_work_grin32;
  dword_1A4778 = (int)pre_push_work_grin32;
  dword_1A477C = (int)stratum_subscribe_base;
  dword_1A4780 = (int)stratum_authorize_grin32;
  dword_1A4790 = (int)target_to_diff_grin32;
  dword_1A4794 = (int)diff_to_target_grin32;
  dword_1A4798 = (int)target_to_double_diff_grin32;
  dword_1A479C = (int)"g";
  dword_1A47A0 = 60;
  dword_1A4784 = 0;
  dword_1A4788 = 0;
  dword_1A478C = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1A4748, 0x60u);
}
