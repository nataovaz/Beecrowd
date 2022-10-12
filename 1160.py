import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

t = int(input())

for i in range (0, t):
    entrada = input().split()

    pa = int(entrada[0])
    pb = int(entrada[1])
    g1 = float(entrada[2])/100
    g2 = float(entrada[3])/100
    ano = 0
    while True:
        pa += int(pa * g1)
        pb += int(pb * g2)
        ano += 1

        if pa > pb:
            break
        if ano > 100:
            break
    if ano <= 100:
        print(f"{ano} anos.")
    else:
        print("Mais de 1 seculo.")