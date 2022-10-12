import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

x = int(input())
v = []

    

for i in range (0,x):

    if(x == 0 or x == 1):
        op = x
        v.append(int(op))
        break
    if(i == 0):
        op = 0
    if(i > 0):
        if(i == 1):
            op = 1
        else:
            op = v[i-2]+v[i-1]
    

    if(i == x):
        break
    v.append(int(op))

print(v)

