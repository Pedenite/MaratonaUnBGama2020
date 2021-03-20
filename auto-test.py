from random import randrange
from os import popen
import time

count = 0
while (True):
    n = int(randrange(0, 100))
    p = int(randrange(0, 100))
    arr = [int(randrange(0,100)) for x in range(n)]
    linha1 = str(n)+' '+str(p)+'\n'
    linha2 = ' '.join(map(str, arr))
    with open('entrada.txt', 'w') as file:
        file.write(linha1)
        file.write(linha2)

    saidaC = popen('cat entrada.txt | ./a.out').read().strip()
    saidaPython = popen('cat entrada.txt | python3 e.py').read().strip()
    if saidaC != saidaPython:
        print(linha1)
        print(linha2)
        print('Saida C: '+saidaC)
        print('Saida Python: '+saidaPython)
        print('diferente no teste: '+str(count))
        break
    count += 1
    time.sleep(0.1)