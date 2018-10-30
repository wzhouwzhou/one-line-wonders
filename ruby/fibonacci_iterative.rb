#!/usr/bin/env ruby
# Ruby version 2.5.1
# Calculate the fibonacci sequence iteratively by passing along fib(n-2) and fib(n-1) through each iteration of the loop.
# The resulting fibonacci number is the sum of the last iteration of the loop.
fibonacci = ->(n) { n < 2 ? n : 1.upto(n - 2).inject([0, 1]) { |last_two, i| fib = last_two.sum and [last_two[1], fib] }.sum }

# Test this by running `ruby fibonacci_iterative.rb n` where n is the index in the fibonacci sequence to calculate.
puts fibonacci.call(ARGV[0].to_i)
