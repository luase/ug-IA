from itertools import permutations

perm = permutations([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

for i in list(perm):
    f = i[0]
    o = i[1]
    r = i[2]
    t = i[3]
    y = i[4]
    e = i[5]
    n = i[6]
    s = i[7]
    ii = i[8]
    x = i[9]

    forty = (f*10000) + (o*1000) + (r*100) + (t*10) + (y)
    sixty = (s*10000) + (ii*1000) + (x*100) + (t*10) + (y)
    ten = (t*100) + (e*10) + (n)

    if (sixty == (forty + 2*ten)):
        print("forty:", forty)
        print("sixty:", sixty)
        print("ten:", ten)
