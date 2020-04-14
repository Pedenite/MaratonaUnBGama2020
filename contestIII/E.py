N = int(input())
H = list(map(int, input().split()))
while len(H) < N:
    H.append(0)
print(H)
see = 1
for i in range(1, N):
    if(H[i] > H[i-1]):
        see+=1
print(see)

