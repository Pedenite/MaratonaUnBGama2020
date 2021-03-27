a, b = map(int, input().split())
res = 0
while a <= b:
    a *= 3
    b *= 2
    res+=1

print(res)