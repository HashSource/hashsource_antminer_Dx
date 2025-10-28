int lcd_clear_result()
{
  if ( pthread_mutex_lock(&stru_3B5460) )
    return sub_81E2C();
  if ( dword_12978C > 0 )
    lcd_clear(dword_12978C);
  return j_pthread_mutex_unlock(&stru_3B5460);
}
