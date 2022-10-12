check = 0
while True:
    n = int(input())
    if n == 0:
        break
    if check == 1:
        print()

    l = []
    for i in range(n):
        l.append(' '.join(input().split()))
    maxi = max(len(i) for i in l)
    
    for i in range(0,len(l)):
        for j in range(0,maxi-len(l[i])):
            print('', end=' ')
        print(l[i])
    check = 1
