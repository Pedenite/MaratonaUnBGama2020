s = input()
res = ""

for c in s:
    if c in "01":
        res += c
    elif len(res) > 0:
        res = res[:-1]

print(res)
