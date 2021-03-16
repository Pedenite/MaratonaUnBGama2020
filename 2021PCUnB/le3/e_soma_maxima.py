def busca_binaria(x, query):
    l = 0
    r = len(x)-1
    mid = 0
    while l <= r:
        mid = int((r+l)/2)
        if x[mid] == query:
            return mid
        elif x[mid] < query:
            l = mid+1
        else:
            r = mid-1

    if x[mid] > query:
        return mid-1
    
    return mid

n, p = map(int, input().split())
x = list(map(int, input().split()))

for i in range(1, len(x)):
    x[i] += x[i-1]

index = busca_binaria(x, p)
if x[0] > p:
    print(0)
else:
    print(index+1)
