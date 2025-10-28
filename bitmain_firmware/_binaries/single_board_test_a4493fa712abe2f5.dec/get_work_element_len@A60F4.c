int __fastcall get_work_element_len(int a1, int *a2, int *a3, _DWORD *a4)
{
  int v4; // r0
  int v5; // r5
  int result; // r0

  switch ( a1 )
  {
    case 0:
      *a2 = 246;
      *a3 = 4;
      *a4 = 168;
      return 1;
    case 1:
      v4 = 64;
      v5 = 4;
      goto LABEL_3;
    case 2:
      v4 = 48;
      v5 = 5;
      goto LABEL_3;
    case 6:
    case 7:
      v4 = 80;
      v5 = 4;
LABEL_3:
      *a2 = v4;
      *a3 = v5;
      *a4 = 0;
      result = 1;
      break;
    default:
      printf("%s, algo type error!\n", "get_work_element_len");
      result = 0;
      break;
  }
  return result;
}
