n = int(input())

for _ in range(n):
    s = input()
    
    caractere = quantidade = res = ""

    for c in s:
        if c.isnumeric():
            quantidade += c
        else:
            if quantidade != "":
                res += caractere * int(quantidade)
                quantidade = ""

            caractere = c
    
    res += caractere * int(quantidade)
    print(res)
