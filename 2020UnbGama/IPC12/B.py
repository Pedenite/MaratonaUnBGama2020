from sys import exit

t, s, x = map(int, input().split())

if x < t:
    print("NO")
    exit(0)

# bark = "NO"
# for time in range(t, x+1, s):     # time limit exceeded
#     if x == time or x == time+1 and time != t:
#         bark = "YES"

elif x == t:
    print("YES")
elif (x-t)%s == 0 or (x-t)%s == 1 and x-t != 1:
    print("YES")
else:
    print("NO")
        