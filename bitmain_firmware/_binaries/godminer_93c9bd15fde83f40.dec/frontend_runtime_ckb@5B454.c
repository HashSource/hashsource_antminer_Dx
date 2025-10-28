void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1A480C = (int)stratum_connect;
  dword_1A4810 = (int)stratum_disconnect;
  dword_1A4814 = (int)stratum_recv_line;
  dword_1A4818 = (int)stratum_send_line;
  dword_1A481C = (int)stratum_login_base;
  dword_1A4820 = (int)stratum_handle_method_base;
  dword_1A4824 = (int)stratum_handle_response_base;
  dword_1A482C = (int)sub_5930C;
  dword_1A4830 = (int)sub_591C4;
  dword_1A4834 = (int)check_job_grin32_0;
  dword_1A4828 = (int)sub_59D54;
  dword_1A4838 = (int)sub_5954C;
  dword_1A483C = (int)stratum_subscribe_base;
  dword_1A4840 = (int)stratum_authorize_base;
  dword_1A4844 = (int)sub_5F9EC;
  dword_1A4848 = (int)sub_5FE24;
  LODWORD(v0) = target_to_double_diff_ckb;
  HIDWORD(v0) = "H";
  dword_1A484C = (int)stratum_set_diff_or_target_base;
  dword_1A4850 = (int)target_to_diff_ckb;
  dword_1A4854 = (int)diff_to_target_ckb;
  *(_QWORD *)&dword_1A4858 = v0;
  dword_1A4860 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_1A4808, 0x60u);
}
