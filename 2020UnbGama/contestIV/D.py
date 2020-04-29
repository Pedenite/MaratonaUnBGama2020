def euclides(a, b):
    r = a%b
    q = 0
    while(r != 0):
        q = a/b
        a = b
        b = r
        r = a%b
    q = a/b
    return b

foo = list(map(int, input().split()))
A = foo[0]
B = foo[1]
K = foo[2]

GCD = euclides(A, B) # GCD
div = 1
while(GCD > 0):
    if div == K:
        break
    GCD -= 1
    if A%GCD == 0 and B%GCD == 0:
        div += 1

print(GCD)

