n = int(input())
b = []

for i in range(4):
    b.append([])
    for j in range(n):
        b[i].append(input())
    if i < 3:
        input()
