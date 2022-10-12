x = int(input())

vetor = []
for i in range (0, x):
    a, b, c = map(float, input().split())
    print("{:.1f}".format(((a*2)+(b*3)+(c*5))/10))

  