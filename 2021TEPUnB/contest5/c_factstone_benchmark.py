def get_bits(ano):
    ano_i = 1969
    bits = 4
    while ano_i <= ano:
        bits *= 2
        ano_i += 10

    return bits

def max_num(bits):
    num = 1
    i = 1
    while i < bits:
        num <<= 1
        num += 1
        i += 1

    return num 

def max_fat(num):
    fat = 1
    i = 1
    while fat <= num:
        i += 1
        fat *= i

    return i-1

while True:
    n = int(input())
    if (n == 0):
        break

    maior = max_num(get_bits(n))
    print(max_fat(maior))
