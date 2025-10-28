int board_reset()
{
  return j_usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
}
