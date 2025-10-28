int godminer_register_status_monitor()
{
  int v0; // r12
  int v1; // r1
  int v2; // r3
  int v3; // r2
  int v4; // r12
  int v5; // r1

  v0 = dword_191BD0;
  v1 = dword_191390;
  v2 = *(_DWORD *)(dword_191BD0 + 1024);
  v3 = dword_191BCC;
  *(_DWORD *)(dword_191BD0 + 4 * v2) = godminer_chip_status_monitor;
  *(_DWORD *)(v0 + 1024) = v2 + 1;
  v4 = *(_DWORD *)(v1 + 1024);
  *(_DWORD *)(v1 + 4 * v4) = godminer_heartbeat_monitor;
  *(_DWORD *)(v1 + 1024) = v4 + 1;
  v5 = *(_DWORD *)(v3 + 1024);
  *(_DWORD *)(v3 + 4 * v5) = godminer_fan_monitor;
  *(_DWORD *)(v3 + 1024) = v5 + 1;
  return v5 + 1;
}
