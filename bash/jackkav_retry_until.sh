# will attempt to retry a given command until it is successful of exceeds attempts
# e.g. to wait for a server to come up, retrying 3 times every 5 seconds
# for i in 1 2 3; do ping 10.0.0.1 && break || sleep 5; done
#       [5 attempts]     [command]       [1 second retry interval]
for i in 1 2 3 4 5; do command && break || sleep 1; done
