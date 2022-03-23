num = int(input())

arr = []

for _ in range(num):
  num = list(map(int, input().split()))
  num.sort(reverse=True)
  print(num[2])


