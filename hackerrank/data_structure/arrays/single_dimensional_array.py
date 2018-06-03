array =  ['1','2','3','4']

print(array)
' Add '

array.append('5')

' Del '

del array[1]
array.pop(2)
array.remove('3')

print(array)


brands = ["Coke", "Apple", "Google", "Microsoft", "Toyota"]
len(brands)

' Concat '
concat = [1, 2, 3]
concat += [4,5,6]
print(concat)

' Repeat '
repeat = ["a"]
repeat = repeat * 5
print(repeat)

' Slice '

fruits = ["Apple", "Banana", "Mango", "Grapes", "Orange"]
print(fruits[1:4])
print(fruits[ : 3])
print(fruits[-4:])
print(fruits[-3:-1])

' Multidimensional array'
multd = [[1,2], [3,4], [5,6], [7,8]]
print(multd[0])
print(multd[3])
print(multd[2][1])
print(multd[3][0])
