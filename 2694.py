import re

n = int(input())
while n != 0:
    txt = input()
    txt = re.sub(r'a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|x|y|z|w', ' ', txt.lower()).split()
    txt = [int(x) for x in txt]
    print(txt)
    r = txt[0] + txt[1] + txt[2]

    print(r)
    n -= 1
