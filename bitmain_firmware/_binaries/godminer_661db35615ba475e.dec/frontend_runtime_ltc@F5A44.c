void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_195E68 = (int)stratum_connect;
  dword_195E6C = (int)stratum_disconnect;
  dword_195E70 = (int)stratum_recv_line;
  dword_195E74 = (int)stratum_send_line;
  dword_195E78 = (int)stratum_login_base;
  dword_195E7C = (int)stratum_handle_method_base;
  dword_195E80 = (int)stratum_handle_response_base;
  dword_195E88 = (int)sub_F4F3C;
  dword_195E8C = (int)sub_F5180;
  dword_195E90 = (int)sub_F51F4;
  dword_195E84 = (int)sub_F53C8;
  dword_195E94 = (int)sub_F5B6C;
  dword_195E98 = (int)stratum_subscribe_base;
  dword_195E9C = (int)stratum_authorize_base;
  dword_195EA0 = (int)sub_FC0A0;
  dword_195EA4 = (int)sub_F9110;
  LODWORD(v0) = target_to_double_diff_ltc;
  HIDWORD(v0) = "H";
  dword_195EA8 = (int)stratum_set_diff_or_target_base;
  dword_195EAC = (int)target_to_diff_ltc;
  dword_195EB0 = (int)diff_to_target_ltc;
  *(_QWORD *)&dword_195EB4 = v0;
  dword_195EBC = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_195E64, 0x60u);
}
