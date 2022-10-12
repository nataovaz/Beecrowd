import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

x = int(input())
y = int(input())

if(y > x):
    for i in range(x+1, y):
        if(i%5 == 2 or i%5==3):
            print(i)

elif(x > y):
    for i in range(y+1, x):
        if(i%5 == 2 or i%5==3):
            print(i)
