int __fastcall get_qualify_hashrate_kda(int a1, double *a2)
{
  int result; // r0
  double v5; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v5);
  if ( *(_BYTE *)(a1 + 264) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 265) != 65 )
    return 25;
  if ( *(_BYTE *)(a1 + 266) != 51 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 267);
  if ( *(_BYTE *)(a1 + 267) )
    return 25;
  *a2 = v5 * 0.993095;
  return result;
}
