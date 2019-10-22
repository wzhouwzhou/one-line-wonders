pi=lambda get_approx_pi:4 * sum(-float(k%4 - 2) / k for k in range(1, 2*val+1, 2))
val=int(input('Number of iterations'))
print(pi(val))
