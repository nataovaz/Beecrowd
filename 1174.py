import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

chave = []
valor = []

tam = 0

for i in range (0, 100):
    x = int(input())
    if(x <= 10):
        chave.append(i)
        valor.append(x)
        tam+=1


for i in valor:

    if(chave[i] == tam):
        print(f"A[{chave[i]}] = {valor[i]}", end="")

    if(valor[i] <= 10):
        print(f"A[{chave[i]}] = {valor[i]}")
        
