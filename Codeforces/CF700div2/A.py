# placeholder = list(map(int, input().split()))

def alice_bob(s):
    count = 0
    res = ""
    for c in s:
        if count&1 == 0:
            if ord(c) == 97:
                res += "b"
            else:
                res += "a"
        else:
            if ord(c) == 122:
                res += "y"
            else:
                res += "z"
        count += 1
    
    return res

t = int(input())

for i in range(t):
    print(alice_bob(input()))
