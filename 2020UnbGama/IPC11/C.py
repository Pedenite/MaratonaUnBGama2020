line = list(map(int, input().split()))

n = line[0]
m = line[1]
a = line[2]

cov_n = 0
i_n = 0
cov_m = 0
i_m = 0

while cov_n < n:
    i_n += 1
    cov_n += a

while cov_m < m:
    i_m += 1
    cov_m += a

print(i_n+i_m)
