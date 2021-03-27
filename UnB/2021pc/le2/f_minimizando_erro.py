n, k1, k2 = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
sum = 0

c = [abs(a[i]-b[i]) for i in range(n)]
k = k1 + k2
for i in range(k):
    index = c.index(max(c))
    c[index] -= 1

for i in range(n):
    sum += c[i] * c[i]

print(sum)
