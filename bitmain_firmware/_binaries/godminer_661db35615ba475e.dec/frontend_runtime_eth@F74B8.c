void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_196054 = (int)stratum_connect;
  dword_196058 = (int)stratum_disconnect;
  dword_19605C = (int)stratum_recv_line;
  dword_196060 = (int)stratum_send_line;
  dword_196064 = (int)stratum_login_base;
  dword_196068 = (int)stratum_handle_method_eth;
  dword_19606C = (int)stratum_handle_response_base;
  dword_196074 = (int)sub_F5064;
  dword_196078 = (int)sub_F7E78;
  dword_19607C = (int)sub_F54CC;
  dword_196070 = (int)sub_F4E10;
  dword_196080 = (int)sub_F4C78;
  dword_196084 = (int)stratum_subscribe_base;
  dword_196088 = (int)stratum_authorize_eth;
  dword_196098 = (int)target_to_diff_eth;
  dword_19609C = (int)diff_to_target_eth;
  dword_1960A0 = (int)target_to_double_diff_eth;
  dword_1960A4 = (int)"H";
  dword_1960A8 = 120;
  dword_19608C = 0;
  dword_196090 = 0;
  dword_196094 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_196050, 0x60u);
}
