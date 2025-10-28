void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165BF8 = (int)stratum_connect;
  dword_165BFC = (int)stratum_disconnect;
  dword_165C00 = (int)stratum_recv_line;
  dword_165C04 = (int)stratum_send_line;
  dword_165C08 = (int)stratum_login_base;
  dword_165C0C = (int)stratum_handle_method_base;
  dword_165C10 = (int)pre_stratum_handle_method_base;
  dword_165C14 = (int)stratum_handle_response_base;
  dword_165C18 = (int)sub_42C8C;
  dword_165C1C = (int)sub_42500;
  dword_165C20 = (int)stratum_subscribe_base;
  dword_165C24 = (int)stratum_authorize_base;
  dword_165C28 = (int)sub_42538;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_165C2C = (int)sub_4224C;
  dword_165C30 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165C38 = v0;
  dword_165C34 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165BF8, 0x54u);
}
