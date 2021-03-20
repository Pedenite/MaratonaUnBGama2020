n, p = map(int, input().split())
x = list(map(int, input().split()))

l = r = 0
maior = 0
soma = 0
while l < len(x) and r < len(x):
    if r < l:
        r = l

    if r-l > maior and soma <= p:
        maior = r-l

    if soma > p:
        soma -= x[l]
        l += 1
    else:
        soma += x[r]
        r += 1

if r-l > maior and soma <= p:
    maior = r-l

print(maior)
