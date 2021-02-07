import sys
import time

n = int(input())

a = []

for i in range(n):
    print("?", i+1)
    sys.stdout.flush()
    a.append(int(input()))
    if i > 0:
        if i-1 == 0:
            if a[i-1] < a[i]:
                print("!", i)
                break
        elif i == n-1:
            if a[i] < a[i-1]:
                print("!", i+1)
                break
            elif a[i-1] < min(a[i-2], a[i]):
                print("!", i)
                break
        elif a[i-1] < min(a[i-2], a[i]):
            print("!", i)
            break

