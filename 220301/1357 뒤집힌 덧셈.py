a, b = input().split()
a = int(a)
b = int(b)

""" reversed_str1 = "".join(reversed(a))
reversed_str2 = "".join(reversed(b))
sum = reversed_str1 + reversed_str2 """
sum = int(str(a)[::-1]) + int(str(b)[::-1])
sum1 = int(str(sum)[::-1])
print(int(sum1))
