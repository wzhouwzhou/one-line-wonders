ifconfig | grep inet | grep broadcast | awk '{print $2}'
