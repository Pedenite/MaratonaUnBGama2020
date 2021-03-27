def gcd(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r

    return a

n = int(input())
for _ in range(n):
    m = list(map(int, input().split()))
    mdc = 0
    for i in range(len(m)):
        for j in range(i+1, len(m)):
            tmp = gcd(m[i], m[j])
            mdc = max(tmp, mdc)
    
    print(mdc)
