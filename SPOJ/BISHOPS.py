import sys

for num in sys.stdin.readlines() :
    x = int(num)
    if n == 1 :
	print 1
    else :
	print 2 * (num - 1)
