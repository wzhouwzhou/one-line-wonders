#!/usr/bin/env ruby
# Ruby version 2.5.1
approximate_pi_basel = ->(iterations) {Math.sqrt((1..iterations).map{|x| 1.0/x**2}.sum*6)}

# Test this by running `ruby estimate_pi_basel.rb` 
puts approximate_pi_basel.call(10000)
