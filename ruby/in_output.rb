#!/usr/bin/ruby

# first way
=begin
inp = $stdin.read
puts inp
=end
=begin
fd = IO.sysopen "/dev/tty", "w"
ios = IO.new(fd, "w")
ios.puts "Zetcode"
ios.close
=end

=begin
puts "Enter the your name"
name = gets
puts "Hello #{name}"
=end

array = gets.chomp
