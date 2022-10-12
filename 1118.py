import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')


op = 0

vec = [-1,-1]

while op != 2:
    nota1 = float(input())
    nota2 = float(input())

    if(not(nota1 >= 0 and nota1 <= 10)):
        print("Nota inválida")
    else:
        vec[0] = nota1
        # print(nota1)
    if(not(nota2 >= 0 and nota2 <= 10)):
        print("Nota inválida")
    else:
        # print(nota2)
        vec[1] = nota2
        
    print(vec[0], " ", vec[1] )

    # if(vec.__len__() > 0):

    
    if((vec[0] >= 0 and vec[0] <= 10) and (vec[1] >= 0 and vec[1] <= 10)):
        # print(nota1)
        # print(nota2)
        media = (vec[0] + vec[1])/2
        print(media)
        print("novo calculo (1-sim 2-nao)")
        op = int(input())
        if(op == 2):
            break
        else:
            continue

    
    

