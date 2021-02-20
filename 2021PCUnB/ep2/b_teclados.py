t1 = input()
t2 = input()
n = int(input())

for i in range(n):
    s = input()
    res = ""
    for c in s:
        for j, t in enumerate(t1):
            if c == t:
                c = c.replace(t, t2[j])
                break
            elif c == t.upper():
                c = c.replace(t.upper(), t2[j].upper())
                break

        res += c
    
    print(res)
