s = input()
n = int(s.strip().split("=")[1])

qtd1 = qtd2 = 0
for c in s:
    if c == '+':
        qtd1 += 1
    elif c == '-':
        qtd2 += 1

val = [n] + [1]*qtd + [1]*qtd2
if qtd1-qtd2 <= -n:
    print("Impossible")
else:
    print("Possible")

