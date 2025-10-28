void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165BA4 = (int)stratum_connect;
  dword_165BA8 = (int)stratum_disconnect;
  dword_165BAC = (int)stratum_recv_line;
  dword_165BB0 = (int)stratum_send_line;
  dword_165BB4 = (int)stratum_login_base;
  dword_165BB8 = (int)stratum_handle_method_base;
  dword_165BBC = (int)pre_stratum_handle_method_base;
  dword_165BC0 = (int)stratum_handle_response_base;
  dword_165BC4 = (int)sub_420B8;
  dword_165BC8 = (int)sub_41B24;
  dword_165BCC = (int)stratum_subscribe_base;
  dword_165BD0 = (int)stratum_authorize_base;
  dword_165BD4 = (int)sub_41DE8;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_165BD8 = (int)sub_41B58;
  dword_165BDC = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165BE4 = v0;
  dword_165BE0 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165BA4, 0x54u);
}
