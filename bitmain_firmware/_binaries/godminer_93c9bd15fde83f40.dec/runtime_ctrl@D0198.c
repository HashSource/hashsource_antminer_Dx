_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v2; // r5
  int v3; // r3

  switch ( a1 )
  {
    case 1:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_171F28, 0x310u);
      break;
    case 2:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_17D120, 0x310u);
      break;
    case 3:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_17D430, 0x310u);
      break;
    case 4:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_172548, 0x310u);
      break;
    case 5:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_175E20, 0x310u);
      break;
    case 6:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_172238, 0x310u);
      break;
    case 7:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_17EB98, 0x310u);
      break;
    case 8:
      dword_1A28F4 = -1621098496;
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_1A25F0, 0x310u);
      break;
    case 9:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_17E888, 0x310u);
      break;
    default:
      v2 = calloc(1u, 0x310u);
      memcpy(v2, off_175B10, 0x310u);
      break;
  }
  pthread_mutex_lock(&stru_1A9B48);
  v3 = dword_1A9B60;
  v2[58] = a1;
  v2[33] = v3;
  dword_1A9B60 = v3 + 1;
  *((_DWORD *)&stru_1A9B48 + v3 + 7) = v2;
  pthread_mutex_unlock(&stru_1A9B48);
  return v2;
}
