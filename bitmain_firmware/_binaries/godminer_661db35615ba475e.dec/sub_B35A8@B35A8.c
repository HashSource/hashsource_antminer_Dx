unsigned int __fastcall sub_B35A8(int a1, int a2, unsigned int a3)
{
  unsigned int result; // r0
  int v5; // r4
  int v6; // lr
  unsigned int v7; // r6
  int v8; // r0
  char *v9; // r3
  int v10; // r7
  unsigned int v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r4
  int v19; // r4
  int v20; // r4
  int v21; // r3
  unsigned int v22; // r3
  int v23; // r12
  int v24; // r2
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v26[4100]; // [sp+810h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 0:
      v5 = 528;
      v6 = 532;
      goto LABEL_5;
    case 1:
      v5 = 536;
      v6 = 540;
      goto LABEL_5;
    case 2:
      v5 = 544;
      v6 = 548;
      goto LABEL_5;
    case 3:
      v5 = 552;
      v6 = 556;
      goto LABEL_5;
    case 4:
      v5 = 560;
      v6 = 564;
      goto LABEL_5;
    case 5:
      v5 = 568;
      v6 = 572;
      goto LABEL_5;
    case 6:
      v5 = 576;
      v6 = 580;
      goto LABEL_5;
    case 7:
      v5 = 584;
      v6 = 588;
      goto LABEL_5;
    case 8:
      v5 = 592;
      v6 = 596;
      goto LABEL_5;
    case 9:
      v5 = 600;
      v6 = 604;
      goto LABEL_5;
    case 10:
      v5 = 656;
      v6 = 660;
      goto LABEL_5;
    case 11:
      v5 = 664;
      v6 = 668;
      goto LABEL_5;
    case 12:
      v5 = 672;
      v6 = 676;
      goto LABEL_5;
    case 13:
      v5 = 680;
      v6 = 684;
LABEL_5:
      v7 = a3 >> 2;
      v8 = dword_197C8C;
      *(_DWORD *)(dword_197C8C + v5) = a3 & 0x3FF | 0x80000000;
      if ( a3 >> 2 )
      {
        if ( v7 <= 8 )
        {
          v11 = 0;
        }
        else
        {
          v9 = (char *)(a2 + 43);
          v10 = 0;
          v11 = ((v7 - 9) & 0xFFFFFFF8) + 8;
          do
          {
            v12 = *(_DWORD *)(v8 + v6);
            v10 += 8;
            __pld(v9);
            v9 += 32;
            *(v9 - 72) = v12;
            *(v9 - 75) = HIBYTE(v12);
            *(v9 - 74) = BYTE2(v12);
            *(v9 - 73) = BYTE1(v12);
            v13 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 68) = v13;
            *(v9 - 71) = HIBYTE(v13);
            *(v9 - 70) = BYTE2(v13);
            *(v9 - 69) = BYTE1(v13);
            v14 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 64) = v14;
            *(v9 - 67) = HIBYTE(v14);
            *(v9 - 66) = BYTE2(v14);
            *(v9 - 65) = BYTE1(v14);
            v15 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 60) = v15;
            *(v9 - 63) = HIBYTE(v15);
            *(v9 - 62) = BYTE2(v15);
            *(v9 - 61) = BYTE1(v15);
            v16 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 56) = v16;
            *(v9 - 59) = HIBYTE(v16);
            *(v9 - 58) = BYTE2(v16);
            *(v9 - 57) = BYTE1(v16);
            v17 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 55) = HIBYTE(v17);
            *(v9 - 54) = BYTE2(v17);
            *(v9 - 52) = v17;
            *(v9 - 53) = BYTE1(v17);
            v18 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 48) = v18;
            *(v9 - 51) = HIBYTE(v18);
            *(v9 - 50) = BYTE2(v18);
            *(v9 - 49) = BYTE1(v18);
            v19 = *(_DWORD *)(dword_197C8C + v6);
            *(v9 - 44) = v19;
            *(v9 - 47) = HIBYTE(v19);
            *(v9 - 46) = BYTE2(v19);
            *(v9 - 45) = BYTE1(v19);
            v8 = dword_197C8C;
          }
          while ( v10 != v11 );
        }
        v20 = a2 + 4 * v11;
        while ( 1 )
        {
          v21 = *(_DWORD *)(v8 + v6);
          ++v11;
          v20 += 4;
          *(_BYTE *)(v20 - 1) = v21;
          *(_BYTE *)(v20 - 4) = HIBYTE(v21);
          *(_BYTE *)(v20 - 3) = BYTE2(v21);
          *(_BYTE *)(v20 - 2) = BYTE1(v21);
          if ( v7 <= v11 )
            break;
          v8 = dword_197C8C;
        }
      }
      v22 = a3 & 3;
      result = a3 & 0xFFFFFFFC;
      if ( (a3 & 3) != 0 )
      {
        v23 = a2 + 4 * v7;
        v24 = *(_DWORD *)(dword_197C8C + v6);
        if ( v22 == 2 )
        {
          *(_BYTE *)(a2 + 4 * v7) = HIBYTE(v24);
          *(_BYTE *)(v23 + 1) = BYTE2(v24);
          result += 2;
        }
        else
        {
          *(_BYTE *)(a2 + 4 * v7) = HIBYTE(v24);
          if ( v22 == 3 )
          {
            *(_BYTE *)(v23 + 1) = BYTE2(v24);
            *(_BYTE *)(v23 + 2) = BYTE1(v24);
            result += 3;
          }
          else
          {
            ++result;
          }
        }
      }
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_uart.c",
        165,
        "get_read_address_info",
        21,
        207,
        100,
        v26);
      snprintf(s, 0x800u, "get_read_address_info error, chain_id = %d\n", a1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v26, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_uart.c",
        165,
        "read_uart_data_in_fpga",
        22,
        285,
        100,
        v26);
      result = 0;
      break;
  }
  return result;
}
