n = 0
counted = False

for i in range(8):
    a = input()
    if a == "BBBBBBBB":
        n += 1
    elif not counted:
        n += a.count("B")
        counted = True

print(n)
