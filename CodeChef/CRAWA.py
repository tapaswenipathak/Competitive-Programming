T = int (raw_input ())

while T :
	X, Y = map (long, raw_input ().split ())
	T -= 1
	neg_X = -X
	neg_Y = -Y
	if X == 0 and Y == 0 :
		print "YES"
	elif X < 0 and not (X & 1) and X <= Y and  Y <= neg_X :
		print "YES"
	elif X > 0 and X & 1 and (1 - X) <= Y and Y <= (X + 1) :
		print "YES"
	elif Y > 0 and not (Y & 1) and X <= (Y - 1) and X >= neg_Y :
		print "YES"
	elif Y < 0 and not (Y & 1) and X <= (1 - Y) and X >= Y :
		print "YES"
	else :
		print "NO"


	
