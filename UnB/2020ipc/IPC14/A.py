k, r = map(int, input().split())
i = 0
for i in range(1,10):
    cal = (k*i)%10
    if cal == r or cal == 0:
        break

print(i)