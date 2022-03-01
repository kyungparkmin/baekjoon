a, b = input().split()
a = int(a)
b = int(b)

sum = int(str(a)[::-1]) + int(str(b)[::-1])
sum1 = int(str(sum)[::-1])
print(int(sum1))
