#!/usr/bin/env ruby
# Ruby Version 2.5.1

reverse = ->(str) { str.empty? ? str : "#{str[-1]}#{reverse.(str.chop)}" }

puts reverse.(ARGV[0].to_s)
