def factorial(n)
  if n == 1
    return 1
  else
    return (n*factorial(n - 1))
  end
end

puts "Enter a number"
num = gets.chomp
puts factorial num.to_i

