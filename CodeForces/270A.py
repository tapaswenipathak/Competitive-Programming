t = int (raw_input ())

for i in range (t) :
	a = int (raw_input ())
	if not (360 % (180 - a)) :
		print "YES"
	else :
		print "NO"
