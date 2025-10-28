void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165C4C = (int)stratum_connect;
  dword_165C50 = (int)stratum_disconnect;
  dword_165C54 = (int)stratum_recv_line;
  dword_165C58 = (int)stratum_send_line;
  dword_165C5C = (int)stratum_login_base;
  dword_165C60 = (int)stratum_handle_method_base;
  dword_165C64 = (int)pre_stratum_handle_method_base;
  dword_165C68 = (int)stratum_handle_response_rvn;
  dword_165C6C = (int)sub_435B0;
  dword_165C70 = (int)sub_434D8;
  dword_165C74 = (int)sub_43FE4;
  dword_165C78 = (int)stratum_authorize_rvn;
  dword_165C7C = (int)sub_42E68;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_165C80 = (int)sub_42E50;
  dword_165C84 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165C8C = v0;
  dword_165C88 = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165C4C, 0x54u);
}
