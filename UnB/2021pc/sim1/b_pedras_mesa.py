n = int(input())

s = input()
last = '0'
qtd = 0

for c in s:
    if c == last:
        qtd += 1

    last = c

print(qtd)
