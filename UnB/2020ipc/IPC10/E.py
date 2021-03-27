line = list(map(int, input().split()))
n = line[0]
k = line[1]

a = list(map(int, input().split()))

res = -1

for i, elem in enumerate(a):
    if elem < 8:
        k -= elem
    else:
        if i < n-1:
            a[i+1] += elem-8
        k -= 8
    
    if k <= 0:
        res = i+1
        break

print(res)
     