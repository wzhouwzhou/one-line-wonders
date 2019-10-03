is_prime = ->(x) { return false if x < 2
(2...x).none? { |factor| x % factor == 0} }

# Test this by running `ruby is_prime.rb x` where x is the number to evaluate
puts is_prime.call(ARGV[0].to_i)