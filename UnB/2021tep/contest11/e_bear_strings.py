s = input()
res = 0

while "bear" in s:
    pos_init = s.find("bear")
    pos = pos_init+3
    res += len(s)-pos

    s = s[1:]

print(res)
