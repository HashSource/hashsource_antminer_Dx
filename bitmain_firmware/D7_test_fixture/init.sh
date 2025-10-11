rm /usr/bin/monitorcg
killall monitorcg single_board_test
ifconfig -a eth0 172.28.3.1 172.28.3.219
route add default gw 172.28.3.1
echo "nameserver 8.8.8.8 # eth0" > /etc/resolv.conf
echo "nameserver 172.28.3.1 # eth0" >> /etc/resolv.conf
