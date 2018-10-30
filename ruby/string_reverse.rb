#!/usr/bin/env ruby

reverse = ->(str) { str.empty? ? str : "#{str[-1]}#{reverse.(str.chop)}" }

puts reverse.(ARGV[0].to_s)
