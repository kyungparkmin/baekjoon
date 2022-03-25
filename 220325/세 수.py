a, b, c = map(int, input().split())



if a<=b and a>=c or a==b==c or a>=b and a<=c:
  print(a)
elif b<=a and b>=c or a==b==c or b>=a and b>=c:
  print(b)
elif c<=a and c>=b or a==b==c or c>=a and c>=b:
  print(c)
