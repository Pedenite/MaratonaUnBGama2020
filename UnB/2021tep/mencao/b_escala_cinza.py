s = input()
r, g, b = map(int, input().split())
res = 0

if s == "min":
    res = min(r, g, b)
elif s == "max":
    res = max(r, g, b)
elif s == "mean":
    res = int((r + g + b)/3)
else:
    res = int(0.30*r + 0.59*g + 0.11*b)

print(res)