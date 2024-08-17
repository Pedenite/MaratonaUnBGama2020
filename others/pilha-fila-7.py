class Stack:
    def __init__(self):
        self.items = []
    
    def isEmpty(self):
        return self.items == []
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        if not self.isEmpty(): 
          return self.items.pop()
        else:
          return None
    
    def size(self):
        return len(self.items)


def organizar_roupas(entradas):
    pilha_roupas = Stack()
    total_tempo = 0

    for entrada in entradas:
        partes = entrada.split()

        # Verifica se há pelo menos 3 partes (tipo, cor, tempo)
        if len(partes) == 3:
            tipo = partes[0]
            cor = partes[1]
            tempo = int(partes[2])
            
            pilha_roupas.push((tipo, cor))
            total_tempo += tempo
    
    pilha_inicial = pilha_roupas.size()

    # Imprimir roupas na gaveta na ordem de saída da pilha
    while not pilha_roupas.isEmpty():
        roupa = pilha_roupas.pop()
        tipo, cor = roupa
        print(f"Tipo: {tipo}, Cor: {cor}")
    
    # Imprimir total de roupas
    print(f"Total de roupas: {pilha_inicial}")
    
    # Imprimir tempo total gasto
    print(f"Total de tempo: {total_tempo}")

# Leitura da entrada
if __name__ == "__main__":
    entradas = []
    num_entradas = int(input().strip())

    for _ in range(num_entradas):
        entrada = input().strip()
        entradas.append(entrada)
    
    # Chamada da função para organizar as roupas
    organizar_roupas(entradas)