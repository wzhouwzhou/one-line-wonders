#!/usr/bin/env ruby
# Ruby version 2.5.1
estimate_e = ->(trials) { trials.times.map {1.0/trials.times.map {trials.times.map {rand(trials)==0}.count(true)==0}.count(true)}.sum }

# Test this by running `ruby estimate_e_stochastic.rb` 
puts estimate_e.call(100)
