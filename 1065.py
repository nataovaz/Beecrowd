vetor = []
tam = int(input())
for i in range (0, tam):
    x = int(input())
    vetor.append(x)

cont = 0

for i in vetor:
    if i % 2 == 0:
        cont += 1


print(f"{cont} valores pares")

