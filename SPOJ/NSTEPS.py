N = int(raw_input())

for i in range(N) :
    x  = int(input())
    y = int(input())
    if x % 2 == 0 and y % 2 == 0 :
	print x + y
    elif x % 2 != 0 and y % 2 != 0 :
	print x + y - 1
    else :
	print "No Number"

