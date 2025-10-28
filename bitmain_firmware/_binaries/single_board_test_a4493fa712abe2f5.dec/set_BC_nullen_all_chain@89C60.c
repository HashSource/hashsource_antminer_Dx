int set_BC_nullen_all_chain()
{
  pthread_mutex_lock(&bc_cmd_acc_mutex);
  return j_pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
