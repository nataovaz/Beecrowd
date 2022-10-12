
n = int(input())
while(n != 0):
    name = input()
    dificil = False

    vogais = [
    'a','e','i','o','u',
    'A','E','I','O','U'
    ]


    for i in range(len(name)-3):
        if name[i] not in vogais:
            if name[i+1] not in vogais:
                if name[i+2] not in vogais:
                    dificil = True
    
    if(dificil == False):
        print(f"{name} eh facil")
    else:
        print(f"{name} nao eh facil")

    n-=1