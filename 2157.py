from audioop import reverse


n = int(input())
while (n!=0):
    A,B = map(int, input().split())
    v = []
    txt = ""
    for x in range(A, B+1):
        v.append(x)
    

    txt = "".join(map(str, v))
    
    txt2 = txt[::-1]
    txt+=txt2
    print(txt)

    n-=1