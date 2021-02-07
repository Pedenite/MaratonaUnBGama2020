def choose_enemy(ap, hp):
    position = 0
    strongest = 0
    life = 0
    for i in range(len(ap)):
        if ap[i] > strongest:
            strongest = ap[i]
            position = i
            life = hp[i]
        elif ap[i] == strongest:
            if hp[i] > life:
                strongest = ap[i]
                position = i
                life = hp[i]

    del ap[position]
    del hp[position]
    ap.append(strongest)
    hp.append(life)

t = int(input())

for i in range(t):
    A, B, n = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    choose_enemy(a, b)

    while b[n-1] > 0 and B > 0: 
        for j in range(n):
            B -= a[j]
            b[j] -= A

    if b[n-1] > 0:
        print("NO")
    else:
        print("YES")


