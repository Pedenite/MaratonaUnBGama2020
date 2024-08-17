REVERSE = {
    '(': ')',
    '[': ']',
    '{': '}',
    ')': '(',
    ']': '[',
    '}': '{'
}

def is_open(c):
    return c in "([{"

def is_close(c):
    return c in ")]}"

def verifica_duplicatas_improved(expressao):
    pilha = []
    previous = ''
    for c in expressao:
        if is_open(c):
            pilha.append(c)
        elif is_close(c) and pilha and pilha[-1] == REVERSE[c]:
            pilha.pop()

        previous = c if is_open(c) or is_close(c) else ''
        print(pilha)

    if pilha:
        return "A expressão não possui duplicata."
    else:
        return "A expressao possui duplicata."

def verifica_duplicatas(expressao):
    pilha = []
    canditate = False
    popped_last = ""
    for char in expressao:
        if char in "([{":
            if pilha and pilha[-1] == char:
                canditate = True
            pilha.append(char)
            popped_last = ""
        elif char in ")]}":
            if not pilha:
                continue
            if pilha[-1] == REVERSE[char]:
                if canditate and char == popped_last:
                    return "A expressão possui duplicata."
                pilha.pop()
                popped_last = char

        print(pilha)

    return "A expressão não possui duplicata."

def main():
    n = int(input())
    expressoes = [input().strip() for _ in range(n)]
    resultados = [verifica_duplicatas_improved(expressao) for expressao in expressoes]
    for resultado in resultados:
        print(resultado)

main()

#{[(4-77)*21]}+((3*4)+(4*3))
