def ugly_number(n):
    if n == 1:
        return True

    while n%2 == 0 and n != 1:
        n /= 2
    while n%3 == 0 and n != 1:
        n /= 3
    while n%5 == 0 and n != 1:
        n /= 5

    if n == 1:
        return True
    else:
        return False

n = 1
for i in range(1,1500):
    # print(i)
    n += 1
    while not ugly_number(n): # 20 min running...
        n += 1

print(f"The 1500'th ugly number is {n}.")
