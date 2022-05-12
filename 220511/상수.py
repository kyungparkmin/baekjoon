a, b, = map(str, input().split())

a1 = ''
b1 = ''

for i in a:
  a1 = i + a1

for i in b:
  b1 = i + b1

if int(a1)<int(b1):
  print(b1)
else:
  print(a1)
