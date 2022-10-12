n = int(input())
c = 0
r = 0
s = 0
total = 0

for i in range (0, n):
    x = input().split()
    
    total += int(x[0])
    if(x[1] == "C"):
        c += int(x[0])
    if(x[1] == "S"):
        s += int(x[0])
    if(x[1] == "R"):
        r += int(x[0])
      


print(f"Total: {total} cobaias")
print(f"Total de coelhos: {c}")
print(f"Total de ratos: {r}")
print(f"Total de sapos: {s}")

print(f"Percentual de coelhos: {(c*100)/total:.2f} %")
print(f"Percentual de ratos: {(r*100)/total:.2f} %")
print(f"Percentual de sapos: {(s*100)/total:.2f} %")