import sys

num = int(input())

min = 100
n = 7

for i in range(num):
  for _ in range(n):
    a = map(int, input().split())
    if a%2==0:
      sum += a
    if min>=a:
      min = a
  print(sum + ' ' + min)

  

    



