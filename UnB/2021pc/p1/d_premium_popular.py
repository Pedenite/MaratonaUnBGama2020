p, n = map(int, input().split())
psum = [p]

for i in range(n):
    opt, arg = map(int, input().split())
    if opt == 1:
        psum.append(psum[-1] + arg)
    else:
        psum = psum[:-arg]

print(psum[-1])
