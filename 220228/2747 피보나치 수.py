n = int(input())
a, b = 0, 1
for i in range(n):
  a, b = b, a+b
print(a)


""" def fibonacci(n):
  if n == 0:
    return 0
  elif n == 1:
    return 1
  return fibonacci(n-1) + fibonacci(n-2)

n = int(input())

print(fibonacci(n)) """

