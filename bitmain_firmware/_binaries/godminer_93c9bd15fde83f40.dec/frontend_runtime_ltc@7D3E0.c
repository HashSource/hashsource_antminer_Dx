void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_1A4684 = (int)stratum_connect;
  dword_1A4688 = (int)stratum_disconnect;
  dword_1A468C = (int)stratum_recv_line;
  dword_1A4690 = (int)stratum_send_line;
  dword_1A4694 = (int)stratum_login_base;
  dword_1A4698 = (int)stratum_handle_method_base;
  dword_1A469C = (int)stratum_handle_response_base;
  dword_1A46A4 = (int)sub_7B9A0;
  dword_1A46A8 = (int)sub_7B050;
  dword_1A46AC = (int)sub_7AE84;
  dword_1A46A0 = (int)sub_7BBF4;
  dword_1A46B0 = (int)sub_7D50C;
  dword_1A46B4 = (int)stratum_subscribe_base;
  dword_1A46B8 = (int)stratum_authorize_base;
  dword_1A46BC = (int)sub_86DE0;
  dword_1A46C0 = (int)sub_85FE8;
  dword_1A46C4 = (int)stratum_set_diff_or_target_base;
  dword_1A46C8 = (int)target_to_diff_ltc;
  dword_1A46CC = (int)diff_to_target_ltc;
  dword_1A46D0 = (int)target_to_double_diff_ltc;
  dword_1A46D4 = (int)"H";
  dword_1A46D8 = 70;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1A4680, 0x60u);
}
