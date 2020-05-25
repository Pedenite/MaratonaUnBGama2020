k = int(input())

even = k%2 == 0
ans = k >> 1

if even:
    ans **= 2
else:
    ans *= (ans+1)

print(ans)