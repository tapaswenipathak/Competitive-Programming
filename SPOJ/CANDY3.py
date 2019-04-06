import sys
T = long(raw_input())

for i in range(T) :
    print
    N = long(raw_input())
    if N == 0 :
	print "NO"
	continue;
    total, candy_i = 0, 0
    for j in range(N) :
	candy_i = long(raw_input())
	total = total + candy_i
    if total % N == 0 :
	print "YES"
    else :
	print "NO"
sys.exit(0)
