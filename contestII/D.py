N = input()
Sn = []
for n in N:
    Sn.append(int(n))
if int(N)%sum(Sn) == 0:
    print("Yes")
else:
    print("No")
