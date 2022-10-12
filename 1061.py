d1 = int(input().split()[1])

h1, m1, s1 = map(int, input().split(":"))

d2 = int(input().split()[1])
h2, m2, s2 = map(int, input().split(":"))

aux1 = s1 + m1*60 + h1*3600 + d1*24*60*60

aux2 = s2 + m2*60 + h2*3600 + d2*24*60*60
res = aux2 - aux1

dia = res//(24*60*60)
res = res%(24*60*60)

hora = res//(60*60)
res = res%(60*60)

mi = res//(60)
res = res%(60)

s = res


print(f"{dia} dia(s)")
print(f"{hora} hora(s)")
print(f"{mi} minuto(s)")
print(f"{s} segundo(s)")

