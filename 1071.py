x = int(input())
y = int(input())

cont = 0
if(x == y):
    cont = 0

if(x > y):
    for i in range (x-1, y, -1):
        if(i%2 != 0):
            cont+= i
else:
    for i in range (x+1, y, +1):
        if(i%2 != 0):
            cont+= i

print(cont)

