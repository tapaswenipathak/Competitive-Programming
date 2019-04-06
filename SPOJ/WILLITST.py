n = long(raw_input())

powerof2 = n & n - 1

if not powerof2 :
    print "TAK"
else :
    print "NIE"
