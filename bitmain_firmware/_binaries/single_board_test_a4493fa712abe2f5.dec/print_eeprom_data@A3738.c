int print_eeprom_data()
{
  printf("algorithm_and_key_version:             0x%02x\n", (unsigned __int8)zhiju_eeprom_data);
  printf("zhiju_information_length:              %d\n", HIBYTE(zhiju_eeprom_data));
  printf("zhiju_information_format_version:      %d\n", (unsigned __int8)byte_3B580E);
  printf(
    "hashboard_sn:                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    (unsigned __int8)dword_3B580F,
    BYTE1(dword_3B580F),
    BYTE2(dword_3B580F),
    HIBYTE(dword_3B580F),
    (unsigned __int8)dword_3B5813,
    BYTE1(dword_3B5813),
    BYTE2(dword_3B5813),
    HIBYTE(dword_3B5813),
    (unsigned __int8)dword_3B5817,
    BYTE1(dword_3B5817),
    BYTE2(dword_3B5817),
    HIBYTE(dword_3B5817),
    (unsigned __int8)dword_3B581B,
    BYTE1(dword_3B581B),
    BYTE2(dword_3B581B),
    HIBYTE(dword_3B581B),
    (unsigned __int8)byte_3B581F);
  printf("chip_die:                              %c%c\n", (unsigned __int8)word_3B5820, HIBYTE(word_3B5820));
  printf(
    "chip_marking:                          %c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    (unsigned __int8)dword_3B5822,
    BYTE1(dword_3B5822),
    BYTE2(dword_3B5822),
    HIBYTE(dword_3B5822),
    (unsigned __int8)dword_3B5826,
    BYTE1(dword_3B5826),
    BYTE2(dword_3B5826),
    HIBYTE(dword_3B5826),
    (unsigned __int8)dword_3B582A,
    BYTE1(dword_3B582A),
    BYTE2(dword_3B582A),
    HIBYTE(dword_3B582A),
    (unsigned __int8)byte_3B582E);
  printf("chip_bin:                              %d\n", (unsigned __int8)byte_3B582F);
  printf(
    "chip_ft_program_version:               %c%c%c%c%c%c%c%c%c\n",
    (unsigned __int8)byte_3B5830[0],
    (unsigned __int8)byte_3B5831,
    (unsigned __int8)byte_3B5832,
    (unsigned __int8)byte_3B5833,
    (unsigned __int8)byte_3B5834,
    (unsigned __int8)byte_3B5835,
    (unsigned __int8)byte_3B5836,
    (unsigned __int8)byte_3B5837,
    (unsigned __int8)byte_3B5838);
  printf("asic_sensor:                           0x%02x\n", (unsigned __int8)byte_3B5839);
  printf(
    "asic_sensor_addr:                      %d, %d, %d, %d\n",
    (unsigned __int8)byte_3B583A,
    (unsigned __int8)byte_3B583B,
    (unsigned __int8)byte_3B583C,
    (unsigned __int8)byte_3B583D);
  printf("pic_sensor:                            0x%02x\n", (unsigned __int8)byte_3B583E);
  printf("pic_sensor_addr:                       0x%02x\n", (unsigned __int8)byte_3B583F);
  printf("pcb_version_v1:                        %d\n", (unsigned __int8)byte_3B5840);
  printf("pcb_version_v2:                        %d\n", (unsigned __int8)byte_3B5841);
  printf("bom_version_v1:                        %d\n", (unsigned __int8)byte_3B5842);
  printf("bom_version_v2:                        %d\n", (unsigned __int8)byte_3B5843);
  printf("chip_technology:                       %c%c\n", (unsigned __int8)byte_3B5844, (unsigned __int8)byte_3B5845);
  printf("voltage:                               %d\n", (unsigned __int16)__rev16((unsigned __int16)word_3B5846));
  printf("frequency:                             %d\n", (unsigned __int16)__rev16((unsigned __int16)word_3B5848));
  printf("nonce_rate:                            %d\n", (unsigned __int16)__rev16((unsigned __int16)word_3B584A));
  printf("pcb_temprature_in:                     %d\n", byte_3B584C);
  printf("pcb_temprature_out:                    %d\n", byte_3B584D);
  printf("test_version:                          %d\n", (unsigned __int8)byte_3B584E);
  printf("test_standard:                         %d\n", (unsigned __int8)byte_3B584F);
  printf("miner_type:                         %s\n", (const char *)&dword_3B5850);
  return j_printf("zhiju_information_crc5:                0x%02x\n", (unsigned __int8)byte_3B585D);
}
