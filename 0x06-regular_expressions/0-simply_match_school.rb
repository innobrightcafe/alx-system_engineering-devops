#!/usr/bin/env ruby
puts ARGV[0].scan(/127.0.0.[0-9]/).join
input = ARGV[0]
regex = /School/

result = input.match?(regex)

puts result