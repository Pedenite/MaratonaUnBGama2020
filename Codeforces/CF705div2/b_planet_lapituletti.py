def reverse(s):
    s.replace("2", "#").replace("5", "2").replace("#", "5")
    return s[::-1]

t = int(input())

valid = ['0', '1', '2', '5', '8', ':']

for _ in range(t):
    h, m = input().split()#map(int, input().split())
    s = input()#map(int, input().split(":"))
    sv = False

    while not sv:
        for c in s:
            if c in valid:
                sv = True
            else:
                sv = False
                break

        if not sv:
            if c in ['3', '4']:
                print("i give up")
