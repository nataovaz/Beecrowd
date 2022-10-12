
cont = 0 
m = 0
vetor = []

for i in range (0, 6):
    x = float(input())
    if(x > 0):
        cont += 1
        vetor.append(x)
        
for i in (vetor):
    m = m + i



print(f"{cont} valores positivos")
print("{:.1fm/cont}".format(m/cont))