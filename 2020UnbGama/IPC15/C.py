n = int(input())
fin = list(map(int, input().split()))

total_fin = sum(fin)

opt = 0

for i in range(1, 6):
    if((total_fin + i)%(n+1) != 1):
        opt+=1

print(opt)