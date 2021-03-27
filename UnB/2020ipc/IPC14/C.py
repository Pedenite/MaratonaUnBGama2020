mi = list(map(int, input().split()))
wi = list(map(int, input().split()))
h = list(map(int, input().split()))
score = 0

for i, m in enumerate(mi):
    x = (i+1)*500
    w = wi[i]
    score += max((0.3*x), ((1 - m/250)*x - 50*w))

score += 100*h[0]
score -= 50*h[1]

print(int(score))