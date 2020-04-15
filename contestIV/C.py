foo = list(map(int, input().split()))
A = foo[0]
B = foo[1]
if A >= 13:
    print(B)
elif A <= 12 and A >= 6:
    print(int(B/2))
else:
    print(0)
