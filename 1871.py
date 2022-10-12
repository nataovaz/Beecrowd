import re
while(1):
    A, B = map(str, input().split())
    if(A == '0' and B == '0'):
        break
    else:
        txt = ""
        res = int(A) + int(B)
        res = str(res)
        txt = re.sub(r'0',' ', res).split()
        txt = "".join(map(str, txt))
        print(txt)
