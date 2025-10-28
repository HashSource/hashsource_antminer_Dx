int __fastcall get_hardware_infor(_BYTE *a1)
{
  char v2; // r3
  char v3; // r3
  char v5; // [sp+4h] [bp-8h] BYREF
  char v6; // [sp+5h] [bp-7h]
  char v7; // [sp+6h] [bp-6h]

  v5 = a1[112];
  v6 = 0;
  v7 = 0;
  byte_3B5840 = strtol(&v5, 0, 10);
  printf("pcb_version_v1 = %d\n", (unsigned __int8)byte_3B5840);
  v2 = a1[114];
  v5 = a1[113];
  v6 = v2;
  byte_3B5841 = strtol(&v5, 0, 10);
  printf("pcb_version_v2 = %02d\n", (unsigned __int8)byte_3B5841);
  v3 = a1[115];
  v6 = 0;
  v5 = v3;
  byte_3B5842 = strtol(&v5, 0, 10);
  printf("bom_version_v1 = %d\n", (unsigned __int8)byte_3B5842);
  v5 = a1[116];
  byte_3B5843 = strtol(&v5, 0, 10);
  return printf("bom_version_v2 = %d\n", (unsigned __int8)byte_3B5843);
}
