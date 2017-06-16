array = []
array_size = gets.chomp.to_i
for i in 0..array_size-1
    array[i] = gets.chomp.to_i
end

(0..array_size-1).reverse_each { |i| puts array[i]}

