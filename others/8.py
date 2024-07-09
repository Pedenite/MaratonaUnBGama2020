n = int(input())

for _ in range(n):
    s = input()
    res = remove = 0
    sequence_started = False
    
    for c in s:
        if c == "1":
            sequence_started = True
            res += remove
            remove = 0
        elif c == "0" and sequence_started:
            remove += 1
    
    print(res)