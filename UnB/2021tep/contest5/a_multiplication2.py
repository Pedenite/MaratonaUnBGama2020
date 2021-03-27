n = int(input())
a = list(map(int, input().split()))
mult = 1
over = False

for elem in a:
    if elem != 0:
        if not over:
            mult *= elem
    else:
        mult = 0
        break

    if mult > 1000000000000000000:
        over = True
        mult = -1

if over and mult != 0:
    mult = -1
print(mult)
