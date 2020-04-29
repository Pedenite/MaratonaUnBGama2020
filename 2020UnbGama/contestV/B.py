X = []

while True:
    inp = input()
    if inp == '':
        break
    X.append(list(map(int, inp.split())))

for elem in X:
    print(elem[0] * 2 * elem[1])