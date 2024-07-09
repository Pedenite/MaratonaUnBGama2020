import math

LOG_INTERVAL = 5

def calcula_tempo_restante(transferidos, restante, segundos):
    if transferidos == 0:
        return None

    bytes_por_segundo = transferidos / segundos
    
    return math.ceil(restante / bytes_por_segundo)

bytes_restantes = int(input())
total_tempo = 0

print(f"Transmitindo {bytes_restantes} bytes...")

bytes_transferidos = 0

while bytes_restantes > 0:
    qtd_bytes = int(input())
    bytes_transferidos += qtd_bytes
    bytes_restantes -= qtd_bytes
    total_tempo += 1

    if total_tempo % LOG_INTERVAL == 0 and bytes_restantes > 0:
        tempo_restante = calcula_tempo_restante(bytes_transferidos, bytes_restantes, LOG_INTERVAL)
        bytes_transferidos = 0

        print("Tempo restante:", end=" ")
        
        if tempo_restante:
            print(f"{tempo_restante} segundos.")
        else:
            print("pendente...")


print(f"Tempo total: {total_tempo} segundos.")

