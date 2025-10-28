void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1A48CC = (int)stratum_connect;
  dword_1A48D0 = (int)stratum_disconnect;
  dword_1A48D4 = (int)stratum_recv_line;
  dword_1A48D8 = (int)stratum_send_line;
  dword_1A48DC = (int)stratum_login_base;
  dword_1A48E0 = (int)stratum_handle_method_base;
  dword_1A48E4 = (int)stratum_handle_response_base;
  dword_1A48EC = (int)sub_59218;
  dword_1A48F0 = (int)sub_59124;
  dword_1A48F4 = (int)sub_5918C;
  dword_1A48E8 = (int)sub_59C04;
  dword_1A48F8 = (int)sub_5A4AC;
  dword_1A48FC = (int)stratum_subscribe_base;
  dword_1A4900 = (int)stratum_authorize_base;
  dword_1A4904 = (int)sub_6446C;
  dword_1A4908 = (int)sub_5F674;
  LODWORD(v0) = target_to_double_diff_dash;
  HIDWORD(v0) = "H";
  dword_1A490C = (int)stratum_set_diff_or_target_base;
  dword_1A4910 = (int)target_to_diff_dash;
  dword_1A4914 = (int)diff_to_target_dash;
  *(_QWORD *)&dword_1A4918 = v0;
  dword_1A4920 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_1A48C8, 0x60u);
}
