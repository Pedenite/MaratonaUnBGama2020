ints = list(map(int, input().split()))
A = ints[0]
B = ints[1]
X = ints[2]
if A > X or A+B < X:
    print("NO")
else:
    print("YES")