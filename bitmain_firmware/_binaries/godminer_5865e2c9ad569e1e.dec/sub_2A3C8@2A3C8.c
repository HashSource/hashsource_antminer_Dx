// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2A3C8(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        void *ptr,
        int a15,
        double a16,
        char a17)
{
  _DWORD *v17; // r4
  _DWORD *v18; // r5
  void *v19; // r6
  _DWORD *v20; // r7
  _DWORD *v21; // r10
  double v22; // d8
  double v23; // d9
  double v24; // d10
  double *v25; // r0
  double *v26; // r0
  double *v27; // r0
  char *v28; // r0
  __int64 v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r8
  char **v33; // r11
  _DWORD *v34; // r4
  char *v35; // r0
  char *v36; // t1
  unsigned __int64 v37; // [sp-105Ch] [bp-105Ch]
  void *v38; // [sp-1050h] [bp-1050h]
  int v39; // [sp-1048h] [bp-1048h]
  double v40; // [sp-1044h] [bp-1044h]
  char v41; // [sp-103Ch] [bp-103Ch] BYREF

  sub_12F00C((__int64)(v22 * v24));
  v25 = json_real();
  json_object_set_new(v18, "rate_avg", v25);
  sub_12F00C((__int64)(v23 * v24));
  v26 = json_real();
  json_object_set_new(v18, "rate_30m", v26);
  sub_12F00C((__int64)(v40 * 100.0));
  v27 = json_real();
  json_object_set_new(v18, "rate_ideal", v27);
  v28 = BUFX_strdup(&v41);
  json_object_set_new(v18, "rate_unit", v28);
  v29 = v37;
  if ( *v17 == 9 )
    LODWORD(v29) = sub_12F324(v37, 0x3E8u);
  v30 = json_integer(v29);
  json_object_set_new(v18, "hw_all", v30);
  v31 = json_integer(*(__int64 *)&dword_1740B8);
  json_object_set_new(v18, "bestshare", v31);
  v32 = json_array();
  if ( v32 && off_172374 )
  {
    v33 = (char **)&off_172374;
    do
    {
      v34 = json_object();
      v35 = BUFX_strdup(*v33);
      json_object_set_new(v34, "type", v35);
      ((void (__fastcall *)(_DWORD *, char **))v33[1])(v34, v33);
      json_array_append_new(v32, v34);
      v36 = v33[6];
      v33 += 6;
    }
    while ( v36 );
  }
  json_object_set_new(v18, "status", v32);
  json_array_append_new(v21, v18);
  json_object_set_new(v20, "SUMMARY", v21);
  if ( v39 > 0 )
  {
    free(v19);
    free(v38);
  }
  __asm { POP             {R4-R11,PC} }
}
