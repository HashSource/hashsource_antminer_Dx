int32_t __fastcall eeprom_open(uint32_t which_chain)
{
  int32_t result; // r0
  uint32_t v3; // [sp+0h] [bp-Ch] BYREF
  __int16 v4; // [sp+4h] [bp-8h]
  char v5; // [sp+6h] [bp-6h]
  char v6; // [sp+7h] [bp-5h]

  if ( which_chain > 0xF )
    return sub_26DDC(which_chain);
  result = dword_12C11C[2 * which_chain];
  if ( !result || !dword_12C11C[2 * which_chain + 1] )
  {
    v4 = 0;
    v5 = 10;
    v3 = which_chain;
    v6 = which_chain;
    result = iic_init((int)&v3);
    if ( result >= 0 )
    {
      dword_12C11C[2 * which_chain] = result;
      dword_12C11C[2 * which_chain + 1] = 1;
    }
  }
  return result;
}
