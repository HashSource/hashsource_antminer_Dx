int __fastcall sub_828CC(int a1)
{
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1810h] BYREF
  char v3[4112]; // [sp+810h] [bp-1010h] BYREF

  switch ( a1 )
  {
    case 0:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 496)) & 0x3FF;
      break;
    case 1:
      result = *(_DWORD *)(dword_3B52A4 + 496) & 0x3FF;
      break;
    case 2:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 500)) & 0x3FF;
      break;
    case 3:
      result = *(_DWORD *)(dword_3B52A4 + 500) & 0x3FF;
      break;
    case 4:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 504)) & 0x3FF;
      break;
    case 5:
      result = *(_DWORD *)(dword_3B52A4 + 504) & 0x3FF;
      break;
    case 6:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 508)) & 0x3FF;
      break;
    case 7:
      result = *(_DWORD *)(dword_3B52A4 + 508) & 0x3FF;
      break;
    case 8:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 512)) & 0x3FF;
      break;
    case 9:
      result = *(_DWORD *)(dword_3B52A4 + 512) & 0x3FF;
      break;
    case 10:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 516)) & 0x3FF;
      break;
    case 11:
      result = *(_DWORD *)(dword_3B52A4 + 516) & 0x3FF;
      break;
    case 12:
      result = HIWORD(*(_DWORD *)(dword_3B52A4 + 520)) & 0x3FF;
      break;
    case 13:
      result = *(_DWORD *)(dword_3B52A4 + 520) & 0x3FF;
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
        82,
        "check_how_many_uart_data_in_fpga",
        32,
        273,
        100,
        v3);
      result = 0;
      break;
  }
  return result;
}
