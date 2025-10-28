int flush_scanner_data()
{
  dword_3B5130 = 0;
  dword_1298F0 = 255;
  memset(byte_3B5138, 0, sizeof(byte_3B5138));
  return uart_flush(3);
}
