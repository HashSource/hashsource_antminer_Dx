void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_195FF4 = (int)stratum_connect;
  dword_195FF8 = (int)stratum_disconnect;
  dword_195FFC = (int)stratum_recv_line;
  dword_196000 = (int)stratum_send_line;
  dword_196004 = (int)stratum_login_base;
  dword_196008 = (int)stratum_handle_method_base;
  dword_19600C = (int)stratum_handle_response_base;
  dword_196014 = (int)sub_C3090;
  dword_196018 = (int)sub_C2BF4;
  dword_19601C = (int)sub_C2B1C;
  dword_196010 = (int)sub_C2D98;
  dword_196020 = (int)sub_C3130;
  dword_196024 = (int)stratum_subscribe_base;
  dword_196028 = (int)stratum_authorize_base;
  dword_19602C = (int)sub_C79CC;
  dword_196030 = (int)sub_C7DFC;
  LODWORD(v0) = target_to_double_diff_ckb;
  HIDWORD(v0) = "H";
  dword_196034 = (int)stratum_set_diff_or_target_base;
  dword_196038 = (int)target_to_diff_ckb;
  dword_19603C = (int)diff_to_target_ckb;
  *(_QWORD *)&dword_196040 = v0;
  dword_196048 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_195FF0, 0x60u);
}
