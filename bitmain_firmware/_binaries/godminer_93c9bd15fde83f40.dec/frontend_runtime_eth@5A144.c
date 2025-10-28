void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_1A486C = (int)stratum_connect;
  dword_1A4870 = (int)stratum_disconnect;
  dword_1A4874 = (int)stratum_recv_line;
  dword_1A4878 = (int)stratum_send_line;
  dword_1A487C = (int)stratum_login_base;
  dword_1A4880 = (int)stratum_handle_method_eth;
  dword_1A4884 = (int)stratum_handle_response_base;
  dword_1A488C = (int)sub_58F60;
  dword_1A4890 = (int)sub_5BA7C;
  dword_1A4894 = (int)sub_59A50;
  dword_1A4888 = (int)sub_58E4C;
  dword_1A4898 = (int)sub_58CA0;
  dword_1A489C = (int)stratum_subscribe_base;
  dword_1A48A0 = (int)stratum_authorize_eth;
  dword_1A48B0 = (int)target_to_diff_eth;
  dword_1A48B4 = (int)diff_to_target_eth;
  dword_1A48B8 = (int)target_to_double_diff_eth;
  dword_1A48BC = (int)"H";
  dword_1A48C0 = 120;
  dword_1A48A4 = 0;
  dword_1A48A8 = 0;
  dword_1A48AC = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1A4868, 0x60u);
}
