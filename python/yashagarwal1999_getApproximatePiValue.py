def get_approx_pi(val):
    return 4 * sum(-float(k%4 - 2) / k for k in range(1, 2*val+1, 2))
    
print(get_approx_pi(2000))
