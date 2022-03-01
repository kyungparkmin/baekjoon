a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

if (a>b and a<c) or (b>a and b<c):
  print(a)
elif b>a and b<c:
  print(b)
elif c>a and c<b:
  print(c)



