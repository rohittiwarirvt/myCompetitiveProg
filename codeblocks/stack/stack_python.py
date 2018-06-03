#python program for implementatoin of stack
#import maxsize from sys module
#Used to retur -infinity when the stack is empty
from sys import maxsize

# Functoin to create a stack.It initializes the stack to 0
def createStack():
  stack = []
  return stack

# Function ot add an item to stack. It increases size of stack by 1
def push(stack, item):
  stack.append(item)
  print("pushed " + str(item) + " on stack")

#Functoin to return and item from stack. It decreases size by 1
def pop(stack):
  if (isEmptyStack(stack)):
    return str(-maxsize -1) # returns minus infinity
  return stack.pop()

def isEmptyStack(stack):
  return len(stack) == 0
# main program for rungin our stack fun
stack  = createStack()
push(stack, 10)
push(stack, 20)
push(stack, 30)
push(stack, 40)

print(str(pop(stack)) + " popped from stack")
