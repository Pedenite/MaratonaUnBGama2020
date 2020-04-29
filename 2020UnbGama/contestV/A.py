X = []
while True:
    a = input()
    if a == '':
        break
    X.append(list(map(int, a.split())))

for elem in X:
    print(elem[1] - elem[0])
