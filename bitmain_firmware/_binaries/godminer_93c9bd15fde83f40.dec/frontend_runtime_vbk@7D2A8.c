void *frontend_runtime_vbk()
{
  void *v0; // r0

  dword_1A4624 = (int)stratum_connect;
  dword_1A4628 = (int)stratum_disconnect;
  dword_1A462C = (int)stratum_recv_line;
  dword_1A4630 = (int)stratum_send_line;
  dword_1A4634 = (int)stratum_login_vbk;
  dword_1A4638 = (int)stratum_handle_method_vbk;
  dword_1A463C = (int)stratum_handle_response_vbk;
  dword_1A4644 = (int)stratum_prepare_upstream_work_vbk;
  dword_1A4648 = (int)nonce_pop_handler_vbk;
  dword_1A464C = (int)check_job_vbk;
  dword_1A4640 = (int)push_work_vbk;
  dword_1A4650 = (int)pre_push_work_vbk;
  dword_1A4654 = (int)stratum_subscribe_vbk;
  dword_1A4658 = (int)stratum_authorize_vbk;
  dword_1A4668 = (int)target_to_diff_vbk;
  dword_1A466C = (int)diff_to_target_vbk;
  dword_1A4670 = (int)target_to_double_diff_vbk;
  dword_1A4674 = (int)"H";
  dword_1A4678 = 60;
  dword_1A465C = 0;
  dword_1A4660 = 0;
  dword_1A4664 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1A4620, 0x60u);
}
