vetor = []

for i in range (0, 5):
    x = int(input())
    vetor.append(x)

par = 0
impar = 0
pos = 0
neg = 0

for i in vetor:
    if i % 2 == 0:
        par += 1
    elif i%2 != 0:
        impar += 1

    if i > 0:
        pos += 1
    elif i < 0:
        neg += 1
    


print(f"{par} valor(es) par(es)")
print(f"{impar} valor(es) impar(es)")
print(f"{pos} valor(es) positivo(s)")
print(f"{neg} valor(es) negativo(s)")

