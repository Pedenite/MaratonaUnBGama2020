t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    res = 0
    i = 0
    while i < len(a):
        if (i == 0):
            i += 1
            continue

        maior = max(a[i-1], a[i])
        menor = min(a[i-1], a[i])

        if (maior/menor > 2):
            a.insert(i, menor*2)
            res += 1
            i -= 1
            
        i += 1

    print(res)
