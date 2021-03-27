def bachgold(n):
    l = []
    if n%2 == 0:
        l = [2] * round(n/2)
    else:
        l = [2] * round((n-3)/2)
        l += [3]
    return l

n = int(input())
ba = bachgold(n)
print(len(ba))
for i in ba:
    print(i, end=' ')
