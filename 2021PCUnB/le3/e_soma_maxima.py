def solve(x, p):
    l = r = 0
    qtd = 0
    maior = 0
    soma = 0
    while l < len(x):
        if r < l:
            r = l
        # print(soma, l, r)

        if soma > p or r >= len(x):
            soma -= x[l]
            l += 1
            qtd -= 1
            if qtd > maior:
                maior = qtd
        else:
            soma += x[r]
            qtd += 1
            r += 1

    return maior


n, p = map(int, input().split())
x = list(map(int, input().split()))

print(solve(x, p))
