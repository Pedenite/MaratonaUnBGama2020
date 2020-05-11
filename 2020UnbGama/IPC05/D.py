x = ''
while True:
    x = input()
    if x == '':
        break
    i = 0
    x = list(map(ord, x))
    
    for i, c in enumerate(x):
        x[i] = c-7
    
    x = "".join(map(chr, x))
    print(x)
