s = input()
res = ""
teen = False
separator = True
sl = []
if len(s) == 1:
    sl.append('0')
for elem in s:
    sl.append(elem)

if sl[1] == '0':
    separator = False

if sl[0] == '1':
    teen = True
    separator = False
elif sl[0] == '2':
    res = "twenty"
elif sl[0] == '3':
    res = "thirty"
elif sl[0] == '4':
    res = "forty"
elif sl[0] == '5':
    res = "fifty"
elif sl[0] == '6':
    res = "sixty"
elif sl[0] == '7':
    res = "seventy"
elif sl[0] == '8':
    res = "eighty"
elif sl[0] == '9':
    res = "ninety"
else:
    separator = False

if separator:
    res += '-'

if teen:
    if sl[1] == '1':
        res = "eleven"
    elif sl[1] == '2':
        res = "twelve"
    elif sl[1] == '3':
        res = "thirteen"
    elif sl[1] == '4':
        res = "fourteen"
    elif sl[1] == '5':
        res = "fifteen"
    elif sl[1] == '6':
        res = "sixteen"
    elif sl[1] == '7':
        res = "seventeen"
    elif sl[1] == '8':
        res = "eighteen"
    elif sl[1] == '9':
        res = "nineteen"
    else:
        res = "ten"
else:
    if sl[1] == '1':
        res += "one"
    elif sl[1] == '2':
        res += "two"
    elif sl[1] == '3':
        res += "three"
    elif sl[1] == '4':
        res += "four"
    elif sl[1] == '5':
        res += "five"
    elif sl[1] == '6':
        res += "six"
    elif sl[1] == '7':
        res += "seven"
    elif sl[1] == '8':
        res += "eight"
    elif sl[1] == '9':
        res += "nine"
    elif sl[1] == '0' and sl[0] == '0':
        res = "zero"

print(res)