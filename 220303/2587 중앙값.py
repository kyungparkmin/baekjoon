arr = []
sum = 0
center = 0
for i in range(5):
  a = int(input())
  arr.append(a)
  arr.sort()
  sum += a

sum = sum / 5
center = arr[2]
print(int(sum))
print(center)
