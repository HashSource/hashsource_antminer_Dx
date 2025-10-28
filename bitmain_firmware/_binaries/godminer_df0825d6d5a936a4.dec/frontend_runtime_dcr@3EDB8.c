void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165A64 = (int)stratum_connect;
  dword_165A68 = (int)stratum_disconnect;
  dword_165A6C = (int)stratum_recv_line;
  dword_165A70 = (int)stratum_send_line;
  dword_165A74 = (int)stratum_login_base;
  dword_165A78 = (int)stratum_handle_method_base;
  dword_165A7C = (int)pre_stratum_handle_method_base;
  dword_165A80 = (int)stratum_handle_response_base;
  dword_165A84 = (int)sub_3ECB8;
  dword_165A88 = (int)sub_3EC50;
  dword_165A8C = (int)stratum_subscribe_base;
  dword_165A90 = (int)stratum_authorize_base;
  dword_165A94 = (int)sub_3E164;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_165A98 = (int)sub_3DE2C;
  dword_165A9C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165AA4 = v0;
  dword_165AA0 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165A64, 0x54u);
}
