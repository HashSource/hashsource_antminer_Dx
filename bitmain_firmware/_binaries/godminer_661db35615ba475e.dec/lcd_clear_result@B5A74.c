int lcd_clear_result()
{
  if ( pthread_mutex_lock(&stru_195C30) )
    return sub_B2B90();
  if ( dword_190548 > 0 )
    lcd_clear(dword_190548);
  return pthread_mutex_unlock(&stru_195C30);
}
