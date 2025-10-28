_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  char *v3; // r2
  _DWORD *result; // r0
  char v6[4100]; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 1:
      v1 = runtime_ctrl_ckb_2042();
      goto LABEL_3;
    case 2:
      v1 = runtime_ctrl_kda_2110();
      goto LABEL_3;
    case 3:
      v1 = runtime_ctrl_hns_2130();
      goto LABEL_3;
    case 4:
      v1 = runtime_ctrl_dcr_1727();
      goto LABEL_3;
    case 5:
      v1 = runtime_ctrl_dash_1766();
      goto LABEL_3;
    case 6:
      v1 = runtime_ctrl_eth_2280();
      goto LABEL_3;
    case 7:
      v1 = runtime_ctrl_ltc_1489();
      goto LABEL_3;
    case 8:
      v1 = runtime_ctrl_zec_1746();
      goto LABEL_3;
    case 9:
      v1 = runtime_ctrl_rvn_2020();
LABEL_3:
      if ( v1 )
      {
        pthread_mutex_lock(&stru_176C98);
        v2 = dword_176CB0;
        v3 = &stru_176C98.__size[4 * dword_176CB0++];
        *((_DWORD *)v3 + 7) = v1;
        v1[53] = v2;
        pthread_mutex_unlock(&stru_176C98);
      }
      result = v1;
      break;
    default:
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "ALGO %d does not define backend_runtime", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/backend_interface.c",
        154,
        "runtime_ctrl",
        12,
        50,
        100,
        v6);
      result = 0;
      break;
  }
  return result;
}
