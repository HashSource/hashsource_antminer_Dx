int lcd_clear_result()
{
  if ( pthread_mutex_lock(&stru_1A8B2C) )
    return sub_99D60();
  if ( dword_1A25E0 > 0 )
    lcd_clear(dword_1A25E0);
  return pthread_mutex_unlock(&stru_1A8B2C);
}
