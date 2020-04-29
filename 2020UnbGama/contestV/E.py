while True:
    x = input()
    if x == '':
        break
    x = list(map(str, x.split()))
    for elem in x:
        e = list(map(ord, elem))
        for c in e:
            b = True
            if(not(c < 65 or c > 90 and c < 97 or c > 122)):
                b = False
                break
        if b:
            x.remove(elem)
    print(len(x))
