def triangulo(a, b, c):
    return a+b > c and a+c > b and b+c > a

def segmento(a, b, c):
    return a+b == c or a+c == b or b+c == a

line = list(map(int, input().split()))
a = line[0]
b = line[1]
c = line[2]
d = line[3]

if triangulo(a, b, c) or triangulo(a, b, d) or triangulo(a, c, d) or triangulo(b, c, d):
    print("TRIANGLE")
elif segmento(a, b, c) or segmento(a, b, d) or segmento(a, c, d) or segmento(b, c, d):
    print("SEGMENT")
else:
    print("IMPOSSIBLE")