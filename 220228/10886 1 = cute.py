n = int(input())
cute = 0
notcute = 0
for i in range(n):
  a = int(input())
  if a == 1:
    cute+=1
  elif a == 0:
    notcute+=1

if cute>notcute:
  print('Junhee is cute!')
else:
  print('Junhee is not cute!')

