unsigned int __fastcall sub_8258C(int a1, int a2, unsigned int a3)
{
  unsigned int result; // r0
  int v6; // r0
  int v7; // r4
  unsigned int v8; // r7
  int v9; // r6
  char *v10; // r3
  int v11; // r5
  unsigned int v12; // r0
  int v13; // r6
  int v14; // r6
  int v15; // r6
  int v16; // r6
  int v17; // r6
  int v18; // r6
  int v19; // r6
  int v20; // r6
  int v21; // r5
  int v22; // r3
  unsigned int v23; // r2
  int v24; // r1
  int v25; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v27[4100]; // [sp+810h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 0:
      v6 = 528;
      v7 = 532;
      goto LABEL_5;
    case 1:
      v6 = 536;
      v7 = 540;
      goto LABEL_5;
    case 2:
      v6 = 544;
      v7 = 548;
      goto LABEL_5;
    case 3:
      v6 = 552;
      v7 = 556;
      goto LABEL_5;
    case 4:
      v6 = 560;
      v7 = 564;
      goto LABEL_5;
    case 5:
      v6 = 568;
      v7 = 572;
      goto LABEL_5;
    case 6:
      v6 = 576;
      v7 = 580;
      goto LABEL_5;
    case 7:
      v6 = 584;
      v7 = 588;
      goto LABEL_5;
    case 8:
      v6 = 592;
      v7 = 596;
      goto LABEL_5;
    case 9:
      v6 = 600;
      v7 = 604;
      goto LABEL_5;
    case 10:
      v6 = 656;
      v7 = 660;
      goto LABEL_5;
    case 11:
      v6 = 664;
      v7 = 668;
      goto LABEL_5;
    case 12:
      v6 = 672;
      v7 = 676;
      goto LABEL_5;
    case 13:
      v6 = 680;
      v7 = 684;
LABEL_5:
      v8 = a3 >> 2;
      v9 = dword_3B52A4;
      *(_DWORD *)(dword_3B52A4 + v6) = a3 & 0x3FF | 0x80000000;
      if ( a3 >> 2 )
      {
        if ( v8 <= 8 )
        {
          v12 = 0;
        }
        else
        {
          v10 = (char *)(a2 + 43);
          v11 = 0;
          v12 = ((v8 - 9) & 0xFFFFFFF8) + 8;
          do
          {
            v13 = *(_DWORD *)(v9 + v7);
            v11 += 8;
            __pld(v10);
            v10 += 32;
            *(v10 - 72) = v13;
            *(v10 - 75) = HIBYTE(v13);
            *(v10 - 74) = BYTE2(v13);
            *(v10 - 73) = BYTE1(v13);
            v14 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 68) = v14;
            *(v10 - 71) = HIBYTE(v14);
            *(v10 - 70) = BYTE2(v14);
            *(v10 - 69) = BYTE1(v14);
            v15 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 64) = v15;
            *(v10 - 67) = HIBYTE(v15);
            *(v10 - 66) = BYTE2(v15);
            *(v10 - 65) = BYTE1(v15);
            v16 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 60) = v16;
            *(v10 - 63) = HIBYTE(v16);
            *(v10 - 62) = BYTE2(v16);
            *(v10 - 61) = BYTE1(v16);
            v17 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 56) = v17;
            *(v10 - 59) = HIBYTE(v17);
            *(v10 - 58) = BYTE2(v17);
            *(v10 - 57) = BYTE1(v17);
            v18 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 55) = HIBYTE(v18);
            *(v10 - 54) = BYTE2(v18);
            *(v10 - 53) = BYTE1(v18);
            *(v10 - 52) = v18;
            v19 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 48) = v19;
            *(v10 - 51) = HIBYTE(v19);
            *(v10 - 50) = BYTE2(v19);
            *(v10 - 49) = BYTE1(v19);
            v20 = *(_DWORD *)(dword_3B52A4 + v7);
            *(v10 - 44) = v20;
            *(v10 - 47) = HIBYTE(v20);
            *(v10 - 46) = BYTE2(v20);
            *(v10 - 45) = BYTE1(v20);
            v9 = dword_3B52A4;
          }
          while ( v11 != v12 );
        }
        v21 = a2 + 4 * v12;
        while ( 1 )
        {
          v22 = *(_DWORD *)(v9 + v7);
          ++v12;
          v21 += 4;
          *(_BYTE *)(v21 - 1) = v22;
          *(_BYTE *)(v21 - 4) = HIBYTE(v22);
          *(_BYTE *)(v21 - 3) = BYTE2(v22);
          *(_BYTE *)(v21 - 2) = BYTE1(v22);
          if ( v8 <= v12 )
            break;
          v9 = dword_3B52A4;
        }
      }
      result = a3 & 0xFFFFFFFC;
      v23 = a3 & 3;
      if ( v23 )
      {
        v24 = a2 + 4 * v8;
        v25 = *(_DWORD *)(dword_3B52A4 + v7);
        if ( v23 == 2 )
        {
          *(_BYTE *)(a2 + 4 * v8) = HIBYTE(v25);
          *(_BYTE *)(v24 + 1) = BYTE2(v25);
          result += 2;
        }
        else
        {
          *(_BYTE *)(a2 + 4 * v8) = HIBYTE(v25);
          if ( v23 == 3 )
          {
            *(_BYTE *)(v24 + 1) = BYTE2(v25);
            *(_BYTE *)(v24 + 2) = BYTE1(v25);
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
      logfmt_raw(v27, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
        82,
        "get_read_address_info",
        21,
        207,
        100,
        v27);
      snprintf(s, 0x800u, "get_read_address_info error, chain_id = %d\n", a1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v27, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
        82,
        "read_uart_data_in_fpga",
        22,
        285,
        100,
        v27);
      result = 0;
      break;
  }
  return result;
}
