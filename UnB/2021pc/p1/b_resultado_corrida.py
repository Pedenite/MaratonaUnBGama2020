import bisect

n = int(input())
t = list(map(int, input().split()))

t_ord = t.copy()
t_ord.sort()

for i, elem in enumerate(t):
    pos = bisect.bisect_left(t_ord, elem)
    t[i] = pos+1

for elem in t:
    print(elem, end=' ')
