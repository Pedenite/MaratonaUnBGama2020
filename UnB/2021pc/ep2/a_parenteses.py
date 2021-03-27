s = input()

res = 0

for c in s:
    if c == "(":
        res += 1
    elif c == ")":
        res -= 1
    
    if res < 0:
        break

if res == 0:
    print("sim")
else:
    print("nao")
