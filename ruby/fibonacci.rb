#!/usr/bin/env ruby
fibonacci = ->(n) { n < 2 ? n : fibonacci.(n - 1) + fibonacci.(n - 2) }

# Test this by running `ruby fibonacci.rb n` where n is the index in the fibonacci sequence to calculate.
puts fibonacci.call(ARGV[0].to_i)
